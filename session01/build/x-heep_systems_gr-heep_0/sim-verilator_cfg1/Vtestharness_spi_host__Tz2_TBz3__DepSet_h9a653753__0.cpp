// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness_spi_host__Tz2_TBz3.h"

VL_INLINE_OPT void Vtestharness_spi_host__Tz2_TBz3___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i__0(Vtestharness_spi_host__Tz2_TBz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_spi_host__Tz2_TBz3___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        VL_ASSIGNSEL_WI(2048, 32, (0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                          (0x3fU 
                                                           & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr)), 5U)), vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage, vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__data_q);
    }
    if (vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        vlSelfRef.u_cmd_queue__DOT__cmd_fifo__DOT____Vlvbound_h368e8f54__0 
            = vlSelfRef.__PVT__command;
        if ((0xf3U >= (0xffU & ((IData)(0x3dU) * (3U 
                                                  & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))) {
            VL_ASSIGNSEL_WQ(244, 61, (0xffU & ((IData)(0x3dU) 
                                               * (3U 
                                                  & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))), vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__storage, vlSelfRef.u_cmd_queue__DOT__cmd_fifo__DOT____Vlvbound_h368e8f54__0);
        }
    }
    if (vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        vlSelfRef.u_data_fifos__DOT__u_tx_fifo__DOT____Vlvbound_h6775449b__0 
            = vlSelfRef.__PVT__u_data_fifos__DOT__tx_data_be;
        if ((0xa1fU >= (0xfffU & ((IData)(0x24U) * 
                                  (0x7fU & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))) {
            VL_ASSIGNSEL_WQ(2592, 36, (0xfffU & ((IData)(0x24U) 
                                                 * 
                                                 (0x7fU 
                                                  & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))), vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage, vlSelfRef.u_data_fifos__DOT__u_tx_fifo__DOT____Vlvbound_h6775449b__0);
        }
    }
}

VL_INLINE_OPT void Vtestharness_spi_host__Tz2_TBz3___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i__1(Vtestharness_spi_host__Tz2_TBz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_spi_host__Tz2_TBz3___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i__1\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        vlSelfRef.u_cmd_queue__DOT__cmd_fifo__DOT____Vlvbound_h368e8f54__0 
            = vlSelfRef.__PVT__command;
        if ((0xf3U >= (0xffU & ((IData)(0x3dU) * (3U 
                                                  & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))) {
            VL_ASSIGNSEL_WQ(244, 61, (0xffU & ((IData)(0x3dU) 
                                               * (3U 
                                                  & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))), vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__storage, vlSelfRef.u_cmd_queue__DOT__cmd_fifo__DOT____Vlvbound_h368e8f54__0);
        }
    }
    if (vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        vlSelfRef.u_data_fifos__DOT__u_tx_fifo__DOT____Vlvbound_h6775449b__0 
            = vlSelfRef.__PVT__u_data_fifos__DOT__tx_data_be;
        if ((0xa1fU >= (0xfffU & ((IData)(0x24U) * 
                                  (0x7fU & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))) {
            VL_ASSIGNSEL_WQ(2592, 36, (0xfffU & ((IData)(0x24U) 
                                                 * 
                                                 (0x7fU 
                                                  & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))), vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage, vlSelfRef.u_data_fifos__DOT__u_tx_fifo__DOT____Vlvbound_h6775449b__0);
        }
    }
    if (vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        VL_ASSIGNSEL_WI(2048, 32, (0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                          (0x3fU 
                                                           & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr)), 5U)), vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage, vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__data_q);
    }
}

VL_INLINE_OPT void Vtestharness_spi_host__Tz2_TBz3___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host__1(Vtestharness_spi_host__Tz2_TBz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_spi_host__Tz2_TBz3___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host__1\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        vlSelfRef.u_data_fifos__DOT__u_tx_fifo__DOT____Vlvbound_h6775449b__0 
            = vlSelfRef.__PVT__u_data_fifos__DOT__tx_data_be;
        if ((0xa1fU >= (0xfffU & ((IData)(0x24U) * 
                                  (0x7fU & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))) {
            VL_ASSIGNSEL_WQ(2592, 36, (0xfffU & ((IData)(0x24U) 
                                                 * 
                                                 (0x7fU 
                                                  & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))), vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage, vlSelfRef.u_data_fifos__DOT__u_tx_fifo__DOT____Vlvbound_h6775449b__0);
        }
    }
    if (vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        VL_ASSIGNSEL_WI(2048, 32, (0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                          (0x3fU 
                                                           & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr)), 5U)), vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage, vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__data_q);
    }
    if (vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        vlSelfRef.u_cmd_queue__DOT__cmd_fifo__DOT____Vlvbound_h368e8f54__0 
            = vlSelfRef.__PVT__command;
        if ((0xf3U >= (0xffU & ((IData)(0x3dU) * (3U 
                                                  & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))) {
            VL_ASSIGNSEL_WQ(244, 61, (0xffU & ((IData)(0x3dU) 
                                               * (3U 
                                                  & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))), vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__storage, vlSelfRef.u_cmd_queue__DOT__cmd_fifo__DOT____Vlvbound_h368e8f54__0);
        }
    }
}
