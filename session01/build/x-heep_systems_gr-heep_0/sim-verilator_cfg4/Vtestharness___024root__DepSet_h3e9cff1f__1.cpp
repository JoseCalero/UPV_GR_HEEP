// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness___024root.h"

extern const VlUnpacked<CData/*0:0*/, 128> Vtestharness__ConstPool__TABLE_h1a874b86_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtestharness__ConstPool__TABLE_h74052724_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtestharness__ConstPool__TABLE_h3f3e016a_0;

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__21(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__21\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx21;
    __Vtableidx21 = 0;
    // Body
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

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__22(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__22\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    // Body
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

VL_INLINE_OPT void Vtestharness___024root___nba_sequent__TOP__50(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_sequent__TOP__50\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_tag_q 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_tag;
    if ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__fifo_data_tx_valid) 
          & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__fifo_data_tx_ready)) 
         & (0U == (0xfU & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_bin))))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__data_q[0U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_obiplug__DOT__curr_data_tx;
    }
    if ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__fifo_data_tx_valid) 
          & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__fifo_data_tx_ready)) 
         & (1U == (0xfU & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_bin))))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__data_q[1U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_obiplug__DOT__curr_data_tx;
    }
    if ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__fifo_data_tx_valid) 
          & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__fifo_data_tx_ready)) 
         & (2U == (0xfU & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_bin))))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__data_q[2U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_obiplug__DOT__curr_data_tx;
    }
    if ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__fifo_data_tx_valid) 
          & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__fifo_data_tx_ready)) 
         & (3U == (0xfU & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_bin))))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__data_q[3U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_obiplug__DOT__curr_data_tx;
    }
    if ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__fifo_data_tx_valid) 
          & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__fifo_data_tx_ready)) 
         & (4U == (0xfU & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_bin))))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__data_q[4U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_obiplug__DOT__curr_data_tx;
    }
    if ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__fifo_data_tx_valid) 
          & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__fifo_data_tx_ready)) 
         & (5U == (0xfU & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_bin))))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__data_q[5U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_obiplug__DOT__curr_data_tx;
    }
    if ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__fifo_data_tx_valid) 
          & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__fifo_data_tx_ready)) 
         & (6U == (0xfU & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_bin))))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__data_q[6U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_obiplug__DOT__curr_data_tx;
    }
    if ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__fifo_data_tx_valid) 
          & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__fifo_data_tx_ready)) 
         & (7U == (0xfU & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_bin))))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__data_q[7U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_obiplug__DOT__curr_data_tx;
    }
    if ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__fifo_data_tx_valid) 
          & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__fifo_data_tx_ready)) 
         & (8U == (0xfU & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_bin))))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__data_q[8U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_obiplug__DOT__curr_data_tx;
    }
    if ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__fifo_data_tx_valid) 
          & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__fifo_data_tx_ready)) 
         & (9U == (0xfU & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_bin))))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__data_q[9U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_obiplug__DOT__curr_data_tx;
    }
    if ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__fifo_data_tx_valid) 
          & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__fifo_data_tx_ready)) 
         & (0xaU == (0xfU & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_bin))))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__data_q[0xaU] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_obiplug__DOT__curr_data_tx;
    }
    if ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__fifo_data_tx_valid) 
          & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__fifo_data_tx_ready)) 
         & (0xbU == (0xfU & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_bin))))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__data_q[0xbU] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_obiplug__DOT__curr_data_tx;
    }
    if ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__fifo_data_tx_valid) 
          & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__fifo_data_tx_ready)) 
         & (0xcU == (0xfU & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_bin))))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__data_q[0xcU] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_obiplug__DOT__curr_data_tx;
    }
    if ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__fifo_data_tx_valid) 
          & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__fifo_data_tx_ready)) 
         & (0xdU == (0xfU & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_bin))))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__data_q[0xdU] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_obiplug__DOT__curr_data_tx;
    }
    if ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__fifo_data_tx_valid) 
          & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__fifo_data_tx_ready)) 
         & (0xeU == (0xfU & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_bin))))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__data_q[0xeU] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_obiplug__DOT__curr_data_tx;
    }
    if ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__fifo_data_tx_valid) 
          & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__fifo_data_tx_ready)) 
         & (0xfU == (0xfU & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_bin))))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__data_q[0xfU] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_obiplug__DOT__curr_data_tx;
    }
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__26(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__26\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__reg_rdata_next = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__reg_rdata_next 
        = ((IData)((0U != (0xffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[0U])))
            ? ((0xfffffffeU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__reg_rdata_next) 
               | ((1U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[0U])
                   ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_mux_spi_slave_sck__q)
                   : ((2U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[0U])
                       ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_mux_spi_slave_cs__q)
                       : ((4U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[0U])
                           ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_mux_spi_slave_miso__q)
                           : ((8U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[0U])
                               ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_mux_spi_slave_mosi__q)
                               : ((0x10U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[0U])
                                   ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_mux_pdm2pcm_pdm__q)
                                   : ((0x20U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[0U])
                                       ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_mux_pdm2pcm_clk__q)
                                       : ((0x40U & 
                                           vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[0U])
                                           ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_mux_i2s_sck__q)
                                           : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_mux_i2s_ws__q)))))))))
            : ((IData)((0U != (0xff00U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[0U])))
                ? ((0xfffffffeU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__reg_rdata_next) 
                   | ((0x100U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[0U])
                       ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_mux_i2s_sd__q)
                       : ((0x200U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[0U])
                           ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_mux_spi2_cs_0__q)
                           : ((0x400U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[0U])
                               ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_mux_spi2_cs_1__q)
                               : ((0x800U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[0U])
                                   ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_mux_spi2_sck__q)
                                   : ((0x1000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[0U])
                                       ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_mux_spi2_sd_0__q)
                                       : ((0x2000U 
                                           & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[0U])
                                           ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_mux_spi2_sd_1__q)
                                           : ((0x4000U 
                                               & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[0U])
                                               ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_mux_spi2_sd_2__q)
                                               : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_mux_spi2_sd_3__q)))))))))
                : ((IData)((0U != (0xff0000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[0U])))
                    ? ((0x10000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[0U])
                        ? ((0xfffffffeU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__reg_rdata_next) 
                           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_mux_i2c_scl__q))
                        : ((0x20000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[0U])
                            ? ((0xfffffffeU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__reg_rdata_next) 
                               | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_mux_i2c_sda__q))
                            : ((0xffffff00U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__reg_rdata_next) 
                               | ((0x40000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[0U])
                                   ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_clk__q)
                                   : ((0x80000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[0U])
                                       ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_rst__q)
                                       : ((0x100000U 
                                           & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[0U])
                                           ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_boot_select__q)
                                           : ((0x200000U 
                                               & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[0U])
                                               ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_execute_from_flash__q)
                                               : ((0x400000U 
                                                   & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[0U])
                                                   ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_jtag_tck__q)
                                                   : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_jtag_tms__q)))))))))
                    : ((IData)((0U != (0xff000000U 
                                       & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[0U])))
                        ? ((0xffffff00U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__reg_rdata_next) 
                           | ((0x1000000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[0U])
                               ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_jtag_trst__q)
                               : ((0x2000000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[0U])
                                   ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_jtag_tdi__q)
                                   : ((0x4000000U & 
                                       vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[0U])
                                       ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_jtag_tdo__q)
                                       : ((0x8000000U 
                                           & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[0U])
                                           ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_uart_rx__q)
                                           : ((0x10000000U 
                                               & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[0U])
                                               ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_uart_tx__q)
                                               : ((0x20000000U 
                                                   & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[0U])
                                                   ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_exit_value__q)
                                                   : 
                                                  ((0x40000000U 
                                                    & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[0U])
                                                    ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_exit_valid__q)
                                                    : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_gpio_0__q)))))))))
                        : ((IData)((0U != (0xffU & 
                                           vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[1U])))
                            ? ((0xffffff00U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__reg_rdata_next) 
                               | ((1U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[1U])
                                   ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_gpio_1__q)
                                   : ((2U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[1U])
                                       ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_gpio_2__q)
                                       : ((4U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[1U])
                                           ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_gpio_3__q)
                                           : ((8U & 
                                               vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[1U])
                                               ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_gpio_4__q)
                                               : ((0x10U 
                                                   & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[1U])
                                                   ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_gpio_5__q)
                                                   : 
                                                  ((0x20U 
                                                    & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[1U])
                                                    ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_gpio_6__q)
                                                    : 
                                                   ((0x40U 
                                                     & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[1U])
                                                     ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_gpio_7__q)
                                                     : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_gpio_8__q)))))))))
                            : ((IData)((0U != (0xff00U 
                                               & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[1U])))
                                ? ((0xffffff00U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__reg_rdata_next) 
                                   | ((0x100U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[1U])
                                       ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_gpio_9__q)
                                       : ((0x200U & 
                                           vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[1U])
                                           ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_gpio_10__q)
                                           : ((0x400U 
                                               & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[1U])
                                               ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_gpio_11__q)
                                               : ((0x800U 
                                                   & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[1U])
                                                   ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_gpio_12__q)
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[1U])
                                                    ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_gpio_13__q)
                                                    : 
                                                   ((0x2000U 
                                                     & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[1U])
                                                     ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_spi_flash_sck__q)
                                                     : 
                                                    ((0x4000U 
                                                      & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[1U])
                                                      ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_spi_flash_cs_0__q)
                                                      : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_spi_flash_cs_1__q)))))))))
                                : ((IData)((0U != (0xff0000U 
                                                   & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[1U])))
                                    ? ((0xffffff00U 
                                        & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__reg_rdata_next) 
                                       | ((0x10000U 
                                           & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[1U])
                                           ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_spi_flash_sd_0__q)
                                           : ((0x20000U 
                                               & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[1U])
                                               ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_spi_flash_sd_1__q)
                                               : ((0x40000U 
                                                   & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[1U])
                                                   ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_spi_flash_sd_2__q)
                                                   : 
                                                  ((0x80000U 
                                                    & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[1U])
                                                    ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_spi_flash_sd_3__q)
                                                    : 
                                                   ((0x100000U 
                                                     & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[1U])
                                                     ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_spi_sck__q)
                                                     : 
                                                    ((0x200000U 
                                                      & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[1U])
                                                      ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_spi_cs_0__q)
                                                      : 
                                                     ((0x400000U 
                                                       & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[1U])
                                                       ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_spi_cs_1__q)
                                                       : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_spi_sd_0__q)))))))))
                                    : ((IData)((0U 
                                                != 
                                                (0xff000000U 
                                                 & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[1U])))
                                        ? ((0xffffff00U 
                                            & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__reg_rdata_next) 
                                           | ((0x1000000U 
                                               & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[1U])
                                               ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_spi_sd_1__q)
                                               : ((0x2000000U 
                                                   & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[1U])
                                                   ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_spi_sd_2__q)
                                                   : 
                                                  ((0x4000000U 
                                                    & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[1U])
                                                    ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_spi_sd_3__q)
                                                    : 
                                                   ((0x8000000U 
                                                     & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[1U])
                                                     ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_spi_slave_sck__q)
                                                     : 
                                                    ((0x10000000U 
                                                      & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[1U])
                                                      ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_spi_slave_cs__q)
                                                      : 
                                                     ((0x20000000U 
                                                       & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[1U])
                                                       ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_spi_slave_miso__q)
                                                       : 
                                                      ((0x40000000U 
                                                        & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[1U])
                                                        ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_spi_slave_mosi__q)
                                                        : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_pdm2pcm_pdm__q)))))))))
                                        : ((IData)(
                                                   (0U 
                                                    != 
                                                    (0xffU 
                                                     & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[2U])))
                                            ? ((0xffffff00U 
                                                & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__reg_rdata_next) 
                                               | ((1U 
                                                   & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[2U])
                                                   ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_pdm2pcm_clk__q)
                                                   : 
                                                  ((2U 
                                                    & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[2U])
                                                    ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_i2s_sck__q)
                                                    : 
                                                   ((4U 
                                                     & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[2U])
                                                     ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_i2s_ws__q)
                                                     : 
                                                    ((8U 
                                                      & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[2U])
                                                      ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_i2s_sd__q)
                                                      : 
                                                     ((0x10U 
                                                       & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[2U])
                                                       ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_spi2_cs_0__q)
                                                       : 
                                                      ((0x20U 
                                                        & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[2U])
                                                        ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_spi2_cs_1__q)
                                                        : 
                                                       ((0x40U 
                                                         & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[2U])
                                                         ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_spi2_sck__q)
                                                         : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_spi2_sd_0__q)))))))))
                                            : ((0x100U 
                                                & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[2U])
                                                ? (
                                                   (0xffffff00U 
                                                    & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__reg_rdata_next) 
                                                   | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_spi2_sd_1__q))
                                                : (
                                                   (0x200U 
                                                    & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[2U])
                                                    ? 
                                                   ((0xffffff00U 
                                                     & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__reg_rdata_next) 
                                                    | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_spi2_sd_2__q))
                                                    : 
                                                   ((0x400U 
                                                     & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[2U])
                                                     ? 
                                                    ((0xffffff00U 
                                                      & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__reg_rdata_next) 
                                                     | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_spi2_sd_3__q))
                                                     : 
                                                    ((0x800U 
                                                      & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[2U])
                                                      ? 
                                                     ((0xffffff00U 
                                                       & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__reg_rdata_next) 
                                                      | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_i2c_scl__q))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__addr_hit[2U])
                                                       ? 
                                                      ((0xffffff00U 
                                                        & vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT__reg_rdata_next) 
                                                       | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_control_i__DOT__pad_control_reg_top_i__DOT____Vcellout__u_pad_attribute_i2c_sda__q))
                                                       : 0xffffffffU))))))))))))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT____Vcellinp__cpu_subsystem_i__rst_ni 
        = ((~ (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
               >> 1U)) & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_counter_sequence_cpu_reset_i__DOT__switch_onoff_signal_q));
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__27(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__27\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<6>/*191:0*/ __Vtemp_2;
    // Body
    __Vtemp_2[0U] = (IData)((((QData)((IData)(((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_hw_fifo_en__q) 
                                                 << 0x1aU) 
                                                | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_dim_config__q) 
                                                    << 0x19U) 
                                                   | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_dim_inv__q) 
                                                       << 0x18U) 
                                                      | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_pad_top__q) 
                                                         << 0x12U)))) 
                                               | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_pad_bottom__q) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_pad_right__q) 
                                                      << 6U) 
                                                     | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_pad_left__q)))))) 
                              << 0x25U) | (((QData)((IData)(
                                                            (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_window_size__q) 
                                                              << 1U) 
                                                             | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_window_size__qe)))) 
                                            << 0x17U) 
                                           | (QData)((IData)(
                                                             (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_window_count__q) 
                                                               << 0xfU) 
                                                              | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_interrupt_en_transaction_done__q) 
                                                                  << 0xeU) 
                                                                 | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_interrupt_en_window_done__q) 
                                                                     << 0xdU) 
                                                                    | ((((0x64U 
                                                                          == 
                                                                          (0x7fU 
                                                                           & ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xcU] 
                                                                               << 2U) 
                                                                              | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xbU] 
                                                                                >> 0x1eU)))) 
                                                                         & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____VdfgRegularize_h190cbe9c_0_38)) 
                                                                        << 0xbU) 
                                                                       | ((((0x68U 
                                                                             == 
                                                                             (0x7fU 
                                                                              & ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xcU] 
                                                                                << 2U) 
                                                                                | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xbU] 
                                                                                >> 0x1eU)))) 
                                                                            & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____VdfgRegularize_h190cbe9c_0_38)) 
                                                                           << 9U) 
                                                                          | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_hw_config_mode__q) 
                                                                              << 8U) 
                                                                             | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_slot_wait_counter__q))))))))))));
    __Vtemp_2[1U] = (IData)(((((QData)((IData)(((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_hw_fifo_en__q) 
                                                  << 0x1aU) 
                                                 | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_dim_config__q) 
                                                     << 0x19U) 
                                                    | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_dim_inv__q) 
                                                        << 0x18U) 
                                                       | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_pad_top__q) 
                                                          << 0x12U)))) 
                                                | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_pad_bottom__q) 
                                                    << 0xcU) 
                                                   | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_pad_right__q) 
                                                       << 6U) 
                                                      | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_pad_left__q)))))) 
                               << 0x25U) | (((QData)((IData)(
                                                             (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_window_size__q) 
                                                               << 1U) 
                                                              | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_window_size__qe)))) 
                                             << 0x17U) 
                                            | (QData)((IData)(
                                                              (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_window_count__q) 
                                                                << 0xfU) 
                                                               | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_interrupt_en_transaction_done__q) 
                                                                   << 0xeU) 
                                                                  | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_interrupt_en_window_done__q) 
                                                                      << 0xdU) 
                                                                     | ((((0x64U 
                                                                           == 
                                                                           (0x7fU 
                                                                            & ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xcU] 
                                                                                << 2U) 
                                                                               | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xbU] 
                                                                                >> 0x1eU)))) 
                                                                          & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____VdfgRegularize_h190cbe9c_0_38)) 
                                                                         << 0xbU) 
                                                                        | ((((0x68U 
                                                                              == 
                                                                              (0x7fU 
                                                                               & ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xcU] 
                                                                                << 2U) 
                                                                                | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xbU] 
                                                                                >> 0x1eU)))) 
                                                                             & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____VdfgRegularize_h190cbe9c_0_38)) 
                                                                            << 9U) 
                                                                           | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_hw_config_mode__q) 
                                                                               << 8U) 
                                                                              | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_slot_wait_counter__q))))))))))) 
                             >> 0x20U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_processing_unit_i__DOT__reg2hw[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_processing_unit_i__DOT__reg2hw[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_processing_unit_i__DOT__reg2hw[2U] 
        = (IData)((((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_dst_ptr_inc_d2__q)) 
                    << 0x27U) | (((QData)((IData)((
                                                   ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_slot_rx_trigger_slot__q) 
                                                    << 0x10U) 
                                                   | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_slot_tx_trigger_slot__q)))) 
                                  << 7U) | (QData)((IData)(
                                                           ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_src_data_type__q) 
                                                              << 5U) 
                                                             | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_dst_data_type__q) 
                                                                << 3U)) 
                                                            | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_sign_ext__q) 
                                                                << 2U) 
                                                               | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_mode__q))))))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_processing_unit_i__DOT__reg2hw[3U] 
        = (((IData)((((QData)((IData)((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT__status_ready_re) 
                                        << 6U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_src_ptr_inc_d1__q)))) 
                      << 0x1dU) | (QData)((IData)((
                                                   (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_src_ptr_inc_d2__q 
                                                    << 6U) 
                                                   | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_dst_ptr_inc_d1__q)))))) 
            << 0x1eU) | (IData)(((((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_dst_ptr_inc_d2__q)) 
                                   << 0x27U) | (((QData)((IData)(
                                                                 (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_slot_rx_trigger_slot__q) 
                                                                   << 0x10U) 
                                                                  | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_slot_tx_trigger_slot__q)))) 
                                                 << 7U) 
                                                | (QData)((IData)(
                                                                  ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_src_data_type__q) 
                                                                     << 5U) 
                                                                    | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_dst_data_type__q) 
                                                                       << 3U)) 
                                                                   | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_sign_ext__q) 
                                                                       << 2U) 
                                                                      | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_mode__q))))))) 
                                 >> 0x20U)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_processing_unit_i__DOT__reg2hw[4U] 
        = (((IData)((((QData)((IData)((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT__status_ready_re) 
                                        << 6U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_src_ptr_inc_d1__q)))) 
                      << 0x1dU) | (QData)((IData)((
                                                   (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_src_ptr_inc_d2__q 
                                                    << 6U) 
                                                   | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_dst_ptr_inc_d1__q)))))) 
            >> 2U) | ((IData)(((((QData)((IData)((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT__status_ready_re) 
                                                   << 6U) 
                                                  | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_src_ptr_inc_d1__q)))) 
                                 << 0x1dU) | (QData)((IData)(
                                                             ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_src_ptr_inc_d2__q 
                                                               << 6U) 
                                                              | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_dst_ptr_inc_d1__q))))) 
                               >> 0x20U)) << 0x1eU));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_processing_unit_i__DOT__reg2hw[5U] 
        = ((0xffffffe0U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_processing_unit_i__DOT__reg2hw[5U]) 
           | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT__status_ready_re) 
               << 3U) | ((IData)(((((QData)((IData)(
                                                    (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT__status_ready_re) 
                                                      << 6U) 
                                                     | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_src_ptr_inc_d1__q)))) 
                                    << 0x1dU) | (QData)((IData)(
                                                                ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_src_ptr_inc_d2__q 
                                                                  << 6U) 
                                                                 | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_dst_ptr_inc_d1__q))))) 
                                  >> 0x20U)) >> 2U)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_processing_unit_i__DOT__reg2hw[5U] 
        = ((0x1fU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_processing_unit_i__DOT__reg2hw[5U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_size_d1__q)) 
                        << 0x11U) | (QData)((IData)(
                                                    (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_size_d1__qe) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_size_d2__q)))))) 
              << 5U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_processing_unit_i__DOT__reg2hw[6U] 
        = (((IData)((((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_size_d1__q)) 
                      << 0x11U) | (QData)((IData)((
                                                   ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_size_d1__qe) 
                                                    << 0x10U) 
                                                   | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_size_d2__q)))))) 
            >> 0x1bU) | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_addr_ptr__q 
                          << 6U) | ((IData)(((((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_size_d1__q)) 
                                               << 0x11U) 
                                              | (QData)((IData)(
                                                                (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_size_d1__qe) 
                                                                  << 0x10U) 
                                                                 | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_size_d2__q))))) 
                                             >> 0x20U)) 
                                    << 5U)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_processing_unit_i__DOT__reg2hw[7U] 
        = ((0xffffffc0U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_processing_unit_i__DOT__reg2hw[7U]) 
           | (((0x1fU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_addr_ptr__q 
                         >> 0x1aU)) | ((IData)(((((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_size_d1__q)) 
                                                  << 0x11U) 
                                                 | (QData)((IData)(
                                                                   (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_size_d1__qe) 
                                                                     << 0x10U) 
                                                                    | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_size_d2__q))))) 
                                                >> 0x20U)) 
                                       >> 0x1bU)) | 
              (0x20U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_addr_ptr__q 
                        >> 0x1aU))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_processing_unit_i__DOT__reg2hw[7U] 
        = ((0x3fU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_processing_unit_i__DOT__reg2hw[7U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_src_ptr__q)) 
                        << 0x20U) | (QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_dst_ptr__q)))) 
              << 6U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_processing_unit_i__DOT__reg2hw[8U] 
        = (((IData)((((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_src_ptr__q)) 
                      << 0x20U) | (QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_dst_ptr__q)))) 
            >> 0x1aU) | ((IData)(((((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_src_ptr__q)) 
                                    << 0x20U) | (QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_dst_ptr__q))) 
                                  >> 0x20U)) << 6U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_processing_unit_i__DOT__reg2hw[9U] 
        = ((IData)(((((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_src_ptr__q)) 
                      << 0x20U) | (QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_dst_ptr__q))) 
                    >> 0x20U)) >> 0x1aU);
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__dma_read_unit_state) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__dma_read_unit_n_state = 1U;
        if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__dma_read_unit_state) {
            if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_dim_config__q) {
                if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_dim_config__q) {
                    if (((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__dma_src_cnt_d1 
                          == (0xffffU & ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_processing_unit_i__DOT__reg2hw[6U] 
                                          << 0xaU) 
                                         | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_processing_unit_i__DOT__reg2hw[5U] 
                                            >> 0x16U)))) 
                         & (~ (0U != vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__dma_src_cnt_d2)))) {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__dma_read_unit_n_state = 0U;
                    }
                }
            } else if ((1U & (~ (0U != vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__dma_src_cnt_d1)))) {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__dma_read_unit_n_state = 0U;
            }
        }
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__dma_read_unit_n_state = 0U;
        if ((1U == vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_state_q)) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__dma_read_unit_n_state = 1U;
        }
    }
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__30(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__30\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT____VdfgRegularize_h251a7f89_0_1;
    testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT____VdfgRegularize_h251a7f89_0_1 = 0;
    CData/*0:0*/ testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT____VdfgRegularize_h251a7f89_0_2;
    testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT____VdfgRegularize_h251a7f89_0_2 = 0;
    // Body
    testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT____VdfgRegularize_h251a7f89_0_1 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_sign_ext__q) 
           & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__data_in_rdata 
              >> 0xfU));
    testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT____VdfgRegularize_h251a7f89_0_2 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_sign_ext__q) 
           & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__data_in_rdata 
              >> 0x1fU));
    vlSelfRef.__VdfgRegularize_h495687df_0_390 = ((4U 
                                                   != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__dma_read_addr_fifo_i__DOT__status_cnt_q)) 
                                                  & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__data_addr_in_rvalid));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__dma_read_addr_fifo_i__DOT__mem_n[0U] 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__dma_read_addr_fifo_i__DOT__mem_q[0U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__dma_read_addr_fifo_i__DOT__mem_n[1U] 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__dma_read_addr_fifo_i__DOT__mem_q[1U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__dma_read_addr_fifo_i__DOT__mem_n[2U] 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__dma_read_addr_fifo_i__DOT__mem_q[2U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__dma_read_addr_fifo_i__DOT__mem_n[3U] 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__dma_read_addr_fifo_i__DOT__mem_q[3U];
    if (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__data_addr_in_rvalid) 
         & (4U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__dma_read_addr_fifo_i__DOT__status_cnt_q)))) {
        VL_ASSIGNSEL_WI(128, 32, (0x7fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__dma_read_addr_fifo_i__DOT__write_pointer_q), 5U)), vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__dma_read_addr_fifo_i__DOT__mem_n, vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__data_addr_in_rdata);
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__dma_read_data_offset_fifo_i__DOT__read_pointer_n 
        = (3U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__dma_read_data_offset_fifo_i__DOT__read_pointer_q) 
                 + ((0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__dma_read_data_offset_fifo_i__DOT__status_cnt_q)) 
                    & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__data_in_rvalid))));
    vlSelfRef.__VdfgRegularize_h495687df_0_385 = ((4U 
                                                   != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__3__KET____DOT__dma_read_fifo_i__DOT__status_cnt_q)) 
                                                  & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__data_in_rvalid));
    vlSelfRef.__VdfgRegularize_h495687df_0_386 = ((4U 
                                                   != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__2__KET____DOT__dma_read_fifo_i__DOT__status_cnt_q)) 
                                                  & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__data_in_rvalid));
    vlSelfRef.__VdfgRegularize_h495687df_0_387 = ((4U 
                                                   != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__1__KET____DOT__dma_read_fifo_i__DOT__status_cnt_q)) 
                                                  & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__data_in_rvalid));
    vlSelfRef.__VdfgRegularize_h495687df_0_388 = ((4U 
                                                   != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__0__KET____DOT__dma_read_fifo_i__DOT__status_cnt_q)) 
                                                  & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__data_in_rvalid));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__0__KET____DOT__dma_read_fifo_i__DOT__status_cnt_n 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__0__KET____DOT__dma_read_fifo_i__DOT__status_cnt_q;
    if (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__data_in_rvalid) 
         & (4U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__0__KET____DOT__dma_read_fifo_i__DOT__status_cnt_q)))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__0__KET____DOT__dma_read_fifo_i__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__0__KET____DOT__dma_read_fifo_i__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__read_fifo_pop) 
         & (0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__0__KET____DOT__dma_read_fifo_i__DOT__status_cnt_q)))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__0__KET____DOT__dma_read_fifo_i__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__0__KET____DOT__dma_read_fifo_i__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__data_in_rvalid) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__read_fifo_pop)) 
          & (4U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__0__KET____DOT__dma_read_fifo_i__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__0__KET____DOT__dma_read_fifo_i__DOT__status_cnt_q)))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__0__KET____DOT__dma_read_fifo_i__DOT__status_cnt_n 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__0__KET____DOT__dma_read_fifo_i__DOT__status_cnt_q;
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__1__KET____DOT__dma_read_fifo_i__DOT__status_cnt_n 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__1__KET____DOT__dma_read_fifo_i__DOT__status_cnt_q;
    if (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__data_in_rvalid) 
         & (4U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__1__KET____DOT__dma_read_fifo_i__DOT__status_cnt_q)))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__1__KET____DOT__dma_read_fifo_i__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__1__KET____DOT__dma_read_fifo_i__DOT__status_cnt_q)));
    }
    if ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__read_fifo_pop) 
          >> 1U) & (0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__1__KET____DOT__dma_read_fifo_i__DOT__status_cnt_q)))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__1__KET____DOT__dma_read_fifo_i__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__1__KET____DOT__dma_read_fifo_i__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__data_in_rvalid) 
           & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__read_fifo_pop) 
              >> 1U)) & (4U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__1__KET____DOT__dma_read_fifo_i__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__1__KET____DOT__dma_read_fifo_i__DOT__status_cnt_q)))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__1__KET____DOT__dma_read_fifo_i__DOT__status_cnt_n 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__1__KET____DOT__dma_read_fifo_i__DOT__status_cnt_q;
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__2__KET____DOT__dma_read_fifo_i__DOT__status_cnt_n 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__2__KET____DOT__dma_read_fifo_i__DOT__status_cnt_q;
    if (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__data_in_rvalid) 
         & (4U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__2__KET____DOT__dma_read_fifo_i__DOT__status_cnt_q)))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__2__KET____DOT__dma_read_fifo_i__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__2__KET____DOT__dma_read_fifo_i__DOT__status_cnt_q)));
    }
    if ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__read_fifo_pop) 
          >> 2U) & (0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__2__KET____DOT__dma_read_fifo_i__DOT__status_cnt_q)))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__2__KET____DOT__dma_read_fifo_i__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__2__KET____DOT__dma_read_fifo_i__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__data_in_rvalid) 
           & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__read_fifo_pop) 
              >> 2U)) & (4U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__2__KET____DOT__dma_read_fifo_i__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__2__KET____DOT__dma_read_fifo_i__DOT__status_cnt_q)))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__2__KET____DOT__dma_read_fifo_i__DOT__status_cnt_n 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__2__KET____DOT__dma_read_fifo_i__DOT__status_cnt_q;
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__3__KET____DOT__dma_read_fifo_i__DOT__status_cnt_n 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__3__KET____DOT__dma_read_fifo_i__DOT__status_cnt_q;
    if (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__data_in_rvalid) 
         & (4U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__3__KET____DOT__dma_read_fifo_i__DOT__status_cnt_q)))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__3__KET____DOT__dma_read_fifo_i__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__3__KET____DOT__dma_read_fifo_i__DOT__status_cnt_q)));
    }
    if ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__read_fifo_pop) 
          >> 3U) & (0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__3__KET____DOT__dma_read_fifo_i__DOT__status_cnt_q)))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__3__KET____DOT__dma_read_fifo_i__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__3__KET____DOT__dma_read_fifo_i__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__data_in_rvalid) 
           & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__read_fifo_pop) 
              >> 3U)) & (4U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__3__KET____DOT__dma_read_fifo_i__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__3__KET____DOT__dma_read_fifo_i__DOT__status_cnt_q)))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__3__KET____DOT__dma_read_fifo_i__DOT__status_cnt_n 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__3__KET____DOT__dma_read_fifo_i__DOT__status_cnt_q;
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__read_buffer_input 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__data_in_rdata;
    if ((3U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_mode__q))) {
        if ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__read_data_offset))) {
            if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__read_data_offset))) {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__read_buffer_input 
                    = (((- (IData)((IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT____VdfgRegularize_h251a7f89_0_2))) 
                        << 8U) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__data_in_rdata 
                                  >> 0x18U));
            } else if ((2U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_src_data_type__q))) {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__read_buffer_input 
                    = (((- (IData)(((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_sign_ext__q) 
                                    & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__data_in_rdata 
                                       >> 0x17U)))) 
                        << 8U) | (0xffU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__data_in_rdata 
                                           >> 0x10U)));
            } else if ((1U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_src_data_type__q))) {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__read_buffer_input 
                    = (((- (IData)((IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT____VdfgRegularize_h251a7f89_0_2))) 
                        << 0x10U) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__data_in_rdata 
                                     >> 0x10U));
            }
        } else if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__read_data_offset))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__read_buffer_input 
                = (((- (IData)((IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT____VdfgRegularize_h251a7f89_0_1))) 
                    << 8U) | (0xffU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__data_in_rdata 
                                       >> 8U)));
        } else if ((2U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_src_data_type__q))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__read_buffer_input 
                = (((- (IData)(((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_sign_ext__q) 
                                & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__data_in_rdata 
                                   >> 7U)))) << 8U) 
                   | (0xffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__data_in_rdata));
        } else if ((1U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_src_data_type__q))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__read_buffer_input 
                = (((- (IData)((IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT____VdfgRegularize_h251a7f89_0_1))) 
                    << 0x10U) | (0xffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__data_in_rdata));
        }
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__dma_read_addr_fifo_i__DOT__write_pointer_n 
        = (3U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__dma_read_addr_fifo_i__DOT__write_pointer_q) 
                 + (IData)(vlSelfRef.__VdfgRegularize_h495687df_0_390)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__3__KET____DOT__dma_read_fifo_i__DOT__write_pointer_n 
        = (3U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__3__KET____DOT__dma_read_fifo_i__DOT__write_pointer_q) 
                 + (IData)(vlSelfRef.__VdfgRegularize_h495687df_0_385)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__2__KET____DOT__dma_read_fifo_i__DOT__write_pointer_n 
        = (3U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__2__KET____DOT__dma_read_fifo_i__DOT__write_pointer_q) 
                 + (IData)(vlSelfRef.__VdfgRegularize_h495687df_0_386)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__1__KET____DOT__dma_read_fifo_i__DOT__write_pointer_n 
        = (3U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__1__KET____DOT__dma_read_fifo_i__DOT__write_pointer_q) 
                 + (IData)(vlSelfRef.__VdfgRegularize_h495687df_0_387)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__0__KET____DOT__dma_read_fifo_i__DOT__write_pointer_n 
        = (3U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__0__KET____DOT__dma_read_fifo_i__DOT__write_pointer_q) 
                 + (IData)(vlSelfRef.__VdfgRegularize_h495687df_0_388)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__0__KET____DOT__dma_read_fifo_i__DOT__mem_n 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__0__KET____DOT__dma_read_fifo_i__DOT__mem_q;
    if (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__data_in_rvalid) 
         & (4U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__0__KET____DOT__dma_read_fifo_i__DOT__status_cnt_q)))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__0__KET____DOT__dma_read_fifo_i__DOT__mem_n 
            = (((~ ((IData)(0xffU) << (0x1fU & VL_SHIFTL_III(5,32,32, (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__0__KET____DOT__dma_read_fifo_i__DOT__write_pointer_q), 3U)))) 
                & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__0__KET____DOT__dma_read_fifo_i__DOT__mem_n) 
               | (0xffffffffULL & ((0xffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__read_buffer_input) 
                                   << (0x1fU & VL_SHIFTL_III(5,32,32, (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__0__KET____DOT__dma_read_fifo_i__DOT__write_pointer_q), 3U)))));
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__1__KET____DOT__dma_read_fifo_i__DOT__mem_n 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__1__KET____DOT__dma_read_fifo_i__DOT__mem_q;
    if (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__data_in_rvalid) 
         & (4U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__1__KET____DOT__dma_read_fifo_i__DOT__status_cnt_q)))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__1__KET____DOT__dma_read_fifo_i__DOT__mem_n 
            = (((~ ((IData)(0xffU) << (0x1fU & VL_SHIFTL_III(5,32,32, (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__1__KET____DOT__dma_read_fifo_i__DOT__write_pointer_q), 3U)))) 
                & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__1__KET____DOT__dma_read_fifo_i__DOT__mem_n) 
               | (0xffffffffULL & ((0xffU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__read_buffer_input 
                                             >> 8U)) 
                                   << (0x1fU & VL_SHIFTL_III(5,32,32, (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__1__KET____DOT__dma_read_fifo_i__DOT__write_pointer_q), 3U)))));
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__2__KET____DOT__dma_read_fifo_i__DOT__mem_n 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__2__KET____DOT__dma_read_fifo_i__DOT__mem_q;
    if (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__data_in_rvalid) 
         & (4U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__2__KET____DOT__dma_read_fifo_i__DOT__status_cnt_q)))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__2__KET____DOT__dma_read_fifo_i__DOT__mem_n 
            = (((~ ((IData)(0xffU) << (0x1fU & VL_SHIFTL_III(5,32,32, (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__2__KET____DOT__dma_read_fifo_i__DOT__write_pointer_q), 3U)))) 
                & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__2__KET____DOT__dma_read_fifo_i__DOT__mem_n) 
               | (0xffffffffULL & ((0xffU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__read_buffer_input 
                                             >> 0x10U)) 
                                   << (0x1fU & VL_SHIFTL_III(5,32,32, (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__2__KET____DOT__dma_read_fifo_i__DOT__write_pointer_q), 3U)))));
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__3__KET____DOT__dma_read_fifo_i__DOT__mem_n 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__3__KET____DOT__dma_read_fifo_i__DOT__mem_q;
    if (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__data_in_rvalid) 
         & (4U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__3__KET____DOT__dma_read_fifo_i__DOT__status_cnt_q)))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__3__KET____DOT__dma_read_fifo_i__DOT__mem_n 
            = (((~ ((IData)(0xffU) << (0x1fU & VL_SHIFTL_III(5,32,32, (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__3__KET____DOT__dma_read_fifo_i__DOT__write_pointer_q), 3U)))) 
                & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__3__KET____DOT__dma_read_fifo_i__DOT__mem_n) 
               | (0xffffffffULL & ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__read_buffer_input 
                                    >> 0x18U) << (0x1fU 
                                                  & VL_SHIFTL_III(5,32,32, (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__3__KET____DOT__dma_read_fifo_i__DOT__write_pointer_q), 3U)))));
    }
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__32(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__32\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__data_rx_dc_valid = 0U;
    if ((IData)((3U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT____Vcellout__u_control_en_rx__q)))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__data_rx_dc_valid 
            = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_rx_channel_i__DOT__r_valid) 
               & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_rx_channel_i__DOT__data_ws) 
                  ^ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_rx_channel_i__DOT__last_data_ws)));
    } else if ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT____Vcellout__u_control_en_rx__q))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__data_rx_dc_valid 
            = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_rx_channel_i__DOT__r_valid) 
               & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_rx_channel_i__DOT__data_ws));
    } else if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT____Vcellout__u_control_en_rx__q))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__data_rx_dc_valid 
            = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_rx_channel_i__DOT__r_valid) 
               & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_rx_channel_i__DOT__data_ws)));
    }
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__33(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__33\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_uart_tx__DOT__pad 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_llpbk__q)
            ? (IData)(vlSelfRef.testharness__DOT__uart_rx__strong__out118)
            : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__tx_out_q));
}

extern const VlUnpacked<CData/*0:0*/, 256> Vtestharness__ConstPool__TABLE_hb911f100_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtestharness__ConstPool__TABLE_h297e1d20_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtestharness__ConstPool__TABLE_ha7d15b11_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtestharness__ConstPool__TABLE_h666fdd0e_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtestharness__ConstPool__TABLE_h738c6b5d_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vtestharness__ConstPool__TABLE_h7067c1aa_0;

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__34(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__34\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx24;
    __Vtableidx24 = 0;
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__rx_data 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_rxreg__DOT__running)
            ? ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_rxreg__DOT__data_int 
                << 1U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__spi_slave_mosi_in_x))
            : vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_rxreg__DOT__data_int);
    __Vtableidx24 = (0xffU & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__decode_cmd_comb)
                               ? vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__rx_data
                               : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__cmd_reg)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__get_addr 
        = Vtestharness__ConstPool__TABLE_hb911f100_0
        [__Vtableidx24];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__get_data 
        = Vtestharness__ConstPool__TABLE_h297e1d20_0
        [__Vtableidx24];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__send_data 
        = Vtestharness__ConstPool__TABLE_ha7d15b11_0
        [__Vtableidx24];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__enable_cont 
        = Vtestharness__ConstPool__TABLE_hb911f100_0
        [__Vtableidx24];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__enable_regs 
        = Vtestharness__ConstPool__TABLE_h666fdd0e_0
        [__Vtableidx24];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__wait_dummy 
        = Vtestharness__ConstPool__TABLE_h738c6b5d_0
        [__Vtableidx24];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__reg_sel 
        = Vtestharness__ConstPool__TABLE_h7067c1aa_0
        [__Vtableidx24];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__reg_data 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__u_spiregs__DOT__reg0;
    if ((0U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__reg_sel))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__reg_data 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__u_spiregs__DOT__reg0;
    } else if ((1U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__reg_sel))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__reg_data 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__u_spiregs__DOT__reg1;
    } else if ((2U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__reg_sel))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__reg_data 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__u_spiregs__DOT__reg2;
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__reg_valid = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__ctrl_data_rx_valid = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__tx_data_valid_next = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__tx_counter_next = 0x1fU;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__tx_counter_upd_next = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__ctrl_data_tx_ready_next = 0U;
    if ((4U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__state)))) {
                if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__rx_data_valid) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__tx_data_valid_next = 1U;
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__tx_counter_next = 0x1fU;
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__tx_counter_upd_next = 1U;
                    if ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__enable_regs)))) {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__ctrl_data_tx_ready_next = 1U;
                    }
                }
            }
        }
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__state_next 
            = ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__state))
                ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__state)
                : ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__state))
                    ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__state)
                    : ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__rx_data_valid)
                        ? 2U : 4U)));
    } else if ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__state))) {
        if ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__state)))) {
            if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__tx_done_reg) {
                if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__enable_cont) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__tx_data_valid_next = 1U;
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__tx_counter_next = 0x1fU;
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__tx_counter_upd_next = 1U;
                    if ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__enable_regs)))) {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__ctrl_data_tx_ready_next = 1U;
                    }
                }
            }
        }
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__state_next 
            = ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__state))
                ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__rx_data_valid)
                    ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__enable_cont)
                        ? 3U : 0U) : 3U) : ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__tx_done_reg)
                                             ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__enable_cont)
                                                 ? 2U
                                                 : 0U)
                                             : 2U));
    } else {
        if ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__state)))) {
            if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__rx_data_valid) {
                if ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__get_addr)))) {
                    if ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__get_data)))) {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__tx_data_valid_next = 1U;
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__tx_counter_next = 0x1fU;
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__tx_counter_upd_next = 1U;
                    }
                }
            }
        }
        if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__state))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__state_next 
                = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__rx_data_valid)
                    ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__wait_dummy)
                        ? 4U : 3U) : 1U);
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__ctrl_data_tx_ready_next = 1U;
        } else {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__ctrl_data_tx_ready_next = 1U;
            if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__rx_data_valid) {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__state_next 
                    = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__get_addr)
                        ? 1U : ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__get_data)
                                 ? 3U : 2U));
                if ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__get_addr)))) {
                    if ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__get_data)))) {
                        if ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__enable_regs)))) {
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__ctrl_data_tx_ready_next = 1U;
                        }
                    }
                }
            } else {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__state_next = 0U;
            }
        }
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__rx_counter = 0x1fU;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__rx_counter_upd = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__state))) {
                if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__rx_data_valid) {
                    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__enable_regs) {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__reg_valid = 1U;
                    }
                    if ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__enable_regs)))) {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__ctrl_data_rx_valid = 1U;
                    }
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__rx_counter 
                        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__enable_cont)
                            ? 0x1fU : 7U);
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__rx_counter_upd = 1U;
                }
            } else if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__tx_done_reg) {
                if ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__enable_cont)))) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__rx_counter = 7U;
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__rx_counter_upd = 1U;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__state))) {
            if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__rx_data_valid) {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__rx_counter 
                    = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__wait_dummy)
                        ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__u_spiregs__DOT__reg0)
                        : 0x1fU);
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__rx_counter_upd = 1U;
            }
        } else if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__rx_data_valid) {
            if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__get_addr) {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__rx_counter = 0x1fU;
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__rx_counter_upd = 1U;
            } else if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__get_data) {
                if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_slave_sm__DOT__enable_regs) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__rx_counter = 7U;
                }
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__rx_counter_upd = 1U;
            }
        }
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_rxreg__DOT__counter_trgt_next 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__rx_counter_upd)
            ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__rx_counter)
            : ((1U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_rxreg__DOT__counter_trgt))
                ? 7U : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_rxreg__DOT__counter_trgt)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_rxreg__DOT__running_next 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__rx_counter_upd) 
           | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_rxreg__DOT__counter) 
               != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_rxreg__DOT__counter_trgt)) 
              & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_rxreg__DOT__running)));
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__37(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__37\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_rx_channel_i__DOT__s_shiftreg 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_rx_channel_i__DOT__r_shiftreg;
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_rx_channel_i__DOT__word_done) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_rx_channel_i__DOT__s_shiftreg = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_rx_channel_i__DOT__width_overflow)))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_rx_channel_i__DOT__s_shiftreg 
            = (((~ ((IData)(1U) << (0x1fU & ((7U | 
                                              ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT____Vcellout__u_control_data_width__q) 
                                               << 3U)) 
                                             - (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_rx_channel_i__DOT__r_count_bit))))) 
                & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_rx_channel_i__DOT__s_shiftreg) 
               | (0xffffffffULL & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__i2s_sd_in_x) 
                                   << (0x1fU & ((7U 
                                                 | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT____Vcellout__u_control_data_width__q) 
                                                    << 3U)) 
                                                - (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_rx_channel_i__DOT__r_count_bit))))));
    }
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__38(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__38\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__ws 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_ws_gen_i__DOT__ws) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT____Vcellout__u_control_en_ws__q));
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__39(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__39\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__ctrl_data_tx_ready) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__ctrl_data_tx_ready)) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_dst__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain));
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__45(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__45\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx17;
    __Vtableidx17 = 0;
    // Body
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

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__46(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__46\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx13;
    __Vtableidx13 = 0;
    // Body
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

VL_INLINE_OPT void Vtestharness___024root___nba_sequent__TOP__52(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_sequent__TOP__52\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_tag 
        = vlSelfRef.__Vdly__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_tag;
}

VL_INLINE_OPT void Vtestharness___024root___nba_sequent__TOP__53(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_sequent__TOP__53\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__fifo_data_tx_valid = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_bin 
        = (((0x10U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_q)) 
            | ((8U & (VL_REDXOR_32((3U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_q) 
                                          >> 3U))) 
                      << 3U)) | (4U & (VL_REDXOR_32(
                                                    (7U 
                                                     & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_q) 
                                                        >> 2U))) 
                                       << 2U)))) | 
           ((2U & (VL_REDXOR_32((0xfU & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_q) 
                                         >> 1U))) << 1U)) 
            | (1U & VL_REDXOR_8(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_q))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__fifo_data_tx_ready 
        = (0x10U != ((((0x10U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__gen_sync__BRA__4__KET____DOT__i_sync__DOT__reg_q) 
                                 << 3U)) | ((8U & (
                                                   VL_REDXOR_32(
                                                                (3U 
                                                                 & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__rptr) 
                                                                    >> 3U))) 
                                                   << 3U)) 
                                            | (4U & 
                                               (VL_REDXOR_32(
                                                             (7U 
                                                              & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__rptr) 
                                                                 >> 2U))) 
                                                << 2U)))) 
                      | ((2U & (VL_REDXOR_32((0xfU 
                                              & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__rptr) 
                                                 >> 1U))) 
                                << 1U)) | (1U & VL_REDXOR_8(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__rptr)))) 
                     ^ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_dcfifo_tx__DOT__i_cdc_fifo_gray__DOT__i_src__DOT__wptr_bin)));
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__rstgen_i__DOT__init_no) {
        if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_obiplug__DOT__sample_obidata) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_obiplug__DOT__curr_data_tx 
                = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_fifo_i__DOT____Vcellout__obi_resp_fifo_i__data_o;
        }
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_obiplug__DOT__curr_data_tx = 0U;
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_obiplug__DOT__incr_addr_r = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_obiplug__DOT__sample_obidata = 0U;
    if ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_obiplug__DOT__OBI_CS))) {
        if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_obiplug__DOT__OBI_CS))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__fifo_data_tx_valid = 1U;
            if ((1U & (~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_syncro__DOT__cs_reg) 
                          >> 1U)))) {
                if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__fifo_data_tx_ready) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_obiplug__DOT__incr_addr_r = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_obiplug__DOT__OBI_CS)))) {
            if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__vld_o) {
                if ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_obiplug__DOT__curr_rxtx_state)))) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_obiplug__DOT__sample_obidata = 1U;
                }
            }
        }
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_fifo_i__DOT____Vcellout__obi_resp_fifo_i__data_o 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_fifo_i__DOT__obi_resp_fifo_i__DOT__mem_q;
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__50(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__50\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_write_unit_i__DOT__wait_for_tx 
        = (0U != (0x7fU & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_global_trigger_slots)) 
                           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_slot_tx_trigger_slot__q))));
    if ((0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_write_unit_i__DOT__wait_for_tx_state_q))) {
        if ((1U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_write_unit_i__DOT__wait_for_tx_state_q))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_write_unit_i__DOT__wait_for_tx = 1U;
        } else if ((2U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_write_unit_i__DOT__wait_for_tx_state_q))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_write_unit_i__DOT__wait_for_tx = 1U;
        }
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__wait_for_rx 
        = (0U != (0x7fU & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_global_trigger_slots)) 
                           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_slot_rx_trigger_slot__q))));
    if ((0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__wait_for_rx_state_q))) {
        if ((1U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__wait_for_rx_state_q))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__wait_for_rx = 1U;
        } else if ((2U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__wait_for_rx_state_q))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__wait_for_rx = 1U;
        }
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_write_unit_i__DOT__data_req_cond 
        = (1U & (~ ((IData)((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__write_buffer_resp 
                             >> 0x22U)) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_write_unit_i__DOT__wait_for_tx) 
                                           | ((0U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__dma_read_addr_fifo_i__DOT__status_cnt_q)) 
                                              & (2U 
                                                 == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_mode__q)))))));
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_write_unit_i__DOT__obi_data_req_q) {
        if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_write_unit_i__DOT__obi_data_req_q) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_write_unit_i__DOT__data_req_cond = 1U;
        }
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__data_req_cond_preobi 
        = (1U & (~ (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__dma_read_unit_state) 
                     & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_dim_config__q)
                         ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_dim_config__q) 
                            & ((~ (0U != vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__dma_src_cnt_d2)) 
                               & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__dma_src_cnt_d1 
                                  == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_size_d1__q))))
                         : (~ (0U != vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__dma_src_cnt_d1)))) 
                    | (((4U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__3__KET____DOT__dma_read_fifo_i__DOT__status_cnt_q)) 
                        | ((4U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__2__KET____DOT__dma_read_fifo_i__DOT__status_cnt_q)) 
                           | ((4U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__1__KET____DOT__dma_read_fifo_i__DOT__status_cnt_q)) 
                              | (4U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__0__KET____DOT__dma_read_fifo_i__DOT__status_cnt_q))))) 
                       | ((3U == (3U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__dma_read_data_offset_fifo_i__DOT__status_cnt_q))) 
                          | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__wait_for_rx) 
                             | (((3U == (3U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__0__KET____DOT__dma_read_fifo_i__DOT__status_cnt_q))) 
                                 & ((3U == (3U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__1__KET____DOT__dma_read_fifo_i__DOT__status_cnt_q))) 
                                    & ((3U == (3U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__2__KET____DOT__dma_read_fifo_i__DOT__status_cnt_q))) 
                                       & (3U == (3U 
                                                 & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_buffer_unit_i__DOT__dma_buffer_fifos_i__DOT__FIFO_GEN__BRA__3__KET____DOT__dma_read_fifo_i__DOT__status_cnt_q)))))) 
                                | (4U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__dma_read_data_offset_fifo_i__DOT__status_cnt_q)))))))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_write_unit_i__DOT__data_out_req = 0U;
    if (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_write_unit_i__DOT__dma_write_unit_state) 
         & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_write_unit_i__DOT__dma_done)))) {
        if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_write_unit_i__DOT__data_req_cond) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_write_unit_i__DOT__data_out_req = 1U;
        }
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__data_in_req 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__dma_read_unit_state) 
           & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__obi_data_req_q)
               ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__data_req_cond_preobi) 
                  | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__obi_data_req_q))
               : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__data_req_cond_preobi)));
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__52(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__52\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_rdata_next = 0U;
    if ((IData)((0U != (0xffU & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit))))) {
        if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff00U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q) 
                         << 7U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q) 
                                   << 6U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q) 
                                               << 5U) 
                                              | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q) 
                                                 << 4U))) 
                      | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q) 
                           << 3U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_empty__q) 
                                     << 2U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q)))));
        } else if ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff00U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q) 
                         << 7U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q) 
                                   << 6U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q) 
                                               << 5U) 
                                              | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q) 
                                                 << 4U))) 
                      | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q) 
                           << 3U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q) 
                                     << 2U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q)))));
        } else if ((4U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_rdata_next 
                = (0xffffff00U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_rdata_next);
        } else if ((8U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffff8U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_nf__q) 
                       << 2U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_rx__q) 
                                  << 1U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q))));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffc0fU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_rxblvl__q) 
                       << 8U) | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_odd__q) 
                                   << 7U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q) 
                                             << 6U)) 
                                 | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_llpbk__q) 
                                     << 5U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_slpbk__q) 
                                               << 4U)))));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_nco__q) 
                      << 0x10U));
        } else if ((0x10U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffff0U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__tx_fifo_rvalid)) 
                         & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__tx_uart_idle)) 
                        << 3U) | (4U & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__tx_fifo_rvalid)) 
                                        << 2U))) | 
                      ((2U & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_fifo_wready)) 
                              << 1U)) | (1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__tx_fifo_wready))))));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffffcfU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((0x20U & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_fifo_rvalid)) 
                                << 5U)) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__idle_q) 
                                           << 4U)));
        } else {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_rdata_next 
                = ((0x20U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit))
                    ? ((0xffffff00U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                           ? 0U : (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_SHIFTL_III(8,8,32, 
                                                               (0x1fU 
                                                                & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 3U)))
                                              ? 0U : 
                                             (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                              (((IData)(7U) 
                                                + (0xffU 
                                                   & VL_SHIFTL_III(8,8,32, 
                                                                   (0x1fU 
                                                                    & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 3U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, 
                                                                   (0x1fU 
                                                                    & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 3U))))) 
                                            | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                               (7U 
                                                & (VL_SHIFTL_III(8,8,32, 
                                                                 (0x1fU 
                                                                  & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 3U) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, 
                                                                   (0x1fU 
                                                                    & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 3U)))))))
                    : ((0x40U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit))
                        ? (0xffffff00U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_rdata_next)
                        : ((0xffffff80U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_rdata_next) 
                           | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q) 
                               << 5U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q) 
                                         << 2U)))));
        }
    } else if ((0x100U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_rdata_next 
            = ((0xffffffc0U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_rdata_next) 
               | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__fifo_status_txlvl_qs));
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_rdata_next 
            = ((0xffc0ffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_rdata_next) 
               | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__fifo_status_rxlvl_qs) 
                  << 0x10U));
    } else if ((0x200U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_rdata_next 
            = ((0xfffffffcU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_rdata_next) 
               | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ovrd_txval__q) 
                   << 1U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ovrd_txen__q)));
    } else if ((0x400U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_rdata_next 
            = ((0xffff0000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_rdata_next) 
               | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_val_q));
    } else if ((0x800U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_rdata_next 
            = ((0xff000000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_rdata_next) 
               | vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_val__q);
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_rdata_next 
            = ((0x7fffffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_rdata_next) 
               | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q) 
                  << 0x1fU));
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_rdata_next = 0xffffffffU;
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__reg_rdata_next = 0U;
    if ((IData)((0U != (0xffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__addr_hit)))) {
        if ((1U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__addr_hit)) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff00U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_stretch_timeout__q) 
                         << 7U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_sda_interference__q) 
                                   << 6U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_scl_interference__q) 
                                               << 5U) 
                                              | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_nak__q) 
                                                 << 4U))) 
                      | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q) 
                           << 3U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_fmt_overflow__q) 
                                     << 2U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_fmt_watermark__q)))));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffff00ffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_host_timeout__q) 
                         << 0xfU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_ack_stop__q) 
                                     << 0xeU)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_acq_overflow__q) 
                                                   << 0xdU) 
                                                  | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_overflow__q) 
                                                     << 0xcU))) 
                      | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_nonempty__q) 
                           << 0xbU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_empty__q) 
                                       << 0xaU)) | 
                         (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_trans_complete__q) 
                           << 9U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_sda_unstable__q) 
                                     << 8U)))));
        } else if ((2U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__addr_hit)) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff00U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_stretch_timeout__q) 
                         << 7U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_sda_interference__q) 
                                   << 6U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_scl_interference__q) 
                                               << 5U) 
                                              | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_nak__q) 
                                                 << 4U))) 
                      | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q) 
                           << 3U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_fmt_overflow__q) 
                                     << 2U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_fmt_watermark__q)))));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffff00ffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_host_timeout__q) 
                         << 0xfU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_ack_stop__q) 
                                     << 0xeU)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_acq_overflow__q) 
                                                   << 0xdU) 
                                                  | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_overflow__q) 
                                                     << 0xcU))) 
                      | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_nonempty__q) 
                           << 0xbU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q) 
                                       << 0xaU)) | 
                         (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_trans_complete__q) 
                           << 9U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_sda_unstable__q) 
                                     << 8U)))));
        } else if ((4U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__addr_hit)) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__reg_rdata_next 
                = (0xffff0000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__reg_rdata_next);
        } else if ((8U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__addr_hit)) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffffcU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_ctrl_enabletarget__q) 
                       << 1U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_ctrl_enablehost__q)));
        } else if ((0x10U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__addr_hit)) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffff0U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__host_idle) 
                        << 3U) | (4U & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__fmt_fifo_rvalid)) 
                                        << 2U))) | 
                      ((2U & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__rx_fifo_wready)) 
                              << 1U)) | (1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__fmt_fifo_wready))))));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff0fU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((0x80U & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__acq_fifo_wready)) 
                                 << 7U)) | (0x40U & 
                                            ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__tx_fifo_wready)) 
                                             << 6U))) 
                      | ((0x20U & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__rx_fifo_rvalid)) 
                                   << 5U)) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__target_idle) 
                                              << 4U))));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffcffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((0x200U & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__acq_fifo_rvalid)) 
                                 << 9U)) | (0x100U 
                                            & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__tx_fifo_rvalid)) 
                                               << 8U))));
        } else if ((0x20U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__addr_hit)) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff00U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__rdata_qs));
        } else if ((0x40U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__addr_hit)) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__reg_rdata_next 
                = (0xffffe000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__reg_rdata_next);
        } else {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff00U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_fmtilvl__q) 
                       << 5U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q) 
                                 << 2U)));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__reg_rdata_next 
                = (0xfffffeffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__reg_rdata_next);
        }
    } else if ((IData)((0U != (0xff00U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__addr_hit)))) {
        if ((0x100U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__addr_hit)) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffffc0U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__fifo_status_fmtlvl_qs));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffc0ffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__fifo_status_txlvl_qs) 
                      << 8U));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffc0ffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__fifo_status_rxlvl_qs) 
                      << 0x10U));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xc0ffffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__fifo_status_acqlvl_qs) 
                      << 0x18U));
        } else {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__reg_rdata_next 
                = ((0x200U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__addr_hit)
                    ? ((0xfffffff8U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__reg_rdata_next) 
                       | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_ovrd_sdaval__q) 
                           << 2U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_ovrd_sclval__q) 
                                      << 1U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_ovrd_txovrden__q))))
                    : ((0x400U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__addr_hit)
                        ? (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__sda_rx_val) 
                            << 0x10U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__scl_rx_val))
                        : ((0x800U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__addr_hit)
                            ? (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing0_tlow__q) 
                                << 0x10U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing0_thigh__q))
                            : ((0x1000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__addr_hit)
                                ? (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing1_t_f__q) 
                                    << 0x10U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing1_t_r__q))
                                : ((0x2000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__addr_hit)
                                    ? (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing2_thd_sta__q) 
                                        << 0x10U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing2_tsu_sta__q))
                                    : ((0x4000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__addr_hit)
                                        ? (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing3_thd_dat__q) 
                                            << 0x10U) 
                                           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing3_tsu_dat__q))
                                        : (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing4_t_buf__q) 
                                            << 0x10U) 
                                           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing4_tsu_sto__q))))))));
        }
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__reg_rdata_next 
            = ((0x10000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__addr_hit)
                ? (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q) 
                    << 0x1fU) | vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_val__q)
                : ((0x20000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__addr_hit)
                    ? ((0xf0000000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_target_id_mask1__q) 
                            << 0x15U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_target_id_address1__q) 
                                         << 0xeU)) 
                          | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_target_id_mask0__q) 
                              << 7U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_target_id_address0__q))))
                    : ((0x40000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__addr_hit)
                        ? ((0xfffffc00U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__reg_rdata_next) 
                           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__acq_fifo_rdata))
                        : ((0x80000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__addr_hit)
                            ? (0xffffff00U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__reg_rdata_next)
                            : ((0x100000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__addr_hit)
                                ? ((0xfffffff0U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_stretch_ctrl_stop__q) 
                                        << 3U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_stretch_ctrl_enableacq__q) 
                                                  << 2U)) 
                                      | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_stretch_ctrl_enabletx__q) 
                                          << 1U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_stretch_ctrl_enableaddr__q))))
                                : ((0x200000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__addr_hit)
                                    ? vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_host_timeout_ctrl__q
                                    : 0xffffffffU))))));
    }
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__55(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__55\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_rx_channel_i__DOT__s_ws_edge 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_rx_channel_i__DOT__r_ws_old) 
           ^ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__ws));
}

extern const VlWide<32>/*1023:0*/ Vtestharness__ConstPool__CONST_hd6b7ba52_0;

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__59(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__59\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id 
        = ((1U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_mux_sel))
            ? vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__regfile_alu_wdata_fw
            : ((2U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_mux_sel))
                ? vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__regfile_wdata
                : (((0U == (0x1fU & VL_SHIFTL_III(10,10,32, 
                                                  (0x1fU 
                                                   & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__instr_rdata_id 
                                                      >> 0x14U)), 5U)))
                     ? 0U : (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[
                             (((IData)(0x1fU) + (0x3ffU 
                                                 & VL_SHIFTL_III(10,10,32, 
                                                                 (0x1fU 
                                                                  & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__instr_rdata_id 
                                                                     >> 0x14U)), 5U))) 
                              >> 5U)] << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_SHIFTL_III(10,10,32, 
                                                             (0x1fU 
                                                              & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__instr_rdata_id 
                                                                 >> 0x14U)), 5U))))) 
                   | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[
                      (0x1fU & (VL_SHIFTL_III(10,10,32, 
                                              (0x1fU 
                                               & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__instr_rdata_id 
                                                  >> 0x14U)), 5U) 
                                >> 5U))] >> (0x1fU 
                                             & VL_SHIFTL_III(10,10,32, 
                                                             (0x1fU 
                                                              & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__instr_rdata_id 
                                                                 >> 0x14U)), 5U))))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_id 
        = ((1U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_mux_sel))
            ? vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__regfile_alu_wdata_fw
            : ((2U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_mux_sel))
                ? vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__regfile_wdata
                : ((0x20U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id))
                    ? (((0U == (0x1fU & VL_SHIFTL_III(10,10,32, 
                                                      (0x1fU 
                                                       & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id)), 5U)))
                         ? 0U : (Vtestharness__ConstPool__CONST_hd6b7ba52_0[
                                 (((IData)(0x1fU) + 
                                   (0x3ffU & VL_SHIFTL_III(10,10,32, 
                                                           (0x1fU 
                                                            & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id)), 5U))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(10,10,32, 
                                                                 (0x1fU 
                                                                  & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id)), 5U))))) 
                       | (Vtestharness__ConstPool__CONST_hd6b7ba52_0[
                          (0x1fU & (VL_SHIFTL_III(10,10,32, 
                                                  (0x1fU 
                                                   & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id)), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(10,10,32, 
                                                                 (0x1fU 
                                                                  & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id)), 5U))))
                    : (((0U == (0x1fU & VL_SHIFTL_III(10,10,32, 
                                                      (0x1fU 
                                                       & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id)), 5U)))
                         ? 0U : (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[
                                 (((IData)(0x1fU) + 
                                   (0x3ffU & VL_SHIFTL_III(10,10,32, 
                                                           (0x1fU 
                                                            & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id)), 5U))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(10,10,32, 
                                                                 (0x1fU 
                                                                  & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id)), 5U))))) 
                       | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[
                          (0x1fU & (VL_SHIFTL_III(10,10,32, 
                                                  (0x1fU 
                                                   & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id)), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(10,10,32, 
                                                                 (0x1fU 
                                                                  & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id)), 5U)))))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_id 
        = ((1U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_mux_sel))
            ? vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__regfile_alu_wdata_fw
            : ((2U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_mux_sel))
                ? vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__regfile_wdata
                : vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__regfile_data_ra_id));
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_bmask_a_mux_sel) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__bmask_a_id 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__bmask_a_id_imm;
    } else if ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_bmask_a_mux_sel)))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__bmask_a_id 
            = (0x1fU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id 
                        >> 5U));
    }
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_bmask_b_mux_sel) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__bmask_b_id 
            = (0x1fU & ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__bmask_b_mux))
                         ? ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__bmask_b_mux))
                             ? 1U : 0U) : ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__bmask_b_mux))
                                            ? (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__instr_rdata_id 
                                               >> 0x19U)
                                            : (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__instr_rdata_id 
                                               >> 0x14U))));
    } else if ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_bmask_b_mux_sel)))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__bmask_b_id 
            = (0x1fU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id);
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_c 
        = ((0U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_c_mux_sel))
            ? vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_id
            : ((1U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_c_mux_sel))
                ? vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id
                : ((2U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_c_mux_sel))
                    ? vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__jump_target
                    : vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_id)));
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__hwlp_cnt_mux_sel) {
        if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__hwlp_cnt_mux_sel) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__hwlp_cnt 
                = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_id;
        }
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__hwlp_cnt 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__instr_rdata_id, 0x14U);
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__hwlp_end 
        = ((0U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__hwlp_target_mux_sel))
            ? (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__pc_id 
               + (0x3ffcU & VL_SHIFTR_III(32,32,32, vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__instr_rdata_id, 0x12U)))
            : ((1U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__hwlp_target_mux_sel))
                ? (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__pc_id 
                   + VL_SHIFTL_III(32,32,32, (0x1fU 
                                              & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__instr_rdata_id 
                                                 >> 0xfU)), 2U))
                : vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_id));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_a 
        = ((4U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
            ? ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                ? vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_id
                : ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                    ? vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_id
                    : vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_id))
            : ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                ? ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                    ? vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id
                    : vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_a)
                : ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                    ? vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__pc_id
                    : vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_id)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_b 
        = ((4U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
            ? ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
                ? vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id
                : ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
                    ? vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id
                    : (0x1fU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id)))
            : ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
                ? ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
                    ? vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_id
                    : vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_b)
                : ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
                    ? vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_id
                    : vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_b 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__scalar_replication)
            ? ((3U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_vec_mode))
                ? ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_b 
                    << 0x18U) | ((0xff0000U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_b 
                                               << 0x10U)) 
                                 | ((0xff00U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_b 
                                                << 8U)) 
                                    | (0xffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_b))))
                : ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_b 
                    << 0x10U) | (0xffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_b)))
            : vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_b);
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__63(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__63\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT____Vcellout__ao_peripheral_subsystem_i__spi_flash_sd_en_o))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_spi_flash_sd_0__DOT__pad__strong__out1 
            = (1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT____Vcellout__ao_peripheral_subsystem_i__spi_flash_sd_o));
    }
    if ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT____Vcellout__ao_peripheral_subsystem_i__spi_flash_sd_en_o))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_spi_flash_sd_1__DOT__pad__strong__out1 
            = (1U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT____Vcellout__ao_peripheral_subsystem_i__spi_flash_sd_o) 
                     >> 1U));
    }
    if ((4U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT____Vcellout__ao_peripheral_subsystem_i__spi_flash_sd_en_o))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_spi_flash_sd_2__DOT__pad__strong__out1 
            = (1U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT____Vcellout__ao_peripheral_subsystem_i__spi_flash_sd_o) 
                     >> 2U));
    }
    if ((8U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT____Vcellout__ao_peripheral_subsystem_i__spi_flash_sd_en_o))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_spi_flash_sd_3__DOT__pad__strong__out1 
            = (1U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT____Vcellout__ao_peripheral_subsystem_i__spi_flash_sd_o) 
                     >> 3U));
    }
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__64(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__64\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_obiplug__DOT__OBI_NS = 0U;
    if ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_obiplug__DOT__OBI_CS))) {
        if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_obiplug__DOT__OBI_CS))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_obiplug__DOT__OBI_NS 
                = ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_syncro__DOT__cs_reg))
                    ? 0U : ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__fifo_data_tx_ready)
                             ? (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_obiplug__DOT__tx_counter) 
                                 == ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_obiplug__DOT__wrap_length_t) 
                                     - (IData)(1U)))
                                 ? 0U : 1U) : 3U));
        } else if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__vld_o) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_obiplug__DOT__OBI_NS = 0U;
            if ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_obiplug__DOT__curr_rxtx_state)))) {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_obiplug__DOT__OBI_NS = 3U;
            }
        } else {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_obiplug__DOT__OBI_NS = 2U;
        }
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_obiplug__DOT__OBI_NS 
            = ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_obiplug__DOT__OBI_CS))
                ? (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__gnt_o) 
                    & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__fifo_data_tx_ready) 
                       | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_obiplug__DOT__curr_rxtx_state)))
                    ? 2U : 1U) : ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__fifo_data_rx_valid)
                                   ? 1U : (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT____Vcellinp__u_obiplug__start_tx) 
                                            & (~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_syncro__DOT__cs_reg) 
                                                  >> 1U)))
                                            ? 1U : 0U)));
    }
}

VL_INLINE_OPT void Vtestharness___024root___nba_sequent__TOP__54(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_sequent__TOP__54\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__rstgen_i__DOT__init_no 
        = (1U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__rstgen_i__DOT__i_rstgen_bypass__DOT__synch_regs_q) 
                 >> 3U));
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__71(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__71\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__spi_flash_sd_0_in_x 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_spi_flash_sd_0__DOT__pad__strong__out1) 
           | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__io0_oe) 
              & (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__io0_dout)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__spi_flash_sd_1_in_x 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_spi_flash_sd_1__DOT__pad__strong__out1) 
           | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__io1_dout) 
              & (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__io1_oe)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__spi_flash_sd_2_in_x 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_spi_flash_sd_2__DOT__pad__strong__out1) 
           | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__io2_dout) 
              & (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__io2_oe)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__spi_flash_sd_3_in_x 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_spi_flash_sd_3__DOT__pad__strong__out1) 
           | ((IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__io3_dout) 
              & (IData)(vlSelfRef.testharness__DOT__flash_boot_i__DOT__io3_oe)));
    vlSelfRef.testharness__DOT__spi_flash_sd = ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__spi_flash_sd_3_in_x) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__spi_flash_sd_2_in_x) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__spi_flash_sd_1_in_x) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__spi_flash_sd_0_in_x)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__yo_spi_sd_in 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT____Vcellout__u_use_spimemio__q)
            ? (IData)(vlSelfRef.testharness__DOT__spi_flash_sd)
            : 0U);
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__next_ibuffer 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__ibuffer;
    if ((0U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__dummy_count))) {
        if ((0U == (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_ddr) 
                     << 2U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_qspi) 
                                << 1U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_dspi))))) {
            if ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_clk)))) {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__next_ibuffer 
                    = ((0xfeU & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__ibuffer) 
                                 << 1U)) | (1U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__yo_spi_sd_in) 
                                                  >> 1U)));
            }
        } else if ((2U == (6U & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_ddr) 
                                  << 2U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_qspi) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_dspi)))))) {
            if ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_clk)))) {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__next_ibuffer 
                    = ((0xf0U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__ibuffer) 
                                 << 4U)) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__yo_spi_sd_in));
            }
        } else if ((6U == (6U & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_ddr) 
                                  << 2U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_qspi) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_dspi)))))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__next_ibuffer 
                = ((0xf0U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__ibuffer) 
                             << 4U)) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__yo_spi_sd_in));
        } else if ((1U == (1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_dspi)))) {
            if ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_clk)))) {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__next_ibuffer 
                    = ((0xfcU & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__ibuffer) 
                                 << 2U)) | (3U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__yo_spi_sd_in)));
            }
        }
    }
}

void Vtestharness___024root___eval_triggers__act(Vtestharness___024root* vlSelf);
void Vtestharness___024root___eval_act(Vtestharness___024root* vlSelf);

bool Vtestharness___024root___eval_phase__act(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___eval_phase__act\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<115> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtestharness___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtestharness___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vtestharness___024root___eval_nba(Vtestharness___024root* vlSelf);

bool Vtestharness___024root___eval_phase__nba(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___eval_phase__nba\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtestharness___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestharness___024root___dump_triggers__ico(Vtestharness___024root* vlSelf);
#endif  // VL_DEBUG
bool Vtestharness___024root___eval_phase__ico(Vtestharness___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestharness___024root___dump_triggers__nba(Vtestharness___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestharness___024root___dump_triggers__act(Vtestharness___024root* vlSelf);
#endif  // VL_DEBUG

void Vtestharness___024root___eval(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___eval\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtestharness___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("../../../tb/testharness.sv", 5, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtestharness___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtestharness___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../../../tb/testharness.sv", 5, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtestharness___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../../../tb/testharness.sv", 5, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtestharness___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtestharness___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtestharness___024root___eval_debug_assertions(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___eval_debug_assertions\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk_i & 0xfeU)))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY(((vlSelfRef.rst_ni & 0xfeU)))) {
        Verilated::overWidthError("rst_ni");}
    if (VL_UNLIKELY(((vlSelfRef.boot_select_i & 0xfeU)))) {
        Verilated::overWidthError("boot_select_i");}
    if (VL_UNLIKELY(((vlSelfRef.execute_from_flash_i 
                      & 0xfeU)))) {
        Verilated::overWidthError("execute_from_flash_i");}
    if (VL_UNLIKELY(((vlSelfRef.jtag_tck_i & 0xfeU)))) {
        Verilated::overWidthError("jtag_tck_i");}
    if (VL_UNLIKELY(((vlSelfRef.jtag_tms_i & 0xfeU)))) {
        Verilated::overWidthError("jtag_tms_i");}
    if (VL_UNLIKELY(((vlSelfRef.jtag_trst_ni & 0xfeU)))) {
        Verilated::overWidthError("jtag_trst_ni");}
    if (VL_UNLIKELY(((vlSelfRef.jtag_tdi_i & 0xfeU)))) {
        Verilated::overWidthError("jtag_tdi_i");}
}
#endif  // VL_DEBUG
