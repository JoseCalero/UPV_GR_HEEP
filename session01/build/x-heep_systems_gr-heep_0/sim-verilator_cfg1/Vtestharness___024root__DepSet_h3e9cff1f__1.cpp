// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness___024root.h"

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__59(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__59\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_rx_channel_i__DOT__s_ws_edge 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_rx_channel_i__DOT__r_ws_old) 
           ^ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__ws));
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__64(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__64\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcountinhibit_d 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcountinhibit_we)
            ? (5U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int)
            : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcountinhibit_q));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d 
        = ((1U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                  | vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we))
            ? ((1U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)
                ? (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q)))
                : (((QData)((IData)((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q 
                                     >> 0x20U))) << 0x20U) 
                   | (QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int))))
            : ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcountinhibit_q))
                ? vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q
                : (1ULL + vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q)));
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__69(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__69\n"); );
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

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__70(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__70\n"); );
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

VL_INLINE_OPT void Vtestharness___024root___nba_sequent__TOP__55(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_sequent__TOP__55\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__rstgen_i__DOT__init_no 
        = (1U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__rstgen_i__DOT__i_rstgen_bypass__DOT__synch_regs_q) 
                 >> 3U));
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__74(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__74\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes__BRA__5__03a3__KET__ 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
            ? 1U : ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1)
                     ? 2U : 3U));
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__79(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__79\n"); );
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

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__80(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__80\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__4__KET__ 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1) 
           | ((3U <= (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
              & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__4__KET__ 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1) 
           | ((3U > (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
              & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__4__KET__ 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o));
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes__BRA__344__03a276__KET__[0U] 
            = (IData)(((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__read_ptr_reg)) 
                       << 0x20U));
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes__BRA__344__03a276__KET__[1U] 
            = (IData)((((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__read_ptr_reg)) 
                        << 0x20U) >> 0x20U));
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes__BRA__344__03a276__KET__[2U] = 0xfU;
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes__BRA__344__03a276__KET__[0U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[0U];
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes__BRA__344__03a276__KET__[1U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U];
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes__BRA__344__03a276__KET__[2U] 
            = (0x1fU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[2U]);
    }
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__81(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__81\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdfgRegularize_h495687df_0_34;
    __VdfgRegularize_h495687df_0_34 = 0;
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__4__KET__));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__3__KET__)) 
                 | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__4__KET__) 
                    & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q) 
                       >> 1U))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__3__KET__) 
           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__4__KET__));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__BRA__5__03a3__KET__)
            : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__BRA__8__03a6__KET__));
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT____VdfgRegularize_h00452607_0_7 
            = (2U | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes__BRA__137__03a69__KET__[0U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes__BRA__344__03a276__KET__[0U];
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes__BRA__137__03a69__KET__[1U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes__BRA__344__03a276__KET__[1U];
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes__BRA__137__03a69__KET__[2U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes__BRA__344__03a276__KET__[2U];
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT____VdfgRegularize_h00452607_0_7 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes__BRA__137__03a69__KET__[0U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes__BRA__275__03a207__KET__[0U];
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes__BRA__137__03a69__KET__[1U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes__BRA__275__03a207__KET__[1U];
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes__BRA__137__03a69__KET__[2U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes__BRA__275__03a207__KET__[2U];
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__xbar_slave_req_req 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__2__KET__));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__)) 
                 | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
                    & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q) 
                       >> 2U))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__master_xbar_req_req 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__state_q)
            ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__state_q)
                ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__xbar_master_rsp_rvalid) 
                   & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__xbar_slave_req_req))
                : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__xbar_slave_req_req))
            : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__xbar_slave_req_req));
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[0U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes__BRA__206__03a138__KET__[0U];
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes__BRA__206__03a138__KET__[1U];
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[2U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes__BRA__206__03a138__KET__[2U];
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[0U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes__BRA__137__03a69__KET__[0U];
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes__BRA__137__03a69__KET__[1U];
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[2U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes__BRA__137__03a69__KET__[2U];
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__dec_valid_o = 0U;
    if (((0x40000000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]) 
         & (0x41000000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__dec_valid_o = 1U;
    }
    if (((0x30000000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]) 
         & (0x30100000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__dec_valid_o = 1U;
    }
    if (((0x20000000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]) 
         & (0x20100000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__dec_valid_o = 1U;
    }
    if (((0x10000000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]) 
         & (0x10100000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__dec_valid_o = 1U;
    }
    if (((0x48000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]) 
         & (0x50000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__dec_valid_o = 1U;
    }
    if (((0x40000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]) 
         & (0x48000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__dec_valid_o = 1U;
    }
    if (((0x38000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]) 
         & (0x40000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__dec_valid_o = 1U;
    }
    if (((0x30000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]) 
         & (0x38000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__dec_valid_o = 1U;
    }
    if (((0x28000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]) 
         & (0x30000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__dec_valid_o = 1U;
    }
    if (((0x20000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]) 
         & (0x28000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__dec_valid_o = 1U;
    }
    if (((0x18000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]) 
         & (0x20000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__dec_valid_o = 1U;
    }
    if (((0x10000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]) 
         & (0x18000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__dec_valid_o = 1U;
    }
    if (((0x8000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]) 
         & (0x10000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__dec_valid_o = 1U;
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules = 0U;
    if (((0x40000000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]) 
         & (0x41000000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules 
            = (1U | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules));
    }
    if (((0x30000000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]) 
         & (0x30100000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules 
            = (2U | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules));
    }
    if (((0x20000000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]) 
         & (0x20100000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules 
            = (4U | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules));
    }
    if (((0x10000000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]) 
         & (0x10100000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules 
            = (8U | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules));
    }
    if (((0x48000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]) 
         & (0x50000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules 
            = (0x10U | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules));
    }
    if (((0x40000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]) 
         & (0x48000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules 
            = (0x20U | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules));
    }
    if (((0x38000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]) 
         & (0x40000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules 
            = (0x40U | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules));
    }
    if (((0x30000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]) 
         & (0x38000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules 
            = (0x80U | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules));
    }
    if (((0x28000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]) 
         & (0x30000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules 
            = (0x100U | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules));
    }
    if (((0x20000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]) 
         & (0x28000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules 
            = (0x200U | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules));
    }
    if (((0x18000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]) 
         & (0x20000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules 
            = (0x400U | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules));
    }
    if (((0x10000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]) 
         & (0x18000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules 
            = (0x800U | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules));
    }
    if (((0x8000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]) 
         & (0x10000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules 
            = (0x1000U | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules));
    }
    if ((0x8000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U])) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__dec_valid_o = 1U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules 
            = (0x2000U | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules));
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__dec_error_o = 0U;
    if (((0x40000000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]) 
         & (0x41000000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__dec_error_o = 0U;
    }
    if (((0x30000000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]) 
         & (0x30100000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__dec_error_o = 0U;
    }
    if (((0x20000000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]) 
         & (0x20100000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__dec_error_o = 0U;
    }
    if (((0x10000000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]) 
         & (0x10100000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__dec_error_o = 0U;
    }
    if (((0x48000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]) 
         & (0x50000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__dec_error_o = 0U;
    }
    if (((0x40000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]) 
         & (0x48000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__dec_error_o = 0U;
    }
    if (((0x38000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]) 
         & (0x40000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__dec_error_o = 0U;
    }
    if (((0x30000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]) 
         & (0x38000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__dec_error_o = 0U;
    }
    if (((0x28000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]) 
         & (0x30000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__dec_error_o = 0U;
    }
    if (((0x20000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]) 
         & (0x28000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__dec_error_o = 0U;
    }
    if (((0x18000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]) 
         & (0x20000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__dec_error_o = 0U;
    }
    if (((0x10000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]) 
         & (0x18000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__dec_error_o = 0U;
    }
    if (((0x8000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]) 
         & (0x10000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__dec_error_o = 0U;
    }
    if ((0x8000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U])) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__dec_error_o = 0U;
    }
    if (((0xbadacce5U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]) 
         & (0xbadacce6U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__dec_valid_o = 1U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules 
            = (0x4000U | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules));
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_addr_decode__DOT__dec_error_o = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d = 0U;
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d 
            = ((0x8000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U])
                ? 1U : (((0x8000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]) 
                         & (0x10000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]))
                         ? 2U : (((0x10000U <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]) 
                                  & (0x18000U > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]))
                                  ? 3U : (((0x18000U 
                                            <= vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]) 
                                           & (0x20000U 
                                              > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]))
                                           ? 4U : (
                                                   ((0x20000U 
                                                     <= 
                                                     vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]) 
                                                    & (0x28000U 
                                                       > 
                                                       vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]))
                                                    ? 5U
                                                    : 
                                                   (((0x28000U 
                                                      <= 
                                                      vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]) 
                                                     & (0x30000U 
                                                        > 
                                                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]))
                                                     ? 6U
                                                     : 
                                                    (((0x30000U 
                                                       <= 
                                                       vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]) 
                                                      & (0x38000U 
                                                         > 
                                                         vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]))
                                                      ? 7U
                                                      : 
                                                     (((0x38000U 
                                                        <= 
                                                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]) 
                                                       & (0x40000U 
                                                          > 
                                                          vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]))
                                                       ? 8U
                                                       : 
                                                      (((0x40000U 
                                                         <= 
                                                         vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]) 
                                                        & (0x48000U 
                                                           > 
                                                           vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]))
                                                        ? 9U
                                                        : 
                                                       (((0x48000U 
                                                          <= 
                                                          vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]) 
                                                         & (0x50000U 
                                                            > 
                                                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]))
                                                         ? 0xaU
                                                         : 
                                                        (((0x10000000U 
                                                           <= 
                                                           vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]) 
                                                          & (0x10100000U 
                                                             > 
                                                             vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]))
                                                          ? 0xbU
                                                          : 
                                                         (((0x20000000U 
                                                            <= 
                                                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]) 
                                                           & (0x20100000U 
                                                              > 
                                                              vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]))
                                                           ? 0xcU
                                                           : 
                                                          (((0x30000000U 
                                                             <= 
                                                             vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]) 
                                                            & (0x30100000U 
                                                               > 
                                                               vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]))
                                                            ? 0xdU
                                                            : 
                                                           (((0x40000000U 
                                                              <= 
                                                              vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]) 
                                                             & (0x41000000U 
                                                                > 
                                                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U]))
                                                             ? 0xeU
                                                             : 0U))))))))))))));
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o = 0U;
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o = 0U;
        if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__xbar_master_rsp_rvalid) {
            if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__master_xbar_req_req) {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT____Vlvbound_hfa7dad6e__0 
                    = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__master_xbar_req_req;
                if ((0xeU >= (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d))) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o 
                        = (((~ ((IData)(1U) << (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d))) 
                            & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                           | (0x7fffU & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT____Vlvbound_hfa7dad6e__0) 
                                         << (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d))));
                }
            }
        }
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT____Vlvbound_hfa7dad6e__1 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__master_xbar_req_req;
        if ((0xeU >= (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o 
                = (((~ ((IData)(1U) << (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d))) 
                    & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                   | (0x7fffU & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT____Vlvbound_hfa7dad6e__1) 
                                 << (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d))));
        }
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_d 
        = (0x1fU & ((0x800U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o))
                     ? ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U] 
                         << 0x1dU) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U] 
                                      >> 3U)) : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q)));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0U] = 
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[0U];
    vlSelfRef.__VdfgRegularize_h16038c0c_0_28[1U] = 
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U];
    vlSelfRef.__VdfgRegularize_h16038c0c_0_28[2U] = 
        ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[0U] 
          << 6U) | ((0x20U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                              << 5U)) | vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[2U]));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_28[3U] = 
        ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[0U] 
          >> 0x1aU) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U] 
                       << 6U));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_28[4U] = 
        ((0xfffff800U & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[4U]) 
         | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U] 
             >> 0x1aU) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[2U] 
                          << 6U)));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_28[4U] = 
        ((0x7ffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[4U]) 
         | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[0U] 
             << 0xcU) | (0x800U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                   << 0xaU))));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_28[5U] = 
        ((0x7ffU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[0U] 
                    >> 0x14U)) | ((0x800U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[0U] 
                                             >> 0x14U)) 
                                  | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U] 
                                     << 0xcU)));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_28[6U] = 
        ((0xfffc0000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[6U]) 
         | ((0x7ffU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U] 
                       >> 0x14U)) | ((0x20000U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                  << 0xfU)) 
                                     | ((0x800U & (
                                                   vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U] 
                                                   >> 0x14U)) 
                                        | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[2U] 
                                           << 0xcU)))));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_28[6U] = 
        ((0x3ffffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[6U]) 
         | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[0U] 
            << 0x12U));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_28[7U] = 
        ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[0U] 
          >> 0xeU) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U] 
                      << 0x12U));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_28[8U] = 
        ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U] 
          >> 0xeU) | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[0U] 
                       << 0x18U) | ((0x800000U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                  << 0x14U)) 
                                    | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[2U] 
                                       << 0x12U))));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_28[9U] = 
        (((0x3ffffU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[0U] 
                       >> 8U)) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[2U] 
                                  >> 0xeU)) | ((0xfc0000U 
                                                & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[0U] 
                                                   >> 8U)) 
                                               | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U] 
                                                  << 0x18U)));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0xaU] 
        = ((0xe0000000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0xaU]) 
           | ((0x3ffffU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U] 
                           >> 8U)) | ((0xfc0000U & 
                                       (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U] 
                                        >> 8U)) | (
                                                   vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[2U] 
                                                   << 0x18U))));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0xaU] 
        = ((0x1fffffffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0xaU]) 
           | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[0U] 
               << 0x1eU) | (0x20000000U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                           << 0x19U))));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0xbU] 
        = ((0x1fffffffU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[0U] 
                           >> 2U)) | ((0x20000000U 
                                       & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[0U] 
                                          >> 2U)) | 
                                      (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U] 
                                       << 0x1eU)));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0xcU] 
        = ((0x1fffffffU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U] 
                           >> 2U)) | ((0x20000000U 
                                       & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U] 
                                          >> 2U)) | 
                                      (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[2U] 
                                       << 0x1eU)));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0xdU] 
        = ((0xfffffff0U & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0xdU]) 
           | ((8U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 2U)) | (0x1fffffffU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[2U] 
                                               >> 2U))));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0xdU] 
        = ((0xfU & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0xdU]) 
           | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[0U] 
              << 4U));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0xeU] 
        = ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[0U] 
            >> 0x1cU) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U] 
                         << 4U));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0xfU] 
        = ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U] 
            >> 0x1cU) | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[0U] 
                          << 0xaU) | ((0x200U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                 << 3U)) 
                                      | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[2U] 
                                         << 4U))));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0x10U] 
        = (((0xfU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[0U] 
                     >> 0x16U)) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[2U] 
                                   >> 0x1cU)) | ((0x3f0U 
                                                  & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[0U] 
                                                     >> 0x16U)) 
                                                 | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U] 
                                                    << 0xaU)));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0x11U] 
        = ((0xffff8000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0x11U]) 
           | ((0xfU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U] 
                       >> 0x16U)) | ((0x3f0U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U] 
                                                >> 0x16U)) 
                                     | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[2U] 
                                        << 0xaU))));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0x11U] 
        = ((0x7fffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0x11U]) 
           | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[0U] 
               << 0x10U) | (0x8000U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                       << 8U))));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0x12U] 
        = ((0x7fffU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[0U] 
                       >> 0x10U)) | ((0x8000U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[0U] 
                                                 >> 0x10U)) 
                                     | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U] 
                                        << 0x10U)));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0x13U] 
        = ((0xffc00000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0x13U]) 
           | ((0x7fffU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U] 
                          >> 0x10U)) | ((0x200000U 
                                         & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                            << 0xdU)) 
                                        | ((0x8000U 
                                            & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U] 
                                               >> 0x10U)) 
                                           | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[2U] 
                                              << 0x10U)))));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0x13U] 
        = ((0x3fffffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0x13U]) 
           | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[0U] 
              << 0x16U));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0x14U] 
        = ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[0U] 
            >> 0xaU) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U] 
                        << 0x16U));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0x15U] 
        = ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U] 
            >> 0xaU) | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[0U] 
                         << 0x1cU) | ((0x8000000U & 
                                       ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                        << 0x12U)) 
                                      | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[2U] 
                                         << 0x16U))));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0x16U] 
        = (((0x3fffffU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[0U] 
                          >> 4U)) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[2U] 
                                     >> 0xaU)) | ((0xfc00000U 
                                                   & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[0U] 
                                                      >> 4U)) 
                                                  | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U] 
                                                     << 0x1cU)));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0x17U] 
        = ((0x3fffffU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U] 
                         >> 4U)) | ((0xfc00000U & (
                                                   vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U] 
                                                   >> 4U)) 
                                    | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[2U] 
                                       << 0x1cU)));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0x18U] 
        = ((2U & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0x18U]) 
           | (3U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[2U] 
                    >> 4U)));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0x18U] 
        = ((1U & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0x18U]) 
           | (2U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 9U)));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0U] = 
        vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0U];
    vlSelfRef.__VdfgRegularize_h16038c0c_0_29[1U] = 
        vlSelfRef.__VdfgRegularize_h16038c0c_0_28[1U];
    vlSelfRef.__VdfgRegularize_h16038c0c_0_29[2U] = 
        ((0xffffffc0U & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[2U]) 
         | ((0x20U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                      << 5U)) | (0x1fU & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[2U])));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_29[3U] = 
        ((0x3fU & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[3U]) 
         | (0xffffffc0U & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[3U]));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_29[4U] = 
        ((0xfffff800U & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[4U]) 
         | ((0x3fU & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[4U]) 
            | (0x7c0U & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[4U])));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_29[4U] = 
        ((0x7ffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[4U]) 
         | ((0xfffff000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[4U]) 
            | (0x800U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                         << 0xaU))));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_29[5U] = 
        ((0x7ffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[5U]) 
         | ((0x800U & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[5U]) 
            | (0xfffff000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[5U])));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_29[6U] = 
        ((0xfffc0000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[6U]) 
         | ((0x7ffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[6U]) 
            | ((0x20000U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                            << 0xfU)) | ((0x800U & 
                                          vlSelfRef.__VdfgRegularize_h16038c0c_0_28[6U]) 
                                         | (0x1f000U 
                                            & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[6U])))));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_29[6U] = 
        ((0x3ffffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[6U]) 
         | (0xfffc0000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[6U]));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_29[7U] = 
        ((0x3ffffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[7U]) 
         | (0xfffc0000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[7U]));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_29[8U] = 
        ((0x3ffffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[8U]) 
         | ((0xff000000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[8U]) 
            | ((0x800000U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                             << 0x14U)) | (0x7c0000U 
                                           & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[8U]))));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_29[9U] = 
        ((0x3ffffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[9U]) 
         | ((0xfc0000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[9U]) 
            | (0xff000000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[9U])));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0xaU] 
        = ((0xe0000000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0xaU]) 
           | ((0x3ffffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0xaU]) 
              | ((0xfc0000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0xaU]) 
                 | (0x1f000000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0xaU]))));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0xaU] 
        = ((0x1fffffffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0xaU]) 
           | ((0xc0000000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0xaU]) 
              | (0x20000000U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                << 0x19U))));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0xbU] 
        = ((0x1fffffffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0xbU]) 
           | ((0x20000000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0xbU]) 
              | (0xc0000000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0xbU])));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0xcU] 
        = ((0x1fffffffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0xcU]) 
           | ((0x20000000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0xcU]) 
              | (0xc0000000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0xcU])));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0xdU] 
        = ((0xfffffff0U & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0xdU]) 
           | ((8U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 2U)) | (7U & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0xdU])));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0xdU] 
        = ((0xfU & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0xdU]) 
           | (0xfffffff0U & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0xdU]));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0xeU] 
        = ((0xfU & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0xeU]) 
           | (0xfffffff0U & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0xeU]));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0xfU] 
        = ((0xfU & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0xfU]) 
           | ((0xfffffc00U & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0xfU]) 
              | ((0x200U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                            << 3U)) | (0x1f0U & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0xfU]))));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0x10U] 
        = ((0xfU & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0x10U]) 
           | ((0x3f0U & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0x10U]) 
              | (0xfffffc00U & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0x10U])));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0x11U] 
        = ((0xffff8000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0x11U]) 
           | ((0xfU & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0x11U]) 
              | ((0x3f0U & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0x11U]) 
                 | (0x7c00U & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0x11U]))));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0x11U] 
        = ((0x7fffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0x11U]) 
           | ((0xffff0000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0x11U]) 
              | (0x8000U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                            << 8U))));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0x12U] 
        = ((0x7fffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0x12U]) 
           | ((0x8000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0x12U]) 
              | (0xffff0000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0x12U])));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0x13U] 
        = ((0xffc00000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0x13U]) 
           | ((0x7fffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0x13U]) 
              | ((0x200000U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                               << 0xdU)) | ((0x8000U 
                                             & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0x13U]) 
                                            | (0x1f0000U 
                                               & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0x13U])))));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0x13U] 
        = ((0x3fffffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0x13U]) 
           | (0xffc00000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0x13U]));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0x14U] 
        = ((0x3fffffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0x14U]) 
           | (0xffc00000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0x14U]));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0x15U] 
        = ((0x3fffffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0x15U]) 
           | ((0xf0000000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0x15U]) 
              | ((0x8000000U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                << 0x12U)) | (0x7c00000U 
                                              & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0x15U]))));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0x16U] 
        = ((0x3fffffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0x16U]) 
           | ((0xfc00000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0x16U]) 
              | (0xf0000000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0x16U])));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0x17U] 
        = ((0x3fffffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0x17U]) 
           | ((0xfc00000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0x17U]) 
              | (0xf0000000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0x17U])));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0x18U] 
        = ((0xfffffffeU & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0x18U]) 
           | (1U & vlSelfRef.__VdfgRegularize_h16038c0c_0_28[0x18U]));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0x18U] 
        = ((1U & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0x18U]) 
           | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[0U] 
               << 2U) | (2U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                               >> 9U))));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0x19U] 
        = ((1U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[0U] 
                  >> 0x1eU)) | ((2U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[0U] 
                                       >> 0x1eU)) | 
                                (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U] 
                                 << 2U)));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0x1aU] 
        = (0xffU & ((1U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U] 
                           >> 0x1eU)) | ((0x80U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                   >> 4U)) 
                                         | ((2U & (
                                                   vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U] 
                                                   >> 0x1eU)) 
                                            | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[2U] 
                                               << 2U)))));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0U] = 
        vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0U];
    vlSelfRef.__VdfgRegularize_h16038c0c_0_30[1U] = 
        vlSelfRef.__VdfgRegularize_h16038c0c_0_29[1U];
    vlSelfRef.__VdfgRegularize_h16038c0c_0_30[2U] = 
        ((0xffffffc0U & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[2U]) 
         | ((0x20U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                      << 5U)) | (0x1fU & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[2U])));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_30[3U] = 
        ((0x3fU & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[3U]) 
         | (0xffffffc0U & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[3U]));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_30[4U] = 
        ((0xfffff800U & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[4U]) 
         | ((0x3fU & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[4U]) 
            | (0x7c0U & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[4U])));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_30[4U] = 
        ((0x7ffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[4U]) 
         | ((0xfffff000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[4U]) 
            | (0x800U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                         << 0xaU))));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_30[5U] = 
        ((0x7ffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[5U]) 
         | ((0x800U & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[5U]) 
            | (0xfffff000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[5U])));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_30[6U] = 
        ((0xfffc0000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[6U]) 
         | ((0x7ffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[6U]) 
            | ((0x20000U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                            << 0xfU)) | ((0x800U & 
                                          vlSelfRef.__VdfgRegularize_h16038c0c_0_29[6U]) 
                                         | (0x1f000U 
                                            & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[6U])))));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_30[6U] = 
        ((0x3ffffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[6U]) 
         | (0xfffc0000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[6U]));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_30[7U] = 
        ((0x3ffffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[7U]) 
         | (0xfffc0000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[7U]));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_30[8U] = 
        ((0x3ffffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[8U]) 
         | ((0xff000000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[8U]) 
            | ((0x800000U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                             << 0x14U)) | (0x7c0000U 
                                           & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[8U]))));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_30[9U] = 
        ((0x3ffffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[9U]) 
         | ((0xfc0000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[9U]) 
            | (0xff000000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[9U])));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0xaU] 
        = ((0xe0000000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0xaU]) 
           | ((0x3ffffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0xaU]) 
              | ((0xfc0000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0xaU]) 
                 | (0x1f000000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0xaU]))));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0xaU] 
        = ((0x1fffffffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0xaU]) 
           | ((0xc0000000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0xaU]) 
              | (0x20000000U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                << 0x19U))));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0xbU] 
        = ((0x1fffffffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0xbU]) 
           | ((0x20000000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0xbU]) 
              | (0xc0000000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0xbU])));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0xcU] 
        = ((0x1fffffffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0xcU]) 
           | ((0x20000000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0xcU]) 
              | (0xc0000000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0xcU])));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0xdU] 
        = ((0xfffffff0U & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0xdU]) 
           | ((8U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 2U)) | (7U & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0xdU])));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0xdU] 
        = ((0xfU & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0xdU]) 
           | (0xfffffff0U & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0xdU]));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0xeU] 
        = ((0xfU & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0xeU]) 
           | (0xfffffff0U & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0xeU]));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0xfU] 
        = ((0xfU & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0xfU]) 
           | ((0xfffffc00U & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0xfU]) 
              | ((0x200U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                            << 3U)) | (0x1f0U & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0xfU]))));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x10U] 
        = ((0xfU & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0x10U]) 
           | ((0x3f0U & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0x10U]) 
              | (0xfffffc00U & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0x10U])));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x11U] 
        = ((0xffff8000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x11U]) 
           | ((0xfU & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0x11U]) 
              | ((0x3f0U & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0x11U]) 
                 | (0x7c00U & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0x11U]))));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x11U] 
        = ((0x7fffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x11U]) 
           | ((0xffff0000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0x11U]) 
              | (0x8000U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                            << 8U))));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x12U] 
        = ((0x7fffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0x12U]) 
           | ((0x8000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0x12U]) 
              | (0xffff0000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0x12U])));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x13U] 
        = ((0xffc00000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x13U]) 
           | ((0x7fffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0x13U]) 
              | ((0x200000U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                               << 0xdU)) | ((0x8000U 
                                             & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0x13U]) 
                                            | (0x1f0000U 
                                               & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0x13U])))));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x13U] 
        = ((0x3fffffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x13U]) 
           | (0xffc00000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0x13U]));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x14U] 
        = ((0x3fffffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0x14U]) 
           | (0xffc00000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0x14U]));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x15U] 
        = ((0x3fffffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0x15U]) 
           | ((0xf0000000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0x15U]) 
              | ((0x8000000U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                << 0x12U)) | (0x7c00000U 
                                              & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0x15U]))));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x16U] 
        = ((0x3fffffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0x16U]) 
           | ((0xfc00000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0x16U]) 
              | (0xf0000000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0x16U])));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x17U] 
        = ((0x3fffffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0x17U]) 
           | ((0xfc00000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0x17U]) 
              | (0xf0000000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0x17U])));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x18U] 
        = ((0xfffffffeU & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x18U]) 
           | (1U & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0x18U]));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x18U] 
        = ((1U & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x18U]) 
           | ((0xfffffffcU & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0x18U]) 
              | (2U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                       >> 9U))));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x19U] 
        = ((1U & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0x19U]) 
           | ((2U & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0x19U]) 
              | (0xfffffffcU & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0x19U])));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x1aU] 
        = ((0xffffff00U & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x1aU]) 
           | ((1U & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0x1aU]) 
              | ((0x80U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                           >> 4U)) | ((2U & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0x1aU]) 
                                      | (0x7cU & vlSelfRef.__VdfgRegularize_h16038c0c_0_29[0x1aU])))));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x1aU] 
        = ((0xffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x1aU]) 
           | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[0U] 
              << 8U));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x1bU] 
        = ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[0U] 
            >> 0x18U) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U] 
                         << 8U));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x1cU] 
        = (0x3fffU & ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U] 
                       >> 0x18U) | ((0x2000U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                << 1U)) 
                                    | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[2U] 
                                       << 8U))));
    vlSelfRef.__VdfgRegularize_h495687df_0_205 = ((1U 
                                                   != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__status_cnt_q)) 
                                                  & (vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x1cU] 
                                                     >> 0xdU));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0U] = 
        vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0U];
    vlSelfRef.__VdfgRegularize_h16038c0c_0_31[1U] = 
        vlSelfRef.__VdfgRegularize_h16038c0c_0_30[1U];
    vlSelfRef.__VdfgRegularize_h16038c0c_0_31[2U] = 
        ((0xffffffc0U & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[2U]) 
         | ((0x20U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                      << 5U)) | (0x1fU & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[2U])));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_31[3U] = 
        ((0x3fU & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[3U]) 
         | (0xffffffc0U & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[3U]));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_31[4U] = 
        ((0xfffff800U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[4U]) 
         | ((0x3fU & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[4U]) 
            | (0x7c0U & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[4U])));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_31[4U] = 
        ((0x7ffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[4U]) 
         | ((0xfffff000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[4U]) 
            | (0x800U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                         << 0xaU))));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_31[5U] = 
        ((0x7ffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[5U]) 
         | ((0x800U & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[5U]) 
            | (0xfffff000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[5U])));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_31[6U] = 
        ((0xfffc0000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[6U]) 
         | ((0x7ffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[6U]) 
            | ((0x20000U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                            << 0xfU)) | ((0x800U & 
                                          vlSelfRef.__VdfgRegularize_h16038c0c_0_30[6U]) 
                                         | (0x1f000U 
                                            & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[6U])))));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_31[6U] = 
        ((0x3ffffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[6U]) 
         | (0xfffc0000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[6U]));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_31[7U] = 
        ((0x3ffffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[7U]) 
         | (0xfffc0000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[7U]));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_31[8U] = 
        ((0x3ffffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[8U]) 
         | ((0xff000000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[8U]) 
            | ((0x800000U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                             << 0x14U)) | (0x7c0000U 
                                           & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[8U]))));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_31[9U] = 
        ((0x3ffffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[9U]) 
         | ((0xfc0000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[9U]) 
            | (0xff000000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[9U])));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0xaU] 
        = ((0xe0000000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0xaU]) 
           | ((0x3ffffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0xaU]) 
              | ((0xfc0000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0xaU]) 
                 | (0x1f000000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0xaU]))));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0xaU] 
        = ((0x1fffffffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0xaU]) 
           | ((0xc0000000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0xaU]) 
              | (0x20000000U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                << 0x19U))));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0xbU] 
        = ((0x1fffffffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0xbU]) 
           | ((0x20000000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0xbU]) 
              | (0xc0000000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0xbU])));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0xcU] 
        = ((0x1fffffffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0xcU]) 
           | ((0x20000000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0xcU]) 
              | (0xc0000000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0xcU])));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0xdU] 
        = ((0xfffffff0U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0xdU]) 
           | ((8U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 2U)) | (7U & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0xdU])));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0xdU] 
        = ((0xfU & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0xdU]) 
           | (0xfffffff0U & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0xdU]));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0xeU] 
        = ((0xfU & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0xeU]) 
           | (0xfffffff0U & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0xeU]));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0xfU] 
        = ((0xfU & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0xfU]) 
           | ((0xfffffc00U & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0xfU]) 
              | ((0x200U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                            << 3U)) | (0x1f0U & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0xfU]))));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x10U] 
        = ((0xfU & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x10U]) 
           | ((0x3f0U & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x10U]) 
              | (0xfffffc00U & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x10U])));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x11U] 
        = ((0xffff8000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x11U]) 
           | ((0xfU & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x11U]) 
              | ((0x3f0U & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x11U]) 
                 | (0x7c00U & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x11U]))));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x11U] 
        = ((0x7fffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x11U]) 
           | ((0xffff0000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x11U]) 
              | (0x8000U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                            << 8U))));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x12U] 
        = ((0x7fffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x12U]) 
           | ((0x8000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x12U]) 
              | (0xffff0000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x12U])));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x13U] 
        = ((0xffc00000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x13U]) 
           | ((0x7fffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x13U]) 
              | ((0x200000U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                               << 0xdU)) | ((0x8000U 
                                             & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x13U]) 
                                            | (0x1f0000U 
                                               & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x13U])))));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x13U] 
        = ((0x3fffffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x13U]) 
           | (0xffc00000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x13U]));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x14U] 
        = ((0x3fffffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x14U]) 
           | (0xffc00000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x14U]));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x15U] 
        = ((0x3fffffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x15U]) 
           | ((0xf0000000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x15U]) 
              | ((0x8000000U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                << 0x12U)) | (0x7c00000U 
                                              & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x15U]))));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x16U] 
        = ((0x3fffffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x16U]) 
           | ((0xfc00000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x16U]) 
              | (0xf0000000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x16U])));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x17U] 
        = ((0x3fffffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x17U]) 
           | ((0xfc00000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x17U]) 
              | (0xf0000000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x17U])));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x18U] 
        = ((0xfffffffeU & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x18U]) 
           | (1U & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x18U]));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x18U] 
        = ((1U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x18U]) 
           | ((0xfffffffcU & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x18U]) 
              | (2U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                       >> 9U))));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x19U] 
        = ((1U & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x19U]) 
           | ((2U & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x19U]) 
              | (0xfffffffcU & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x19U])));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x1aU] 
        = ((0xffffff00U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x1aU]) 
           | ((1U & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x1aU]) 
              | ((0x80U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                           >> 4U)) | ((2U & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x1aU]) 
                                      | (0x7cU & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x1aU])))));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x1aU] 
        = ((0xffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x1aU]) 
           | (0xffffff00U & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x1aU]));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x1bU] 
        = ((0xffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x1bU]) 
           | (0xffffff00U & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x1bU]));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x1cU] 
        = ((0xffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x1cU]) 
           | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[0U] 
               << 0xeU) | ((0x2000U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                       << 1U)) | (0x1f00U 
                                                  & vlSelfRef.__VdfgRegularize_h16038c0c_0_30[0x1cU]))));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x1dU] 
        = ((0xffU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[0U] 
                     >> 0x12U)) | ((0x3f00U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[0U] 
                                               >> 0x12U)) 
                                   | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U] 
                                      << 0xeU)));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x1eU] 
        = ((0x80000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x1eU]) 
           | (0xfffffU & ((0xffU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U] 
                                    >> 0x12U)) | ((0x3f00U 
                                                   & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U] 
                                                      >> 0x12U)) 
                                                  | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[2U] 
                                                     << 0xeU)))));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x1eU] 
        = ((0x7ffffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x1eU]) 
           | (0x80000U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                          << 6U)));
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_state_q) {
        if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_state_q) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_state_n 
                = ((0U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_resp_fifo_i__DOT__status_cnt_q))
                    ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_state_q)
                    : (IData)(vlSelfRef.__VdfgRegularize_h495687df_0_205));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__fifo_req_push 
                = ((0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_resp_fifo_i__DOT__status_cnt_q)) 
                   & (IData)(vlSelfRef.__VdfgRegularize_h495687df_0_205));
        } else {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_state_n 
                = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_state_q;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__fifo_req_push 
                = vlSelfRef.__VdfgRegularize_h495687df_0_205;
        }
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_state_n 
            = ((IData)(vlSelfRef.__VdfgRegularize_h495687df_0_205) 
               | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_state_q));
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__fifo_req_push 
            = vlSelfRef.__VdfgRegularize_h495687df_0_205;
    }
    vlSelfRef.__VdfgRegularize_h495687df_0_163 = ((1U 
                                                   != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__status_cnt_q)) 
                                                  & (vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x1eU] 
                                                     >> 0x13U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[0U] 
        = vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[1U] 
        = vlSelfRef.__VdfgRegularize_h16038c0c_0_31[1U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[2U] 
        = ((0xffffffc0U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[2U]) 
           | ((0x20U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                        << 5U)) | (0x1fU & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[2U])));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[3U] 
        = ((0x3fU & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[3U]) 
           | (0xffffffc0U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[3U]));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[4U] 
        = ((0xfffff800U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[4U]) 
           | ((0x3fU & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[4U]) 
              | (0x7c0U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[4U])));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[4U] 
        = ((0x7ffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[4U]) 
           | ((0xfffff000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[4U]) 
              | (0x800U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                           << 0xaU))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[5U] 
        = ((0x7ffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[5U]) 
           | ((0x800U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[5U]) 
              | (0xfffff000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[5U])));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[6U] 
        = ((0xfffc0000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[6U]) 
           | ((0x7ffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[6U]) 
              | ((0x20000U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                              << 0xfU)) | ((0x800U 
                                            & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[6U]) 
                                           | (0x1f000U 
                                              & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[6U])))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[6U] 
        = ((0x3ffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[6U]) 
           | (0xfffc0000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[6U]));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[7U] 
        = ((0x3ffffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[7U]) 
           | (0xfffc0000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[7U]));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[8U] 
        = ((0x3ffffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[8U]) 
           | ((0xff000000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[8U]) 
              | ((0x800000U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                               << 0x14U)) | (0x7c0000U 
                                             & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[8U]))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[9U] 
        = ((0x3ffffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[9U]) 
           | ((0xfc0000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[9U]) 
              | (0xff000000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[9U])));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[0xaU] 
        = ((0xe0000000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[0xaU]) 
           | ((0x3ffffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0xaU]) 
              | ((0xfc0000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0xaU]) 
                 | (0x1f000000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0xaU]))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[0xaU] 
        = ((0x1fffffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[0xaU]) 
           | ((0xc0000000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0xaU]) 
              | (0x20000000U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                << 0x19U))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[0xbU] 
        = ((0x1fffffffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0xbU]) 
           | ((0x20000000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0xbU]) 
              | (0xc0000000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0xbU])));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[0xcU] 
        = ((0x1fffffffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0xcU]) 
           | ((0x20000000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0xcU]) 
              | (0xc0000000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0xcU])));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[0xdU] 
        = ((0xfffffff0U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[0xdU]) 
           | ((8U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 2U)) | (7U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0xdU])));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[0xdU] 
        = ((0xfU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[0xdU]) 
           | (0xfffffff0U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0xdU]));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[0xeU] 
        = ((0xfU & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0xeU]) 
           | (0xfffffff0U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0xeU]));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[0xfU] 
        = ((0xfU & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0xfU]) 
           | ((0xfffffc00U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0xfU]) 
              | ((0x200U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                            << 3U)) | (0x1f0U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0xfU]))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[0x10U] 
        = ((0xfU & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x10U]) 
           | ((0x3f0U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x10U]) 
              | (0xfffffc00U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x10U])));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[0x11U] 
        = ((0xffff8000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[0x11U]) 
           | ((0xfU & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x11U]) 
              | ((0x3f0U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x11U]) 
                 | (0x7c00U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x11U]))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[0x11U] 
        = ((0x7fffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[0x11U]) 
           | ((0xffff0000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x11U]) 
              | (0x8000U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                            << 8U))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[0x12U] 
        = ((0x7fffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x12U]) 
           | ((0x8000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x12U]) 
              | (0xffff0000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x12U])));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[0x13U] 
        = ((0xffc00000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[0x13U]) 
           | ((0x7fffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x13U]) 
              | ((0x200000U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                               << 0xdU)) | ((0x8000U 
                                             & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x13U]) 
                                            | (0x1f0000U 
                                               & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x13U])))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[0x13U] 
        = ((0x3fffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[0x13U]) 
           | (0xffc00000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x13U]));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[0x14U] 
        = ((0x3fffffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x14U]) 
           | (0xffc00000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x14U]));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[0x15U] 
        = ((0x3fffffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x15U]) 
           | ((0xf0000000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x15U]) 
              | ((0x8000000U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                << 0x12U)) | (0x7c00000U 
                                              & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x15U]))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[0x16U] 
        = ((0x3fffffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x16U]) 
           | ((0xfc00000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x16U]) 
              | (0xf0000000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x16U])));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[0x17U] 
        = ((0x3fffffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x17U]) 
           | ((0xfc00000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x17U]) 
              | (0xf0000000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x17U])));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[0x18U] 
        = ((0xfffffffeU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[0x18U]) 
           | (1U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x18U]));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[0x18U] 
        = ((1U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[0x18U]) 
           | ((0xfffffffcU & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x18U]) 
              | (2U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                       >> 9U))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[0x19U] 
        = ((1U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x19U]) 
           | ((2U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x19U]) 
              | (0xfffffffcU & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x19U])));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[0x1aU] 
        = ((0xffffff00U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[0x1aU]) 
           | ((1U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x1aU]) 
              | ((0x80U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                           >> 4U)) | ((2U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x1aU]) 
                                      | (0x7cU & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x1aU])))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[0x1aU] 
        = ((0xffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[0x1aU]) 
           | (0xffffff00U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x1aU]));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[0x1bU] 
        = ((0xffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x1bU]) 
           | (0xffffff00U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x1bU]));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[0x1cU] 
        = ((0xffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x1cU]) 
           | ((0xffffc000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x1cU]) 
              | ((0x2000U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                             << 1U)) | (0x1f00U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x1cU]))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[0x1dU] 
        = ((0xffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x1dU]) 
           | ((0x3f00U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x1dU]) 
              | (0xffffc000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x1dU])));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[0x1eU] 
        = ((0xfff80000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[0x1eU]) 
           | ((0xffU & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x1eU]) 
              | ((0x3f00U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x1eU]) 
                 | (0x7c000U & vlSelfRef.__VdfgRegularize_h16038c0c_0_31[0x1eU]))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[0x1eU] 
        = ((0x7ffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[0x1eU]) 
           | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[0U] 
               << 0x14U) | (0x80000U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                        << 6U))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[0x1fU] 
        = ((0x7ffffU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[0U] 
                        >> 0xcU)) | ((0x80000U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[0U] 
                                                  >> 0xcU)) 
                                     | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U] 
                                        << 0x14U)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[0x20U] 
        = (0x3ffffffU & ((0x7ffffU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U] 
                                      >> 0xcU)) | (
                                                   (0x2000000U 
                                                    & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                       << 0xbU)) 
                                                   | ((0x80000U 
                                                       & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U] 
                                                          >> 0xcU)) 
                                                      | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[2U] 
                                                         << 0x14U)))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__status_cnt_n 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__status_cnt_q;
    if (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__fifo_req_push) 
         & (1U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__status_cnt_q)))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__status_cnt_q)));
    }
    if (((0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__status_cnt_q)) 
         & (0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__status_cnt_q)))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__fifo_req_push) 
           & (0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__status_cnt_q))) 
          & (1U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__status_cnt_q)))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__status_cnt_n 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__status_cnt_q;
    }
    vlSelfRef.__VdfgRegularize_h495687df_0_204 = ((1U 
                                                   != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__status_cnt_q)) 
                                                  & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__fifo_req_push));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__mem_n[0U] 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__mem_q[0U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__mem_n[1U] 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__mem_q[1U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__mem_n[2U] 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__mem_q[2U];
    if (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__fifo_req_push) 
         & (1U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__status_cnt_q)))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT____Vlvbound_h76352b34__0[0U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[0U];
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT____Vlvbound_h76352b34__0[1U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U];
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT____Vlvbound_h76352b34__0[2U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[2U];
        if ((0x44U >= (0x7fU & ((IData)(0x45U) * (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WW(69, 69, (0x7fU & ((IData)(0x45U) 
                                              * (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__write_pointer_q))), vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__mem_n, vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT____Vlvbound_h76352b34__0);
        }
    }
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_state_q) {
        if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_state_q) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_state_n 
                = ((0U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_resp_fifo_i__DOT__status_cnt_q))
                    ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_state_q)
                    : (IData)(vlSelfRef.__VdfgRegularize_h495687df_0_163));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__fifo_req_push 
                = ((0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_resp_fifo_i__DOT__status_cnt_q)) 
                   & (IData)(vlSelfRef.__VdfgRegularize_h495687df_0_163));
        } else {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_state_n 
                = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_state_q;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__fifo_req_push 
                = vlSelfRef.__VdfgRegularize_h495687df_0_163;
        }
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_state_n 
            = ((IData)(vlSelfRef.__VdfgRegularize_h495687df_0_163) 
               | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_state_q));
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__fifo_req_push 
            = vlSelfRef.__VdfgRegularize_h495687df_0_163;
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__flash_mem_slave_req[0U] 
        = ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[0x1fU] 
            << 0xcU) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[0x1eU] 
                        >> 0x14U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__flash_mem_slave_req[1U] 
        = ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[0x20U] 
            << 0xcU) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[0x1fU] 
                        >> 0x14U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__flash_mem_slave_req[2U] 
        = ((0x20U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 9U)) | (0x1fU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__int_slave_req[0x20U] 
                                         >> 0x14U)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__write_pointer_n 
        = ((IData)(vlSelfRef.__VdfgRegularize_h495687df_0_204)
            ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__write_pointer_q) 
               & ((IData)(1U) + (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__write_pointer_q)))
            : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__write_pointer_q));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__status_cnt_n 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__status_cnt_q;
    if (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__fifo_req_push) 
         & (1U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__status_cnt_q)))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__status_cnt_q)));
    }
    if (((0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__status_cnt_q)) 
         & (0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__status_cnt_q)))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__fifo_req_push) 
           & (0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__status_cnt_q))) 
          & (1U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__status_cnt_q)))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__status_cnt_n 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__status_cnt_q;
    }
    vlSelfRef.__VdfgRegularize_h495687df_0_162 = ((1U 
                                                   != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__status_cnt_q)) 
                                                  & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__fifo_req_push));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__mem_n[0U] 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__mem_q[0U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__mem_n[1U] 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__mem_q[1U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__mem_n[2U] 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__mem_q[2U];
    if (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__fifo_req_push) 
         & (1U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__status_cnt_q)))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT____Vlvbound_h76352b34__0[0U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[0U];
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT____Vlvbound_h76352b34__0[1U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[1U];
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT____Vlvbound_h76352b34__0[2U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_data_req[2U];
        if ((0x44U >= (0x7fU & ((IData)(0x45U) * (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WW(69, 69, (0x7fU & ((IData)(0x45U) 
                                              * (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__write_pointer_q))), vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__mem_n, vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT____Vlvbound_h76352b34__0);
        }
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__obi_to_picorv32_i__DOT__addr_buf_next 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__obi_to_picorv32_i__DOT__addr_buf;
    if ((1U & (~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__obi_to_picorv32_i__DOT__state) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__obi_to_picorv32_i__DOT__state)))) {
            if ((0x20U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__flash_mem_slave_req[2U])) {
                if ((1U & (~ (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__flash_mem_slave_req[2U] 
                              >> 4U)))) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__obi_to_picorv32_i__DOT__addr_buf_next 
                        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__flash_mem_slave_req[1U];
                }
            }
        }
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__obi_to_picorv32_i__DOT__state_next 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__obi_to_picorv32_i__DOT__state;
    if ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__obi_to_picorv32_i__DOT__state))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__obi_to_picorv32_i__DOT__state_next = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__flash_mem_slave_resp 
            = (0x100000000ULL | (QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__obi_to_picorv32_i__DOT__rdata_buf)));
    } else if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__obi_to_picorv32_i__DOT__state))) {
        if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT____Vcellout__spimemio_i__ready) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__obi_to_picorv32_i__DOT__state_next = 3U;
        }
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__flash_mem_slave_resp 
            = (QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__obi_to_picorv32_i__DOT__rdata_buf));
    } else {
        if ((0x20U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__flash_mem_slave_req[2U])) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__obi_to_picorv32_i__DOT__state_next 
                = ((0x10U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__flash_mem_slave_req[2U])
                    ? 2U : 1U);
        }
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__flash_mem_slave_resp 
            = ((0x4000U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o))
                ? ((0x10U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__flash_mem_slave_req[2U])
                    ? (0x200000000ULL | (0x1ffffffffULL 
                                         & (QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__obi_to_picorv32_i__DOT__rdata_buf))))
                    : (0x200000000ULL | (0x1ffffffffULL 
                                         & (QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__obi_to_picorv32_i__DOT__rdata_buf)))))
                : (QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__obi_to_picorv32_i__DOT__rdata_buf)));
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__write_pointer_n 
        = ((IData)(vlSelfRef.__VdfgRegularize_h495687df_0_162)
            ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__write_pointer_q) 
               & ((IData)(1U) + (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__write_pointer_q)))
            : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__write_pointer_q));
    __VdfgRegularize_h495687df_0_34 = (1U & ((0xffeU 
                                              | ((0x4000U 
                                                  & ((IData)(
                                                             (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__flash_mem_slave_resp 
                                                              >> 0x21U)) 
                                                     << 0xeU)) 
                                                 | (((IData)(vlSelfRef.__VdfgRegularize_h495687df_0_121) 
                                                     << 0xdU) 
                                                    | ((IData)(vlSelfRef.__VdfgRegularize_h495687df_0_119) 
                                                       << 0xcU)))) 
                                             >> (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d)));
    if ((0xeU >= (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d))) {
        vlSelfRef.__VdfgRegularize_h495687df_0_35 = __VdfgRegularize_h495687df_0_34;
        vlSelfRef.__VdfgRegularize_h495687df_0_36 = __VdfgRegularize_h495687df_0_34;
    } else {
        vlSelfRef.__VdfgRegularize_h495687df_0_35 = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT____Vxrand___0;
        vlSelfRef.__VdfgRegularize_h495687df_0_36 = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT____Vxrand___1;
    }
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__82(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__82\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__4__KET__));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__0__KET__ 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes__BRA__5__03a3__KET__)
            : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes__BRA__8__03a6__KET__));
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
