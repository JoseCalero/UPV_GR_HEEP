// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness___024root.h"

extern const VlUnpacked<CData/*3:0*/, 256> Vtestharness__ConstPool__TABLE_h049524df_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtestharness__ConstPool__TABLE_hdd764733_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtestharness__ConstPool__TABLE_h12ba9870_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtestharness__ConstPool__TABLE_hfa915d67_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vtestharness__ConstPool__TABLE_he394c041_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vtestharness__ConstPool__TABLE_h594ddbf7_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtestharness__ConstPool__TABLE_h68fda04f_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vtestharness__ConstPool__TABLE_h3a98c571_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtestharness__ConstPool__TABLE_h2f32a375_0;

VL_INLINE_OPT void Vtestharness___024root___ico_comb__TOP__0(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___ico_comb__TOP__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx20;
    __Vtableidx20 = 0;
    CData/*7:0*/ __Vtableidx22;
    __Vtableidx22 = 0;
    // Body
    __Vtableidx20 = ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dmi_clear) 
                       << 7U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_isolate_ack_q) 
                                 << 6U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_clear_ack_q) 
                                             << 5U) 
                                            | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack) 
                                                << 4U) 
                                               | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_state_q))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_state_d 
        = Vtestharness__ConstPool__TABLE_h049524df_0
        [__Vtableidx20];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_req 
        = Vtestharness__ConstPool__TABLE_hdd764733_0
        [__Vtableidx20];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_isolate_out 
        = Vtestharness__ConstPool__TABLE_h12ba9870_0
        [__Vtableidx20];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_clear_out 
        = Vtestharness__ConstPool__TABLE_hfa915d67_0
        [__Vtableidx20];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_clear_seq_phase 
        = Vtestharness__ConstPool__TABLE_he394c041_0
        [__Vtableidx20];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_clear_req 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_clear_out) 
           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_clear_out));
    __Vtableidx22 = (((0x80U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q) 
                                << 6U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_clear_seq_phase) 
                                            << 5U) 
                                           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_req) 
                                              << 4U))) 
                     | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_q) 
                         << 2U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__state_q)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__state_d 
        = Vtestharness__ConstPool__TABLE_h594ddbf7_0
        [__Vtableidx22];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__req_src_d 
        = Vtestharness__ConstPool__TABLE_h68fda04f_0
        [__Vtableidx22];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_d 
        = Vtestharness__ConstPool__TABLE_h3a98c571_0
        [__Vtableidx22];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack 
        = Vtestharness__ConstPool__TABLE_h2f32a375_0
        [__Vtableidx22];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dst_clear_pending_o 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_isolate_out) 
           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_isolate_out));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__ack_dst_d 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__ack_dst_q;
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_clear_req) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__ack_dst_d = 0U;
    } else if (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_valid) 
                & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dst_clear_pending_o)))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__ack_dst_d 
            = (1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__ack_dst_q)));
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dmi_resp_valid 
        = ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dst_clear_pending_o)) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_valid));
}

VL_INLINE_OPT void Vtestharness___024root___ico_comb__TOP__1(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___ico_comb__TOP__1\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    CData/*7:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    // Body
    __Vtableidx8 = ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dmi_clear) 
                      << 7U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_isolate_ack_q) 
                                << 6U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_clear_ack_q) 
                                            << 5U) 
                                           | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack) 
                                               << 4U) 
                                              | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_state_q))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_state_d 
        = Vtestharness__ConstPool__TABLE_h049524df_0
        [__Vtableidx8];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_req 
        = Vtestharness__ConstPool__TABLE_hdd764733_0
        [__Vtableidx8];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_isolate_out 
        = Vtestharness__ConstPool__TABLE_h12ba9870_0
        [__Vtableidx8];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_clear_out 
        = Vtestharness__ConstPool__TABLE_hfa915d67_0
        [__Vtableidx8];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_clear_seq_phase 
        = Vtestharness__ConstPool__TABLE_he394c041_0
        [__Vtableidx8];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_clear_req 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_clear_out) 
           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_clear_out));
    __Vtableidx10 = (((0x80U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q) 
                                << 6U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_clear_seq_phase) 
                                            << 5U) 
                                           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_req) 
                                              << 4U))) 
                     | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_q) 
                         << 2U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__state_q)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__state_d 
        = Vtestharness__ConstPool__TABLE_h594ddbf7_0
        [__Vtableidx10];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__req_src_d 
        = Vtestharness__ConstPool__TABLE_h68fda04f_0
        [__Vtableidx10];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_d 
        = Vtestharness__ConstPool__TABLE_h3a98c571_0
        [__Vtableidx10];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack 
        = Vtestharness__ConstPool__TABLE_h2f32a375_0
        [__Vtableidx10];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__src_clear_pending_o 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_isolate_out) 
           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_isolate_out));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dmi_req_ready 
        = ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__src_clear_pending_o)) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_ready));
}

void Vtestharness___024root___eval_triggers__ico(Vtestharness___024root* vlSelf);
void Vtestharness___024root___eval_ico(Vtestharness___024root* vlSelf);

bool Vtestharness___024root___eval_phase__ico(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___eval_phase__ico\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtestharness___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vtestharness___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

extern const VlUnpacked<CData/*1:0*/, 16> Vtestharness__ConstPool__TABLE_hb911355a_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtestharness__ConstPool__TABLE_h999f86a3_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtestharness__ConstPool__TABLE_hca9a5dee_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtestharness__ConstPool__TABLE_h1a874b86_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtestharness__ConstPool__TABLE_h74052724_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtestharness__ConstPool__TABLE_h3f3e016a_0;

VL_INLINE_OPT void Vtestharness___024root___act_sequent__TOP__2(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_sequent__TOP__2\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx17;
    __Vtableidx17 = 0;
    CData/*3:0*/ __Vtableidx19;
    __Vtableidx19 = 0;
    // Body
    __Vtableidx19 = (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack) 
                      << 3U) | ((4U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q) 
                                       << 1U)) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__state_q)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__state_d 
        = Vtestharness__ConstPool__TABLE_hb911355a_0
        [__Vtableidx19];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__data_valid 
        = Vtestharness__ConstPool__TABLE_h999f86a3_0
        [__Vtableidx19];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d 
        = Vtestharness__ConstPool__TABLE_hca9a5dee_0
        [__Vtableidx19];
    __Vtableidx17 = ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_q) 
                       << 5U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_isolate_ack_q) 
                                  << 4U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_clear_ack_q) 
                                            << 3U))) 
                     | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_q) 
                         << 1U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__data_valid)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_isolate_out 
        = Vtestharness__ConstPool__TABLE_h1a874b86_0
        [__Vtableidx17];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_clear_out 
        = Vtestharness__ConstPool__TABLE_h74052724_0
        [__Vtableidx17];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack 
        = Vtestharness__ConstPool__TABLE_h3f3e016a_0
        [__Vtableidx17];
}

VL_INLINE_OPT void Vtestharness___024root___act_sequent__TOP__3(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_sequent__TOP__3\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx21;
    __Vtableidx21 = 0;
    CData/*3:0*/ __Vtableidx23;
    __Vtableidx23 = 0;
    // Body
    __Vtableidx23 = (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack) 
                      << 3U) | ((4U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q) 
                                       << 1U)) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__state_q)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__state_d 
        = Vtestharness__ConstPool__TABLE_hb911355a_0
        [__Vtableidx23];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__data_valid 
        = Vtestharness__ConstPool__TABLE_h999f86a3_0
        [__Vtableidx23];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d 
        = Vtestharness__ConstPool__TABLE_hca9a5dee_0
        [__Vtableidx23];
    __Vtableidx21 = ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_q) 
                       << 5U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_isolate_ack_q) 
                                  << 4U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_clear_ack_q) 
                                            << 3U))) 
                     | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_q) 
                         << 1U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__data_valid)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_isolate_out 
        = Vtestharness__ConstPool__TABLE_h1a874b86_0
        [__Vtableidx21];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_clear_out 
        = Vtestharness__ConstPool__TABLE_h74052724_0
        [__Vtableidx21];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack 
        = Vtestharness__ConstPool__TABLE_h3f3e016a_0
        [__Vtableidx21];
}

extern const VlUnpacked<CData/*3:0*/, 128> Vtestharness__ConstPool__TABLE_h91c53a88_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtestharness__ConstPool__TABLE_h12fb7f65_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtestharness__ConstPool__TABLE_h94fae42f_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtestharness__ConstPool__TABLE_h0dca7f75_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vtestharness__ConstPool__TABLE_hd63cede0_0;

VL_INLINE_OPT void Vtestharness___024root___act_sequent__TOP__4(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_sequent__TOP__4\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx16;
    __Vtableidx16 = 0;
    CData/*7:0*/ __Vtableidx18;
    __Vtableidx18 = 0;
    // Body
    __Vtableidx16 = (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_isolate_ack_q) 
                      << 6U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_clear_ack_q) 
                                 << 5U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack) 
                                            << 4U) 
                                           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_state_q))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_state_d 
        = Vtestharness__ConstPool__TABLE_h91c53a88_0
        [__Vtableidx16];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_req 
        = Vtestharness__ConstPool__TABLE_h12fb7f65_0
        [__Vtableidx16];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_isolate_out 
        = Vtestharness__ConstPool__TABLE_h94fae42f_0
        [__Vtableidx16];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_clear_out 
        = Vtestharness__ConstPool__TABLE_h0dca7f75_0
        [__Vtableidx16];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_clear_seq_phase 
        = Vtestharness__ConstPool__TABLE_hd63cede0_0
        [__Vtableidx16];
    __Vtableidx18 = (((0x80U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q) 
                                << 6U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_clear_seq_phase) 
                                            << 5U) 
                                           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_req) 
                                              << 4U))) 
                     | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_q) 
                         << 2U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__state_q)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__state_d 
        = Vtestharness__ConstPool__TABLE_h594ddbf7_0
        [__Vtableidx18];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__req_src_d 
        = Vtestharness__ConstPool__TABLE_h68fda04f_0
        [__Vtableidx18];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_d 
        = Vtestharness__ConstPool__TABLE_h3a98c571_0
        [__Vtableidx18];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack 
        = Vtestharness__ConstPool__TABLE_h2f32a375_0
        [__Vtableidx18];
}

VL_INLINE_OPT void Vtestharness___024root___act_sequent__TOP__5(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_sequent__TOP__5\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    CData/*3:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    // Body
    __Vtableidx11 = (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack) 
                      << 3U) | ((4U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q) 
                                       << 1U)) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__state_q)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__state_d 
        = Vtestharness__ConstPool__TABLE_hb911355a_0
        [__Vtableidx11];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__data_valid 
        = Vtestharness__ConstPool__TABLE_h999f86a3_0
        [__Vtableidx11];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d 
        = Vtestharness__ConstPool__TABLE_hca9a5dee_0
        [__Vtableidx11];
    __Vtableidx9 = ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_q) 
                      << 5U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_isolate_ack_q) 
                                 << 4U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_clear_ack_q) 
                                           << 3U))) 
                    | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_q) 
                        << 1U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__data_valid)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_isolate_out 
        = Vtestharness__ConstPool__TABLE_h1a874b86_0
        [__Vtableidx9];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_clear_out 
        = Vtestharness__ConstPool__TABLE_h74052724_0
        [__Vtableidx9];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack 
        = Vtestharness__ConstPool__TABLE_h3f3e016a_0
        [__Vtableidx9];
}

VL_INLINE_OPT void Vtestharness___024root___act_sequent__TOP__6(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_sequent__TOP__6\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx13;
    __Vtableidx13 = 0;
    CData/*3:0*/ __Vtableidx15;
    __Vtableidx15 = 0;
    // Body
    __Vtableidx15 = (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack) 
                      << 3U) | ((4U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q) 
                                       << 1U)) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__state_q)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__state_d 
        = Vtestharness__ConstPool__TABLE_hb911355a_0
        [__Vtableidx15];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__data_valid 
        = Vtestharness__ConstPool__TABLE_h999f86a3_0
        [__Vtableidx15];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d 
        = Vtestharness__ConstPool__TABLE_hca9a5dee_0
        [__Vtableidx15];
    __Vtableidx13 = ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_q) 
                       << 5U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_isolate_ack_q) 
                                  << 4U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_clear_ack_q) 
                                            << 3U))) 
                     | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_q) 
                         << 1U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__data_valid)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_isolate_out 
        = Vtestharness__ConstPool__TABLE_h1a874b86_0
        [__Vtableidx13];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_clear_out 
        = Vtestharness__ConstPool__TABLE_h74052724_0
        [__Vtableidx13];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack 
        = Vtestharness__ConstPool__TABLE_h3f3e016a_0
        [__Vtableidx13];
}

VL_INLINE_OPT void Vtestharness___024root___act_sequent__TOP__7(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_sequent__TOP__7\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    CData/*7:0*/ __Vtableidx14;
    __Vtableidx14 = 0;
    // Body
    __Vtableidx12 = (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_isolate_ack_q) 
                      << 6U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_clear_ack_q) 
                                 << 5U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack) 
                                            << 4U) 
                                           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_state_q))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_state_d 
        = Vtestharness__ConstPool__TABLE_h91c53a88_0
        [__Vtableidx12];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_req 
        = Vtestharness__ConstPool__TABLE_h12fb7f65_0
        [__Vtableidx12];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_isolate_out 
        = Vtestharness__ConstPool__TABLE_h94fae42f_0
        [__Vtableidx12];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_clear_out 
        = Vtestharness__ConstPool__TABLE_h0dca7f75_0
        [__Vtableidx12];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_clear_seq_phase 
        = Vtestharness__ConstPool__TABLE_hd63cede0_0
        [__Vtableidx12];
    __Vtableidx14 = (((0x80U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q) 
                                << 6U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_clear_seq_phase) 
                                            << 5U) 
                                           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_req) 
                                              << 4U))) 
                     | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_q) 
                         << 2U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__state_q)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__state_d 
        = Vtestharness__ConstPool__TABLE_h594ddbf7_0
        [__Vtableidx14];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__req_src_d 
        = Vtestharness__ConstPool__TABLE_h68fda04f_0
        [__Vtableidx14];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_d 
        = Vtestharness__ConstPool__TABLE_h3a98c571_0
        [__Vtableidx14];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack 
        = Vtestharness__ConstPool__TABLE_h2f32a375_0
        [__Vtableidx14];
}

extern const VlUnpacked<CData/*1:0*/, 64> Vtestharness__ConstPool__TABLE_hc35f745e_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtestharness__ConstPool__TABLE_h8e607893_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtestharness__ConstPool__TABLE_h98c9ea19_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtestharness__ConstPool__TABLE_hc93130b7_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtestharness__ConstPool__TABLE_h73802910_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtestharness__ConstPool__TABLE_hd5050861_0;

VL_INLINE_OPT void Vtestharness___024root___act_sequent__TOP__10(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_sequent__TOP__10\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_valid 
        = (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__alu_en_ex) 
            | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__mult_en_ex) 
               | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_access_ex) 
                  | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__data_req_ex)))) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT____VdfgRegularize_hdfe05f4f_0_0));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_ready 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT____VdfgRegularize_hdfe05f4f_0_0) 
           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__branch_in_ex));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS;
    if ((0U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        if (((6U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__mult_operator_ex)) 
             & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__mult_en_ex))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 2U;
    } else if ((2U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 3U;
    } else if ((3U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 4U;
    } else if ((4U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_ready) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 0U;
        }
    }
    __Vtableidx4 = ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_ready) 
                      << 5U) | ((0x10U & ((~ (0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP))) 
                                          << 4U)) | 
                                ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ABComp_S) 
                                 << 3U))) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_valid) 
                                              << 2U) 
                                             | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__State_SP)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__State_SN 
        = Vtestharness__ConstPool__TABLE_hc35f745e_0
        [__Vtableidx4];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready 
        = Vtestharness__ConstPool__TABLE_h8e607893_0
        [__Vtableidx4];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S 
        = Vtestharness__ConstPool__TABLE_h98c9ea19_0
        [__Vtableidx4];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ARegEn_S 
        = Vtestharness__ConstPool__TABLE_hc93130b7_0
        [__Vtableidx4];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BRegEn_S 
        = Vtestharness__ConstPool__TABLE_h73802910_0
        [__Vtableidx4];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResRegEn_S 
        = Vtestharness__ConstPool__TABLE_hd5050861_0
        [__Vtableidx4];
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DN 
            = (0x3fU & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_shift));
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SN 
            = (1U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__alu_operator_ex) 
                     >> 1U));
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SN 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_op_a_signed;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DN = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SN 
            = (((0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result)) 
                | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__alu_operator_ex) 
                   >> 1U)) & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT____VdfgRegularize_h5469d048_0_0));
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddTmp_D = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__alu_operand_b_ex;
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DN 
            = (0x3fU & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP) 
                        - (0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP))));
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SN 
            = (1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SP));
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SN 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DN 
            = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResRegEn_S)
                ? (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ABComp_S) 
                    << 0x1fU) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                 >> 1U)) : vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP);
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SN 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SP;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddTmp_D 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP;
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DN 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BRegEn_S)
            ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S)
                ? vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result
                : (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP) 
                    << 0x1fU) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP 
                                 >> 1U))) : vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP);
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DN 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ARegEn_S)
            ? (((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT____VdfgRegularize_h5469d048_0_0)) 
                & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S))
                ? (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddTmp_D 
                   + vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D)
                : (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddTmp_D 
                   - vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D))
            : vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP);
}

VL_INLINE_OPT void Vtestharness___024root___act_sequent__TOP__11(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_sequent__TOP__11\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx20;
    __Vtableidx20 = 0;
    CData/*7:0*/ __Vtableidx22;
    __Vtableidx22 = 0;
    // Body
    __Vtableidx20 = ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dmi_clear) 
                       << 7U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_isolate_ack_q) 
                                 << 6U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_clear_ack_q) 
                                             << 5U) 
                                            | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack) 
                                                << 4U) 
                                               | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_state_q))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_state_d 
        = Vtestharness__ConstPool__TABLE_h049524df_0
        [__Vtableidx20];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_req 
        = Vtestharness__ConstPool__TABLE_hdd764733_0
        [__Vtableidx20];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_isolate_out 
        = Vtestharness__ConstPool__TABLE_h12ba9870_0
        [__Vtableidx20];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_clear_out 
        = Vtestharness__ConstPool__TABLE_hfa915d67_0
        [__Vtableidx20];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_clear_seq_phase 
        = Vtestharness__ConstPool__TABLE_he394c041_0
        [__Vtableidx20];
    __Vtableidx22 = (((0x80U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q) 
                                << 6U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_clear_seq_phase) 
                                            << 5U) 
                                           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_req) 
                                              << 4U))) 
                     | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_q) 
                         << 2U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__state_q)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__state_d 
        = Vtestharness__ConstPool__TABLE_h594ddbf7_0
        [__Vtableidx22];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__req_src_d 
        = Vtestharness__ConstPool__TABLE_h68fda04f_0
        [__Vtableidx22];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_d 
        = Vtestharness__ConstPool__TABLE_h3a98c571_0
        [__Vtableidx22];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack 
        = Vtestharness__ConstPool__TABLE_h2f32a375_0
        [__Vtableidx22];
}

VL_INLINE_OPT void Vtestharness___024root___act_sequent__TOP__12(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_sequent__TOP__12\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    CData/*7:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    // Body
    __Vtableidx8 = ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dmi_clear) 
                      << 7U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_isolate_ack_q) 
                                << 6U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_clear_ack_q) 
                                            << 5U) 
                                           | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack) 
                                               << 4U) 
                                              | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_state_q))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_state_d 
        = Vtestharness__ConstPool__TABLE_h049524df_0
        [__Vtableidx8];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_req 
        = Vtestharness__ConstPool__TABLE_hdd764733_0
        [__Vtableidx8];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_isolate_out 
        = Vtestharness__ConstPool__TABLE_h12ba9870_0
        [__Vtableidx8];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_clear_out 
        = Vtestharness__ConstPool__TABLE_hfa915d67_0
        [__Vtableidx8];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_clear_seq_phase 
        = Vtestharness__ConstPool__TABLE_he394c041_0
        [__Vtableidx8];
    __Vtableidx10 = (((0x80U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q) 
                                << 6U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_clear_seq_phase) 
                                            << 5U) 
                                           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_req) 
                                              << 4U))) 
                     | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_q) 
                         << 2U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__state_q)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__state_d 
        = Vtestharness__ConstPool__TABLE_h594ddbf7_0
        [__Vtableidx10];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__req_src_d 
        = Vtestharness__ConstPool__TABLE_h68fda04f_0
        [__Vtableidx10];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_d 
        = Vtestharness__ConstPool__TABLE_h3a98c571_0
        [__Vtableidx10];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack 
        = Vtestharness__ConstPool__TABLE_h2f32a375_0
        [__Vtableidx10];
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__1(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__1\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_clear_req 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_clear_out) 
           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_clear_out));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__src_clear_pending_o 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_isolate_out) 
           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_isolate_out));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_pop 
        = ((0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)) 
           & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__src_clear_pending_o)) 
              & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_ready)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT____Vcellinp__i_src__valid_i 
        = ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__src_clear_pending_o)) 
           & (0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_n 
        = (1U & (((0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)) 
                  & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_pop))
                  ? ((IData)(1U) + (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_q))
                  : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_q)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__req_src_d 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__req_src_q;
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_clear_req) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__req_src_d = 0U;
    } else if (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT____Vcellinp__i_src__valid_i) 
                & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_ready))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__req_src_d 
            = (1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__req_src_q)));
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__data_src_d 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__data_src_q;
    if ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_clear_req)))) {
        if (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT____Vcellinp__i_src__valid_i) 
             & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_ready))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__data_src_d 
                = (0x3ffffffffULL & ((0x43U >= (0x7fU 
                                                & ((IData)(0x22U) 
                                                   * (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_q))))
                                      ? (((QData)((IData)(
                                                          vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_q[
                                                          (((IData)(0x21U) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(0x22U) 
                                                                * (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_q)))) 
                                                           >> 5U)])) 
                                          << ((0U == 
                                               (0x1fU 
                                                & ((IData)(0x22U) 
                                                   * (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_q))))
                                               ? 0x20U
                                               : ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x22U) 
                                                      * (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_q)))))) 
                                         | (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x22U) 
                                                  * (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_q))))
                                              ? 0ULL
                                              : ((QData)((IData)(
                                                                 vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_q[
                                                                 (((IData)(0x1fU) 
                                                                   + 
                                                                   (0x7fU 
                                                                    & ((IData)(0x22U) 
                                                                       * (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_q)))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x22U) 
                                                      * (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_q)))))) 
                                            | ((QData)((IData)(
                                                               vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_q[
                                                               (3U 
                                                                & (((IData)(0x22U) 
                                                                    * (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_q)) 
                                                                   >> 5U))])) 
                                               >> (0x1fU 
                                                   & ((IData)(0x22U) 
                                                      * (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_q))))))
                                      : vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT____Vxrand___0));
        }
    }
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__2(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__2\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_clear_req 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_clear_out) 
           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_clear_out));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_isolate_req 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_isolate_out) 
           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_isolate_out));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__ack_dst_d 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__ack_dst_q;
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_clear_req) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__ack_dst_d = 0U;
    } else if (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_valid) 
                & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_isolate_req)) 
                   & (2U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q))))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__ack_dst_d 
            = (1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__ack_dst_q)));
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_req_valid 
        = ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_isolate_req)) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_valid));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_push 
        = ((2U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_req_valid));
    vlSelfRef.__VdfgRegularize_h974a35fd_0_1 = ((2U 
                                                 != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)) 
                                                & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_push));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_n 
        = (1U & ((IData)(vlSelfRef.__VdfgRegularize_h974a35fd_0_1)
                  ? ((IData)(1U) + (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_q))
                  : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_q)));
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__3(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__3\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_ready 
        = ((~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__data_misaligned) 
               | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__jr_stall))) 
           & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__load_stall)) 
              & ((~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__csr_access) 
                     & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__apu_en_ex) 
                        & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__apu_lat_ex) 
                           >> 1U)))) & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_ready))));
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__4(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__4\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_clear_req 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_clear_out) 
           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_clear_out));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dst_clear_pending_o 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_isolate_out) 
           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_isolate_out));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__ack_dst_d 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__ack_dst_q;
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_clear_req) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__ack_dst_d = 0U;
    } else if (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_valid) 
                & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dst_clear_pending_o)))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__ack_dst_d 
            = (1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__ack_dst_q)));
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dmi_resp_valid 
        = ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dst_clear_pending_o)) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_valid));
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__5(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__5\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_clear_req 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_clear_out) 
           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_clear_out));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__src_clear_pending_o 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_isolate_out) 
           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_isolate_out));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dmi_req_ready 
        = ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__src_clear_pending_o)) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_ready));
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__6(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__6\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__idx_o) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
            = (IData)((((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[0U])) 
                        << 5U) | (QData)((IData)(((0x1eU 
                                                   & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U] 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U] 
                                                        >> 5U)))))));
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
            = (((IData)((((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[1U])) 
                          << 1U) | (QData)((IData)(
                                                   (1U 
                                                    & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U] 
                                                       >> 4U)))))) 
                << 5U) | (IData)(((((QData)((IData)(
                                                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[0U])) 
                                    << 5U) | (QData)((IData)(
                                                             ((0x1eU 
                                                               & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U] 
                                                                  << 1U)) 
                                                              | (1U 
                                                                 & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U] 
                                                                    >> 5U)))))) 
                                  >> 0x20U)));
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
            = (((IData)((((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[1U])) 
                          << 1U) | (QData)((IData)(
                                                   (1U 
                                                    & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U] 
                                                       >> 4U)))))) 
                >> 0x1bU) | ((IData)(((((QData)((IData)(
                                                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[1U])) 
                                        << 1U) | (QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U] 
                                                                     >> 4U))))) 
                                      >> 0x20U)) << 5U));
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
            = vlSelfRef.__VdfgRegularize_h16038c0c_0_49[0U];
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
            = vlSelfRef.__VdfgRegularize_h16038c0c_0_49[1U];
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
            = vlSelfRef.__VdfgRegularize_h16038c0c_0_49[2U];
    }
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__8(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__8\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_n 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q;
    if (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_push) 
         & (2U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_pop) 
         & (0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_push) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_pop)) 
          & (2U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_n 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q;
    }
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__11(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__11\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT____VdfgRegularize_h2e48c744_0_0;
    testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT____VdfgRegularize_h2e48c744_0_0 = 0;
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__load_stall 
        = ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__data_req_ex) 
             & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__regfile_we_ex)) 
            | ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__wb_valid)) 
               & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu))) 
           & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_a_id) 
               | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__regfile_waddr_ex) 
                   == (0x1fU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__instr_rdata_id 
                                >> 0x14U))) & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT____VdfgRegularize_h67594e0e_0_10))) 
              | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id) 
                   == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__regfile_waddr_ex)) 
                  & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT____VdfgRegularize_h67594e0e_0_9)) 
                 | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__is_decoding) 
                    & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__data_misaligned)) 
                       & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we) 
                          & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__regfile_waddr_ex) 
                             == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_waddr_id))))))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_flush_cnt 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q;
    if (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__pc_set) 
         | ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT____VdfgRegularize_h95e0c03d_0_1)) 
            & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__hwlp_jump)))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_flush_cnt 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q;
        if (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__resp_valid) 
             & (0U < (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q)))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_flush_cnt 
                = (3U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q) 
                         - (IData)(1U)));
        }
    } else if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__hwlp_flush_resp_delayed) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_flush_cnt 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__hwlp_flush_cnt_delayed_q;
    } else if (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__resp_valid) 
                & (0U < (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q)))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_flush_cnt 
            = (3U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q) 
                     - (IData)(1U)));
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT____VdfgRegularize_h95e0c03d_0_0) 
           & ((0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)) 
              | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__resp_valid)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_cnt 
        = (3U & (((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q)) 
                  & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid))
                  ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__resp_valid)
                      ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q)
                      : ((IData)(1U) + (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q)))
                  : ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q) 
                     - (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__resp_valid))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q;
    if ((0U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        if ((3U == (3U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 0U;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = ((IData)(4U) + vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
            if (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__hwlp_jump) 
                 | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_update_pc_q))) {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                    = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__hwlp_jump)
                        ? vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__hwlp_target
                        : vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_addr_q);
            }
        } else {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 1U;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = ((IData)(2U) + vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
        }
    } else if ((1U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        if ((3U == (3U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h)))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 1U;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = ((IData)(4U) + vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
        } else {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 2U;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = ((IData)(2U) + vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
        }
    } else if ((2U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        if ((3U == (3U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 0U;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = ((IData)(4U) + vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
        } else {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 1U;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = ((IData)(2U) + vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
        }
    } else if ((3U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        if ((3U == (3U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata 
                          >> 0x10U)))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 1U;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q;
        } else {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 0U;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = ((IData)(2U) + vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
        }
    }
    testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT____VdfgRegularize_h2e48c744_0_0 
        = ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__jr_stall)) 
           & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__load_stall)) 
              & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec)) 
                 & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__is_decoding))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_valid 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_ready = 1U;
    if ((0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        if ((1U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
            if ((3U != (3U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h)))) {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_valid = 1U;
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_ready 
                    = (1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid)));
            }
        } else if ((2U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_valid 
                = (1U & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__aligner_ready_q)) 
                         | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid)));
        } else if ((3U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
            if ((3U == (3U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata 
                              >> 0x10U)))) {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_valid = 0U;
            }
        }
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__if_valid 
        = ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_if)) 
           & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid) 
              & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_ready)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__mult_dot_en 
        = ((IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT____VdfgRegularize_h2e48c744_0_0) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_dot_en));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__mult_int_en 
        = ((IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT____VdfgRegularize_h2e48c744_0_0) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_en 
        = ((IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT____VdfgRegularize_h2e48c744_0_0) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__regfile_we_id 
        = ((IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT____VdfgRegularize_h2e48c744_0_0) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_mem_we));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_id 
        = ((IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT____VdfgRegularize_h2e48c744_0_0) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__data_req_id 
        = ((IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT____VdfgRegularize_h2e48c744_0_0) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_req));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state = 0U;
    if ((0U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state 
            = ((3U == (3U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata))
                ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid) 
                   & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__if_valid))
                : ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid) 
                   & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__if_valid)));
    } else if ((1U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state 
            = ((3U == (3U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h)))
                ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid) 
                   & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__if_valid))
                : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__if_valid));
    } else if ((2U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state 
            = ((3U == (3U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata))
                ? (((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__aligner_ready_q)) 
                    | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid)) 
                   & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__if_valid))
                : (((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__aligner_ready_q)) 
                    | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid)) 
                   & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__if_valid)));
    } else if ((3U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state 
            = ((3U == (3U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata 
                             >> 0x10U))) ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid) 
                                            & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__if_valid))
                : ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid) 
                   & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__if_valid)));
    }
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__pc_set) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state 
            = ((2U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n)
                ? 3U : 0U);
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
            = (0xfffffffeU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n);
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state = 1U;
    }
    vlSelfRef.__VdfgRegularize_h16038c0c_0_77 = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid) 
                                                 & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__instr_req_int) 
                                                    & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__if_valid) 
                                                       & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_ready))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_pop 
        = ((0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)) 
           & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__pc_set)) 
              & (IData)(vlSelfRef.__VdfgRegularize_h16038c0c_0_77)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_push 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__resp_valid) 
           & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT____VdfgRegularize_h95e0c03d_0_0) 
              & ((0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)) 
                 | ((~ (IData)(vlSelfRef.__VdfgRegularize_h16038c0c_0_77)) 
                    | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__pc_set)))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_flush_but_first 
        = ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_pop)) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT____VdfgRegularize_h95e0c03d_0_2));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_n 
        = (1U & (((0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)) 
                  & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_pop))
                  ? ((IData)(1U) + (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q))
                  : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_flush 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__pc_set) 
           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT____VdfgRegularize_h95e0c03d_0_2) 
              & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_pop)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_n 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q;
    if (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_push) 
         & (2U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_pop) 
         & (0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_push) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_pop)) 
          & (2U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_n 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q;
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_n 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_q;
    if (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_push) 
         & (2U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_n 
            = (((~ (0xffffffffULL << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q), 5U)))) 
                & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_n) 
               | ((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__resp_rdata)) 
                  << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q), 5U))));
    }
    vlSelfRef.__VdfgRegularize_h495687df_0_443 = ((2U 
                                                   != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)) 
                                                  & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_push));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_n 
        = (1U & ((IData)(vlSelfRef.__VdfgRegularize_h495687df_0_443)
                  ? ((IData)(1U) + (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q))
                  : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q)));
}

VL_INLINE_OPT void Vtestharness___024root___nba_sequent__TOP__1(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_sequent__TOP__1\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__rstgen_i__DOT__i_rstgen_bypass__DOT__synch_regs_q 
        = ((IData)(vlSelfRef.rst_ni) ? (1U | (0xeU 
                                              & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__rstgen_i__DOT__i_rstgen_bypass__DOT__synch_regs_q) 
                                                 << 1U)))
            : 0U);
}

void Vtestharness___024root____Vdpiimwrap_testharness__DOT__i_uart0__DOT__uartdpi_write_TOP(QData/*63:0*/ ctx, IData/*31:0*/ data);

VL_INLINE_OPT void Vtestharness___024root___nba_sequent__TOP__2(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_sequent__TOP__2\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__testharness__DOT__i_uart0__DOT__rxcyccount;
    __Vdly__testharness__DOT__i_uart0__DOT__rxcyccount = 0;
    IData/*31:0*/ __Vdly__testharness__DOT__i_uart0__DOT__rxcount;
    __Vdly__testharness__DOT__i_uart0__DOT__rxcount = 0;
    CData/*7:0*/ __Vdly__testharness__DOT__i_uart0__DOT__rxsymbol;
    __Vdly__testharness__DOT__i_uart0__DOT__rxsymbol = 0;
    // Body
    __Vdly__testharness__DOT__i_uart0__DOT__rxcyccount 
        = vlSelfRef.testharness__DOT__i_uart0__DOT__rxcyccount;
    __Vdly__testharness__DOT__i_uart0__DOT__rxcount 
        = vlSelfRef.testharness__DOT__i_uart0__DOT__rxcount;
    __Vdly__testharness__DOT__i_uart0__DOT__rxsymbol 
        = vlSelfRef.testharness__DOT__i_uart0__DOT__rxsymbol;
    vlSelfRef.__Vdly__testharness__DOT__i_uart0__DOT__txcyccount 
        = vlSelfRef.testharness__DOT__i_uart0__DOT__txcyccount;
    __Vdly__testharness__DOT__i_uart0__DOT__rxcyccount 
        = ((IData)(1U) + vlSelfRef.testharness__DOT__i_uart0__DOT__rxcyccount);
    if (vlSelfRef.rst_ni) {
        if (vlSelfRef.testharness__DOT__i_uart0__DOT__rxactive) {
            if ((0U == vlSelfRef.testharness__DOT__i_uart0__DOT__rxcount)) {
                if ((9U == vlSelfRef.testharness__DOT__i_uart0__DOT__rxcyccount)) {
                    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_uart_tx__DOT__pad) {
                        vlSelfRef.testharness__DOT__i_uart0__DOT__rxactive = 0U;
                    } else {
                        __Vdly__testharness__DOT__i_uart0__DOT__rxcount 
                            = ((IData)(1U) + vlSelfRef.testharness__DOT__i_uart0__DOT__rxcount);
                        __Vdly__testharness__DOT__i_uart0__DOT__rxcyccount = 0U;
                    }
                }
            } else if (VL_GTES_III(32, 8U, vlSelfRef.testharness__DOT__i_uart0__DOT__rxcount)) {
                if ((0x13U == vlSelfRef.testharness__DOT__i_uart0__DOT__rxcyccount)) {
                    __Vdly__testharness__DOT__i_uart0__DOT__rxsymbol 
                        = (((~ ((IData)(1U) << (7U 
                                                & (vlSelfRef.testharness__DOT__i_uart0__DOT__rxcount 
                                                   - (IData)(1U))))) 
                            & (IData)(__Vdly__testharness__DOT__i_uart0__DOT__rxsymbol)) 
                           | (0xffU & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_uart_tx__DOT__pad) 
                                       << (7U & (vlSelfRef.testharness__DOT__i_uart0__DOT__rxcount 
                                                 - (IData)(1U))))));
                    __Vdly__testharness__DOT__i_uart0__DOT__rxcyccount = 0U;
                    __Vdly__testharness__DOT__i_uart0__DOT__rxcount 
                        = ((IData)(1U) + vlSelfRef.testharness__DOT__i_uart0__DOT__rxcount);
                }
            } else if ((0x13U == vlSelfRef.testharness__DOT__i_uart0__DOT__rxcyccount)) {
                if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_uart_tx__DOT__pad) {
                    Vtestharness___024root____Vdpiimwrap_testharness__DOT__i_uart0__DOT__uartdpi_write_TOP(vlSelfRef.testharness__DOT__i_uart0__DOT__ctx, (IData)(vlSelfRef.testharness__DOT__i_uart0__DOT__rxsymbol));
                }
                vlSelfRef.testharness__DOT__i_uart0__DOT__rxactive = 0U;
            }
        } else if (((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_uart_tx__DOT__pad)) 
                    & (IData)(vlSelfRef.testharness__DOT__i_uart0__DOT__seen_reset))) {
            __Vdly__testharness__DOT__i_uart0__DOT__rxcount = 0U;
            vlSelfRef.testharness__DOT__i_uart0__DOT__rxactive = 1U;
            __Vdly__testharness__DOT__i_uart0__DOT__rxcyccount = 0U;
        }
    } else {
        vlSelfRef.testharness__DOT__i_uart0__DOT__rxactive = 0U;
        vlSelfRef.testharness__DOT__i_uart0__DOT__seen_reset = 1U;
    }
    vlSelfRef.testharness__DOT__i_uart0__DOT__rxcyccount 
        = __Vdly__testharness__DOT__i_uart0__DOT__rxcyccount;
    vlSelfRef.testharness__DOT__i_uart0__DOT__rxcount 
        = __Vdly__testharness__DOT__i_uart0__DOT__rxcount;
    vlSelfRef.testharness__DOT__i_uart0__DOT__rxsymbol 
        = __Vdly__testharness__DOT__i_uart0__DOT__rxsymbol;
}

extern const VlUnpacked<CData/*0:0*/, 32> Vtestharness__ConstPool__TABLE_hc14a877c_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtestharness__ConstPool__TABLE_h9314a6f5_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtestharness__ConstPool__TABLE_h0d28ce70_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtestharness__ConstPool__TABLE_h17ce99fc_0;

VL_INLINE_OPT void Vtestharness___024root___nba_sequent__TOP__4(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_sequent__TOP__4\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*2:0*/ __Vdly__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q;
    __Vdly__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q = 0;
    // Body
    __Vdly__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q;
    if (vlSelfRef.jtag_trst_ni) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__ack_dst_q));
        __Vdly__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q 
            = ((6U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__req_src_q));
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__ack_dst_q));
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__req_src_q));
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__req_src_q));
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__i_sync__DOT__reg_q 
            = ((6U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__ack_dst_q));
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__idcode_q 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__idcode_d;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_d;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__state_q 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__state_d;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__state_q 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__state_d;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dr_q 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dr_d;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__state_q 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__state_d;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__error_q 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__error_d;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__data_q 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__data_d;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__address_q 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__address_d;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__state_q 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__state_d;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__state_q 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__state_d;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_state_q 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_state_d;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_state_q 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_state_d;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dtmcs_q 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dtmcs_d;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__jtag_ir_d;
        if (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__data_valid) 
             & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_q 
                = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_q;
        }
        if (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__data_valid) 
             & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_q 
                = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_q;
        }
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__tap_state_q 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__tap_state_d;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_q 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_d;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_q 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_d;
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q = 0U;
        __Vdly__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__i_sync__DOT__reg_q = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__idcode_q = 0x10001c05U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__state_q = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__state_q = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dr_q = 0ULL;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__state_q = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__error_q = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__data_q = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__address_q = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__state_q = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__state_q = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_state_q = 1U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_state_q = 1U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dtmcs_q = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q = 1U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_q = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_q = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__tap_state_q = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_q = 1U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_q = 1U;
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__bypass_q 
        = ((IData)(vlSelfRef.jtag_trst_ni) && (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__bypass_d));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__req_synced_q1 
        = ((IData)(vlSelfRef.jtag_trst_ni) && (1U & 
                                               ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q) 
                                                >> 2U)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_clear_ack_q 
        = ((IData)(vlSelfRef.jtag_trst_ni) && (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_clear_req));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_isolate_ack_q 
        = ((IData)(vlSelfRef.jtag_trst_ni) && (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dst_clear_pending_o));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_clear_ack_q 
        = ((IData)(vlSelfRef.jtag_trst_ni) && (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_clear_req));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_isolate_ack_q 
        = ((IData)(vlSelfRef.jtag_trst_ni) && (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__src_clear_pending_o));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__ack_dst_q 
        = ((IData)(vlSelfRef.jtag_trst_ni) && (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__ack_dst_q 
        = ((IData)(vlSelfRef.jtag_trst_ni) && (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__req_src_q 
        = ((1U & (~ (IData)(vlSelfRef.jtag_trst_ni))) 
           || (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__req_src_d));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__req_src_q 
        = ((IData)(vlSelfRef.jtag_trst_ni) && (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__req_src_d));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__ack_dst_q 
        = ((IData)(vlSelfRef.jtag_trst_ni) && (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__ack_dst_d));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__req_src_q 
        = ((1U & (~ (IData)(vlSelfRef.jtag_trst_ni))) 
           || (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__req_src_d));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q 
        = __Vdly__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q;
    __Vtableidx6 = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dmi_select 
        = Vtestharness__ConstPool__TABLE_hc14a877c_0
        [__Vtableidx6];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dtmcs_select 
        = Vtestharness__ConstPool__TABLE_h9314a6f5_0
        [__Vtableidx6];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__idcode_select 
        = Vtestharness__ConstPool__TABLE_h0d28ce70_0
        [__Vtableidx6];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__bypass_select 
        = Vtestharness__ConstPool__TABLE_h17ce99fc_0
        [__Vtableidx6];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_ready 
        = ((1U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__i_sync__DOT__reg_q) 
                  >> 2U)) == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__req_src_q));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_valid 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__ack_dst_q) 
           != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__req_synced_q1));
}

VL_INLINE_OPT void Vtestharness___024root___nba_sequent__TOP__5(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_sequent__TOP__5\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__rstgen_i__DOT__init_no) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__rptr_q)));
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (1U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__rptr_q) 
                                       >> 1U)));
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (1U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__rptr_q) 
                                       >> 2U)));
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__gen_sync__BRA__3__KET____DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__gen_sync__BRA__3__KET____DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (1U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__rptr_q) 
                                       >> 3U)));
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__gen_sync__BRA__4__KET____DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__gen_sync__BRA__4__KET____DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (1U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__rptr_q) 
                                       >> 4U)));
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_q)));
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (1U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_q) 
                                       >> 1U)));
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (1U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_q) 
                                       >> 2U)));
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__gen_sync__BRA__3__KET____DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__gen_sync__BRA__3__KET____DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (1U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_q) 
                                       >> 3U)));
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__gen_sync__BRA__4__KET____DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__gen_sync__BRA__4__KET____DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (1U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_q) 
                                       >> 4U)));
        if (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__reg_valid) {
            if ((0U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__reg_sel))) {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__u_spiregs__DOT__reg0 
                    = (0xffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__rx_data);
            }
            if ((0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__reg_sel))) {
                if ((1U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__reg_sel))) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__u_spiregs__DOT__reg1 
                        = (0xffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__rx_data);
                }
                if ((1U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__reg_sel))) {
                    if ((2U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__reg_sel))) {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__u_spiregs__DOT__reg2 
                            = (0xffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__rx_data);
                    }
                }
            }
        }
        if (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__ctrl_data_rx_valid) 
             & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__ready_a))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_q 
                = (0x1fU & (((IData)(1U) + (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_bin)) 
                            ^ VL_SHIFTR_III(5,5,32, 
                                            (0x1fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_bin))), 1U)));
        }
        if (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__dst_valid) 
             & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__dst_ready))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__rptr_q 
                = (0x1fU & (((IData)(1U) + (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__rptr_bin)) 
                            ^ VL_SHIFTR_III(5,5,32, 
                                            (0x1fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__rptr_bin))), 1U)));
        }
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__gen_sync__BRA__3__KET____DOT__i_sync__DOT__reg_q = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__gen_sync__BRA__4__KET____DOT__i_sync__DOT__reg_q = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__gen_sync__BRA__3__KET____DOT__i_sync__DOT__reg_q = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__gen_sync__BRA__4__KET____DOT__i_sync__DOT__reg_q = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__u_spiregs__DOT__reg0 = 0x20U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__u_spiregs__DOT__reg1 = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__u_spiregs__DOT__reg2 = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_q = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__rptr_q = 0U;
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__rptr 
        = (((0x10U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__gen_sync__BRA__4__KET____DOT__i_sync__DOT__reg_q) 
                      << 3U)) | ((8U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__gen_sync__BRA__3__KET____DOT__i_sync__DOT__reg_q) 
                                        << 2U)) | (4U 
                                                   & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q) 
                                                      << 1U)))) 
           | ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q)) 
              | (1U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q) 
                       >> 1U))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__wptr 
        = (((0x10U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__gen_sync__BRA__4__KET____DOT__i_sync__DOT__reg_q) 
                      << 3U)) | ((8U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__gen_sync__BRA__3__KET____DOT__i_sync__DOT__reg_q) 
                                        << 2U)) | (4U 
                                                   & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q) 
                                                      << 1U)))) 
           | ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q)) 
              | (1U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q) 
                       >> 1U))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__wrap_length 
        = (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__u_spiregs__DOT__reg2) 
            << 8U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__u_spiregs__DOT__reg1));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_obiplug__DOT__wrap_length_t 
        = ((0U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__wrap_length))
            ? 1U : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__wrap_length));
}

extern const VlWide<12>/*383:0*/ Vtestharness__ConstPool__CONST_hbf3cec5c_0;

VL_INLINE_OPT void Vtestharness___024root___nba_sequent__TOP__19(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_sequent__TOP__19\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__3__KET__;
    testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__3__KET__ = 0;
    CData/*0:0*/ testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__2__KET__;
    testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__2__KET__ = 0;
    CData/*0:0*/ testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__1__KET__;
    testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__1__KET__ = 0;
    CData/*5:0*/ testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__23__03a18__KET__;
    testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__23__03a18__KET__ = 0;
    CData/*5:0*/ testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__17__03a12__KET__;
    testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__17__03a12__KET__ = 0;
    CData/*5:0*/ testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__11__03a6__KET__;
    testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__11__03a6__KET__ = 0;
    CData/*2:0*/ testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__11__03a9__KET__;
    testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__11__03a9__KET__ = 0;
    CData/*2:0*/ testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__8__03a6__KET__;
    testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__8__03a6__KET__ = 0;
    CData/*2:0*/ testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__5__03a3__KET__;
    testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__5__03a3__KET__ = 0;
    // Body
    testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__23__03a18__KET__ 
        = (((- (IData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))) 
            & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__53__03a48__KET__)) 
           | ((- (IData)((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))))) 
              & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__47__03a42__KET__)));
    testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__3__KET__ 
        = (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel) 
            & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__8__KET__)) 
           | ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel)) 
              & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__7__KET__)));
    testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__11__03a9__KET__ 
        = (((- (IData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))) 
            & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__26__03a24__KET__)) 
           | ((- (IData)((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))))) 
              & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__23__03a21__KET__)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel 
        = (((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__5__KET__)) 
            & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__6__KET__)) 
           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__5__KET__) 
              & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__6__KET__) 
                 & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__20__03a18__KET__) 
                    > (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__17__03a15__KET__)))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel 
        = (((~ (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__3__KET__)) 
            & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__4__KET__)) 
           | ((IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__3__KET__) 
              & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__4__KET__) 
                 & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__14__03a12__KET__) 
                    > (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__11__03a9__KET__)))));
    testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__17__03a12__KET__ 
        = (((- (IData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel))) 
            & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__41__03a36__KET__)) 
           | ((- (IData)((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel))))) 
              & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__35__03a30__KET__)));
    testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__2__KET__ 
        = (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel) 
            & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__6__KET__)) 
           | ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel)) 
              & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__5__KET__)));
    testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__8__03a6__KET__ 
        = (((- (IData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel))) 
            & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__20__03a18__KET__)) 
           | ((- (IData)((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel))))) 
              & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__17__03a15__KET__)));
    testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__11__03a6__KET__ 
        = (((- (IData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))) 
            & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__29__03a24__KET__)) 
           | ((- (IData)((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))))) 
              & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__23__03a18__KET__)));
    testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__1__KET__ 
        = (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel) 
            & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__4__KET__)) 
           | ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel)) 
              & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__3__KET__)));
    testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__5__03a3__KET__ 
        = (((- (IData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))) 
            & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__14__03a12__KET__)) 
           | ((- (IData)((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))))) 
              & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__11__03a9__KET__)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel 
        = (((~ (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__1__KET__)) 
            & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__2__KET__)) 
           | ((IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__1__KET__) 
              & ((IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__2__KET__) 
                 & ((IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__8__03a6__KET__) 
                    > (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__5__03a3__KET__)))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__5__03a0__KET__ 
        = (((- (IData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))) 
            & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__17__03a12__KET__)) 
           | ((- (IData)((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))))) 
              & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__11__03a6__KET__)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__0__KET__ 
        = (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel) 
            & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__2__KET__)) 
           | ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel)) 
              & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__1__KET__)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__2__03a0__KET__ 
        = (((- (IData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))) 
            & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__8__03a6__KET__)) 
           | ((- (IData)((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))))) 
              & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__5__03a3__KET__)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
        = ((0xff000000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U]) 
           | ((((IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__23__03a18__KET__) 
                << 0x12U) | ((IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__17__03a12__KET__) 
                             << 0xcU)) | (((IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__11__03a6__KET__) 
                                           << 6U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__5__03a0__KET__))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
        = ((0xc0ffffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U]) 
           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__29__03a24__KET__) 
              << 0x18U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
        = ((0x3fffffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U]) 
           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__35__03a30__KET__) 
              << 0x1eU));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
        = ((0xfffffff0U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U]) 
           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__35__03a30__KET__) 
              >> 2U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
        = ((0xffff000fU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U]) 
           | (0xfffffff0U & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__47__03a42__KET__) 
                              << 0xaU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__41__03a36__KET__) 
                                          << 4U))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
        = ((0xf000ffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U]) 
           | (0xffff0000U & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__59__03a54__KET__) 
                              << 0x16U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__53__03a48__KET__) 
                                           << 0x10U))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
        = ((0xfffffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U]) 
           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__65__03a60__KET__) 
              << 0x1cU));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
        = ((0xfffffffcU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U]) 
           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__65__03a60__KET__) 
              >> 4U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
        = ((0xffffff03U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U]) 
           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__71__03a66__KET__) 
              << 2U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
        = ((0xffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U]) 
           | (0xffffff00U & ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__95__03a90__KET__) 
                               << 0x1aU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__89__03a84__KET__) 
                                            << 0x14U)) 
                             | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__83__03a78__KET__) 
                                 << 0xeU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__77__03a72__KET__) 
                                             << 8U)))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
        = ((0xff000000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U]) 
           | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__119__03a114__KET__) 
                << 0x12U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__113__03a108__KET__) 
                             << 0xcU)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__107__03a102__KET__) 
                                           << 6U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__101__03a96__KET__))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
        = ((0xc0ffffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U]) 
           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__125__03a120__KET__) 
              << 0x18U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
        = ((0x3fffffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U]) 
           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__131__03a126__KET__) 
              << 0x1eU));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
        = ((0xfffffff0U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U]) 
           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__131__03a126__KET__) 
              >> 2U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
        = ((0xffff000fU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U]) 
           | (0xfffffff0U & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__143__03a138__KET__) 
                              << 0xaU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__137__03a132__KET__) 
                                          << 4U))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
        = ((0xf000ffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U]) 
           | (0xffff0000U & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__155__03a150__KET__) 
                              << 0x16U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__149__03a144__KET__) 
                                           << 0x10U))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
        = ((0xfffffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U]) 
           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__161__03a156__KET__) 
              << 0x1cU));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
        = ((0xfffffffcU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U]) 
           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__161__03a156__KET__) 
              >> 4U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
        = ((0xffffff03U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U]) 
           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__167__03a162__KET__) 
              << 2U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
        = ((0xffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U]) 
           | (0xffffff00U & (((0x4000000U & ((- (IData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__5__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))) 
                                             << 0x1aU)) 
                              | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__185__03a180__KET__) 
                                 << 0x14U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__179__03a174__KET__) 
                                                << 0xeU) 
                                               | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__173__03a168__KET__) 
                                                  << 8U)))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
        = ((0xff000000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U]) 
           | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__215__03a210__KET__) 
                << 0x12U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__209__03a204__KET__) 
                             << 0xcU)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__203__03a198__KET__) 
                                           << 6U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__197__03a192__KET__))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
        = ((0xc0ffffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U]) 
           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__221__03a216__KET__) 
              << 0x18U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
        = ((0x3fffffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U]) 
           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__227__03a222__KET__) 
              << 0x1eU));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
        = ((0xfffffff0U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U]) 
           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__227__03a222__KET__) 
              >> 2U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
        = ((0xffff000fU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U]) 
           | (0xfffffff0U & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__239__03a234__KET__) 
                              << 0xaU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__233__03a228__KET__) 
                                          << 4U))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
        = ((0xf000ffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U]) 
           | (0xffff0000U & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__251__03a246__KET__) 
                              << 0x16U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__245__03a240__KET__) 
                                           << 0x10U))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
        = ((0xfffffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U]) 
           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__257__03a252__KET__) 
              << 0x1cU));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
        = ((0xfffffffcU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U]) 
           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__257__03a252__KET__) 
              >> 4U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
        = ((0xffffff03U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U]) 
           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__263__03a258__KET__) 
              << 2U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
        = ((0xffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U]) 
           | (0xffffff00U & ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__287__03a282__KET__) 
                               << 0x1aU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__281__03a276__KET__) 
                                            << 0x14U)) 
                             | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__275__03a270__KET__) 
                                 << 0xeU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__269__03a264__KET__) 
                                             << 8U)))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
        = ((0xff000000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U]) 
           | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__311__03a306__KET__) 
                << 0x12U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__305__03a300__KET__) 
                             << 0xcU)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__299__03a294__KET__) 
                                           << 6U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__293__03a288__KET__))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
        = ((0xc0ffffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U]) 
           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__317__03a312__KET__) 
              << 0x18U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
        = ((0x3fffffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U]) 
           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__323__03a318__KET__) 
              << 0x1eU));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
        = ((0xfffffff0U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU]) 
           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__323__03a318__KET__) 
              >> 2U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
        = ((0xffff000fU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU]) 
           | (0xfffffff0U & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__335__03a330__KET__) 
                              << 0xaU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__329__03a324__KET__) 
                                          << 4U))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
        = ((0xf000ffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU]) 
           | (0xffff0000U & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__347__03a342__KET__) 
                              << 0x16U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__341__03a336__KET__) 
                                           << 0x10U))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
        = ((0xfffffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU]) 
           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__353__03a348__KET__) 
              << 0x1cU));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
        = ((0xfffffffcU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU]) 
           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__353__03a348__KET__) 
              >> 4U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
        = ((0xffffff03U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU]) 
           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__359__03a354__KET__) 
              << 2U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
        = ((0xfc0000ffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU]) 
           | (0xffffff00U & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__377__03a372__KET__) 
                              << 0x14U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__371__03a366__KET__) 
                                            << 0xeU) 
                                           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree__BRA__365__03a360__KET__) 
                                              << 8U)))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
        = ((0x3ffffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU]) 
           | (Vtestharness__ConstPool__CONST_hbf3cec5c_0[0U] 
              << 0x1aU));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xcU] 
        = ((Vtestharness__ConstPool__CONST_hbf3cec5c_0[0U] 
            >> 6U) | (Vtestharness__ConstPool__CONST_hbf3cec5c_0[1U] 
                      << 0x1aU));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xdU] 
        = ((Vtestharness__ConstPool__CONST_hbf3cec5c_0[1U] 
            >> 6U) | (Vtestharness__ConstPool__CONST_hbf3cec5c_0[2U] 
                      << 0x1aU));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xeU] 
        = ((Vtestharness__ConstPool__CONST_hbf3cec5c_0[2U] 
            >> 6U) | (Vtestharness__ConstPool__CONST_hbf3cec5c_0[3U] 
                      << 0x1aU));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xfU] 
        = ((Vtestharness__ConstPool__CONST_hbf3cec5c_0[3U] 
            >> 6U) | (Vtestharness__ConstPool__CONST_hbf3cec5c_0[4U] 
                      << 0x1aU));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0x10U] 
        = ((Vtestharness__ConstPool__CONST_hbf3cec5c_0[4U] 
            >> 6U) | (Vtestharness__ConstPool__CONST_hbf3cec5c_0[5U] 
                      << 0x1aU));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0x11U] 
        = ((Vtestharness__ConstPool__CONST_hbf3cec5c_0[5U] 
            >> 6U) | (Vtestharness__ConstPool__CONST_hbf3cec5c_0[6U] 
                      << 0x1aU));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0x12U] 
        = ((Vtestharness__ConstPool__CONST_hbf3cec5c_0[6U] 
            >> 6U) | (Vtestharness__ConstPool__CONST_hbf3cec5c_0[7U] 
                      << 0x1aU));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0x13U] 
        = ((Vtestharness__ConstPool__CONST_hbf3cec5c_0[7U] 
            >> 6U) | (Vtestharness__ConstPool__CONST_hbf3cec5c_0[8U] 
                      << 0x1aU));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0x14U] 
        = ((Vtestharness__ConstPool__CONST_hbf3cec5c_0[8U] 
            >> 6U) | (Vtestharness__ConstPool__CONST_hbf3cec5c_0[9U] 
                      << 0x1aU));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0x15U] 
        = ((Vtestharness__ConstPool__CONST_hbf3cec5c_0[9U] 
            >> 6U) | (Vtestharness__ConstPool__CONST_hbf3cec5c_0[0xaU] 
                      << 0x1aU));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0x16U] 
        = ((Vtestharness__ConstPool__CONST_hbf3cec5c_0[0xaU] 
            >> 6U) | (Vtestharness__ConstPool__CONST_hbf3cec5c_0[0xbU] 
                      << 0x1aU));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0x17U] 
        = (Vtestharness__ConstPool__CONST_hbf3cec5c_0[0xbU] 
           >> 6U);
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree[0U] 
        = (((((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__31__KET__) 
                << 0x1fU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__30__KET__) 
                             << 0x1eU)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__29__KET__) 
                                            << 0x1dU) 
                                           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__28__KET__) 
                                              << 0x1cU))) 
             | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__27__KET__) 
                  << 0x1bU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__26__KET__) 
                               << 0x1aU)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__25__KET__) 
                                              << 0x19U) 
                                             | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__24__KET__) 
                                                << 0x18U)))) 
            | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__23__KET__) 
                  << 0x17U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__22__KET__) 
                               << 0x16U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__21__KET__) 
                                              << 0x15U) 
                                             | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__20__KET__) 
                                                << 0x14U))) 
               | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__19__KET__) 
                    << 0x13U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__18__KET__) 
                                 << 0x12U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__17__KET__) 
                                                << 0x11U) 
                                               | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__16__KET__) 
                                                  << 0x10U))))) 
           | ((((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__15__KET__) 
                  << 0xfU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__14__KET__) 
                              << 0xeU)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__13__KET__) 
                                            << 0xdU) 
                                           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__12__KET__) 
                                              << 0xcU))) 
               | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__11__KET__) 
                    << 0xbU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__10__KET__) 
                                << 0xaU)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__9__KET__) 
                                              << 9U) 
                                             | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__8__KET__) 
                                                << 8U)))) 
              | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__7__KET__) 
                    << 7U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__6__KET__) 
                              << 6U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__5__KET__) 
                                          << 5U) | 
                                         ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__4__KET__) 
                                          << 4U))) 
                 | ((((IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__3__KET__) 
                      << 3U) | ((IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__2__KET__) 
                                << 2U)) | (((IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__1__KET__) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__0__KET__))))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree[1U] 
        = (((((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__63__KET__) 
                << 0x1fU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__62__KET__) 
                             << 0x1eU)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__61__KET__) 
                                            << 0x1dU) 
                                           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__60__KET__) 
                                              << 0x1cU))) 
             | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__59__KET__) 
                  << 0x1bU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__58__KET__) 
                               << 0x1aU)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__57__KET__) 
                                              << 0x19U) 
                                             | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__56__KET__) 
                                                << 0x18U)))) 
            | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__55__KET__) 
                  << 0x17U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__54__KET__) 
                               << 0x16U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__53__KET__) 
                                              << 0x15U) 
                                             | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__52__KET__) 
                                                << 0x14U))) 
               | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__51__KET__) 
                    << 0x13U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__50__KET__) 
                                 << 0x12U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__49__KET__) 
                                                << 0x11U) 
                                               | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__48__KET__) 
                                                  << 0x10U))))) 
           | ((((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__47__KET__) 
                  << 0xfU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__46__KET__) 
                              << 0xeU)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__45__KET__) 
                                            << 0xdU) 
                                           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__44__KET__) 
                                              << 0xcU))) 
               | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__43__KET__) 
                    << 0xbU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__42__KET__) 
                                << 0xaU)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__41__KET__) 
                                              << 9U) 
                                             | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__40__KET__) 
                                                << 8U)))) 
              | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__39__KET__) 
                    << 7U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__38__KET__) 
                              << 6U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__37__KET__) 
                                          << 5U) | 
                                         ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__36__KET__) 
                                          << 4U))) 
                 | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__35__KET__) 
                      << 3U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__34__KET__) 
                                << 2U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__33__KET__) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__32__KET__))))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree[2U] 
        = (((((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__95__KET__) 
                << 0x1fU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__94__KET__) 
                             << 0x1eU)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__93__KET__) 
                                            << 0x1dU) 
                                           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__92__KET__) 
                                              << 0x1cU))) 
             | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__91__KET__) 
                  << 0x1bU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__90__KET__) 
                               << 0x1aU)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__89__KET__) 
                                              << 0x19U) 
                                             | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__88__KET__) 
                                                << 0x18U)))) 
            | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__87__KET__) 
                  << 0x17U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__86__KET__) 
                               << 0x16U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__85__KET__) 
                                              << 0x15U) 
                                             | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__84__KET__) 
                                                << 0x14U))) 
               | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__83__KET__) 
                    << 0x13U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__82__KET__) 
                                 << 0x12U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__81__KET__) 
                                                << 0x11U) 
                                               | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__80__KET__) 
                                                  << 0x10U))))) 
           | ((((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__79__KET__) 
                  << 0xfU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__78__KET__) 
                              << 0xeU)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__77__KET__) 
                                            << 0xdU) 
                                           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__76__KET__) 
                                              << 0xcU))) 
               | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__75__KET__) 
                    << 0xbU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__74__KET__) 
                                << 0xaU)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__73__KET__) 
                                              << 9U) 
                                             | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__72__KET__) 
                                                << 8U)))) 
              | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__71__KET__) 
                    << 7U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__70__KET__) 
                              << 6U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__69__KET__) 
                                          << 5U) | 
                                         ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__68__KET__) 
                                          << 4U))) 
                 | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__67__KET__) 
                      << 3U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__66__KET__) 
                                << 2U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__65__KET__) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__64__KET__))))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree[3U] 
        = (0x7fffffffU & (((((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__126__KET__) 
                               << 0x1eU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__125__KET__) 
                                            << 0x1dU)) 
                             | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__124__KET__) 
                                 << 0x1cU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__123__KET__) 
                                              << 0x1bU))) 
                            | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__122__KET__) 
                                 << 0x1aU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__121__KET__) 
                                              << 0x19U)) 
                               | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__120__KET__) 
                                   << 0x18U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__119__KET__) 
                                                << 0x17U)))) 
                           | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__118__KET__) 
                                 << 0x16U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__117__KET__) 
                                              << 0x15U)) 
                               | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__116__KET__) 
                                   << 0x14U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__115__KET__) 
                                                << 0x13U))) 
                              | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__114__KET__) 
                                   << 0x12U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__113__KET__) 
                                                << 0x11U)) 
                                 | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__112__KET__) 
                                     << 0x10U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__111__KET__) 
                                                  << 0xfU))))) 
                          | ((((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__110__KET__) 
                                 << 0xeU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__109__KET__) 
                                             << 0xdU)) 
                               | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__108__KET__) 
                                   << 0xcU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__107__KET__) 
                                               << 0xbU))) 
                              | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__106__KET__) 
                                   << 0xaU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__105__KET__) 
                                               << 9U)) 
                                 | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__104__KET__) 
                                     << 8U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__103__KET__) 
                                               << 7U)))) 
                             | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__102__KET__) 
                                   << 6U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__101__KET__) 
                                             << 5U)) 
                                 | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__100__KET__) 
                                     << 4U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__99__KET__) 
                                               << 3U))) 
                                | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__98__KET__) 
                                    << 2U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__97__KET__) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree__BRA__96__KET__)))))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
        = ((0xff000000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U]) 
           | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__23__03a21__KET__) 
                 << 0x15U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__20__03a18__KET__) 
                              << 0x12U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__17__03a15__KET__) 
                                             << 0xfU) 
                                            | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__14__03a12__KET__) 
                                               << 0xcU))) 
              | ((((IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__11__03a9__KET__) 
                   << 9U) | ((IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__8__03a6__KET__) 
                             << 6U)) | (((IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__5__03a3__KET__) 
                                         << 3U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__2__03a0__KET__)))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
        = ((0xc0ffffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U]) 
           | (0xff000000U & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__29__03a27__KET__) 
                              << 0x1bU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__26__03a24__KET__) 
                                           << 0x18U))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
        = ((0x3fffffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U]) 
           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__32__03a30__KET__) 
              << 0x1eU));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
        = ((0xfffffffeU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U]) 
           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__32__03a30__KET__) 
              >> 2U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
        = ((0xfffffff1U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U]) 
           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__35__03a33__KET__) 
              << 1U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
        = ((0xffff000fU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U]) 
           | (0xfffffff0U & ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__47__03a45__KET__) 
                               << 0xdU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__44__03a42__KET__) 
                                           << 0xaU)) 
                             | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__41__03a39__KET__) 
                                 << 7U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__38__03a36__KET__) 
                                           << 4U)))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
        = ((0xf000ffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U]) 
           | (0xffff0000U & ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__59__03a57__KET__) 
                               << 0x19U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__56__03a54__KET__) 
                                            << 0x16U)) 
                             | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__53__03a51__KET__) 
                                 << 0x13U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__50__03a48__KET__) 
                                              << 0x10U)))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
        = ((0x8fffffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U]) 
           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__62__03a60__KET__) 
              << 0x1cU));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
        = ((0x7fffffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U]) 
           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__65__03a63__KET__) 
              << 0x1fU));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
        = ((0xfffffffcU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U]) 
           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__65__03a63__KET__) 
              >> 1U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
        = ((0xffffff03U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U]) 
           | (0xfffffffcU & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__71__03a69__KET__) 
                              << 5U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__68__03a66__KET__) 
                                        << 2U))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
        = ((0xffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U]) 
           | (0xffffff00U & (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__95__03a93__KET__) 
                                << 0x1dU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__92__03a90__KET__) 
                                             << 0x1aU)) 
                              | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__89__03a87__KET__) 
                                  << 0x17U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__86__03a84__KET__) 
                                               << 0x14U))) 
                             | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__83__03a81__KET__) 
                                  << 0x11U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__80__03a78__KET__) 
                                               << 0xeU)) 
                                | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__77__03a75__KET__) 
                                    << 0xbU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__74__03a72__KET__) 
                                                << 8U))))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
        = ((0xff000000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U]) 
           | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__119__03a117__KET__) 
                 << 0x15U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__116__03a114__KET__) 
                              << 0x12U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__113__03a111__KET__) 
                                             << 0xfU) 
                                            | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__110__03a108__KET__) 
                                               << 0xcU))) 
              | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__107__03a105__KET__) 
                   << 9U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__104__03a102__KET__) 
                             << 6U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__101__03a99__KET__) 
                                         << 3U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__98__03a96__KET__)))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
        = ((0xc0ffffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U]) 
           | (0xff000000U & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__125__03a123__KET__) 
                              << 0x1bU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__122__03a120__KET__) 
                                           << 0x18U))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
        = ((0x3fffffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U]) 
           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__128__03a126__KET__) 
              << 0x1eU));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
        = ((0xfffffffeU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U]) 
           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__128__03a126__KET__) 
              >> 2U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
        = ((0xfffffff1U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U]) 
           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__131__03a129__KET__) 
              << 1U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
        = ((0xffff000fU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U]) 
           | (0xfffffff0U & ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__143__03a141__KET__) 
                               << 0xdU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__140__03a138__KET__) 
                                           << 0xaU)) 
                             | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__137__03a135__KET__) 
                                 << 7U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__134__03a132__KET__) 
                                           << 4U)))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
        = ((0xf000ffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U]) 
           | (0xffff0000U & ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__155__03a153__KET__) 
                               << 0x19U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__152__03a150__KET__) 
                                            << 0x16U)) 
                             | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__149__03a147__KET__) 
                                 << 0x13U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__146__03a144__KET__) 
                                              << 0x10U)))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
        = ((0x8fffffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U]) 
           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__158__03a156__KET__) 
              << 0x1cU));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
        = ((0x7fffffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U]) 
           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__161__03a159__KET__) 
              << 0x1fU));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
        = ((0xfffffffcU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U]) 
           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__161__03a159__KET__) 
              >> 1U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
        = ((0xffffff03U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U]) 
           | (0xfffffffcU & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__167__03a165__KET__) 
                              << 5U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__164__03a162__KET__) 
                                        << 2U))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
        = ((0xffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U]) 
           | (0xffffff00U & (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio0__q) 
                                << 0x1dU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__188__03a186__KET__) 
                                             << 0x1aU)) 
                              | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__185__03a183__KET__) 
                                  << 0x17U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__182__03a180__KET__) 
                                               << 0x14U))) 
                             | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__179__03a177__KET__) 
                                  << 0x11U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__176__03a174__KET__) 
                                               << 0xeU)) 
                                | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__173__03a171__KET__) 
                                    << 0xbU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree__BRA__170__03a168__KET__) 
                                                << 8U))))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[6U] 
        = ((0xff000000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[6U]) 
           | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio8__q) 
                 << 0x15U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio7__q) 
                              << 0x12U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio6__q) 
                                             << 0xfU) 
                                            | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio5__q) 
                                               << 0xcU))) 
              | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio4__q) 
                   << 9U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio3__q) 
                             << 6U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio2__q) 
                                         << 3U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio1__q)))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[6U] 
        = ((0xc0ffffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[6U]) 
           | (0xff000000U & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio10__q) 
                              << 0x1bU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio9__q) 
                                           << 0x18U))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[6U] 
        = ((0x3fffffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[6U]) 
           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio11__q) 
              << 0x1eU));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[7U] 
        = ((0xfffffffeU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[7U]) 
           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio11__q) 
              >> 2U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[7U] 
        = ((0xfffffff1U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[7U]) 
           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio12__q) 
              << 1U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[7U] 
        = ((0xffff000fU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[7U]) 
           | (0xfffffff0U & ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio16__q) 
                               << 0xdU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio15__q) 
                                           << 0xaU)) 
                             | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio14__q) 
                                 << 7U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio13__q) 
                                           << 4U)))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[7U] 
        = ((0xf000ffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[7U]) 
           | (0xffff0000U & ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio20__q) 
                               << 0x19U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio19__q) 
                                            << 0x16U)) 
                             | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio18__q) 
                                 << 0x13U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio17__q) 
                                              << 0x10U)))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[7U] 
        = ((0x8fffffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[7U]) 
           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio21__q) 
              << 0x1cU));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[7U] 
        = ((0x7fffffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[7U]) 
           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio22__q) 
              << 0x1fU));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[8U] 
        = ((0xfffffffcU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[8U]) 
           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio22__q) 
              >> 1U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[8U] 
        = ((0xffffff03U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[8U]) 
           | (0xfffffffcU & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio24__q) 
                              << 5U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio23__q) 
                                        << 2U))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[8U] 
        = ((0xffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[8U]) 
           | (0xffffff00U & (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio32__q) 
                                << 0x1dU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio31__q) 
                                             << 0x1aU)) 
                              | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio30__q) 
                                  << 0x17U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio29__q) 
                                               << 0x14U))) 
                             | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio28__q) 
                                  << 0x11U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio27__q) 
                                               << 0xeU)) 
                                | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio26__q) 
                                    << 0xbU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio25__q) 
                                                << 8U))))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[9U] 
        = ((0xff000000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[9U]) 
           | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio40__q) 
                 << 0x15U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio39__q) 
                              << 0x12U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio38__q) 
                                             << 0xfU) 
                                            | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio37__q) 
                                               << 0xcU))) 
              | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio36__q) 
                   << 9U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio35__q) 
                             << 6U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio34__q) 
                                         << 3U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio33__q)))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[9U] 
        = ((0xc0ffffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[9U]) 
           | (0xff000000U & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio42__q) 
                              << 0x1bU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio41__q) 
                                           << 0x18U))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[9U] 
        = ((0x3fffffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[9U]) 
           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio43__q) 
              << 0x1eU));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0xaU] 
        = ((0xfffffffeU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0xaU]) 
           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio43__q) 
              >> 2U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0xaU] 
        = ((0xfffffff1U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0xaU]) 
           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio44__q) 
              << 1U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0xaU] 
        = ((0xffff000fU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0xaU]) 
           | (0xfffffff0U & ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio48__q) 
                               << 0xdU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio47__q) 
                                           << 0xaU)) 
                             | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio46__q) 
                                 << 7U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio45__q) 
                                           << 4U)))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0xaU] 
        = ((0xf000ffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0xaU]) 
           | (0xffff0000U & ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio52__q) 
                               << 0x19U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio51__q) 
                                            << 0x16U)) 
                             | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio50__q) 
                                 << 0x13U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio49__q) 
                                              << 0x10U)))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0xaU] 
        = ((0x8fffffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0xaU]) 
           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio53__q) 
              << 0x1cU));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0xaU] 
        = ((0x7fffffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0xaU]) 
           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio54__q) 
              << 0x1fU));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0xbU] 
        = ((0x1ffffffcU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0xbU]) 
           | (0x1fffffffU & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio54__q) 
                             >> 1U)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0xbU] 
        = ((0x1fffff03U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0xbU]) 
           | (0x1ffffffcU & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio56__q) 
                              << 5U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio55__q) 
                                        << 2U))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0xbU] 
        = ((0xffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0xbU]) 
           | (0x1fffff00U & ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio63__q) 
                               << 0x1aU) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio62__q) 
                                             << 0x17U) 
                                            | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio61__q) 
                                               << 0x14U))) 
                             | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio60__q) 
                                  << 0x11U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio59__q) 
                                               << 0xeU)) 
                                | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio58__q) 
                                    << 0xbU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio57__q) 
                                                << 8U))))));
}

VL_INLINE_OPT void Vtestharness___024root___nba_sequent__TOP__25(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_sequent__TOP__25\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_clk;
    __Vdly__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_clk = 0;
    // Body
    vlSelfRef.__Vdly__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_tag 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_tag;
    __Vdly__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_clk 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_clk;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__last_fetch 
        = ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_resetn))) 
           || ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_ddr)
                ? (1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__fetch))
                : 1U));
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_resetn) {
        if ((0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__dummy_count))) {
            __Vdly__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_clk 
                = (1U & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_clk)) 
                         & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_csb))));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__dummy_count 
                = (0xfU & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__dummy_count) 
                           - (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_clk)));
        } else if ((0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__count))) {
            __Vdly__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_clk 
                = (1U & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_clk)) 
                         & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_csb))));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__obuffer 
                = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__next_obuffer;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__ibuffer 
                = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__next_ibuffer;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__count 
                = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__next_count;
        }
        if (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__din_valid) 
             & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__din_ready))) {
            vlSelfRef.__Vdly__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_tag 
                = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__din_tag;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_cont 
                = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__din_cont;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_rd 
                = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__din_rd;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_qspi 
                = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__din_qspi;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_dspi 
                = ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__din_qspi)) 
                   & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__din_ddr));
            __Vdly__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_clk = 0U;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__count = 8U;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__dummy_count 
                = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__din_rd)
                    ? (0xfU & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__din_data))
                    : 0U);
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__obuffer 
                = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__din_data;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_ddr 
                = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__din_ddr) 
                   & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__din_qspi));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_csb = 0U;
        }
    } else {
        vlSelfRef.__Vdly__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_tag = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_cont = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_rd = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_qspi = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_dspi = 0U;
        __Vdly__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_clk = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__count = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__dummy_count = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_ddr = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_csb = 1U;
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_clk 
        = __Vdly__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_clk;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__fetch 
        = ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_resetn))) 
           || (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__next_fetch));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__next_obuffer 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__obuffer;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__next_count 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__count;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__next_fetch = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_io1_oe = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_io0_oe = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_io2_oe = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_io3_oe = 0U;
    if ((0U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__dummy_count))) {
        if ((0U == (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_ddr) 
                     << 2U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_qspi) 
                                << 1U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_dspi))))) {
            if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_clk) {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__next_obuffer 
                    = (0xfeU & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__obuffer) 
                                << 1U));
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__next_count 
                    = (0xfU & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__count) 
                               - (0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__count))));
            }
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__next_fetch 
                = (0U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__next_count));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_io0_oe = 1U;
        } else if ((2U == (6U & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_ddr) 
                                  << 2U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_qspi) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_dspi)))))) {
            if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_clk) {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__next_obuffer 
                    = (0xf0U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__obuffer) 
                                << 4U));
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__next_count 
                    = (0xfU & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__count) 
                               - ((0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__count)) 
                                  << 2U)));
            }
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__next_fetch 
                = (0U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__next_count));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_io0_oe 
                = (1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_rd)));
        } else if ((6U == (6U & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_ddr) 
                                  << 2U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_qspi) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_dspi)))))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__next_obuffer 
                = (0xf0U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__obuffer) 
                            << 4U));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__next_count 
                = (0xfU & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__count) 
                           - ((0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__count)) 
                              << 2U)));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__next_fetch 
                = (0U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__next_count));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_io0_oe 
                = (1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_rd)));
        } else if ((1U == (1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_dspi)))) {
            if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_clk) {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__next_obuffer 
                    = (0xfcU & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__obuffer) 
                                << 2U));
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__next_count 
                    = (0xfU & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__count) 
                               - ((0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__count)) 
                                  << 1U)));
            }
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__next_fetch 
                = (0U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__next_count));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_io0_oe 
                = (1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_rd)));
        }
        if ((0U != (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_ddr) 
                     << 2U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_qspi) 
                                << 1U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_dspi))))) {
            if ((2U == (6U & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_ddr) 
                               << 2U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_qspi) 
                                          << 1U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_dspi)))))) {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_io1_oe 
                    = (1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_rd)));
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_io2_oe 
                    = (1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_rd)));
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_io3_oe 
                    = (1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_rd)));
            } else if ((6U == (6U & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_ddr) 
                                      << 2U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_qspi) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_dspi)))))) {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_io1_oe 
                    = (1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_rd)));
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_io2_oe 
                    = (1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_rd)));
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_io3_oe 
                    = (1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_rd)));
            } else if ((1U == (1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_dspi)))) {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_io1_oe 
                    = (1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_rd)));
            }
        }
    }
}

VL_INLINE_OPT void Vtestharness___024root___nba_sequent__TOP__26(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_sequent__TOP__26\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__sleep_unit_i__DOT__p_elw_busy_q = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__sleep_unit_i__DOT__core_busy_q 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT____Vcellinp__cpu_subsystem_i__rst_ni) 
           && ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ctrl_busy) 
               | (((0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q)) 
                   | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid)) 
                  | ((0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q)) 
                     | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid)))));
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT____Vcellinp__cpu_subsystem_i__rst_ni) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q = 1U;
        if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__haltreq))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q = 1U;
        } else if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q = 0U;
        }
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q = 0U;
    }
}

VL_INLINE_OPT void Vtestharness___024root___nba_sequent__TOP__27(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_sequent__TOP__27\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__data_src_q 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__data_src_d;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__data_dst_q 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__data_dst_d;
}

VL_INLINE_OPT void Vtestharness___024root___nba_sequent__TOP__28(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_sequent__TOP__28\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__spi_slave_cs_in_x) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__tx_counter = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_rxreg__DOT__counter = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_rxreg__DOT__counter_trgt = 1U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__state = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__cmd_reg = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_rxreg__DOT__data_int = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__tx_data = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__addr_reg = 0U;
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__tx_counter 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__tx_counter_next;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_rxreg__DOT__counter 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_rxreg__DOT__counter_next;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_rxreg__DOT__counter_trgt 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_rxreg__DOT__counter_trgt_next;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__state 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__state_next;
        if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__sample_CMD) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__cmd_reg 
                = (0xffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__rx_data);
        }
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_rxreg__DOT__data_int 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__rx_data;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__tx_data 
            = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__enable_regs)
                ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__reg_data)
                : ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                    ? vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q
                    : vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q));
        if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__sample_ADDR) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__addr_reg 
                = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__rx_data;
        }
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__tx_data_valid 
        = ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__spi_slave_cs_in_x))) 
           && (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__tx_data_valid_next));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__ctrl_data_tx_ready 
        = ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__spi_slave_cs_in_x))) 
           && (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__ctrl_data_tx_ready_next));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__tx_counter_upd 
        = ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__spi_slave_cs_in_x))) 
           && (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__tx_counter_upd_next));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__tx_done_reg 
        = ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__spi_slave_cs_in_x))) 
           && (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__tx_done));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_rxreg__DOT__running 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__spi_slave_cs_in_x) 
           || (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_rxreg__DOT__running_next));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__ctrl_addr_valid 
        = ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__spi_slave_cs_in_x))) 
           && (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__sample_ADDR));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__decode_cmd_comb = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_rxreg__DOT__counter_next 
        = (0xffU & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_rxreg__DOT__running)
                     ? (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_rxreg__DOT__counter) 
                         == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_rxreg__DOT__counter_trgt))
                         ? 0U : ((IData)(1U) + (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_rxreg__DOT__counter)))
                     : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_rxreg__DOT__counter)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__rx_data_valid 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_rxreg__DOT__running) 
           && ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_rxreg__DOT__counter) 
               == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_rxreg__DOT__counter_trgt)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__sample_CMD = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__sample_ADDR = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__state)))) {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__decode_cmd_comb = 1U;
                if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__rx_data_valid) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__sample_CMD = 1U;
                }
            }
            if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__state))) {
                if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__rx_data_valid) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__sample_ADDR = 1U;
                }
            }
        }
    }
}

VL_INLINE_OPT void Vtestharness___024root___nba_sequent__TOP__29(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_sequent__TOP__29\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__jtag_tdo_out_x 
        = ((IData)(vlSelfRef.jtag_trst_ni) && (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__tdo_mux));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__tdo_oe_o 
        = ((IData)(vlSelfRef.jtag_trst_ni) && ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__shift_ir) 
                                               | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__shift_dr)));
    vlSelfRef.jtag_tdo_o = vlSelfRef.testharness__DOT__gr_heep_i__DOT__jtag_tdo_out_x;
}

VL_INLINE_OPT void Vtestharness___024root___nba_sequent__TOP__30(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_sequent__TOP__30\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__spi_slave_cs_in_x) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_txreg__DOT__counter = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_txreg__DOT__data_int = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_txreg__DOT__counter_trgt = 7U;
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_txreg__DOT__counter 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_txreg__DOT__counter_next;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_txreg__DOT__data_int 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_txreg__DOT__data_int_next;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_txreg__DOT__counter_trgt 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_txreg__DOT__counter_trgt_next;
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_txreg__DOT__running 
        = ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__spi_slave_cs_in_x))) 
           && (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_txreg__DOT__running_next));
}

VL_INLINE_OPT void Vtestharness___024root___nba_sequent__TOP__31(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_sequent__TOP__31\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_spi_flash_cs_0__DOT__pad__strong__out1) {
        if (vlSelfRef.testharness__DOT__flash_boot_i__DOT__write_enable_reset) {
            vlSelfRef.testharness__DOT__flash_boot_i__DOT__write_enable = 0U;
            vlSelfRef.testharness__DOT__flash_boot_i__DOT__write_enable_reset = 0U;
        }
        vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer = 0U;
        vlSelfRef.testharness__DOT__flash_boot_i__DOT__bitcount = 0U;
        vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount = 0U;
        vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode = 1U;
        vlSelfRef.testharness__DOT__flash_boot_i__DOT__io2_oe = 0U;
        vlSelfRef.testharness__DOT__flash_boot_i__DOT__io1_oe = 0U;
        vlSelfRef.testharness__DOT__flash_boot_i__DOT__io0_oe = 0U;
        vlSelfRef.testharness__DOT__flash_boot_i__DOT__io3_oe = 0U;
    }
    if ((0U != (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__xip_cmd))) {
        vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer 
            = vlSelfRef.testharness__DOT__flash_boot_i__DOT__xip_cmd;
        vlSelfRef.testharness__DOT__flash_boot_i__DOT__bitcount = 0U;
        vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount = 1U;
        vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_io_vld = 1U;
        vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_in 
            = vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer;
        vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd 
            = vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer;
        if ((0xabU == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd))) {
            vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up = 1U;
        }
        if ((0xb9U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd))) {
            vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up = 0U;
        }
        if ((0xffU == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd))) {
            vlSelfRef.testharness__DOT__flash_boot_i__DOT__xip_cmd = 0U;
        }
        if ((6U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd))) {
            vlSelfRef.testharness__DOT__flash_boot_i__DOT__write_enable = 1U;
        }
        if (((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up) 
             & (3U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)))) {
            if ((2U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                    = ((0xffffU & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                       | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                          << 0x10U));
            }
            if ((3U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                    = ((0xff00ffU & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                       | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                          << 8U));
            }
            if ((4U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                    = ((0xffff00U & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                       | (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer));
            }
            if (VL_LTES_III(32, 4U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer 
                    = vlSelfRef.testharness__DOT__flash_boot_i__DOT__memory
                    [vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr];
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                    = (0xffffffU & ((IData)(1U) + vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr));
            }
        }
        if ((((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up) 
              & (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__write_enable)) 
             & (2U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)))) {
            if ((1U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__write_enable_reset = 1U;
            }
            if ((2U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                    = ((0xffffU & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                       | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                          << 0x10U));
            }
            if ((3U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                    = ((0xff00ffU & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                       | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                          << 8U));
            }
            if ((4U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                    = ((0xffff00U & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                       | (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer));
            }
            if ((VL_LTES_III(32, 5U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount) 
                 & VL_GTES_III(32, 0x104U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount))) {
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__memory[vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr] 
                    = vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer;
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                    = (0xffffffU & ((IData)(1U) + vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr));
            }
        }
        if (((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up) 
             & (0xbbU == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)))) {
            if ((1U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode = 2U;
            }
            if ((2U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                    = ((0xffffU & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                       | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                          << 0x10U));
            }
            if ((3U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                    = ((0xff00ffU & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                       | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                          << 8U));
            }
            if ((4U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                    = ((0xffff00U & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                       | (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer));
            }
            if ((5U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__xip_cmd 
                    = ((0xa5U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer))
                        ? (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)
                        : 0U);
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode = 3U;
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__dummycount = 8U;
            }
            if (VL_LTES_III(32, 5U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer 
                    = vlSelfRef.testharness__DOT__flash_boot_i__DOT__memory
                    [vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr];
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                    = (0xffffffU & ((IData)(1U) + vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr));
            }
        }
        if (((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up) 
             & (0xebU == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)))) {
            if ((1U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode = 4U;
            }
            if ((2U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                    = ((0xffffU & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                       | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                          << 0x10U));
            }
            if ((3U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                    = ((0xff00ffU & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                       | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                          << 8U));
            }
            if ((4U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                    = ((0xffff00U & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                       | (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer));
            }
            if ((5U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__xip_cmd 
                    = ((0xa5U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer))
                        ? (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)
                        : 0U);
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode = 5U;
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__dummycount = 8U;
            }
            if (VL_LTES_III(32, 5U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer 
                    = vlSelfRef.testharness__DOT__flash_boot_i__DOT__memory
                    [vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr];
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                    = (0xffffffU & ((IData)(1U) + vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr));
            }
        }
        if ((((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up) 
              & (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__write_enable)) 
             & (0x32U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)))) {
            if ((1U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__write_enable_reset = 1U;
            }
            if ((2U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                    = ((0xffffU & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                       | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                          << 0x10U));
            }
            if ((3U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                    = ((0xff00ffU & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                       | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                          << 8U));
            }
            if ((4U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                    = ((0xffff00U & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                       | (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer));
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode = 4U;
            }
            if ((VL_LTES_III(32, 5U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount) 
                 & VL_GTES_III(32, 0x104U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount))) {
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__memory[vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr] 
                    = vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer;
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                    = (0xffffffU & ((IData)(1U) + vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr));
            }
        }
        if (((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up) 
             & (0xedU == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)))) {
            if ((1U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__next_mode = 6U;
            }
            if ((2U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                    = ((0xffffU & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                       | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                          << 0x10U));
            }
            if ((3U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                    = ((0xff00ffU & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                       | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                          << 8U));
            }
            if ((4U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                    = ((0xffff00U & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                       | (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer));
            }
            if ((5U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__xip_cmd 
                    = ((0xa5U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer))
                        ? (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)
                        : 0U);
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode = 7U;
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__dummycount = 8U;
            }
            if (VL_LTES_III(32, 5U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer 
                    = vlSelfRef.testharness__DOT__flash_boot_i__DOT__memory
                    [vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr];
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                    = (0xffffffU & ((IData)(1U) + vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr));
            }
        }
        vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_out 
            = vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer;
    }
}

VL_INLINE_OPT void Vtestharness___024root___nba_sequent__TOP__32(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_sequent__TOP__32\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        VL_ASSIGNSEL_WI(256, 8, (0xffU & VL_SHIFTL_III(8,32,32, 
                                                       (0x1fU 
                                                        & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)), 3U)), vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage, vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_fifo_data);
    }
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT____Vlvbound_h82cb0da1__0 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__acq_fifo_wdata;
        if ((0x13fU >= (0x1ffU & ((IData)(0xaU) * (0x1fU 
                                                   & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))) {
            VL_ASSIGNSEL_WI(320, 10, (0x1ffU & ((IData)(0xaU) 
                                                * (0x1fU 
                                                   & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))), vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__storage, vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT____Vlvbound_h82cb0da1__0);
        }
    }
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        VL_ASSIGNSEL_WI(256, 8, (0xffU & VL_SHIFTL_III(8,32,32, 
                                                       (0x1fU 
                                                        & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)), 3U)), vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__storage, vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__rx_fifo_wdata);
    }
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT____Vlvbound_h743db6d2__0 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__fmt_fifo_wdata;
        if ((0x19fU >= (0x1ffU & ((IData)(0xdU) * (0x1fU 
                                                   & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))) {
            VL_ASSIGNSEL_WI(416, 13, (0x1ffU & ((IData)(0xdU) 
                                                * (0x1fU 
                                                   & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))), vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__storage, vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT____Vlvbound_h743db6d2__0);
        }
    }
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        VL_ASSIGNSEL_WI(256, 8, (0xffU & VL_SHIFTL_III(8,32,32, 
                                                       (0x1fU 
                                                        & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)), 3U)), vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage, vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_wdata__q);
    }
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        VL_ASSIGNSEL_WI(256, 8, (0xffU & VL_SHIFTL_III(8,32,32, 
                                                       (0x1fU 
                                                        & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)), 3U)), vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__storage, vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_txdata__q);
    }
}

extern const VlWide<29>/*927:0*/ Vtestharness__ConstPool__CONST_h9fecadc7_0;
extern const VlWide<56>/*1791:0*/ Vtestharness__ConstPool__CONST_hd3450429_0;

VL_INLINE_OPT void Vtestharness___024root___nba_sequent__TOP__33(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_sequent__TOP__33\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0U] = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[1U] = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[2U] = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U] 
        = ((0xffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U]) 
           | (Vtestharness__ConstPool__CONST_h9fecadc7_0[0U] 
              << 0x10U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[4U] 
        = ((Vtestharness__ConstPool__CONST_h9fecadc7_0[0U] 
            >> 0x10U) | (Vtestharness__ConstPool__CONST_h9fecadc7_0[1U] 
                         << 0x10U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[5U] 
        = ((Vtestharness__ConstPool__CONST_h9fecadc7_0[1U] 
            >> 0x10U) | (Vtestharness__ConstPool__CONST_h9fecadc7_0[2U] 
                         << 0x10U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[6U] 
        = ((Vtestharness__ConstPool__CONST_h9fecadc7_0[2U] 
            >> 0x10U) | (Vtestharness__ConstPool__CONST_h9fecadc7_0[3U] 
                         << 0x10U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[7U] 
        = ((Vtestharness__ConstPool__CONST_h9fecadc7_0[3U] 
            >> 0x10U) | (Vtestharness__ConstPool__CONST_h9fecadc7_0[4U] 
                         << 0x10U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[8U] 
        = ((Vtestharness__ConstPool__CONST_h9fecadc7_0[4U] 
            >> 0x10U) | (Vtestharness__ConstPool__CONST_h9fecadc7_0[5U] 
                         << 0x10U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[9U] 
        = ((Vtestharness__ConstPool__CONST_h9fecadc7_0[5U] 
            >> 0x10U) | (Vtestharness__ConstPool__CONST_h9fecadc7_0[6U] 
                         << 0x10U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0xaU] 
        = ((Vtestharness__ConstPool__CONST_h9fecadc7_0[6U] 
            >> 0x10U) | (Vtestharness__ConstPool__CONST_h9fecadc7_0[7U] 
                         << 0x10U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0xbU] 
        = ((Vtestharness__ConstPool__CONST_h9fecadc7_0[7U] 
            >> 0x10U) | (Vtestharness__ConstPool__CONST_h9fecadc7_0[8U] 
                         << 0x10U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0xcU] 
        = ((Vtestharness__ConstPool__CONST_h9fecadc7_0[8U] 
            >> 0x10U) | (Vtestharness__ConstPool__CONST_h9fecadc7_0[9U] 
                         << 0x10U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0xdU] 
        = ((Vtestharness__ConstPool__CONST_h9fecadc7_0[9U] 
            >> 0x10U) | (Vtestharness__ConstPool__CONST_h9fecadc7_0[0xaU] 
                         << 0x10U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0xeU] 
        = ((Vtestharness__ConstPool__CONST_h9fecadc7_0[0xaU] 
            >> 0x10U) | (Vtestharness__ConstPool__CONST_h9fecadc7_0[0xbU] 
                         << 0x10U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0xfU] 
        = ((Vtestharness__ConstPool__CONST_h9fecadc7_0[0xbU] 
            >> 0x10U) | (Vtestharness__ConstPool__CONST_h9fecadc7_0[0xcU] 
                         << 0x10U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x10U] 
        = ((Vtestharness__ConstPool__CONST_h9fecadc7_0[0xcU] 
            >> 0x10U) | (Vtestharness__ConstPool__CONST_h9fecadc7_0[0xdU] 
                         << 0x10U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x11U] 
        = ((Vtestharness__ConstPool__CONST_h9fecadc7_0[0xdU] 
            >> 0x10U) | (Vtestharness__ConstPool__CONST_h9fecadc7_0[0xeU] 
                         << 0x10U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x12U] 
        = ((Vtestharness__ConstPool__CONST_h9fecadc7_0[0xeU] 
            >> 0x10U) | (Vtestharness__ConstPool__CONST_h9fecadc7_0[0xfU] 
                         << 0x10U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x13U] 
        = ((Vtestharness__ConstPool__CONST_h9fecadc7_0[0xfU] 
            >> 0x10U) | (Vtestharness__ConstPool__CONST_h9fecadc7_0[0x10U] 
                         << 0x10U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x14U] 
        = ((Vtestharness__ConstPool__CONST_h9fecadc7_0[0x10U] 
            >> 0x10U) | (Vtestharness__ConstPool__CONST_h9fecadc7_0[0x11U] 
                         << 0x10U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x15U] 
        = ((Vtestharness__ConstPool__CONST_h9fecadc7_0[0x11U] 
            >> 0x10U) | (Vtestharness__ConstPool__CONST_h9fecadc7_0[0x12U] 
                         << 0x10U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x16U] 
        = ((Vtestharness__ConstPool__CONST_h9fecadc7_0[0x12U] 
            >> 0x10U) | (Vtestharness__ConstPool__CONST_h9fecadc7_0[0x13U] 
                         << 0x10U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x17U] 
        = ((Vtestharness__ConstPool__CONST_h9fecadc7_0[0x13U] 
            >> 0x10U) | (Vtestharness__ConstPool__CONST_h9fecadc7_0[0x14U] 
                         << 0x10U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x18U] 
        = ((Vtestharness__ConstPool__CONST_h9fecadc7_0[0x14U] 
            >> 0x10U) | (Vtestharness__ConstPool__CONST_h9fecadc7_0[0x15U] 
                         << 0x10U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x19U] 
        = ((Vtestharness__ConstPool__CONST_h9fecadc7_0[0x15U] 
            >> 0x10U) | (Vtestharness__ConstPool__CONST_h9fecadc7_0[0x16U] 
                         << 0x10U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x1aU] 
        = ((Vtestharness__ConstPool__CONST_h9fecadc7_0[0x16U] 
            >> 0x10U) | (Vtestharness__ConstPool__CONST_h9fecadc7_0[0x17U] 
                         << 0x10U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x1bU] 
        = ((Vtestharness__ConstPool__CONST_h9fecadc7_0[0x17U] 
            >> 0x10U) | (Vtestharness__ConstPool__CONST_h9fecadc7_0[0x18U] 
                         << 0x10U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x1cU] 
        = ((Vtestharness__ConstPool__CONST_h9fecadc7_0[0x18U] 
            >> 0x10U) | (Vtestharness__ConstPool__CONST_h9fecadc7_0[0x19U] 
                         << 0x10U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x1dU] 
        = ((Vtestharness__ConstPool__CONST_h9fecadc7_0[0x19U] 
            >> 0x10U) | (Vtestharness__ConstPool__CONST_h9fecadc7_0[0x1aU] 
                         << 0x10U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x1eU] 
        = ((Vtestharness__ConstPool__CONST_h9fecadc7_0[0x1aU] 
            >> 0x10U) | (Vtestharness__ConstPool__CONST_h9fecadc7_0[0x1bU] 
                         << 0x10U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x1fU] 
        = ((Vtestharness__ConstPool__CONST_h9fecadc7_0[0x1bU] 
            >> 0x10U) | (Vtestharness__ConstPool__CONST_h9fecadc7_0[0x1cU] 
                         << 0x10U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
        = (0xfffffffdU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q);
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
        = (0xfU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q);
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[2U] = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[3U] = 0U;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x37U)) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[(__Vilp1 
                                                                                + (IData)(8U))] 
            = Vtestharness__ConstPool__CONST_hd3450429_0[__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mcounteren_q = 0U;
}

VL_INLINE_OPT void Vtestharness___024root___nba_sequent__TOP__34(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_sequent__TOP__34\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_io1_90 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_io1_do;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_io0_90 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_io0_do;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_io2_90 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_io2_do;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_io3_90 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_io3_do;
}

VL_INLINE_OPT void Vtestharness___024root___nba_sequent__TOP__35(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_sequent__TOP__35\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_spi_flash_cs_0__DOT__pad__strong__out1)))) {
        if (VL_LTS_III(32, 0U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__dummycount)) {
            vlSelfRef.testharness__DOT__flash_boot_i__DOT__dummycount 
                = (vlSelfRef.testharness__DOT__flash_boot_i__DOT__dummycount 
                   - (IData)(1U));
        } else if ((1U & (~ ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode) 
                             >> 3U)))) {
            if ((4U & (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode))) {
                if ((2U & (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode))) {
                    if ((1U & (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode))) {
                        vlSelfRef.testharness__DOT__flash_boot_i__DOT__io0_oe = 1U;
                        vlSelfRef.testharness__DOT__flash_boot_i__DOT__io1_oe = 1U;
                        vlSelfRef.testharness__DOT__flash_boot_i__DOT__io2_oe = 1U;
                        vlSelfRef.testharness__DOT__flash_boot_i__DOT__io3_oe = 1U;
                        vlSelfRef.testharness__DOT__flash_boot_i__DOT__io0_dout 
                            = (1U & ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                     >> 4U));
                        vlSelfRef.testharness__DOT__flash_boot_i__DOT__io1_dout 
                            = (1U & ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                     >> 5U));
                        vlSelfRef.testharness__DOT__flash_boot_i__DOT__io2_dout 
                            = (1U & ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                     >> 6U));
                        vlSelfRef.testharness__DOT__flash_boot_i__DOT__io3_dout 
                            = (1U & ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                     >> 7U));
                        vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer 
                            = (0xf0U & ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                        << 4U));
                        vlSelfRef.testharness__DOT__flash_boot_i__DOT__bitcount 
                            = ((IData)(4U) + vlSelfRef.testharness__DOT__flash_boot_i__DOT__bitcount);
                        if ((8U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bitcount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount 
                                = ((IData)(1U) + vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount);
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__bitcount = 0U;
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_in 
                                = vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer;
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_io_vld = 1U;
                            if ((1U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd 
                                    = vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer;
                                if ((0xabU == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd))) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up = 1U;
                                }
                                if ((0xb9U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd))) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up = 0U;
                                }
                                if ((0xffU == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd))) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__xip_cmd = 0U;
                                }
                                if ((6U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd))) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__write_enable = 1U;
                                }
                            }
                            if (((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up) 
                                 & (3U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)))) {
                                if ((2U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xffffU 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                              << 0x10U));
                                }
                                if ((3U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xff00ffU 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                              << 8U));
                                }
                                if ((4U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xffff00U 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer));
                                }
                                if (VL_LTES_III(32, 4U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer 
                                        = vlSelfRef.testharness__DOT__flash_boot_i__DOT__memory
                                        [vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr];
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = (0xffffffU 
                                           & ((IData)(1U) 
                                              + vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr));
                                }
                            }
                            if ((((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up) 
                                  & (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__write_enable)) 
                                 & (2U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)))) {
                                if ((1U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__write_enable_reset = 1U;
                                }
                                if ((2U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xffffU 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                              << 0x10U));
                                }
                                if ((3U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xff00ffU 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                              << 8U));
                                }
                                if ((4U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xffff00U 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer));
                                }
                                if ((VL_LTES_III(32, 5U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount) 
                                     & VL_GTES_III(32, 0x104U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount))) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__memory[vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr] 
                                        = vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer;
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = (0xffffffU 
                                           & ((IData)(1U) 
                                              + vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr));
                                }
                            }
                            if (((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up) 
                                 & (0xbbU == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)))) {
                                if ((1U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode = 2U;
                                }
                                if ((2U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xffffU 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                              << 0x10U));
                                }
                                if ((3U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xff00ffU 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                              << 8U));
                                }
                                if ((4U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xffff00U 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer));
                                }
                                if ((5U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__xip_cmd 
                                        = ((0xa5U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer))
                                            ? (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)
                                            : 0U);
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode = 3U;
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__dummycount = 8U;
                                }
                                if (VL_LTES_III(32, 5U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer 
                                        = vlSelfRef.testharness__DOT__flash_boot_i__DOT__memory
                                        [vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr];
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = (0xffffffU 
                                           & ((IData)(1U) 
                                              + vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr));
                                }
                            }
                            if (((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up) 
                                 & (0xebU == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)))) {
                                if ((1U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode = 4U;
                                }
                                if ((2U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xffffU 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                              << 0x10U));
                                }
                                if ((3U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xff00ffU 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                              << 8U));
                                }
                                if ((4U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xffff00U 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer));
                                }
                                if ((5U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__xip_cmd 
                                        = ((0xa5U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer))
                                            ? (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)
                                            : 0U);
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode = 5U;
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__dummycount = 8U;
                                }
                                if (VL_LTES_III(32, 5U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer 
                                        = vlSelfRef.testharness__DOT__flash_boot_i__DOT__memory
                                        [vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr];
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = (0xffffffU 
                                           & ((IData)(1U) 
                                              + vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr));
                                }
                            }
                            if ((((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up) 
                                  & (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__write_enable)) 
                                 & (0x32U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)))) {
                                if ((1U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__write_enable_reset = 1U;
                                }
                                if ((2U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xffffU 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                              << 0x10U));
                                }
                                if ((3U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xff00ffU 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                              << 8U));
                                }
                                if ((4U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xffff00U 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer));
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode = 4U;
                                }
                                if ((VL_LTES_III(32, 5U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount) 
                                     & VL_GTES_III(32, 0x104U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount))) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__memory[vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr] 
                                        = vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer;
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = (0xffffffU 
                                           & ((IData)(1U) 
                                              + vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr));
                                }
                            }
                            if (((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up) 
                                 & (0xedU == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)))) {
                                if ((1U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__next_mode = 6U;
                                }
                                if ((2U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xffffU 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                              << 0x10U));
                                }
                                if ((3U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xff00ffU 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                              << 8U));
                                }
                                if ((4U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xffff00U 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer));
                                }
                                if ((5U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__xip_cmd 
                                        = ((0xa5U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer))
                                            ? (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)
                                            : 0U);
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode = 7U;
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__dummycount = 8U;
                                }
                                if (VL_LTES_III(32, 5U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer 
                                        = vlSelfRef.testharness__DOT__flash_boot_i__DOT__memory
                                        [vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr];
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = (0xffffffU 
                                           & ((IData)(1U) 
                                              + vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr));
                                }
                            }
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_out 
                                = vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer;
                        }
                    } else {
                        vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer 
                            = ((0xf0U & ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                         << 4U)) | 
                               ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__spi_flash_sd_3_in_x) 
                                  << 3U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__spi_flash_sd_2_in_x) 
                                            << 2U)) 
                                | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__spi_flash_sd_1_in_x) 
                                    << 1U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__spi_flash_sd_0_in_x))));
                        vlSelfRef.testharness__DOT__flash_boot_i__DOT__bitcount 
                            = ((IData)(4U) + vlSelfRef.testharness__DOT__flash_boot_i__DOT__bitcount);
                        if ((8U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bitcount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__bitcount = 0U;
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount 
                                = ((IData)(1U) + vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount);
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_io_vld = 1U;
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_in 
                                = vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer;
                            if ((1U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd 
                                    = vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer;
                                if ((0xabU == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd))) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up = 1U;
                                }
                                if ((0xb9U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd))) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up = 0U;
                                }
                                if ((0xffU == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd))) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__xip_cmd = 0U;
                                }
                                if ((6U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd))) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__write_enable = 1U;
                                }
                            }
                            if (((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up) 
                                 & (3U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)))) {
                                if ((2U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xffffU 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                              << 0x10U));
                                }
                                if ((3U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xff00ffU 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                              << 8U));
                                }
                                if ((4U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xffff00U 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer));
                                }
                                if (VL_LTES_III(32, 4U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer 
                                        = vlSelfRef.testharness__DOT__flash_boot_i__DOT__memory
                                        [vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr];
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = (0xffffffU 
                                           & ((IData)(1U) 
                                              + vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr));
                                }
                            }
                            if ((((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up) 
                                  & (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__write_enable)) 
                                 & (2U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)))) {
                                if ((1U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__write_enable_reset = 1U;
                                }
                                if ((2U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xffffU 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                              << 0x10U));
                                }
                                if ((3U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xff00ffU 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                              << 8U));
                                }
                                if ((4U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xffff00U 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer));
                                }
                                if ((VL_LTES_III(32, 5U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount) 
                                     & VL_GTES_III(32, 0x104U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount))) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__memory[vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr] 
                                        = vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer;
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = (0xffffffU 
                                           & ((IData)(1U) 
                                              + vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr));
                                }
                            }
                            if (((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up) 
                                 & (0xbbU == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)))) {
                                if ((1U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode = 2U;
                                }
                                if ((2U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xffffU 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                              << 0x10U));
                                }
                                if ((3U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xff00ffU 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                              << 8U));
                                }
                                if ((4U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xffff00U 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer));
                                }
                                if ((5U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__xip_cmd 
                                        = ((0xa5U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer))
                                            ? (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)
                                            : 0U);
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode = 3U;
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__dummycount = 8U;
                                }
                                if (VL_LTES_III(32, 5U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer 
                                        = vlSelfRef.testharness__DOT__flash_boot_i__DOT__memory
                                        [vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr];
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = (0xffffffU 
                                           & ((IData)(1U) 
                                              + vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr));
                                }
                            }
                            if (((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up) 
                                 & (0xebU == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)))) {
                                if ((1U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode = 4U;
                                }
                                if ((2U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xffffU 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                              << 0x10U));
                                }
                                if ((3U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xff00ffU 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                              << 8U));
                                }
                                if ((4U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xffff00U 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer));
                                }
                                if ((5U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__xip_cmd 
                                        = ((0xa5U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer))
                                            ? (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)
                                            : 0U);
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode = 5U;
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__dummycount = 8U;
                                }
                                if (VL_LTES_III(32, 5U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer 
                                        = vlSelfRef.testharness__DOT__flash_boot_i__DOT__memory
                                        [vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr];
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = (0xffffffU 
                                           & ((IData)(1U) 
                                              + vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr));
                                }
                            }
                            if ((((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up) 
                                  & (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__write_enable)) 
                                 & (0x32U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)))) {
                                if ((1U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__write_enable_reset = 1U;
                                }
                                if ((2U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xffffU 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                              << 0x10U));
                                }
                                if ((3U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xff00ffU 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                              << 8U));
                                }
                                if ((4U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xffff00U 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer));
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode = 4U;
                                }
                                if ((VL_LTES_III(32, 5U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount) 
                                     & VL_GTES_III(32, 0x104U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount))) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__memory[vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr] 
                                        = vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer;
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = (0xffffffU 
                                           & ((IData)(1U) 
                                              + vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr));
                                }
                            }
                            if (((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up) 
                                 & (0xedU == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)))) {
                                if ((1U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__next_mode = 6U;
                                }
                                if ((2U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xffffU 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                              << 0x10U));
                                }
                                if ((3U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xff00ffU 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                              << 8U));
                                }
                                if ((4U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xffff00U 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer));
                                }
                                if ((5U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__xip_cmd 
                                        = ((0xa5U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer))
                                            ? (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)
                                            : 0U);
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode = 7U;
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__dummycount = 8U;
                                }
                                if (VL_LTES_III(32, 5U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer 
                                        = vlSelfRef.testharness__DOT__flash_boot_i__DOT__memory
                                        [vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr];
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = (0xffffffU 
                                           & ((IData)(1U) 
                                              + vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr));
                                }
                            }
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_out 
                                = vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer;
                        }
                    }
                } else {
                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer 
                        = ((0xf0U & ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                     << 4U)) | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__spi_flash_sd_3_in_x) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__spi_flash_sd_2_in_x) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__spi_flash_sd_1_in_x) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__spi_flash_sd_0_in_x))));
                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__bitcount 
                        = ((IData)(4U) + vlSelfRef.testharness__DOT__flash_boot_i__DOT__bitcount);
                    if ((8U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bitcount)) {
                        vlSelfRef.testharness__DOT__flash_boot_i__DOT__bitcount = 0U;
                        vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount 
                            = ((IData)(1U) + vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount);
                        vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_io_vld = 1U;
                        vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_in 
                            = vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer;
                        if ((1U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd 
                                = vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer;
                            if ((0xabU == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd))) {
                                vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up = 1U;
                            }
                            if ((0xb9U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd))) {
                                vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up = 0U;
                            }
                            if ((0xffU == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd))) {
                                vlSelfRef.testharness__DOT__flash_boot_i__DOT__xip_cmd = 0U;
                            }
                            if ((6U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd))) {
                                vlSelfRef.testharness__DOT__flash_boot_i__DOT__write_enable = 1U;
                            }
                        }
                        if (((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up) 
                             & (3U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)))) {
                            if ((2U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                    = ((0xffffU & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                       | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                          << 0x10U));
                            }
                            if ((3U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                    = ((0xff00ffU & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                       | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                          << 8U));
                            }
                            if ((4U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                    = ((0xffff00U & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                       | (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer));
                            }
                            if (VL_LTES_III(32, 4U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer 
                                    = vlSelfRef.testharness__DOT__flash_boot_i__DOT__memory
                                    [vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr];
                                vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                    = (0xffffffU & 
                                       ((IData)(1U) 
                                        + vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr));
                            }
                        }
                        if ((((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up) 
                              & (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__write_enable)) 
                             & (2U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)))) {
                            if ((1U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                vlSelfRef.testharness__DOT__flash_boot_i__DOT__write_enable_reset = 1U;
                            }
                            if ((2U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                    = ((0xffffU & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                       | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                          << 0x10U));
                            }
                            if ((3U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                    = ((0xff00ffU & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                       | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                          << 8U));
                            }
                            if ((4U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                    = ((0xffff00U & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                       | (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer));
                            }
                            if ((VL_LTES_III(32, 5U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount) 
                                 & VL_GTES_III(32, 0x104U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount))) {
                                vlSelfRef.testharness__DOT__flash_boot_i__DOT__memory[vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr] 
                                    = vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer;
                                vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                    = (0xffffffU & 
                                       ((IData)(1U) 
                                        + vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr));
                            }
                        }
                        if (((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up) 
                             & (0xbbU == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)))) {
                            if ((1U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode = 2U;
                            }
                            if ((2U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                    = ((0xffffU & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                       | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                          << 0x10U));
                            }
                            if ((3U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                    = ((0xff00ffU & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                       | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                          << 8U));
                            }
                            if ((4U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                    = ((0xffff00U & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                       | (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer));
                            }
                            if ((5U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                vlSelfRef.testharness__DOT__flash_boot_i__DOT__xip_cmd 
                                    = ((0xa5U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer))
                                        ? (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)
                                        : 0U);
                                vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode = 3U;
                                vlSelfRef.testharness__DOT__flash_boot_i__DOT__dummycount = 8U;
                            }
                            if (VL_LTES_III(32, 5U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer 
                                    = vlSelfRef.testharness__DOT__flash_boot_i__DOT__memory
                                    [vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr];
                                vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                    = (0xffffffU & 
                                       ((IData)(1U) 
                                        + vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr));
                            }
                        }
                        if (((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up) 
                             & (0xebU == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)))) {
                            if ((1U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode = 4U;
                            }
                            if ((2U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                    = ((0xffffU & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                       | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                          << 0x10U));
                            }
                            if ((3U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                    = ((0xff00ffU & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                       | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                          << 8U));
                            }
                            if ((4U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                    = ((0xffff00U & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                       | (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer));
                            }
                            if ((5U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                vlSelfRef.testharness__DOT__flash_boot_i__DOT__xip_cmd 
                                    = ((0xa5U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer))
                                        ? (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)
                                        : 0U);
                                vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode = 5U;
                                vlSelfRef.testharness__DOT__flash_boot_i__DOT__dummycount = 8U;
                            }
                            if (VL_LTES_III(32, 5U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer 
                                    = vlSelfRef.testharness__DOT__flash_boot_i__DOT__memory
                                    [vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr];
                                vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                    = (0xffffffU & 
                                       ((IData)(1U) 
                                        + vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr));
                            }
                        }
                        if ((((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up) 
                              & (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__write_enable)) 
                             & (0x32U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)))) {
                            if ((1U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                vlSelfRef.testharness__DOT__flash_boot_i__DOT__write_enable_reset = 1U;
                            }
                            if ((2U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                    = ((0xffffU & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                       | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                          << 0x10U));
                            }
                            if ((3U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                    = ((0xff00ffU & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                       | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                          << 8U));
                            }
                            if ((4U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                    = ((0xffff00U & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                       | (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer));
                                vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode = 4U;
                            }
                            if ((VL_LTES_III(32, 5U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount) 
                                 & VL_GTES_III(32, 0x104U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount))) {
                                vlSelfRef.testharness__DOT__flash_boot_i__DOT__memory[vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr] 
                                    = vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer;
                                vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                    = (0xffffffU & 
                                       ((IData)(1U) 
                                        + vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr));
                            }
                        }
                        if (((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up) 
                             & (0xedU == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)))) {
                            if ((1U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                vlSelfRef.testharness__DOT__flash_boot_i__DOT__next_mode = 6U;
                            }
                            if ((2U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                    = ((0xffffU & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                       | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                          << 0x10U));
                            }
                            if ((3U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                    = ((0xff00ffU & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                       | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                          << 8U));
                            }
                            if ((4U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                    = ((0xffff00U & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                       | (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer));
                            }
                            if ((5U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                vlSelfRef.testharness__DOT__flash_boot_i__DOT__xip_cmd 
                                    = ((0xa5U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer))
                                        ? (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)
                                        : 0U);
                                vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode = 7U;
                                vlSelfRef.testharness__DOT__flash_boot_i__DOT__dummycount = 8U;
                            }
                            if (VL_LTES_III(32, 5U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer 
                                    = vlSelfRef.testharness__DOT__flash_boot_i__DOT__memory
                                    [vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr];
                                vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                    = (0xffffffU & 
                                       ((IData)(1U) 
                                        + vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr));
                            }
                        }
                        vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_out 
                            = vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer;
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode))) {
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer 
                    = ((0xfcU & ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                 << 2U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__spi_flash_sd_1_in_x) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__spi_flash_sd_0_in_x)));
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__bitcount 
                    = ((IData)(2U) + vlSelfRef.testharness__DOT__flash_boot_i__DOT__bitcount);
                if ((8U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bitcount)) {
                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__bitcount = 0U;
                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount 
                        = ((IData)(1U) + vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount);
                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_io_vld = 1U;
                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_in 
                        = vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer;
                    if ((1U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                        vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd 
                            = vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer;
                        if ((0xabU == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd))) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up = 1U;
                        }
                        if ((0xb9U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd))) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up = 0U;
                        }
                        if ((0xffU == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd))) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__xip_cmd = 0U;
                        }
                        if ((6U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd))) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__write_enable = 1U;
                        }
                    }
                    if (((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up) 
                         & (3U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)))) {
                        if ((2U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                = ((0xffffU & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                   | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                      << 0x10U));
                        }
                        if ((3U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                = ((0xff00ffU & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                   | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                      << 8U));
                        }
                        if ((4U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                = ((0xffff00U & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                   | (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer));
                        }
                        if (VL_LTES_III(32, 4U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer 
                                = vlSelfRef.testharness__DOT__flash_boot_i__DOT__memory
                                [vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr];
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                = (0xffffffU & ((IData)(1U) 
                                                + vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr));
                        }
                    }
                    if ((((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up) 
                          & (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__write_enable)) 
                         & (2U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)))) {
                        if ((1U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__write_enable_reset = 1U;
                        }
                        if ((2U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                = ((0xffffU & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                   | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                      << 0x10U));
                        }
                        if ((3U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                = ((0xff00ffU & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                   | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                      << 8U));
                        }
                        if ((4U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                = ((0xffff00U & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                   | (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer));
                        }
                        if ((VL_LTES_III(32, 5U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount) 
                             & VL_GTES_III(32, 0x104U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount))) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__memory[vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr] 
                                = vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer;
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                = (0xffffffU & ((IData)(1U) 
                                                + vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr));
                        }
                    }
                    if (((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up) 
                         & (0xbbU == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)))) {
                        if ((1U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode = 2U;
                        }
                        if ((2U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                = ((0xffffU & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                   | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                      << 0x10U));
                        }
                        if ((3U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                = ((0xff00ffU & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                   | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                      << 8U));
                        }
                        if ((4U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                = ((0xffff00U & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                   | (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer));
                        }
                        if ((5U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__xip_cmd 
                                = ((0xa5U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer))
                                    ? (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)
                                    : 0U);
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode = 3U;
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__dummycount = 8U;
                        }
                        if (VL_LTES_III(32, 5U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer 
                                = vlSelfRef.testharness__DOT__flash_boot_i__DOT__memory
                                [vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr];
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                = (0xffffffU & ((IData)(1U) 
                                                + vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr));
                        }
                    }
                    if (((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up) 
                         & (0xebU == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)))) {
                        if ((1U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode = 4U;
                        }
                        if ((2U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                = ((0xffffU & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                   | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                      << 0x10U));
                        }
                        if ((3U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                = ((0xff00ffU & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                   | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                      << 8U));
                        }
                        if ((4U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                = ((0xffff00U & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                   | (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer));
                        }
                        if ((5U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__xip_cmd 
                                = ((0xa5U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer))
                                    ? (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)
                                    : 0U);
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode = 5U;
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__dummycount = 8U;
                        }
                        if (VL_LTES_III(32, 5U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer 
                                = vlSelfRef.testharness__DOT__flash_boot_i__DOT__memory
                                [vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr];
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                = (0xffffffU & ((IData)(1U) 
                                                + vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr));
                        }
                    }
                    if ((((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up) 
                          & (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__write_enable)) 
                         & (0x32U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)))) {
                        if ((1U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__write_enable_reset = 1U;
                        }
                        if ((2U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                = ((0xffffU & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                   | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                      << 0x10U));
                        }
                        if ((3U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                = ((0xff00ffU & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                   | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                      << 8U));
                        }
                        if ((4U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                = ((0xffff00U & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                   | (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer));
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode = 4U;
                        }
                        if ((VL_LTES_III(32, 5U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount) 
                             & VL_GTES_III(32, 0x104U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount))) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__memory[vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr] 
                                = vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer;
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                = (0xffffffU & ((IData)(1U) 
                                                + vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr));
                        }
                    }
                    if (((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up) 
                         & (0xedU == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)))) {
                        if ((1U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__next_mode = 6U;
                        }
                        if ((2U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                = ((0xffffU & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                   | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                      << 0x10U));
                        }
                        if ((3U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                = ((0xff00ffU & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                   | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                      << 8U));
                        }
                        if ((4U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                = ((0xffff00U & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                   | (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer));
                        }
                        if ((5U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__xip_cmd 
                                = ((0xa5U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer))
                                    ? (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)
                                    : 0U);
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode = 7U;
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__dummycount = 8U;
                        }
                        if (VL_LTES_III(32, 5U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer 
                                = vlSelfRef.testharness__DOT__flash_boot_i__DOT__memory
                                [vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr];
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                = (0xffffffU & ((IData)(1U) 
                                                + vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr));
                        }
                    }
                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_out 
                        = vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer;
                }
            } else if ((1U & (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode))) {
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer 
                    = ((0xfeU & ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                 << 1U)) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__spi_flash_sd_0_in_x));
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__bitcount 
                    = ((IData)(1U) + vlSelfRef.testharness__DOT__flash_boot_i__DOT__bitcount);
                if ((8U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bitcount)) {
                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__bitcount = 0U;
                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount 
                        = ((IData)(1U) + vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount);
                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_io_vld = 1U;
                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_in 
                        = vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer;
                    if ((1U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                        vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd 
                            = vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer;
                        if ((0xabU == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd))) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up = 1U;
                        }
                        if ((0xb9U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd))) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up = 0U;
                        }
                        if ((0xffU == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd))) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__xip_cmd = 0U;
                        }
                        if ((6U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd))) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__write_enable = 1U;
                        }
                    }
                    if (((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up) 
                         & (3U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)))) {
                        if ((2U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                = ((0xffffU & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                   | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                      << 0x10U));
                        }
                        if ((3U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                = ((0xff00ffU & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                   | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                      << 8U));
                        }
                        if ((4U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                = ((0xffff00U & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                   | (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer));
                        }
                        if (VL_LTES_III(32, 4U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer 
                                = vlSelfRef.testharness__DOT__flash_boot_i__DOT__memory
                                [vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr];
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                = (0xffffffU & ((IData)(1U) 
                                                + vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr));
                        }
                    }
                    if ((((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up) 
                          & (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__write_enable)) 
                         & (2U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)))) {
                        if ((1U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__write_enable_reset = 1U;
                        }
                        if ((2U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                = ((0xffffU & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                   | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                      << 0x10U));
                        }
                        if ((3U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                = ((0xff00ffU & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                   | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                      << 8U));
                        }
                        if ((4U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                = ((0xffff00U & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                   | (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer));
                        }
                        if ((VL_LTES_III(32, 5U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount) 
                             & VL_GTES_III(32, 0x104U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount))) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__memory[vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr] 
                                = vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer;
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                = (0xffffffU & ((IData)(1U) 
                                                + vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr));
                        }
                    }
                    if (((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up) 
                         & (0xbbU == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)))) {
                        if ((1U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode = 2U;
                        }
                        if ((2U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                = ((0xffffU & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                   | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                      << 0x10U));
                        }
                        if ((3U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                = ((0xff00ffU & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                   | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                      << 8U));
                        }
                        if ((4U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                = ((0xffff00U & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                   | (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer));
                        }
                        if ((5U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__xip_cmd 
                                = ((0xa5U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer))
                                    ? (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)
                                    : 0U);
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode = 3U;
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__dummycount = 8U;
                        }
                        if (VL_LTES_III(32, 5U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer 
                                = vlSelfRef.testharness__DOT__flash_boot_i__DOT__memory
                                [vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr];
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                = (0xffffffU & ((IData)(1U) 
                                                + vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr));
                        }
                    }
                    if (((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up) 
                         & (0xebU == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)))) {
                        if ((1U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode = 4U;
                        }
                        if ((2U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                = ((0xffffU & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                   | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                      << 0x10U));
                        }
                        if ((3U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                = ((0xff00ffU & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                   | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                      << 8U));
                        }
                        if ((4U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                = ((0xffff00U & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                   | (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer));
                        }
                        if ((5U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__xip_cmd 
                                = ((0xa5U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer))
                                    ? (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)
                                    : 0U);
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode = 5U;
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__dummycount = 8U;
                        }
                        if (VL_LTES_III(32, 5U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer 
                                = vlSelfRef.testharness__DOT__flash_boot_i__DOT__memory
                                [vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr];
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                = (0xffffffU & ((IData)(1U) 
                                                + vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr));
                        }
                    }
                    if ((((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up) 
                          & (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__write_enable)) 
                         & (0x32U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)))) {
                        if ((1U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__write_enable_reset = 1U;
                        }
                        if ((2U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                = ((0xffffU & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                   | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                      << 0x10U));
                        }
                        if ((3U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                = ((0xff00ffU & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                   | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                      << 8U));
                        }
                        if ((4U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                = ((0xffff00U & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                   | (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer));
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode = 4U;
                        }
                        if ((VL_LTES_III(32, 5U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount) 
                             & VL_GTES_III(32, 0x104U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount))) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__memory[vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr] 
                                = vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer;
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                = (0xffffffU & ((IData)(1U) 
                                                + vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr));
                        }
                    }
                    if (((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up) 
                         & (0xedU == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)))) {
                        if ((1U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__next_mode = 6U;
                        }
                        if ((2U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                = ((0xffffU & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                   | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                      << 0x10U));
                        }
                        if ((3U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                = ((0xff00ffU & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                   | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                      << 8U));
                        }
                        if ((4U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                = ((0xffff00U & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                   | (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer));
                        }
                        if ((5U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__xip_cmd 
                                = ((0xa5U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer))
                                    ? (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)
                                    : 0U);
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode = 7U;
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__dummycount = 8U;
                        }
                        if (VL_LTES_III(32, 5U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer 
                                = vlSelfRef.testharness__DOT__flash_boot_i__DOT__memory
                                [vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr];
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                = (0xffffffU & ((IData)(1U) 
                                                + vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr));
                        }
                    }
                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_out 
                        = vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer;
                }
            }
        }
    }
}

VL_INLINE_OPT void Vtestharness___024root___nba_sequent__TOP__36(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_sequent__TOP__36\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_io_vld = 0U;
    if ((1U & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_spi_flash_cs_0__DOT__pad__strong__out1)) 
               & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_spi_flash_sck__DOT__pad__strong__out1))))) {
        if (VL_LTS_III(32, 0U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__dummycount)) {
            vlSelfRef.testharness__DOT__flash_boot_i__DOT__io0_oe = 0U;
            vlSelfRef.testharness__DOT__flash_boot_i__DOT__io1_oe = 0U;
            vlSelfRef.testharness__DOT__flash_boot_i__DOT__io2_oe = 0U;
            vlSelfRef.testharness__DOT__flash_boot_i__DOT__io3_oe = 0U;
        } else if ((1U & (~ ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode) 
                             >> 3U)))) {
            if ((4U & (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode))) {
                if ((2U & (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode))) {
                    if ((1U & (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode))) {
                        vlSelfRef.testharness__DOT__flash_boot_i__DOT__io0_oe = 1U;
                        vlSelfRef.testharness__DOT__flash_boot_i__DOT__io1_oe = 1U;
                        vlSelfRef.testharness__DOT__flash_boot_i__DOT__io2_oe = 1U;
                        vlSelfRef.testharness__DOT__flash_boot_i__DOT__io3_oe = 1U;
                        vlSelfRef.testharness__DOT__flash_boot_i__DOT__io0_dout 
                            = (1U & ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                     >> 4U));
                        vlSelfRef.testharness__DOT__flash_boot_i__DOT__io1_dout 
                            = (1U & ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                     >> 5U));
                        vlSelfRef.testharness__DOT__flash_boot_i__DOT__io2_dout 
                            = (1U & ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                     >> 6U));
                        vlSelfRef.testharness__DOT__flash_boot_i__DOT__io3_dout 
                            = (1U & ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                     >> 7U));
                        vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer 
                            = (0xf0U & ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                        << 4U));
                        vlSelfRef.testharness__DOT__flash_boot_i__DOT__bitcount 
                            = ((IData)(4U) + vlSelfRef.testharness__DOT__flash_boot_i__DOT__bitcount);
                        if ((8U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bitcount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount 
                                = ((IData)(1U) + vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount);
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__bitcount = 0U;
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_in 
                                = vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer;
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_io_vld = 1U;
                            if ((1U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd 
                                    = vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer;
                                if ((0xabU == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd))) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up = 1U;
                                }
                                if ((0xb9U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd))) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up = 0U;
                                }
                                if ((0xffU == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd))) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__xip_cmd = 0U;
                                }
                                if ((6U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd))) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__write_enable = 1U;
                                }
                            }
                            if (((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up) 
                                 & (3U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)))) {
                                if ((2U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xffffU 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                              << 0x10U));
                                }
                                if ((3U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xff00ffU 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                              << 8U));
                                }
                                if ((4U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xffff00U 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer));
                                }
                                if (VL_LTES_III(32, 4U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer 
                                        = vlSelfRef.testharness__DOT__flash_boot_i__DOT__memory
                                        [vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr];
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = (0xffffffU 
                                           & ((IData)(1U) 
                                              + vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr));
                                }
                            }
                            if ((((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up) 
                                  & (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__write_enable)) 
                                 & (2U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)))) {
                                if ((1U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__write_enable_reset = 1U;
                                }
                                if ((2U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xffffU 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                              << 0x10U));
                                }
                                if ((3U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xff00ffU 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                              << 8U));
                                }
                                if ((4U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xffff00U 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer));
                                }
                                if ((VL_LTES_III(32, 5U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount) 
                                     & VL_GTES_III(32, 0x104U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount))) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__memory[vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr] 
                                        = vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer;
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = (0xffffffU 
                                           & ((IData)(1U) 
                                              + vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr));
                                }
                            }
                            if (((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up) 
                                 & (0xbbU == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)))) {
                                if ((1U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode = 2U;
                                }
                                if ((2U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xffffU 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                              << 0x10U));
                                }
                                if ((3U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xff00ffU 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                              << 8U));
                                }
                                if ((4U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xffff00U 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer));
                                }
                                if ((5U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__xip_cmd 
                                        = ((0xa5U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer))
                                            ? (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)
                                            : 0U);
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode = 3U;
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__dummycount = 8U;
                                }
                                if (VL_LTES_III(32, 5U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer 
                                        = vlSelfRef.testharness__DOT__flash_boot_i__DOT__memory
                                        [vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr];
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = (0xffffffU 
                                           & ((IData)(1U) 
                                              + vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr));
                                }
                            }
                            if (((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up) 
                                 & (0xebU == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)))) {
                                if ((1U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode = 4U;
                                }
                                if ((2U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xffffU 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                              << 0x10U));
                                }
                                if ((3U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xff00ffU 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                              << 8U));
                                }
                                if ((4U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xffff00U 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer));
                                }
                                if ((5U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__xip_cmd 
                                        = ((0xa5U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer))
                                            ? (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)
                                            : 0U);
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode = 5U;
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__dummycount = 8U;
                                }
                                if (VL_LTES_III(32, 5U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer 
                                        = vlSelfRef.testharness__DOT__flash_boot_i__DOT__memory
                                        [vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr];
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = (0xffffffU 
                                           & ((IData)(1U) 
                                              + vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr));
                                }
                            }
                            if ((((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up) 
                                  & (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__write_enable)) 
                                 & (0x32U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)))) {
                                if ((1U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__write_enable_reset = 1U;
                                }
                                if ((2U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xffffU 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                              << 0x10U));
                                }
                                if ((3U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xff00ffU 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                              << 8U));
                                }
                                if ((4U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xffff00U 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer));
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode = 4U;
                                }
                                if ((VL_LTES_III(32, 5U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount) 
                                     & VL_GTES_III(32, 0x104U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount))) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__memory[vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr] 
                                        = vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer;
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = (0xffffffU 
                                           & ((IData)(1U) 
                                              + vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr));
                                }
                            }
                            if (((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up) 
                                 & (0xedU == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)))) {
                                if ((1U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__next_mode = 6U;
                                }
                                if ((2U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xffffU 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                              << 0x10U));
                                }
                                if ((3U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xff00ffU 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                              << 8U));
                                }
                                if ((4U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xffff00U 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer));
                                }
                                if ((5U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__xip_cmd 
                                        = ((0xa5U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer))
                                            ? (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)
                                            : 0U);
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode = 7U;
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__dummycount = 8U;
                                }
                                if (VL_LTES_III(32, 5U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer 
                                        = vlSelfRef.testharness__DOT__flash_boot_i__DOT__memory
                                        [vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr];
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = (0xffffffU 
                                           & ((IData)(1U) 
                                              + vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr));
                                }
                            }
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_out 
                                = vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer;
                        }
                    } else {
                        vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer 
                            = ((0xf0U & ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                         << 4U)) | 
                               ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__spi_flash_sd_3_in_x) 
                                  << 3U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__spi_flash_sd_2_in_x) 
                                            << 2U)) 
                                | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__spi_flash_sd_1_in_x) 
                                    << 1U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__spi_flash_sd_0_in_x))));
                        vlSelfRef.testharness__DOT__flash_boot_i__DOT__bitcount 
                            = ((IData)(4U) + vlSelfRef.testharness__DOT__flash_boot_i__DOT__bitcount);
                        if ((8U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bitcount)) {
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__bitcount = 0U;
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount 
                                = ((IData)(1U) + vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount);
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_io_vld = 1U;
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_in 
                                = vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer;
                            if ((1U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd 
                                    = vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer;
                                if ((0xabU == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd))) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up = 1U;
                                }
                                if ((0xb9U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd))) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up = 0U;
                                }
                                if ((0xffU == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd))) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__xip_cmd = 0U;
                                }
                                if ((6U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd))) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__write_enable = 1U;
                                }
                            }
                            if (((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up) 
                                 & (3U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)))) {
                                if ((2U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xffffU 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                              << 0x10U));
                                }
                                if ((3U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xff00ffU 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                              << 8U));
                                }
                                if ((4U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xffff00U 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer));
                                }
                                if (VL_LTES_III(32, 4U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer 
                                        = vlSelfRef.testharness__DOT__flash_boot_i__DOT__memory
                                        [vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr];
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = (0xffffffU 
                                           & ((IData)(1U) 
                                              + vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr));
                                }
                            }
                            if ((((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up) 
                                  & (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__write_enable)) 
                                 & (2U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)))) {
                                if ((1U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__write_enable_reset = 1U;
                                }
                                if ((2U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xffffU 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                              << 0x10U));
                                }
                                if ((3U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xff00ffU 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                              << 8U));
                                }
                                if ((4U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xffff00U 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer));
                                }
                                if ((VL_LTES_III(32, 5U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount) 
                                     & VL_GTES_III(32, 0x104U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount))) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__memory[vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr] 
                                        = vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer;
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = (0xffffffU 
                                           & ((IData)(1U) 
                                              + vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr));
                                }
                            }
                            if (((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up) 
                                 & (0xbbU == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)))) {
                                if ((1U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode = 2U;
                                }
                                if ((2U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xffffU 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                              << 0x10U));
                                }
                                if ((3U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xff00ffU 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                              << 8U));
                                }
                                if ((4U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xffff00U 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer));
                                }
                                if ((5U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__xip_cmd 
                                        = ((0xa5U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer))
                                            ? (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)
                                            : 0U);
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode = 3U;
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__dummycount = 8U;
                                }
                                if (VL_LTES_III(32, 5U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer 
                                        = vlSelfRef.testharness__DOT__flash_boot_i__DOT__memory
                                        [vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr];
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = (0xffffffU 
                                           & ((IData)(1U) 
                                              + vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr));
                                }
                            }
                            if (((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up) 
                                 & (0xebU == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)))) {
                                if ((1U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode = 4U;
                                }
                                if ((2U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xffffU 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                              << 0x10U));
                                }
                                if ((3U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xff00ffU 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                              << 8U));
                                }
                                if ((4U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xffff00U 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer));
                                }
                                if ((5U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__xip_cmd 
                                        = ((0xa5U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer))
                                            ? (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)
                                            : 0U);
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode = 5U;
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__dummycount = 8U;
                                }
                                if (VL_LTES_III(32, 5U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer 
                                        = vlSelfRef.testharness__DOT__flash_boot_i__DOT__memory
                                        [vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr];
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = (0xffffffU 
                                           & ((IData)(1U) 
                                              + vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr));
                                }
                            }
                            if ((((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up) 
                                  & (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__write_enable)) 
                                 & (0x32U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)))) {
                                if ((1U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__write_enable_reset = 1U;
                                }
                                if ((2U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xffffU 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                              << 0x10U));
                                }
                                if ((3U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xff00ffU 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                              << 8U));
                                }
                                if ((4U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xffff00U 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer));
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode = 4U;
                                }
                                if ((VL_LTES_III(32, 5U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount) 
                                     & VL_GTES_III(32, 0x104U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount))) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__memory[vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr] 
                                        = vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer;
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = (0xffffffU 
                                           & ((IData)(1U) 
                                              + vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr));
                                }
                            }
                            if (((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__powered_up) 
                                 & (0xedU == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)))) {
                                if ((1U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__next_mode = 6U;
                                }
                                if ((2U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xffffU 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                              << 0x10U));
                                }
                                if ((3U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xff00ffU 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                              << 8U));
                                }
                                if ((4U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = ((0xffff00U 
                                            & vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr) 
                                           | (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer));
                                }
                                if ((5U == vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__xip_cmd 
                                        = ((0xa5U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer))
                                            ? (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_cmd)
                                            : 0U);
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode = 7U;
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__dummycount = 8U;
                                }
                                if (VL_LTES_III(32, 5U, vlSelfRef.testharness__DOT__flash_boot_i__DOT__bytecount)) {
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer 
                                        = vlSelfRef.testharness__DOT__flash_boot_i__DOT__memory
                                        [vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr];
                                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr 
                                        = (0xffffffU 
                                           & ((IData)(1U) 
                                              + vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_addr));
                                }
                            }
                            vlSelfRef.testharness__DOT__flash_boot_i__DOT__spi_out 
                                = vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer;
                        }
                    }
                } else if ((1U & (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode))) {
                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__io0_oe = 1U;
                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__io1_oe = 1U;
                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__io2_oe = 1U;
                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__io3_oe = 1U;
                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__io0_dout 
                        = (1U & ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                 >> 4U));
                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__io1_dout 
                        = (1U & ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                 >> 5U));
                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__io2_dout 
                        = (1U & ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                 >> 6U));
                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__io3_dout 
                        = (1U & ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                 >> 7U));
                } else {
                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__io0_oe = 0U;
                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__io1_oe = 0U;
                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__io2_oe = 0U;
                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__io3_oe = 0U;
                }
            } else if ((2U & (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode))) {
                if ((1U & (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode))) {
                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__io0_oe = 1U;
                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__io1_oe = 1U;
                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__io2_oe = 0U;
                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__io3_oe = 0U;
                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__io0_dout 
                        = (1U & ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                 >> 6U));
                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__io1_dout 
                        = (1U & ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                                 >> 7U));
                } else {
                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__io0_oe = 0U;
                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__io1_oe = 0U;
                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__io2_oe = 0U;
                    vlSelfRef.testharness__DOT__flash_boot_i__DOT__io3_oe = 0U;
                }
            } else if ((1U & (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode))) {
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__io0_oe = 0U;
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__io1_oe = 1U;
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__io2_oe = 0U;
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__io3_oe = 0U;
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__io1_dout 
                    = (1U & ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                             >> 7U));
            }
        }
        if ((0U != (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__next_mode))) {
            if ((6U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__next_mode))) {
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__io0_oe = 0U;
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__io1_oe = 0U;
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__io2_oe = 0U;
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__io3_oe = 0U;
            } else if ((7U == (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__next_mode))) {
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__io0_oe = 1U;
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__io1_oe = 1U;
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__io2_oe = 1U;
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__io3_oe = 1U;
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__io0_dout 
                    = (1U & ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                             >> 4U));
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__io1_dout 
                    = (1U & ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                             >> 5U));
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__io2_dout 
                    = (1U & ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                             >> 6U));
                vlSelfRef.testharness__DOT__flash_boot_i__DOT__io3_dout 
                    = (1U & ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__buffer) 
                             >> 7U));
            }
            vlSelfRef.testharness__DOT__flash_boot_i__DOT__mode 
                = vlSelfRef.testharness__DOT__flash_boot_i__DOT__next_mode;
            vlSelfRef.testharness__DOT__flash_boot_i__DOT__next_mode = 0U;
        }
    }
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__0(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx16;
    __Vtableidx16 = 0;
    // Body
    __Vtableidx16 = (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_isolate_ack_q) 
                      << 6U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_clear_ack_q) 
                                 << 5U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack) 
                                            << 4U) 
                                           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_state_q))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_state_d 
        = Vtestharness__ConstPool__TABLE_h91c53a88_0
        [__Vtableidx16];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_req 
        = Vtestharness__ConstPool__TABLE_h12fb7f65_0
        [__Vtableidx16];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_isolate_out 
        = Vtestharness__ConstPool__TABLE_h94fae42f_0
        [__Vtableidx16];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_clear_out 
        = Vtestharness__ConstPool__TABLE_h0dca7f75_0
        [__Vtableidx16];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_clear_seq_phase 
        = Vtestharness__ConstPool__TABLE_hd63cede0_0
        [__Vtableidx16];
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__1(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__1\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    // Body
    __Vtableidx12 = (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_isolate_ack_q) 
                      << 6U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_clear_ack_q) 
                                 << 5U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack) 
                                            << 4U) 
                                           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_state_q))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_state_d 
        = Vtestharness__ConstPool__TABLE_h91c53a88_0
        [__Vtableidx12];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_req 
        = Vtestharness__ConstPool__TABLE_h12fb7f65_0
        [__Vtableidx12];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_isolate_out 
        = Vtestharness__ConstPool__TABLE_h94fae42f_0
        [__Vtableidx12];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_clear_out 
        = Vtestharness__ConstPool__TABLE_h0dca7f75_0
        [__Vtableidx12];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_clear_seq_phase 
        = Vtestharness__ConstPool__TABLE_hd63cede0_0
        [__Vtableidx12];
}

VL_INLINE_OPT void Vtestharness___024root___nba_sequent__TOP__38(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_sequent__TOP__38\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__ctrl_data_rx_valid) 
          & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__ready_a)) 
         & (0U == (0xfU & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_bin))))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__data_q[0U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__rx_data;
    }
    if ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__ctrl_data_rx_valid) 
          & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__ready_a)) 
         & (1U == (0xfU & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_bin))))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__data_q[1U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__rx_data;
    }
    if ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__ctrl_data_rx_valid) 
          & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__ready_a)) 
         & (2U == (0xfU & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_bin))))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__data_q[2U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__rx_data;
    }
    if ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__ctrl_data_rx_valid) 
          & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__ready_a)) 
         & (3U == (0xfU & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_bin))))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__data_q[3U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__rx_data;
    }
    if ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__ctrl_data_rx_valid) 
          & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__ready_a)) 
         & (4U == (0xfU & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_bin))))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__data_q[4U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__rx_data;
    }
    if ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__ctrl_data_rx_valid) 
          & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__ready_a)) 
         & (5U == (0xfU & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_bin))))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__data_q[5U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__rx_data;
    }
    if ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__ctrl_data_rx_valid) 
          & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__ready_a)) 
         & (6U == (0xfU & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_bin))))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__data_q[6U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__rx_data;
    }
    if ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__ctrl_data_rx_valid) 
          & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__ready_a)) 
         & (7U == (0xfU & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_bin))))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__data_q[7U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__rx_data;
    }
    if ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__ctrl_data_rx_valid) 
          & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__ready_a)) 
         & (8U == (0xfU & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_bin))))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__data_q[8U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__rx_data;
    }
    if ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__ctrl_data_rx_valid) 
          & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__ready_a)) 
         & (9U == (0xfU & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_bin))))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__data_q[9U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__rx_data;
    }
    if ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__ctrl_data_rx_valid) 
          & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__ready_a)) 
         & (0xaU == (0xfU & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_bin))))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__data_q[0xaU] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__rx_data;
    }
    if ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__ctrl_data_rx_valid) 
          & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__ready_a)) 
         & (0xbU == (0xfU & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_bin))))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__data_q[0xbU] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__rx_data;
    }
    if ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__ctrl_data_rx_valid) 
          & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__ready_a)) 
         & (0xcU == (0xfU & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_bin))))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__data_q[0xcU] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__rx_data;
    }
    if ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__ctrl_data_rx_valid) 
          & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__ready_a)) 
         & (0xdU == (0xfU & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_bin))))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__data_q[0xdU] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__rx_data;
    }
    if ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__ctrl_data_rx_valid) 
          & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__ready_a)) 
         & (0xeU == (0xfU & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_bin))))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__data_q[0xeU] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__rx_data;
    }
    if ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__ctrl_data_rx_valid) 
          & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__ready_a)) 
         & (0xfU == (0xfU & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_bin))))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__data_q[0xfU] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__rx_data;
    }
}

VL_INLINE_OPT void Vtestharness___024root___nba_sequent__TOP__39(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_sequent__TOP__39\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdfgRegularize_h495687df_0_71;
    __VdfgRegularize_h495687df_0_71 = 0;
    // Body
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_fifo_i__DOT__consumer_state_q) {
        if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_fifo_i__DOT__consumer_state_q) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[0U] 
                = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_fifo_i__DOT__consumer_data_req_q[0U];
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U] 
                = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_fifo_i__DOT__consumer_data_req_q[1U];
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[2U] 
                = (0x20U | vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_fifo_i__DOT__consumer_data_req_q[2U]);
        } else {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[0U] 
                = vlSelfRef.__VdfgRegularize_h495687df_0_307[0U];
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U] 
                = vlSelfRef.__VdfgRegularize_h495687df_0_307[1U];
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[2U] 
                = vlSelfRef.__VdfgRegularize_h495687df_0_307[2U];
        }
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[0U] 
            = vlSelfRef.__VdfgRegularize_h495687df_0_307[0U];
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U] 
            = vlSelfRef.__VdfgRegularize_h495687df_0_307[1U];
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[2U] 
            = vlSelfRef.__VdfgRegularize_h495687df_0_307[2U];
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart 
        = (1U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                 >> 0x10U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__haltreq = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__resumereq = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__haltreq 
        = (((~ ((IData)(1U) << (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) 
            & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__haltreq)) 
           | (3U & ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                     >> 0x1fU) << (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__resumereq 
        = (((~ ((IData)(1U) << (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) 
            & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__resumereq)) 
           | (3U & ((1U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                           >> 0x1eU)) << (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__ack_dst_q 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__rstgen_i__DOT__init_no) 
           && (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__req_src_q 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__rstgen_i__DOT__init_no) 
           && (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__req_src_d));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__ack_dst_q 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__rstgen_i__DOT__init_no) 
           && (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__req_src_q 
        = ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__rstgen_i__DOT__init_no))) 
           || (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__req_src_d));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__req_src_q 
        = ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__rstgen_i__DOT__init_no))) 
           || (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__req_src_d));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__ack_dst_q 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__rstgen_i__DOT__init_no) 
           && (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__ack_dst_d));
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__rstgen_i__DOT__init_no) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_q 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_d;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_q 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_d;
        if (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__dst_valid) 
             & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__dst_ready))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__rptr_q 
                = (0x1fU & (((IData)(1U) + (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__rptr_bin)) 
                            ^ VL_SHIFTR_III(5,5,32, 
                                            (0x1fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__rptr_bin))), 1U)));
        }
        if (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__fifo_data_tx_valid) 
             & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__fifo_data_tx_ready))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_q 
                = (0x1fU & (((IData)(1U) + (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_bin)) 
                            ^ VL_SHIFTR_III(5,5,32, 
                                            (0x1fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_bin))), 1U)));
        }
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_q = 1U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_q = 1U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__rptr_q = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_q = 0U;
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__dec_valid_o = 0U;
    if (((0x40000000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U]) 
         & (0x41000000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__dec_valid_o = 1U;
    }
    if (((0x30000000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U]) 
         & (0x30100000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__dec_valid_o = 1U;
    }
    if (((0x20000000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U]) 
         & (0x20100000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__dec_valid_o = 1U;
    }
    if (((0x10000000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U]) 
         & (0x10100000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__dec_valid_o = 1U;
    }
    if (((0x10000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U]) 
         & (0x50000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__dec_valid_o = 1U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__dec_valid_o = 1U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__dec_valid_o = 1U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__dec_valid_o = 1U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__dec_valid_o = 1U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__dec_valid_o = 1U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__dec_valid_o = 1U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__dec_valid_o = 1U;
    }
    if (((0x8000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U]) 
         & (0x10000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__dec_valid_o = 1U;
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__i_addr_decode_dync__DOT__matched_rules = 0U;
    if (((0x40000000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U]) 
         & (0x41000000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__i_addr_decode_dync__DOT__matched_rules 
            = (1U | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__i_addr_decode_dync__DOT__matched_rules));
    }
    if (((0x30000000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U]) 
         & (0x30100000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__i_addr_decode_dync__DOT__matched_rules 
            = (2U | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__i_addr_decode_dync__DOT__matched_rules));
    }
    if (((0x20000000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U]) 
         & (0x20100000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__i_addr_decode_dync__DOT__matched_rules 
            = (4U | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__i_addr_decode_dync__DOT__matched_rules));
    }
    if (((0x10000000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U]) 
         & (0x10100000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__i_addr_decode_dync__DOT__matched_rules 
            = (8U | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__i_addr_decode_dync__DOT__matched_rules));
    }
    if (((0x10000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U]) 
         & (0x50000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__i_addr_decode_dync__DOT__matched_rules 
            = (0x10U | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__i_addr_decode_dync__DOT__matched_rules));
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__i_addr_decode_dync__DOT__matched_rules 
            = (0x20U | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__i_addr_decode_dync__DOT__matched_rules));
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__i_addr_decode_dync__DOT__matched_rules 
            = (0x40U | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__i_addr_decode_dync__DOT__matched_rules));
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__i_addr_decode_dync__DOT__matched_rules 
            = (0x80U | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__i_addr_decode_dync__DOT__matched_rules));
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__i_addr_decode_dync__DOT__matched_rules 
            = (0x100U | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__i_addr_decode_dync__DOT__matched_rules));
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__i_addr_decode_dync__DOT__matched_rules 
            = (0x200U | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__i_addr_decode_dync__DOT__matched_rules));
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__i_addr_decode_dync__DOT__matched_rules 
            = (0x400U | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__i_addr_decode_dync__DOT__matched_rules));
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__i_addr_decode_dync__DOT__matched_rules 
            = (0x800U | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__i_addr_decode_dync__DOT__matched_rules));
    }
    if (((0x8000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U]) 
         & (0x10000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__i_addr_decode_dync__DOT__matched_rules 
            = (0x1000U | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__i_addr_decode_dync__DOT__matched_rules));
    }
    if ((0x8000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U])) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__dec_valid_o = 1U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__i_addr_decode_dync__DOT__matched_rules 
            = (0x2000U | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__i_addr_decode_dync__DOT__matched_rules));
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__dec_error_o = 0U;
    if (((0x40000000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U]) 
         & (0x41000000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__dec_error_o = 0U;
    }
    if (((0x30000000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U]) 
         & (0x30100000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__dec_error_o = 0U;
    }
    if (((0x20000000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U]) 
         & (0x20100000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__dec_error_o = 0U;
    }
    if (((0x10000000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U]) 
         & (0x10100000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__dec_error_o = 0U;
    }
    if (((0x10000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U]) 
         & (0x50000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__dec_error_o = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__dec_error_o = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__dec_error_o = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__dec_error_o = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__dec_error_o = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__dec_error_o = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__dec_error_o = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__dec_error_o = 0U;
    }
    if (((0x8000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U]) 
         & (0x10000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__dec_error_o = 0U;
    }
    if ((0x8000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U])) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__dec_error_o = 0U;
    }
    __VdfgRegularize_h495687df_0_71 = ((0x10000U <= 
                                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U]) 
                                       & (0x50000U 
                                          > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U]));
    if (((0xbadacce5U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U]) 
         & (0xbadacce6U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__dec_valid_o = 1U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__i_addr_decode_dync__DOT__matched_rules 
            = (0x4000U | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__i_addr_decode_dync__DOT__matched_rules));
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__DOT__dec_error_o = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____Vcellout__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__idx_o = 0U;
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____Vcellout__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__idx_o 
            = ((0x8000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U])
                ? 1U : (((0x8000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U]) 
                         & (0x10000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U]))
                         ? 2U : ((IData)(__VdfgRegularize_h495687df_0_71)
                                  ? 3U : ((IData)(__VdfgRegularize_h495687df_0_71)
                                           ? 4U : ((IData)(__VdfgRegularize_h495687df_0_71)
                                                    ? 5U
                                                    : 
                                                   ((IData)(__VdfgRegularize_h495687df_0_71)
                                                     ? 6U
                                                     : 
                                                    ((IData)(__VdfgRegularize_h495687df_0_71)
                                                      ? 7U
                                                      : 
                                                     ((IData)(__VdfgRegularize_h495687df_0_71)
                                                       ? 8U
                                                       : 
                                                      ((IData)(__VdfgRegularize_h495687df_0_71)
                                                        ? 9U
                                                        : 
                                                       ((IData)(__VdfgRegularize_h495687df_0_71)
                                                         ? 0xaU
                                                         : 
                                                        (((0x10000000U 
                                                           <= 
                                                           vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U]) 
                                                          & (0x10100000U 
                                                             > 
                                                             vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U]))
                                                          ? 0xbU
                                                          : 
                                                         (((0x20000000U 
                                                            <= 
                                                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U]) 
                                                           & (0x20100000U 
                                                              > 
                                                              vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U]))
                                                           ? 0xcU
                                                           : 
                                                          (((0x30000000U 
                                                             <= 
                                                             vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U]) 
                                                            & (0x30100000U 
                                                               > 
                                                               vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U]))
                                                            ? 0xdU
                                                            : 
                                                           (((0x40000000U 
                                                              <= 
                                                              vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U]) 
                                                             & (0x41000000U 
                                                                > 
                                                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U]))
                                                             ? 0xeU
                                                             : 0U))))))))))))));
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__dst_ready 
        = (1U & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_ready 
        = ((1U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__i_sync__DOT__reg_q) 
                  >> 2U)) == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__req_src_q));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_valid 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__ack_dst_q) 
           != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__req_synced_q1));
    vlSelfRef.__VdfgRegularize_h731909bc_0_0 = (((8U 
                                                  & (VL_REDXOR_32(
                                                                  (3U 
                                                                   & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__rptr_q) 
                                                                      >> 3U))) 
                                                     << 3U)) 
                                                 | (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__rptr_q) 
                                                                        >> 2U))) 
                                                       << 2U))) 
                                                | ((2U 
                                                    & (VL_REDXOR_32(
                                                                    (0xfU 
                                                                     & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__rptr_q) 
                                                                        >> 1U))) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & VL_REDXOR_8(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__rptr_q))));
    if ((3U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____Vcellout__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__idx_o))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__post_master_req_addr__BRA__95__03a64__KET__ 
            = (0xffffffe0U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U]);
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d 
            = (0xfU & ((IData)(3U) + (7U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U] 
                                            >> 2U))));
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__post_master_req_addr__BRA__95__03a64__KET__ 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U];
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d 
            = (0xfU & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____Vcellout__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__2__KET____DOT__addr_decode_i__idx_o));
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__rptr_bin 
        = ((0x10U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__rptr_q)) 
           | (IData)(vlSelfRef.__VdfgRegularize_h731909bc_0_0));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__dst_valid 
        = (0U != ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__rptr_bin) 
                  ^ (((0x10U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__gen_sync__BRA__4__KET____DOT__i_sync__DOT__reg_q) 
                                << 3U)) | ((8U & (VL_REDXOR_32(
                                                               (3U 
                                                                & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__wptr) 
                                                                   >> 3U))) 
                                                  << 3U)) 
                                           | (4U & 
                                              (VL_REDXOR_32(
                                                            (7U 
                                                             & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__wptr) 
                                                                >> 2U))) 
                                               << 2U)))) 
                     | ((2U & (VL_REDXOR_32((0xfU & 
                                             ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__wptr) 
                                              >> 1U))) 
                               << 1U)) | (1U & VL_REDXOR_8(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__wptr))))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__dst_valid) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__dst_ready));
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__2(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__2\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vtableidx23;
    __Vtableidx23 = 0;
    // Body
    __Vtableidx23 = (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack) 
                      << 3U) | ((4U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q) 
                                       << 1U)) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__state_q)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__state_d 
        = Vtestharness__ConstPool__TABLE_hb911355a_0
        [__Vtableidx23];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__data_valid 
        = Vtestharness__ConstPool__TABLE_h999f86a3_0
        [__Vtableidx23];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d 
        = Vtestharness__ConstPool__TABLE_hca9a5dee_0
        [__Vtableidx23];
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__3(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__3\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    // Body
    __Vtableidx11 = (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack) 
                      << 3U) | ((4U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q) 
                                       << 1U)) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__state_q)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__state_d 
        = Vtestharness__ConstPool__TABLE_hb911355a_0
        [__Vtableidx11];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__data_valid 
        = Vtestharness__ConstPool__TABLE_h999f86a3_0
        [__Vtableidx11];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d 
        = Vtestharness__ConstPool__TABLE_hca9a5dee_0
        [__Vtableidx11];
}

VL_INLINE_OPT void Vtestharness___024root___nba_sequent__TOP__40(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_sequent__TOP__40\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__testharness__DOT__cpu_subsystem_powergate_switch_ack_n__v0) {
        vlSelfRef.testharness__DOT__cpu_subsystem_powergate_switch_ack_n[0U] 
            = vlSelfRef.__VdlyVal__testharness__DOT__cpu_subsystem_powergate_switch_ack_n__v0;
        vlSelfRef.testharness__DOT__cpu_subsystem_powergate_switch_ack_n[1U] 
            = vlSelfRef.__VdlyVal__testharness__DOT__cpu_subsystem_powergate_switch_ack_n__v1;
        vlSelfRef.testharness__DOT__cpu_subsystem_powergate_switch_ack_n[2U] 
            = vlSelfRef.__VdlyVal__testharness__DOT__cpu_subsystem_powergate_switch_ack_n__v2;
        vlSelfRef.testharness__DOT__cpu_subsystem_powergate_switch_ack_n[3U] 
            = vlSelfRef.__VdlyVal__testharness__DOT__cpu_subsystem_powergate_switch_ack_n__v3;
        vlSelfRef.testharness__DOT__cpu_subsystem_powergate_switch_ack_n[4U] 
            = vlSelfRef.__VdlyVal__testharness__DOT__cpu_subsystem_powergate_switch_ack_n__v4;
        vlSelfRef.testharness__DOT__cpu_subsystem_powergate_switch_ack_n[5U] 
            = vlSelfRef.__VdlyVal__testharness__DOT__cpu_subsystem_powergate_switch_ack_n__v5;
        vlSelfRef.testharness__DOT__cpu_subsystem_powergate_switch_ack_n[6U] 
            = vlSelfRef.__VdlyVal__testharness__DOT__cpu_subsystem_powergate_switch_ack_n__v6;
        vlSelfRef.testharness__DOT__cpu_subsystem_powergate_switch_ack_n[7U] 
            = vlSelfRef.__VdlyVal__testharness__DOT__cpu_subsystem_powergate_switch_ack_n__v7;
        vlSelfRef.testharness__DOT__cpu_subsystem_powergate_switch_ack_n[8U] 
            = vlSelfRef.__VdlyVal__testharness__DOT__cpu_subsystem_powergate_switch_ack_n__v8;
        vlSelfRef.testharness__DOT__cpu_subsystem_powergate_switch_ack_n[9U] 
            = vlSelfRef.__VdlyVal__testharness__DOT__cpu_subsystem_powergate_switch_ack_n__v9;
        vlSelfRef.testharness__DOT__cpu_subsystem_powergate_switch_ack_n[0xaU] 
            = vlSelfRef.__VdlyVal__testharness__DOT__cpu_subsystem_powergate_switch_ack_n__v10;
        vlSelfRef.testharness__DOT__cpu_subsystem_powergate_switch_ack_n[0xbU] 
            = vlSelfRef.__VdlyVal__testharness__DOT__cpu_subsystem_powergate_switch_ack_n__v11;
        vlSelfRef.testharness__DOT__cpu_subsystem_powergate_switch_ack_n[0xcU] 
            = vlSelfRef.__VdlyVal__testharness__DOT__cpu_subsystem_powergate_switch_ack_n__v12;
        vlSelfRef.testharness__DOT__cpu_subsystem_powergate_switch_ack_n[0xdU] 
            = vlSelfRef.__VdlyVal__testharness__DOT__cpu_subsystem_powergate_switch_ack_n__v13;
        vlSelfRef.testharness__DOT__cpu_subsystem_powergate_switch_ack_n[0xeU] 
            = vlSelfRef.__VdlyVal__testharness__DOT__cpu_subsystem_powergate_switch_ack_n__v14;
        vlSelfRef.testharness__DOT__cpu_subsystem_powergate_switch_ack_n[0xfU] 
            = vlSelfRef.__VdlyVal__testharness__DOT__cpu_subsystem_powergate_switch_ack_n__v15;
    }
    if (vlSelfRef.__VdlySet__testharness__DOT__peripheral_subsystem_powergate_switch_ack_n__v0) {
        vlSelfRef.testharness__DOT__peripheral_subsystem_powergate_switch_ack_n[0U] 
            = vlSelfRef.__VdlyVal__testharness__DOT__peripheral_subsystem_powergate_switch_ack_n__v0;
        vlSelfRef.testharness__DOT__peripheral_subsystem_powergate_switch_ack_n[1U] 
            = vlSelfRef.__VdlyVal__testharness__DOT__peripheral_subsystem_powergate_switch_ack_n__v1;
        vlSelfRef.testharness__DOT__peripheral_subsystem_powergate_switch_ack_n[2U] 
            = vlSelfRef.__VdlyVal__testharness__DOT__peripheral_subsystem_powergate_switch_ack_n__v2;
        vlSelfRef.testharness__DOT__peripheral_subsystem_powergate_switch_ack_n[3U] 
            = vlSelfRef.__VdlyVal__testharness__DOT__peripheral_subsystem_powergate_switch_ack_n__v3;
        vlSelfRef.testharness__DOT__peripheral_subsystem_powergate_switch_ack_n[4U] 
            = vlSelfRef.__VdlyVal__testharness__DOT__peripheral_subsystem_powergate_switch_ack_n__v4;
        vlSelfRef.testharness__DOT__peripheral_subsystem_powergate_switch_ack_n[5U] 
            = vlSelfRef.__VdlyVal__testharness__DOT__peripheral_subsystem_powergate_switch_ack_n__v5;
        vlSelfRef.testharness__DOT__peripheral_subsystem_powergate_switch_ack_n[6U] 
            = vlSelfRef.__VdlyVal__testharness__DOT__peripheral_subsystem_powergate_switch_ack_n__v6;
        vlSelfRef.testharness__DOT__peripheral_subsystem_powergate_switch_ack_n[7U] 
            = vlSelfRef.__VdlyVal__testharness__DOT__peripheral_subsystem_powergate_switch_ack_n__v7;
        vlSelfRef.testharness__DOT__peripheral_subsystem_powergate_switch_ack_n[8U] 
            = vlSelfRef.__VdlyVal__testharness__DOT__peripheral_subsystem_powergate_switch_ack_n__v8;
        vlSelfRef.testharness__DOT__peripheral_subsystem_powergate_switch_ack_n[9U] 
            = vlSelfRef.__VdlyVal__testharness__DOT__peripheral_subsystem_powergate_switch_ack_n__v9;
        vlSelfRef.testharness__DOT__peripheral_subsystem_powergate_switch_ack_n[0xaU] 
            = vlSelfRef.__VdlyVal__testharness__DOT__peripheral_subsystem_powergate_switch_ack_n__v10;
        vlSelfRef.testharness__DOT__peripheral_subsystem_powergate_switch_ack_n[0xbU] 
            = vlSelfRef.__VdlyVal__testharness__DOT__peripheral_subsystem_powergate_switch_ack_n__v11;
        vlSelfRef.testharness__DOT__peripheral_subsystem_powergate_switch_ack_n[0xcU] 
            = vlSelfRef.__VdlyVal__testharness__DOT__peripheral_subsystem_powergate_switch_ack_n__v12;
        vlSelfRef.testharness__DOT__peripheral_subsystem_powergate_switch_ack_n[0xdU] 
            = vlSelfRef.__VdlyVal__testharness__DOT__peripheral_subsystem_powergate_switch_ack_n__v13;
        vlSelfRef.testharness__DOT__peripheral_subsystem_powergate_switch_ack_n[0xeU] 
            = vlSelfRef.__VdlyVal__testharness__DOT__peripheral_subsystem_powergate_switch_ack_n__v14;
        vlSelfRef.testharness__DOT__peripheral_subsystem_powergate_switch_ack_n[0xfU] 
            = vlSelfRef.__VdlyVal__testharness__DOT__peripheral_subsystem_powergate_switch_ack_n__v15;
    }
}

VL_INLINE_OPT void Vtestharness___024root___nba_sequent__TOP__42(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_sequent__TOP__42\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__data_rx_dc_valid) 
          & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__data_rx_dc_ready)) 
         & (0U == (3U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__rx_cdc_i__DOT__i_src__DOT__wptr_bin))))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__rx_cdc_i__DOT__i_src__DOT__data_q[0U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_rx_channel_i__DOT__r_shadow;
    }
    if ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__data_rx_dc_valid) 
          & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__data_rx_dc_ready)) 
         & (1U == (3U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__rx_cdc_i__DOT__i_src__DOT__wptr_bin))))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__rx_cdc_i__DOT__i_src__DOT__data_q[1U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_rx_channel_i__DOT__r_shadow;
    }
    if ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__data_rx_dc_valid) 
          & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__data_rx_dc_ready)) 
         & (2U == (3U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__rx_cdc_i__DOT__i_src__DOT__wptr_bin))))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__rx_cdc_i__DOT__i_src__DOT__data_q[2U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_rx_channel_i__DOT__r_shadow;
    }
    if ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__data_rx_dc_valid) 
          & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__data_rx_dc_ready)) 
         & (3U == (3U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__rx_cdc_i__DOT__i_src__DOT__wptr_bin))))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__rx_cdc_i__DOT__i_src__DOT__data_q[3U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_rx_channel_i__DOT__r_shadow;
    }
}

void Vtestharness___024root____Vdpiimwrap_testharness__DOT__i_uart0__DOT__uartdpi_can_read_TOP(QData/*63:0*/ ctx, IData/*31:0*/ &uartdpi_can_read__Vfuncrtn);
void Vtestharness___024root____Vdpiimwrap_testharness__DOT__i_uart0__DOT__uartdpi_read_TOP(QData/*63:0*/ ctx, CData/*7:0*/ &uartdpi_read__Vfuncrtn);

VL_INLINE_OPT void Vtestharness___024root___nba_sequent__TOP__43(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_sequent__TOP__43\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_testharness__DOT__i_uart0__DOT__uartdpi_can_read__76__Vfuncout;
    __Vfunc_testharness__DOT__i_uart0__DOT__uartdpi_can_read__76__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_testharness__DOT__i_uart0__DOT__uartdpi_read__77__Vfuncout;
    __Vfunc_testharness__DOT__i_uart0__DOT__uartdpi_read__77__Vfuncout = 0;
    // Body
    if (vlSelfRef.rst_ni) {
        if (vlSelfRef.testharness__DOT__i_uart0__DOT__txactive) {
            vlSelfRef.__Vdly__testharness__DOT__i_uart0__DOT__txcyccount 
                = ((IData)(1U) + vlSelfRef.testharness__DOT__i_uart0__DOT__txcyccount);
            vlSelfRef.testharness__DOT__uart_rx__strong__out118 
                = (1U & ((9U >= (0xfU & vlSelfRef.testharness__DOT__i_uart0__DOT__txcount))
                          ? ((IData)(vlSelfRef.testharness__DOT__i_uart0__DOT__txsymbol) 
                             >> (0xfU & vlSelfRef.testharness__DOT__i_uart0__DOT__txcount))
                          : (IData)(vlSelfRef.testharness__DOT__i_uart0__DOT____Vxrand___0)));
            if ((0x13U == vlSelfRef.testharness__DOT__i_uart0__DOT__txcyccount)) {
                vlSelfRef.__Vdly__testharness__DOT__i_uart0__DOT__txcyccount = 0U;
                if ((9U == vlSelfRef.testharness__DOT__i_uart0__DOT__txcount)) {
                    vlSelfRef.testharness__DOT__i_uart0__DOT__txactive = 0U;
                } else {
                    vlSelfRef.testharness__DOT__i_uart0__DOT__txcount 
                        = ((IData)(1U) + vlSelfRef.testharness__DOT__i_uart0__DOT__txcount);
                }
            }
        } else {
            vlSelfRef.testharness__DOT__uart_rx__strong__out118 = 1U;
            if ((0U != ([&]() {
                            Vtestharness___024root____Vdpiimwrap_testharness__DOT__i_uart0__DOT__uartdpi_can_read_TOP(vlSelfRef.testharness__DOT__i_uart0__DOT__ctx, __Vfunc_testharness__DOT__i_uart0__DOT__uartdpi_can_read__76__Vfuncout);
                        }(), __Vfunc_testharness__DOT__i_uart0__DOT__uartdpi_can_read__76__Vfuncout))) {
                vlSelfRef.testharness__DOT__i_uart0__DOT__unnamedblk1__DOT__c 
                    = VL_EXTENDS_II(32,8, ([&]() {
                            Vtestharness___024root____Vdpiimwrap_testharness__DOT__i_uart0__DOT__uartdpi_read_TOP(vlSelfRef.testharness__DOT__i_uart0__DOT__ctx, __Vfunc_testharness__DOT__i_uart0__DOT__uartdpi_read__77__Vfuncout);
                        }(), (IData)(__Vfunc_testharness__DOT__i_uart0__DOT__uartdpi_read__77__Vfuncout)));
                vlSelfRef.testharness__DOT__i_uart0__DOT__txcount = 0U;
                vlSelfRef.testharness__DOT__i_uart0__DOT__txsymbol 
                    = (0x200U | (0x1feU & (vlSelfRef.testharness__DOT__i_uart0__DOT__unnamedblk1__DOT__c 
                                           << 1U)));
                vlSelfRef.testharness__DOT__i_uart0__DOT__txactive = 1U;
                vlSelfRef.__Vdly__testharness__DOT__i_uart0__DOT__txcyccount = 0U;
            }
        }
    } else {
        vlSelfRef.testharness__DOT__uart_rx__strong__out118 = 1U;
        vlSelfRef.testharness__DOT__i_uart0__DOT__txactive = 0U;
    }
    vlSelfRef.testharness__DOT__i_uart0__DOT__txcyccount 
        = vlSelfRef.__Vdly__testharness__DOT__i_uart0__DOT__txcyccount;
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__9(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__9\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_ready 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT____VdfgRegularize_hdfe05f4f_0_0) 
           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__branch_in_ex));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_valid 
        = (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__alu_en_ex) 
            | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__mult_en_ex) 
               | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_access_ex) 
                  | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__data_req_ex)))) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT____VdfgRegularize_hdfe05f4f_0_0));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS;
    if ((0U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        if (((6U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__mult_operator_ex)) 
             & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__mult_en_ex))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 2U;
    } else if ((2U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 3U;
    } else if ((3U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 4U;
    } else if ((4U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_ready) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 0U;
        }
    }
    __Vtableidx4 = ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_ready) 
                      << 5U) | ((0x10U & ((~ (0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP))) 
                                          << 4U)) | 
                                ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ABComp_S) 
                                 << 3U))) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_valid) 
                                              << 2U) 
                                             | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__State_SP)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__State_SN 
        = Vtestharness__ConstPool__TABLE_hc35f745e_0
        [__Vtableidx4];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready 
        = Vtestharness__ConstPool__TABLE_h8e607893_0
        [__Vtableidx4];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S 
        = Vtestharness__ConstPool__TABLE_h98c9ea19_0
        [__Vtableidx4];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ARegEn_S 
        = Vtestharness__ConstPool__TABLE_hc93130b7_0
        [__Vtableidx4];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BRegEn_S 
        = Vtestharness__ConstPool__TABLE_h73802910_0
        [__Vtableidx4];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResRegEn_S 
        = Vtestharness__ConstPool__TABLE_hd5050861_0
        [__Vtableidx4];
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SN 
            = (1U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__alu_operator_ex) 
                     >> 1U));
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SN 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_op_a_signed;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DN = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SN 
            = (((0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result)) 
                | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__alu_operator_ex) 
                   >> 1U)) & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT____VdfgRegularize_h5469d048_0_0));
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddTmp_D = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__alu_operand_b_ex;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DN 
            = (0x3fU & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_shift));
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SN 
            = (1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SP));
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SN 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DN 
            = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResRegEn_S)
                ? (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ABComp_S) 
                    << 0x1fU) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                 >> 1U)) : vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP);
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SN 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SP;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddTmp_D 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DN 
            = (0x3fU & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP) 
                        - (0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP))));
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DN 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BRegEn_S)
            ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S)
                ? vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result
                : (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP) 
                    << 0x1fU) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP 
                                 >> 1U))) : vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP);
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DN 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ARegEn_S)
            ? (((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT____VdfgRegularize_h5469d048_0_0)) 
                & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S))
                ? (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddTmp_D 
                   + vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D)
                : (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddTmp_D 
                   - vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D))
            : vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP);
}

VL_INLINE_OPT void Vtestharness___024root___nba_sequent__TOP__46(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_sequent__TOP__46\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdfgRegularize_h495687df_0_52;
    __VdfgRegularize_h495687df_0_52 = 0;
    IData/*31:0*/ __VdfgRegularize_h495687df_0_54;
    __VdfgRegularize_h495687df_0_54 = 0;
    // Body
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT____Vcellinp__cpu_subsystem_i__rst_ni) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__load_store_unit_i__DOT__next_cnt;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_cnt;
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q = 0U;
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT____Vcellinp__cpu_subsystem_i__rst_ni) 
           && (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n));
    vlSelfRef.__VdfgRegularize_h495687df_0_56 = (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x1fU 
                                                                     & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr)), 5U)))
                                                   ? 0U
                                                   : 
                                                  (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[
                                                   (((IData)(0x1fU) 
                                                     + 
                                                     (0x3ffU 
                                                      & VL_SHIFTL_III(10,10,32, 
                                                                      (0x1fU 
                                                                       & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr)), 5U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(10,10,32, 
                                                                     (0x1fU 
                                                                      & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr)), 5U))))) 
                                                 | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[
                                                    (0x1fU 
                                                     & (VL_SHIFTL_III(10,10,32, 
                                                                      (0x1fU 
                                                                       & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr)), 5U) 
                                                        >> 5U))] 
                                                    >> 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(10,10,32, 
                                                                     (0x1fU 
                                                                      & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr)), 5U))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_increment__BRA__0__KET__ 
        = (1U & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__0__KET__)) 
                 & (~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper__BRA__0__KET__) 
                       | vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_increment__BRA__2__KET__ 
        = ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__2__KET__)) 
           & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper__BRA__2__KET__)) 
              & ((~ (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
                     >> 2U)) & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__mhpmevent_minstret))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_increment__BRA__3__KET__ 
        = ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__3__KET__)) 
           & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper__BRA__3__KET__)) 
              & ((~ (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
                     >> 3U)) & (0U != ((1U | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__mhpmevent_compressed) 
                                                 << 0xaU) 
                                                | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__mhpmevent_branch_taken) 
                                                    << 9U) 
                                                   | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__mhpmevent_branch) 
                                                      << 8U))) 
                                               | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__mhpmevent_jump) 
                                                   << 7U) 
                                                  | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__mhpmevent_store) 
                                                      << 6U) 
                                                     | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__mhpmevent_load) 
                                                        << 5U)))) 
                                              | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__mhpmevent_imiss) 
                                                   << 4U) 
                                                  | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__mhpmevent_jr_stall) 
                                                      << 3U) 
                                                     | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__mhpmevent_ld_stall) 
                                                        << 2U))) 
                                                 | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__mhpmevent_minstret) 
                                                    << 1U)))) 
                                       & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U])))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0U])))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[1U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0U])))) 
                   >> 0x20U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[2U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[2U])))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[3U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[3U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[2U])))) 
                   >> 0x20U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[4U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[5U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[4U])))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[5U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[5U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[4U])))) 
                   >> 0x20U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[6U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[7U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[6U])))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[7U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[7U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[6U])))) 
                   >> 0x20U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[8U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[9U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[8U])))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[9U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[9U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[8U])))) 
                   >> 0x20U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0xaU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0xbU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0xaU])))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0xbU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0xbU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0xaU])))) 
                   >> 0x20U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0xcU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0xdU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0xcU])))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0xdU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0xdU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0xcU])))) 
                   >> 0x20U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0xeU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0xfU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0xeU])))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0xfU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0xfU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0xeU])))) 
                   >> 0x20U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x10U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x11U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x10U])))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x11U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x11U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x10U])))) 
                   >> 0x20U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x12U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x13U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x12U])))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x13U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x13U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x12U])))) 
                   >> 0x20U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x14U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x15U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x14U])))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x15U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x15U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x14U])))) 
                   >> 0x20U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x16U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x17U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x16U])))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x17U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x17U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x16U])))) 
                   >> 0x20U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x18U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x19U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x18U])))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x19U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x19U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x18U])))) 
                   >> 0x20U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x1aU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1bU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1aU])))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x1bU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1bU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1aU])))) 
                   >> 0x20U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x1cU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1dU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1cU])))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x1dU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1dU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1cU])))) 
                   >> 0x20U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x1eU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1fU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1eU])))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x1fU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1fU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1eU])))) 
                   >> 0x20U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x20U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x21U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x20U])))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x21U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x21U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x20U])))) 
                   >> 0x20U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x22U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x23U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x22U])))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x23U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x23U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x22U])))) 
                   >> 0x20U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x24U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x25U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x24U])))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x25U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x25U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x24U])))) 
                   >> 0x20U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x26U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x27U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x26U])))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x27U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x27U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x26U])))) 
                   >> 0x20U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x28U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x29U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x28U])))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x29U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x29U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x28U])))) 
                   >> 0x20U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x2aU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2bU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2aU])))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x2bU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2bU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2aU])))) 
                   >> 0x20U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x2cU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2dU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2cU])))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x2dU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2dU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2cU])))) 
                   >> 0x20U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x2eU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2fU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2eU])))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x2fU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2fU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2eU])))) 
                   >> 0x20U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x30U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x31U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x30U])))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x31U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x31U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x30U])))) 
                   >> 0x20U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x32U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x33U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x32U])))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x33U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x33U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x32U])))) 
                   >> 0x20U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x34U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x35U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x34U])))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x35U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x35U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x34U])))) 
                   >> 0x20U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x36U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x37U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x36U])))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x37U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x37U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x36U])))) 
                   >> 0x20U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x38U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x39U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x38U])))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x39U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x39U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x38U])))) 
                   >> 0x20U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x3aU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3bU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3aU])))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x3bU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3bU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3aU])))) 
                   >> 0x20U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x3cU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3dU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3cU])))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x3dU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3dU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3cU])))) 
                   >> 0x20U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x3eU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3fU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3eU])))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x3fU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3fU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3eU])))) 
                   >> 0x20U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment__BRA__255__03a192__KET__ 
        = (1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[7U])) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[6U]))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment__BRA__191__03a128__KET__ 
        = (1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[5U])) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[4U]))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment__BRA__63__03a0__KET__ 
        = (1ULL + (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0U]))));
    __VdfgRegularize_h495687df_0_52 = (((0U == (0x1fU 
                                                & ((IData)(0x20U) 
                                                   + 
                                                   VL_SHIFTL_III(11,11,32, 
                                                                 (0x1fU 
                                                                  & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr)), 6U))))
                                         ? 0U : (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                 (((IData)(0x1fU) 
                                                   + 
                                                   (0x7ffU 
                                                    & ((IData)(0x20U) 
                                                       + 
                                                       VL_SHIFTL_III(11,11,32, 
                                                                     (0x1fU 
                                                                      & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr)), 6U)))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x20U) 
                                                      + 
                                                      VL_SHIFTL_III(11,11,32, 
                                                                    (0x1fU 
                                                                     & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr)), 6U)))))) 
                                       | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                          (0x3fU & 
                                           (((IData)(0x20U) 
                                             + VL_SHIFTL_III(11,11,32, 
                                                             (0x1fU 
                                                              & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr)), 6U)) 
                                            >> 5U))] 
                                          >> (0x1fU 
                                              & ((IData)(0x20U) 
                                                 + 
                                                 VL_SHIFTL_III(11,11,32, 
                                                               (0x1fU 
                                                                & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr)), 6U)))));
    __VdfgRegularize_h495687df_0_54 = (((0U == (0x1fU 
                                                & VL_SHIFTL_III(11,11,32, 
                                                                (0x1fU 
                                                                 & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr)), 6U)))
                                         ? 0U : (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                 (((IData)(0x1fU) 
                                                   + 
                                                   (0x7ffU 
                                                    & VL_SHIFTL_III(11,11,32, 
                                                                    (0x1fU 
                                                                     & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr)), 6U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(11,11,32, 
                                                                   (0x1fU 
                                                                    & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr)), 6U))))) 
                                       | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                          (0x3fU & 
                                           (VL_SHIFTL_III(11,11,32, 
                                                          (0x1fU 
                                                           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr)), 6U) 
                                            >> 5U))] 
                                          >> (0x1fU 
                                              & VL_SHIFTL_III(11,11,32, 
                                                              (0x1fU 
                                                               & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr)), 6U))));
    vlSelfRef.__VdfgRegularize_h495687df_0_53 = ((0x20U 
                                                  & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                  ? 0U
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                   ? __VdfgRegularize_h495687df_0_52
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                    ? __VdfgRegularize_h495687df_0_52
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                     ? __VdfgRegularize_h495687df_0_52
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                      ? __VdfgRegularize_h495687df_0_52
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                       ? 0U
                                                       : __VdfgRegularize_h495687df_0_52))))));
    vlSelfRef.__VdfgRegularize_h495687df_0_55 = ((0x40U 
                                                  & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                  ? 0U
                                                  : 
                                                 ((0x20U 
                                                   & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                   ? 0U
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                    ? __VdfgRegularize_h495687df_0_54
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                     ? __VdfgRegularize_h495687df_0_54
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                      ? __VdfgRegularize_h495687df_0_54
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                       ? __VdfgRegularize_h495687df_0_54
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                        ? 0U
                                                        : __VdfgRegularize_h495687df_0_54)))))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__data_req_ex) 
           & (2U > (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgRegularize_hd0582889_0_3 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_rdata_int 
        = ((0x800U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
            ? ((0x400U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                ? ((0x200U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                    ? ((0x100U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                        ? ((0x80U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                            ? 0U : ((0x40U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                     ? 0U : ((0x20U 
                                              & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                              ? 0U : 
                                             ((0x10U 
                                               & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                               ? ((8U 
                                                   & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                      ? 1U
                                                      : 4U)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                      ? 0x602U
                                                      : 0U))))
                                               : 0U))))
                        : 0U) : ((0x100U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                  ? 0U : ((0x80U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                           ? ((0x40U 
                                               & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                               ? ((0x20U 
                                                   & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                   ? 0U
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                        ? 3U
                                                        : 0U))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                        ? 0U
                                                        : (IData)(
                                                                  (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__gen_hwloop_regs__DOT__hwloop_regs_i__DOT__hwlp_counter_q 
                                                                   >> 0x20U)))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                        ? (IData)(
                                                                  (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__gen_hwloop_regs__DOT__hwloop_regs_i__DOT__hwlp_end_q 
                                                                   >> 0x20U))
                                                        : (IData)(
                                                                  (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__gen_hwloop_regs__DOT__hwloop_regs_i__DOT__hwlp_start_q 
                                                                   >> 0x20U))))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                        ? 0U
                                                        : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__gen_hwloop_regs__DOT__hwloop_regs_i__DOT__hwlp_counter_q))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                        ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__gen_hwloop_regs__DOT__hwloop_regs_i__DOT__hwlp_end_q)
                                                        : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__gen_hwloop_regs__DOT__hwloop_regs_i__DOT__hwlp_start_q)))))))
                                               : vlSelfRef.__VdfgRegularize_h495687df_0_53)
                                           : vlSelfRef.__VdfgRegularize_h495687df_0_55)))
                : ((0x200U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                    ? ((0x100U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                        ? ((0x80U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                            ? ((0x40U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                ? 0U : vlSelfRef.__VdfgRegularize_h495687df_0_53)
                            : vlSelfRef.__VdfgRegularize_h495687df_0_55)
                        : 0U) : 0U)) : ((0x400U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                         ? ((0x200U 
                                             & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                             ? ((0x100U 
                                                 & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                 ? 
                                                ((0x80U 
                                                  & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                  ? 
                                                 ((0x40U 
                                                   & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                   ? 0U
                                                   : 
                                                  ((0x20U 
                                                    & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                    ? 
                                                   ((0x10U 
                                                     & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                     ? 
                                                    ((8U 
                                                      & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                         ? vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_q
                                                         : vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_q)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                         ? vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__depc_q
                                                         : vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q))))
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                         ? 0U
                                                         : 4U))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                         ? 0U
                                                         : vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                         ? 
                                                        (0x28001040U 
                                                         | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_exec_q) 
                                                            << 2U))
                                                         : 0U)))))
                                                    : 0U))
                                                  : 0U)
                                                 : 0U)
                                             : 0U) : 
                                        ((0x200U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                          ? ((0x100U 
                                              & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                              ? ((0x80U 
                                                  & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                  ? 0U
                                                  : 
                                                 ((0x40U 
                                                   & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                   ? 
                                                  ((0x20U 
                                                    & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                    ? 0U
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                         ? 0U
                                                         : vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_q))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                         ? 0U
                                                         : 
                                                        ((0x80000000U 
                                                          & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mcause_q) 
                                                             << 0x1aU)) 
                                                         | (0x1fU 
                                                            & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mcause_q))))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                         ? vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mepc_q
                                                         : vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_q))))))
                                                   : 
                                                  ((0x20U 
                                                    & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                    ? 
                                                   ((0x10U 
                                                     & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                     ? vlSelfRef.__VdfgRegularize_h495687df_0_56
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                      ? vlSelfRef.__VdfgRegularize_h495687df_0_56
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                       ? vlSelfRef.__VdfgRegularize_h495687df_0_56
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                         ? vlSelfRef.__VdfgRegularize_h495687df_0_56
                                                         : 0U)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                         ? 0U
                                                         : vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q)))))
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                         ? 
                                                        ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_q 
                                                          << 8U) 
                                                         | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_q))
                                                         : vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mie_q))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))
                                                         ? 0x40801104U
                                                         : 
                                                        ((0x20000U 
                                                          & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                                                             << 0x11U)) 
                                                         | ((0x1800U 
                                                             & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                                                                << 0xaU)) 
                                                            | ((0x80U 
                                                                & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                                                                         >> 2U)) 
                                                                     | (1U 
                                                                        & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                                                                           >> 6U)))))))))))))))
                                              : 0U)
                                          : 0U)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
        = ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_op_ex))
            ? ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_op_ex))
                ? ((~ vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__alu_operand_a_ex) 
                   & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_rdata_int)
                : (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__alu_operand_a_ex 
                   | vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_rdata_int))
            : vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__alu_operand_a_ex);
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__regfile_alu_wdata_fw = 0U;
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__alu_en_ex) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__regfile_alu_wdata_fw 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_result;
    }
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__mult_en_ex) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__regfile_alu_wdata_fw 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_result;
    }
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_access_ex) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__regfile_alu_wdata_fw 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_rdata_int;
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_n 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_q;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_n 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_q;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_n 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_q;
    if ((1U & (~ ((((((((1U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr)) 
                        | (2U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))) 
                       | (3U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))) 
                      | (0x300U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))) 
                     | (0x304U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))) 
                    | (0x305U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))) 
                   | (0x340U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))) 
                  | (0x341U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr)))))) {
        if ((0x342U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))) {
            if ((0x7b0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))) {
                if ((0x7b1U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))) {
                    if ((0x7b2U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))) {
                        if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_n 
                                = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
                        }
                    }
                    if ((0x7b2U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))) {
                        if ((0x7b3U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))) {
                            if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_n 
                                    = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mie_n 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mie_q;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_n 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_q;
    if (((((((((1U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr)) 
               | (2U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))) 
              | (3U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))) 
             | (0x300U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))) 
            | (0x304U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))) 
           | (0x305U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))) 
          | (0x340U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))) 
         | (0x341U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr)))) {
        if ((1U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))) {
            if ((2U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))) {
                if ((3U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))) {
                    if ((0x300U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))) {
                        if ((0x304U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))) {
                            if ((0x305U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))) {
                                if ((0x340U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))) {
                                    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_n 
                                            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
                                    }
                                }
                            }
                            if ((0x305U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))) {
                                if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_n 
                                        = (1U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int);
                                }
                            }
                        }
                        if ((0x304U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr))) {
                            if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mie_n 
                                    = (0xffff0888U 
                                       & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int);
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0U] 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[1U] 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[1U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[2U] 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[2U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[3U] 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[4U] 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[4U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[5U] 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[5U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[6U] 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[6U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[7U] 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[7U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[8U] 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[8U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[9U] 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[9U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0xaU] 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0xaU];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0xbU] 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0xbU];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0xcU] 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0xcU];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0xdU] 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0xdU];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0xeU] 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0xeU];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0xfU] 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0xfU];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0x10U] 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x10U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0x11U] 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x11U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0x12U] 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x12U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0x13U] 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x13U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0x14U] 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x14U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0x15U] 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x15U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0x16U] 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x16U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0x17U] 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x17U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0x18U] 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x18U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0x19U] 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x19U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0x1aU] 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x1aU];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0x1bU] 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x1bU];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0x1cU] 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x1cU];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0x1dU] 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x1dU];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0x1eU] 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x1eU];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0x1fU] 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x1fU];
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_we) {
        VL_ASSIGNSEL_WI(1024, 32, (0x3ffU & VL_SHIFTL_III(10,32,32, 
                                                          (0x1fU 
                                                           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__csr_addr)), 5U)), vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n, vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int);
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_n 
        = (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
            & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgBinToOneHot_Tab_hd0582889_0_0
            [0x320U]) ? vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int
            : vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q);
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__10(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__10\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__data_dst_d 
        = (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_valid) 
            | ((1U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q) 
                      >> 2U)) == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__req_synced_q1)))
            ? vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__data_dst_q
            : vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__data_src_q);
}

VL_INLINE_OPT void Vtestharness___024root___nba_sequent__TOP__47(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_sequent__TOP__47\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_bin 
        = (((0x10U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_q)) 
            | ((8U & (VL_REDXOR_32((3U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_q) 
                                          >> 3U))) 
                      << 3U)) | (4U & (VL_REDXOR_32(
                                                    (7U 
                                                     & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_q) 
                                                        >> 2U))) 
                                       << 2U)))) | 
           ((2U & (VL_REDXOR_32((0xfU & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_q) 
                                         >> 1U))) << 1U)) 
            | (1U & VL_REDXOR_8(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_q))));
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__rstgen_i__DOT__init_no) {
        if (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q 
                = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q;
        }
        if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q 
                = (((0U == (0x1fU & VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.__VdfgRegularize_h7bc24727_0_0), 5U)))
                     ? 0U : (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__data_q[
                             (((IData)(0x1fU) + (0x1ffU 
                                                 & VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.__VdfgRegularize_h7bc24727_0_0), 5U))) 
                              >> 5U)] << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.__VdfgRegularize_h7bc24727_0_0), 5U))))) 
                   | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__data_q[
                      (0xfU & (VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.__VdfgRegularize_h7bc24727_0_0), 5U) 
                               >> 5U))] >> (0x1fU & 
                                            VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.__VdfgRegularize_h7bc24727_0_0), 5U))));
        }
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = 0U;
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__ready_a 
        = (0x10U != ((((0x10U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__gen_sync__BRA__4__KET____DOT__i_sync__DOT__reg_q) 
                                 << 3U)) | ((8U & (
                                                   VL_REDXOR_32(
                                                                (3U 
                                                                 & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__rptr) 
                                                                    >> 3U))) 
                                                   << 3U)) 
                                            | (4U & 
                                               (VL_REDXOR_32(
                                                             (7U 
                                                              & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__rptr) 
                                                                 >> 2U))) 
                                                << 2U)))) 
                      | ((2U & (VL_REDXOR_32((0xfU 
                                              & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__rptr) 
                                                 >> 1U))) 
                                << 1U)) | (1U & VL_REDXOR_8(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__rptr)))) 
                     ^ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_rx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_bin)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__dst_ready 
        = (1U & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelfRef.__VdfgRegularize_h7bc24727_0_0 = (((8U 
                                                  & (VL_REDXOR_32(
                                                                  (3U 
                                                                   & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__rptr_q) 
                                                                      >> 3U))) 
                                                     << 3U)) 
                                                 | (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__rptr_q) 
                                                                        >> 2U))) 
                                                       << 2U))) 
                                                | ((2U 
                                                    & (VL_REDXOR_32(
                                                                    (0xfU 
                                                                     & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__rptr_q) 
                                                                        >> 1U))) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & VL_REDXOR_8(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__rptr_q))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__rptr_bin 
        = ((0x10U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__rptr_q)) 
           | (IData)(vlSelfRef.__VdfgRegularize_h7bc24727_0_0));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__dst_valid 
        = (0U != ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__rptr_bin) 
                  ^ (((0x10U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__gen_sync__BRA__4__KET____DOT__i_sync__DOT__reg_q) 
                                << 3U)) | ((8U & (VL_REDXOR_32(
                                                               (3U 
                                                                & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__wptr) 
                                                                   >> 3U))) 
                                                  << 3U)) 
                                           | (4U & 
                                              (VL_REDXOR_32(
                                                            (7U 
                                                             & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__wptr) 
                                                                >> 2U))) 
                                               << 2U)))) 
                     | ((2U & (VL_REDXOR_32((0xfU & 
                                             ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__wptr) 
                                              >> 1U))) 
                               << 1U)) | (1U & VL_REDXOR_8(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__wptr))))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__dst_valid) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__dst_ready));
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__11(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__11\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_obiplug__DOT__next_addr 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__addr_valid_sync)
            ? vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__addr_reg
            : (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_obiplug__DOT__tx_counter) 
                == ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_obiplug__DOT__wrap_length_t) 
                    - (IData)(1U))) ? vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__addr_reg
                : ((IData)(4U) + vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_obiplug__DOT__curr_addr)));
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__12(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__12\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_txreg__DOT__counter_trgt_next 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__tx_counter_upd)
            ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__tx_counter)
            : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_txreg__DOT__counter_trgt));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__tx_done = 0U;
    if (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_txreg__DOT__running) 
         | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__tx_counter_upd))) {
        if (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_txreg__DOT__counter) 
             == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_txreg__DOT__counter_trgt))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_txreg__DOT__counter_next 
                = (0xffU & 0U);
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__tx_done = 1U;
        } else {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_txreg__DOT__counter_next 
                = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_txreg__DOT__counter)));
        }
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_txreg__DOT__counter_next 
            = (0xffU & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_txreg__DOT__counter));
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_txreg__DOT__running_next 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__tx_counter_upd) 
           | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_txreg__DOT__counter) 
               != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_txreg__DOT__counter_trgt)) 
              & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_txreg__DOT__running)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_txreg__DOT__data_int_next 
        = (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__tx_counter_upd) 
            | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_txreg__DOT__running))
            ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__tx_data_valid)
                ? vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__tx_data
                : VL_SHIFTL_III(32,32,32, vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_txreg__DOT__data_int, 1U))
            : vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_txreg__DOT__data_int);
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__13(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__13\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage_rdata 
        = (0xffU & (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, 
                                                   (0x1fU 
                                                    & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 3U)))
                      ? 0U : (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[
                              (((IData)(7U) + (0xffU 
                                               & VL_SHIFTL_III(8,8,32, 
                                                               (0x1fU 
                                                                & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 3U))) 
                               >> 5U)] << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & VL_SHIFTL_III(8,8,32, 
                                                              (0x1fU 
                                                               & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 3U))))) 
                    | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[
                       (7U & (VL_SHIFTL_III(8,8,32, 
                                            (0x1fU 
                                             & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 3U) 
                              >> 5U))] >> (0x1fU & 
                                           VL_SHIFTL_III(8,8,32, 
                                                         (0x1fU 
                                                          & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 3U)))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__acq_fifo_rdata 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
            ? 0U : (0x3ffU & ((0x13fU >= (0x1ffU & 
                                          ((IData)(0xaU) 
                                           * (0x1fU 
                                              & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                               ? (((0U == (0x1fU & 
                                           ((IData)(0xaU) 
                                            * (0x1fU 
                                               & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                    ? 0U : (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__storage[
                                            (((IData)(9U) 
                                              + (0x1ffU 
                                                 & ((IData)(0xaU) 
                                                    * 
                                                    (0x1fU 
                                                     & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xaU) 
                                                      * 
                                                      (0x1fU 
                                                       & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                  | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__storage[
                                     (0xfU & (((IData)(0xaU) 
                                               * (0x1fU 
                                                  & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                              >> 5U))] 
                                     >> (0x1fU & ((IData)(0xaU) 
                                                  * 
                                                  (0x1fU 
                                                   & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))
                               : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT____Vxrand___0))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__rdata_qs 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
            ? 0U : (0xffU & (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, 
                                                            (0x1fU 
                                                             & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 3U)))
                               ? 0U : (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                       (((IData)(7U) 
                                         + (0xffU & 
                                            VL_SHIFTL_III(8,8,32, 
                                                          (0x1fU 
                                                           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 3U))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_SHIFTL_III(8,8,32, 
                                                         (0x1fU 
                                                          & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 3U))))) 
                             | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                (7U & (VL_SHIFTL_III(8,8,32, 
                                                     (0x1fU 
                                                      & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 3U) 
                                       >> 5U))] >> 
                                (0x1fU & VL_SHIFTL_III(8,8,32, 
                                                       (0x1fU 
                                                        & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 3U))))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__fmt_fifo_rdata 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__empty)
            ? 0U : (0x1fffU & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__fmt_fifo_wvalid))
                                ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__fmt_fifo_wdata)
                                : ((0x19fU >= (0x1ffU 
                                               & ((IData)(0xdU) 
                                                  * 
                                                  (0x1fU 
                                                   & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                    ? (((0U == (0x1fU 
                                                & ((IData)(0xdU) 
                                                   * 
                                                   (0x1fU 
                                                    & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                         ? 0U : (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__storage[
                                                 (((IData)(0xcU) 
                                                   + 
                                                   (0x1ffU 
                                                    & ((IData)(0xdU) 
                                                       * 
                                                       (0x1fU 
                                                        & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (0x1fU 
                                                       & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                       | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__storage[
                                          (0xfU & (
                                                   ((IData)(0xdU) 
                                                    * 
                                                    (0x1fU 
                                                     & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                   >> 5U))] 
                                          >> (0x1fU 
                                              & ((IData)(0xdU) 
                                                 * 
                                                 (0x1fU 
                                                  & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))
                                    : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT____Vxrand___0)))));
    vlSelfRef.__VdfgRegularize_h495687df_0_220 = (1U 
                                                  & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__empty)
                                                       ? 0U
                                                       : 
                                                      (0xffU 
                                                       & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                                           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_txdata__qe))
                                                           ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_txdata__q)
                                                           : 
                                                          (((0U 
                                                             == 
                                                             (0x1fU 
                                                              & VL_SHIFTL_III(8,8,32, 
                                                                              (0x1fU 
                                                                               & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 3U)))
                                                             ? 0U
                                                             : 
                                                            (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__storage[
                                                             (((IData)(7U) 
                                                               + 
                                                               (0xffU 
                                                                & VL_SHIFTL_III(8,8,32, 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 3U))) 
                                                              >> 5U)] 
                                                             << 
                                                             ((IData)(0x20U) 
                                                              - 
                                                              (0x1fU 
                                                               & VL_SHIFTL_III(8,8,32, 
                                                                               (0x1fU 
                                                                                & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 3U))))) 
                                                           | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__storage[
                                                              (7U 
                                                               & (VL_SHIFTL_III(8,8,32, 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 3U) 
                                                                  >> 5U))] 
                                                              >> 
                                                              (0x1fU 
                                                               & VL_SHIFTL_III(8,8,32, 
                                                                               (0x1fU 
                                                                                & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 3U))))))) 
                                                     >> 
                                                     (7U 
                                                      & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__bit_idx))));
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_tx__DOT__sreg_d 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_tx__DOT__sreg_q;
        if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__tx_fifo_rready) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_tx__DOT__sreg_d 
                = (0x400U | ((0x200U & (((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q)) 
                                         | (((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                             & VL_REDXOR_8(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage_rdata)) 
                                            ^ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_odd__q))) 
                                        << 9U)) | (
                                                   ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                                                     ? 0U
                                                     : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage_rdata)) 
                                                   << 1U)));
        } else if (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_tx__DOT__tick_baud_q) 
                    & (0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_q)))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_tx__DOT__sreg_d 
                = (0x400U | (0x3ffU & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_tx__DOT__sreg_q) 
                                       >> 1U)));
        }
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_tx__DOT__sreg_d = 0x7ffU;
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__fmt_flag_start_before 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__fmt_fifo_rvalid) 
           & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__fmt_fifo_rdata) 
              >> 8U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__fmt_flag_read_bytes 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__fmt_fifo_rvalid) 
           & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__fmt_fifo_rdata) 
              >> 0xaU));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__fmt_flag_stop_after 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__fmt_fifo_rvalid) 
           & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__fmt_fifo_rdata) 
              >> 9U));
    vlSelfRef.__VdfgRegularize_h495687df_0_219 = ((~ 
                                                   ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__fmt_fifo_rvalid) 
                                                    & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__fmt_fifo_rdata) 
                                                       >> 0xbU))) 
                                                  & (1U 
                                                     == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__byte_index)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__fmt_byte 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__fmt_fifo_rvalid)
            ? (0xffU & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__fmt_fifo_rdata))
            : 0U);
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__byte_clr = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__scl_temp = 1U;
    vlSelfRef.__VdfgRegularize_h495687df_0_218 = (1U 
                                                  & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__fmt_byte) 
                                                     >> (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__bit_index)));
    if ((0x20U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
        if ((0x10U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__byte_clr = 0U;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__scl_temp = 1U;
        } else if ((8U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
            if ((4U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
                if ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
                    if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__byte_clr = 0U;
                    }
                }
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__scl_temp 
                    = ((1U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q) 
                              >> 1U)) && (1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q)));
            } else if ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__scl_temp = 0U;
            }
        }
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__sda_out_fsm 
            = (1U & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q) 
                      >> 4U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q) 
                                 >> 3U) | ((4U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))
                                            ? (IData)(
                                                      (0U 
                                                       == 
                                                       (3U 
                                                        & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))))
                                            : (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q) 
                                                >> 1U) 
                                               | (IData)(vlSelfRef.__VdfgRegularize_h495687df_0_220))))));
    } else if ((0x10U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
                if ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q)))) {
                        if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__fmt_flag_read_bytes) {
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__byte_clr = 1U;
                        }
                    }
                }
            }
        }
        if ((8U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
            if ((1U & (~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q)))) {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__scl_temp = 0U;
                    }
                }
            }
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__sda_out_fsm 
                = (1U & ((4U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))
                          ? (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q) 
                              >> 1U) & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q)) 
                                        | (IData)(vlSelfRef.__VdfgRegularize_h495687df_0_220)))
                          : ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))
                              ? (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))
                              : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))));
        } else if ((4U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__scl_temp 
                = ((1U & (~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q) 
                             >> 1U))) && (1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__sda_out_fsm 
                = (1U & ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))
                          ? (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))
                          : (IData)(vlSelfRef.__VdfgRegularize_h495687df_0_219)));
        } else {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__scl_temp 
                = ((1U & (~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q) 
                             >> 1U))) && (1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__sda_out_fsm 
                = (1U & ((~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q) 
                             >> 1U)) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_h495687df_0_219))));
        }
    } else if ((8U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__scl_temp 
            = (1U & ((4U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))
                      ? ((1U & (~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q) 
                                   >> 1U))) && (1U 
                                                & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))))
                      : ((1U & (~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q) 
                                   >> 1U))) && (1U 
                                                & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))))));
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__sda_out_fsm 
            = (1U & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q) 
                      >> 2U) | ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))
                                 ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q)
                                 : (IData)(vlSelfRef.__VdfgRegularize_h495687df_0_218))));
    } else if ((4U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__scl_temp 
            = (1U & (~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q) 
                        >> 1U)));
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__sda_out_fsm 
            = (1U & ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))
                      ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q) 
                         & (IData)(vlSelfRef.__VdfgRegularize_h495687df_0_218))
                      : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q)));
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__scl_temp 
            = (1U & ((1U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q) 
                            >> 1U)) || ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) 
                                        || (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__fmt_flag_stop_after))));
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__sda_out_fsm 
            = (1U & (IData)((3U != (3U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q)))));
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__scl_int 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_ovrd_txovrden__q)
            ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_ovrd_sclval__q)
            : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__scl_temp));
}

VL_INLINE_OPT void Vtestharness___024root___nba_sequent__TOP__49(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_sequent__TOP__49\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_io1_do = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_io0_do = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_io2_do = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_io3_do = 0U;
    if ((0U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__dummy_count))) {
        if ((0U != (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_ddr) 
                     << 2U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_qspi) 
                                << 1U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_dspi))))) {
            if ((2U == (6U & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_ddr) 
                               << 2U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_qspi) 
                                          << 1U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_dspi)))))) {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_io1_do 
                    = (1U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__obuffer) 
                             >> 5U));
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_io2_do 
                    = (1U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__obuffer) 
                             >> 6U));
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_io3_do 
                    = (1U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__obuffer) 
                             >> 7U));
            } else if ((6U == (6U & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_ddr) 
                                      << 2U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_qspi) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_dspi)))))) {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_io1_do 
                    = (1U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__obuffer) 
                             >> 5U));
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_io2_do 
                    = (1U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__obuffer) 
                             >> 6U));
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_io3_do 
                    = (1U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__obuffer) 
                             >> 7U));
            } else if ((1U == (1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_dspi)))) {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_io1_do 
                    = (1U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__obuffer) 
                             >> 7U));
            }
        }
        if ((0U == (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_ddr) 
                     << 2U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_qspi) 
                                << 1U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_dspi))))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_io0_do 
                = (1U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__obuffer) 
                         >> 7U));
        } else if ((2U == (6U & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_ddr) 
                                  << 2U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_qspi) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_dspi)))))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_io0_do 
                = (1U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__obuffer) 
                         >> 4U));
        } else if ((6U == (6U & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_ddr) 
                                  << 2U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_qspi) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_dspi)))))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_io0_do 
                = (1U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__obuffer) 
                         >> 4U));
        } else if ((1U == (1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_dspi)))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_io0_do 
                = (1U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__obuffer) 
                         >> 6U));
        }
    }
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__14(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__14\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__clear_cycle_counter = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__clear_toggle_flops = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__toggle_ffs_en = 1U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__clk_div_bypass_en_d 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__clk_div_bypass_en_q;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__use_odd_division_d 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__use_odd_division_q;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__div_d 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__div_q;
    if ((0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__clk_gate_state_q))) {
        if ((1U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__clk_gate_state_q))) {
            if ((1U & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__gate_is_open_q)) 
                       | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__clk_div_bypass_en_q)))) {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__clear_cycle_counter = 1U;
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__clear_toggle_flops = 1U;
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__clk_div_bypass_en_d 
                    = (1U == (0xffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT____VdfgRegularize_ha46cdaf4_0_0));
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__use_odd_division_d 
                    = (1U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT____VdfgRegularize_ha46cdaf4_0_0);
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__div_d 
                    = (0xffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT____VdfgRegularize_ha46cdaf4_0_0);
            }
        }
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__div_ready_o = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__clk_gate_state_d 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__clk_gate_state_q;
    if ((0U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__clk_gate_state_q))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__toggle_ffs_en = 1U;
        if (((0xffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT____VdfgRegularize_ha46cdaf4_0_0) 
             == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__div_q))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__div_ready_o = 1U;
        }
        if (((0xffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT____VdfgRegularize_ha46cdaf4_0_0) 
             != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__div_q))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__clk_gate_state_d = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__clk_gate_state_q))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__toggle_ffs_en = 1U;
        if ((1U & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__gate_is_open_q)) 
                   | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__clk_div_bypass_en_q)))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__toggle_ffs_en = 0U;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__div_ready_o = 1U;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__clk_gate_state_d = 2U;
        }
    } else if ((2U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__clk_gate_state_q))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__toggle_ffs_en = 0U;
        if (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__cycle_cntr_q) 
             == ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__div_q) 
                 - (IData)(1U)))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__clk_gate_state_d = 0U;
        }
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__clk_gate_state_d = 0U;
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__cycle_cntr_d 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__clear_cycle_counter)
            ? 0U : (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__clk_div_bypass_en_q) 
                     | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__cycle_cntr_q) 
                        == ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__div_q) 
                            - (IData)(1U)))) ? 0U : 
                    (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__cycle_cntr_q)))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__t_ff2_en = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__t_ff1_en = 0U;
    if (((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__clk_div_bypass_en_q)) 
         & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__toggle_ffs_en))) {
        if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__use_odd_division_q) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__t_ff2_en 
                = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__cycle_cntr_q) 
                   == VL_SHIFTR_III(32,32,32, ((IData)(1U) 
                                               + (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__div_q)), 1U));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__t_ff1_en 
                = (0U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__cycle_cntr_q));
        } else {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__t_ff1_en 
                = ((0U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__cycle_cntr_q)) 
                   | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__cycle_cntr_q) 
                      == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__div_q), 1U)));
        }
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__t_ff2_d 
        = (1U & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__clear_toggle_flops)) 
                 & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__t_ff2_en)
                     ? (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__t_ff2_q))
                     : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__t_ff2_q))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__t_ff1_d 
        = (1U & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__clear_toggle_flops)) 
                 & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__t_ff1_en)
                     ? (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__t_ff1_q))
                     : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__t_ff1_q))));
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__15(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__15\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_pending 
        = (1U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q) 
                 | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__haltreq)));
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__16(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__16\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vtableidx19;
    __Vtableidx19 = 0;
    // Body
    __Vtableidx19 = (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack) 
                      << 3U) | ((4U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q) 
                                       << 1U)) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__state_q)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__state_d 
        = Vtestharness__ConstPool__TABLE_hb911355a_0
        [__Vtableidx19];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__data_valid 
        = Vtestharness__ConstPool__TABLE_h999f86a3_0
        [__Vtableidx19];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d 
        = Vtestharness__ConstPool__TABLE_hca9a5dee_0
        [__Vtableidx19];
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__17(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__17\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vtableidx15;
    __Vtableidx15 = 0;
    // Body
    __Vtableidx15 = (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack) 
                      << 3U) | ((4U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q) 
                                       << 1U)) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__state_q)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__state_d 
        = Vtestharness__ConstPool__TABLE_hb911355a_0
        [__Vtableidx15];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__data_valid 
        = Vtestharness__ConstPool__TABLE_h999f86a3_0
        [__Vtableidx15];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d 
        = Vtestharness__ConstPool__TABLE_hca9a5dee_0
        [__Vtableidx15];
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__18(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__18\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx18;
    __Vtableidx18 = 0;
    // Body
    __Vtableidx18 = (((0x80U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q) 
                                << 6U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_clear_seq_phase) 
                                            << 5U) 
                                           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_req) 
                                              << 4U))) 
                     | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_q) 
                         << 2U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__state_q)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__state_d 
        = Vtestharness__ConstPool__TABLE_h594ddbf7_0
        [__Vtableidx18];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__req_src_d 
        = Vtestharness__ConstPool__TABLE_h68fda04f_0
        [__Vtableidx18];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_d 
        = Vtestharness__ConstPool__TABLE_h3a98c571_0
        [__Vtableidx18];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack 
        = Vtestharness__ConstPool__TABLE_h2f32a375_0
        [__Vtableidx18];
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__19(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__19\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx14;
    __Vtableidx14 = 0;
    // Body
    __Vtableidx14 = (((0x80U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q) 
                                << 6U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_clear_seq_phase) 
                                            << 5U) 
                                           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_req) 
                                              << 4U))) 
                     | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_q) 
                         << 2U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__state_q)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__state_d 
        = Vtestharness__ConstPool__TABLE_h594ddbf7_0
        [__Vtableidx14];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__req_src_d 
        = Vtestharness__ConstPool__TABLE_h68fda04f_0
        [__Vtableidx14];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_d 
        = Vtestharness__ConstPool__TABLE_h3a98c571_0
        [__Vtableidx14];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack 
        = Vtestharness__ConstPool__TABLE_h2f32a375_0
        [__Vtableidx14];
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__20(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__20\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_d 
        = (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_valid) 
            | ((1U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__i_sync__DOT__reg_q) 
                      >> 2U)) == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__req_synced_q1)))
            ? vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q
            : vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__data_src_q);
}
