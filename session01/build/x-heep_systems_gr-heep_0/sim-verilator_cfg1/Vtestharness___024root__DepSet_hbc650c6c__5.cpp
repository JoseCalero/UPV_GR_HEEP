// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness__Syms.h"
#include "Vtestharness___024root.h"

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__51(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__51\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT____Vcellout__ao_peripheral_subsystem_i__spi_flash_sd_o 
        = (0xfU & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT____Vcellout__u_use_spimemio__q)
                    ? (((8U & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__config_en)
                                 ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__config_ddr)
                                     ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_io3_90)
                                     : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_io3_do))
                                 : ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__config_do) 
                                    >> 3U)) << 3U)) 
                        | (4U & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__config_en)
                                   ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__config_ddr)
                                       ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_io2_90)
                                       : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_io2_do))
                                   : ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__config_do) 
                                      >> 2U)) << 2U))) 
                       | ((2U & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__config_en)
                                   ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__config_ddr)
                                       ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_io1_90)
                                       : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_io1_do))
                                   : ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__config_do) 
                                      >> 1U)) << 1U)) 
                          | (1U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__config_en)
                                    ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__config_ddr)
                                        ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_io0_90)
                                        : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_io0_do))
                                    : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__config_do)))))
                    : ((0U == (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.__PVT__u_spi_core__DOT__speed))
                        ? (1U & ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_q) 
                                 >> 7U)) : ((1U == (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.__PVT__u_spi_core__DOT__speed))
                                             ? (3U 
                                                & ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_q) 
                                                   >> 6U))
                                             : ((2U 
                                                 == (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.__PVT__u_spi_core__DOT__speed))
                                                 ? 
                                                ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_q) 
                                                 >> 4U)
                                                 : 0U)))));
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__52(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__52\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT____Vcellout__ao_peripheral_subsystem_i__spi_flash_sd_en_o 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT____Vcellout__u_use_spimemio__q)
            ? ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT____Vcellout__obi_spimemio_i__flash_io3_oe_o) 
                 << 3U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT____Vcellout__obi_spimemio_i__flash_io2_oe_o) 
                           << 2U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT____Vcellout__obi_spimemio_i__flash_io1_oe_o) 
                                       << 1U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT____Vcellout__obi_spimemio_i__flash_io0_oe_o)))
            : ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.u_reg__DOT____Vcellout__u_control_output_en__q)
                ? (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.__PVT__sd_en_core)
                : 0U));
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__53(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__53\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__fast_intr_ctrl_i__DOT__fast_intr_pending_de 
        = (((0x8000U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__fast_intr_ctrl_i__DOT__fast_intr_ctrl_reg_top_i__DOT____Vcellout__u_fast_intr_clear__q)) 
            | ((0x4000U & ((0xffffc000U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__fast_intr_ctrl_i__DOT__fast_intr_ctrl_reg_top_i__DOT____Vcellout__u_fast_intr_clear__q)) 
                           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_window_intr_n) 
                              << 0xeU))) | ((0x3000U 
                                             & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__fast_intr_ctrl_i__DOT__fast_intr_ctrl_reg_top_i__DOT____Vcellout__u_fast_intr_clear__q) 
                                                | (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.pin_level_interrupts_o 
                                                   << 6U))) 
                                            | (0xf00U 
                                               & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__fast_intr_ctrl_i__DOT__fast_intr_ctrl_reg_top_i__DOT____Vcellout__u_fast_intr_clear__q) 
                                                  | (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.pin_level_interrupts_o 
                                                     << 6U)))))) 
           | (((0xc0U & ((0xffffffc0U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__fast_intr_ctrl_i__DOT__fast_intr_ctrl_reg_top_i__DOT____Vcellout__u_fast_intr_clear__q)) 
                         | (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.pin_level_interrupts_o 
                            << 6U))) | ((0x20U & ((0xffffffe0U 
                                                   & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__fast_intr_ctrl_i__DOT__fast_intr_ctrl_reg_top_i__DOT____Vcellout__u_fast_intr_clear__q)) 
                                                  | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__spi_flash_intr) 
                                                     << 5U))) 
                                        | (0x10U & 
                                           ((0xfffffff0U 
                                             & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__fast_intr_ctrl_i__DOT__fast_intr_ctrl_reg_top_i__DOT____Vcellout__u_fast_intr_clear__q)) 
                                            | ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.intr_spi_event_o) 
                                               << 4U))))) 
              | (((8U & ((0xfffffff8U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__fast_intr_ctrl_i__DOT__fast_intr_ctrl_reg_top_i__DOT____Vcellout__u_fast_intr_clear__q)) 
                         | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_done_intr_n) 
                            << 3U))) | (4U & ((0xfffffffcU 
                                               & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__fast_intr_ctrl_i__DOT__fast_intr_ctrl_reg_top_i__DOT____Vcellout__u_fast_intr_clear__q)) 
                                              | ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_timer_2_3_i.__Vcellout__gen_harts__BRA__1__KET____DOT__u_intr_hw__intr_o) 
                                                 << 2U)))) 
                 | ((2U & ((0xfffffffeU & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__fast_intr_ctrl_i__DOT__fast_intr_ctrl_reg_top_i__DOT____Vcellout__u_fast_intr_clear__q)) 
                           | ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_timer_2_3_i.__PVT__intr_out__BRA__0__KET__) 
                              << 1U))) | (1U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__fast_intr_ctrl_i__DOT__fast_intr_ctrl_reg_top_i__DOT____Vcellout__u_fast_intr_clear__q) 
                                                | (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__rv_timer_0_1_i.__Vcellout__gen_harts__BRA__1__KET____DOT__u_intr_hw__intr_o)))))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__fast_intr_ctrl_i__DOT__hw2reg 
        = (((QData)((IData)(((~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__fast_intr_ctrl_i__DOT__fast_intr_ctrl_reg_top_i__DOT____Vcellout__u_fast_intr_clear__q) 
                                 >> 0xeU)) & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_window_intr_n) 
                                              & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__fast_intr_ctrl_i__DOT__fast_intr_ctrl_reg_top_i__DOT____Vcellout__u_fast_intr_enable__q) 
                                                 >> 0xeU))))) 
            << 0x20U) | (QData)((IData)((((((0x80000000U 
                                             & (((~ 
                                                  ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__fast_intr_ctrl_i__DOT__fast_intr_ctrl_reg_top_i__DOT____Vcellout__u_fast_intr_clear__q) 
                                                   >> 0xdU)) 
                                                 << 0x1fU) 
                                                & ((vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.pin_level_interrupts_o 
                                                    << 0x18U) 
                                                   & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__fast_intr_ctrl_i__DOT__fast_intr_ctrl_reg_top_i__DOT____Vcellout__u_fast_intr_enable__q) 
                                                      << 0x12U)))) 
                                            | (0x40000000U 
                                               & (((~ 
                                                    ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__fast_intr_ctrl_i__DOT__fast_intr_ctrl_reg_top_i__DOT____Vcellout__u_fast_intr_clear__q) 
                                                     >> 0xcU)) 
                                                   << 0x1eU) 
                                                  & ((vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.pin_level_interrupts_o 
                                                      << 0x18U) 
                                                     & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__fast_intr_ctrl_i__DOT__fast_intr_ctrl_reg_top_i__DOT____Vcellout__u_fast_intr_enable__q) 
                                                        << 0x12U))))) 
                                           | ((0x20000000U 
                                               & (((~ 
                                                    ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__fast_intr_ctrl_i__DOT__fast_intr_ctrl_reg_top_i__DOT____Vcellout__u_fast_intr_clear__q) 
                                                     >> 0xbU)) 
                                                   << 0x1dU) 
                                                  & ((vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.pin_level_interrupts_o 
                                                      << 0x18U) 
                                                     & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__fast_intr_ctrl_i__DOT__fast_intr_ctrl_reg_top_i__DOT____Vcellout__u_fast_intr_enable__q) 
                                                        << 0x12U)))) 
                                              | (0x10000000U 
                                                 & (((~ 
                                                      ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__fast_intr_ctrl_i__DOT__fast_intr_ctrl_reg_top_i__DOT____Vcellout__u_fast_intr_clear__q) 
                                                       >> 0xaU)) 
                                                     << 0x1cU) 
                                                    & ((vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.pin_level_interrupts_o 
                                                        << 0x18U) 
                                                       & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__fast_intr_ctrl_i__DOT__fast_intr_ctrl_reg_top_i__DOT____Vcellout__u_fast_intr_enable__q) 
                                                          << 0x12U)))))) 
                                          | (((0x8000000U 
                                               & (((~ 
                                                    ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__fast_intr_ctrl_i__DOT__fast_intr_ctrl_reg_top_i__DOT____Vcellout__u_fast_intr_clear__q) 
                                                     >> 9U)) 
                                                   << 0x1bU) 
                                                  & ((vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.pin_level_interrupts_o 
                                                      << 0x18U) 
                                                     & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__fast_intr_ctrl_i__DOT__fast_intr_ctrl_reg_top_i__DOT____Vcellout__u_fast_intr_enable__q) 
                                                        << 0x12U)))) 
                                              | (0x4000000U 
                                                 & (((~ 
                                                      ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__fast_intr_ctrl_i__DOT__fast_intr_ctrl_reg_top_i__DOT____Vcellout__u_fast_intr_clear__q) 
                                                       >> 8U)) 
                                                     << 0x1aU) 
                                                    & ((vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.pin_level_interrupts_o 
                                                        << 0x18U) 
                                                       & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__fast_intr_ctrl_i__DOT__fast_intr_ctrl_reg_top_i__DOT____Vcellout__u_fast_intr_enable__q) 
                                                          << 0x12U))))) 
                                             | ((0x2000000U 
                                                 & (((~ 
                                                      ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__fast_intr_ctrl_i__DOT__fast_intr_ctrl_reg_top_i__DOT____Vcellout__u_fast_intr_clear__q) 
                                                       >> 7U)) 
                                                     << 0x19U) 
                                                    & ((vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.pin_level_interrupts_o 
                                                        << 0x18U) 
                                                       & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__fast_intr_ctrl_i__DOT__fast_intr_ctrl_reg_top_i__DOT____Vcellout__u_fast_intr_enable__q) 
                                                          << 0x12U)))) 
                                                | (0x1000000U 
                                                   & (((~ 
                                                        ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__fast_intr_ctrl_i__DOT__fast_intr_ctrl_reg_top_i__DOT____Vcellout__u_fast_intr_clear__q) 
                                                         >> 6U)) 
                                                       << 0x18U) 
                                                      & ((vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.pin_level_interrupts_o 
                                                          << 0x18U) 
                                                         & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__fast_intr_ctrl_i__DOT__fast_intr_ctrl_reg_top_i__DOT____Vcellout__u_fast_intr_enable__q) 
                                                            << 0x12U))))))) 
                                         | ((((0xff800000U 
                                               & (((~ 
                                                    ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__fast_intr_ctrl_i__DOT__fast_intr_ctrl_reg_top_i__DOT____Vcellout__u_fast_intr_clear__q) 
                                                     >> 5U)) 
                                                   << 0x17U) 
                                                  & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__spi_flash_intr) 
                                                      << 0x17U) 
                                                     & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__fast_intr_ctrl_i__DOT__fast_intr_ctrl_reg_top_i__DOT____Vcellout__u_fast_intr_enable__q) 
                                                        << 0x12U)))) 
                                              | (0xffc00000U 
                                                 & (((~ 
                                                      ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__fast_intr_ctrl_i__DOT__fast_intr_ctrl_reg_top_i__DOT____Vcellout__u_fast_intr_clear__q) 
                                                       >> 4U)) 
                                                     << 0x16U) 
                                                    & (((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.intr_spi_event_o) 
                                                        << 0x16U) 
                                                       & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__fast_intr_ctrl_i__DOT__fast_intr_ctrl_reg_top_i__DOT____Vcellout__u_fast_intr_enable__q) 
                                                          << 0x12U))))) 
                                             | ((0xffe00000U 
                                                 & (((~ 
                                                      ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__fast_intr_ctrl_i__DOT__fast_intr_ctrl_reg_top_i__DOT____Vcellout__u_fast_intr_clear__q) 
                                                       >> 3U)) 
                                                     << 0x15U) 
                                                    & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_done_intr_n) 
                                                        << 0x15U) 
                                                       & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__fast_intr_ctrl_i__DOT__fast_intr_ctrl_reg_top_i__DOT____Vcellout__u_fast_intr_enable__q) 
                                                          << 0x12U)))) 
                                                | (0xfff00000U 
                                                   & (((~ 
                                                        ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__fast_intr_ctrl_i__DOT__fast_intr_ctrl_reg_top_i__DOT____Vcellout__u_fast_intr_clear__q) 
                                                         >> 2U)) 
                                                       << 0x14U) 
                                                      & (((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_timer_2_3_i.__Vcellout__gen_harts__BRA__1__KET____DOT__u_intr_hw__intr_o) 
                                                          << 0x14U) 
                                                         & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__fast_intr_ctrl_i__DOT__fast_intr_ctrl_reg_top_i__DOT____Vcellout__u_fast_intr_enable__q) 
                                                            << 0x12U)))))) 
                                            | ((0xfff80000U 
                                                & (((~ 
                                                     ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__fast_intr_ctrl_i__DOT__fast_intr_ctrl_reg_top_i__DOT____Vcellout__u_fast_intr_clear__q) 
                                                      >> 1U)) 
                                                    << 0x13U) 
                                                   & (((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_timer_2_3_i.__PVT__intr_out__BRA__0__KET__) 
                                                       << 0x13U) 
                                                      & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__fast_intr_ctrl_i__DOT__fast_intr_ctrl_reg_top_i__DOT____Vcellout__u_fast_intr_enable__q) 
                                                         << 0x12U)))) 
                                               | ((((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__fast_intr_ctrl_i__DOT__fast_intr_ctrl_reg_top_i__DOT____Vcellout__u_fast_intr_clear__q)) 
                                                    & ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__rv_timer_0_1_i.__Vcellout__gen_harts__BRA__1__KET____DOT__u_intr_hw__intr_o) 
                                                       & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__fast_intr_ctrl_i__DOT__fast_intr_ctrl_reg_top_i__DOT____Vcellout__u_fast_intr_enable__q))) 
                                                   << 0x12U) 
                                                  | (((0U 
                                                       != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__fast_intr_ctrl_i__DOT__fast_intr_pending_de)) 
                                                      << 0x11U) 
                                                     | (0U 
                                                        != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__fast_intr_ctrl_i__DOT__fast_intr_ctrl_reg_top_i__DOT____Vcellout__u_fast_intr_clear__q))))))))));
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__55(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__55\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__i2s_sck_out_x_muxed 
        = ((1U & (IData)((vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                          >> 0x2fU))) ? ((1U & (IData)(
                                                       (vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                                                        >> 0x2fU)))
                                          ? (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.i_reg_file__DOT____Vcellout__u_gpio_out_gpio_out_20__q)
                                          : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__sck))
            : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__sck));
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__i2s_sck_oe_x_muxed) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_i2s_sck__DOT__pad__strong__out1 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__i2s_sck_out_x_muxed;
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__i2s_sck_in_x = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__gpio_20_in_x = 0U;
    if ((1U & (IData)((vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                       >> 0x2fU)))) {
        if ((1U & (~ (IData)((vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                              >> 0x2fU))))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__i2s_sck_in_x 
                = vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_i2s_sck__DOT__pad__strong__out1;
        }
        if ((1U & (IData)((vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                           >> 0x2fU)))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__gpio_20_in_x 
                = vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_i2s_sck__DOT__pad__strong__out1;
        }
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__i2s_sck_in_x 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_i2s_sck__DOT__pad__strong__out1;
    }
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__57(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__57\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.cio_sd_en_o))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_spi_sd_0__DOT__pad__strong__out1 
            = (1U & (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.cio_sd_o));
    }
    if ((2U & (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.cio_sd_en_o))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_spi_sd_1__DOT__pad__strong__out1 
            = (1U & ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.cio_sd_o) 
                     >> 1U));
    }
    if ((4U & (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.cio_sd_en_o))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_spi_sd_2__DOT__pad__strong__out1 
            = (1U & ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.cio_sd_o) 
                     >> 2U));
    }
    if ((8U & (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.cio_sd_en_o))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_spi_sd_3__DOT__pad__strong__out1 
            = (1U & ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.cio_sd_o) 
                     >> 3U));
    }
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__58(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__58\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<6>/*191:0*/ __Vtemp_10;
    VlWide<9>/*287:0*/ __Vtemp_11;
    // Body
    __Vtemp_1[0U] = (IData)((0x100000000ULL | (((QData)((IData)(
                                                                ((vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[2U] 
                                                                  >> 4U) 
                                                                 & (0x28U 
                                                                    != 
                                                                    (0x3fU 
                                                                     & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[1U]))))) 
                                                << 0x21U) 
                                               | (QData)((IData)(
                                                                 ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__empty)
                                                                   ? 0U
                                                                   : 
                                                                  (((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                                                    & (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.__PVT__core_rx_valid))
                                                                    ? vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__data_q
                                                                    : 
                                                                   (((0U 
                                                                      == 
                                                                      (0x1fU 
                                                                       & VL_SHIFTL_III(11,11,32, 
                                                                                (0x3fU 
                                                                                & (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 5U)))
                                                                      ? 0U
                                                                      : 
                                                                     (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                      (((IData)(0x1fU) 
                                                                        + 
                                                                        (0x7ffU 
                                                                         & VL_SHIFTL_III(11,11,32, 
                                                                                (0x3fU 
                                                                                & (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 5U))) 
                                                                       >> 5U)] 
                                                                      << 
                                                                      ((IData)(0x20U) 
                                                                       - 
                                                                       (0x1fU 
                                                                        & VL_SHIFTL_III(11,11,32, 
                                                                                (0x3fU 
                                                                                & (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 5U))))) 
                                                                    | (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                       (0x3fU 
                                                                        & (VL_SHIFTL_III(11,11,32, 
                                                                                (0x3fU 
                                                                                & (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 5U) 
                                                                           >> 5U))] 
                                                                       >> 
                                                                       (0x1fU 
                                                                        & VL_SHIFTL_III(11,11,32, 
                                                                                (0x3fU 
                                                                                & (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 5U)))))))))));
    __Vtemp_1[1U] = (IData)(((0x100000000ULL | (((QData)((IData)(
                                                                 ((vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[2U] 
                                                                   >> 4U) 
                                                                  & (0x28U 
                                                                     != 
                                                                     (0x3fU 
                                                                      & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[1U]))))) 
                                                 << 0x21U) 
                                                | (QData)((IData)(
                                                                  ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__empty)
                                                                    ? 0U
                                                                    : 
                                                                   (((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                                                     & (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.__PVT__core_rx_valid))
                                                                     ? vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__data_q
                                                                     : 
                                                                    (((0U 
                                                                       == 
                                                                       (0x1fU 
                                                                        & VL_SHIFTL_III(11,11,32, 
                                                                                (0x3fU 
                                                                                & (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 5U)))
                                                                       ? 0U
                                                                       : 
                                                                      (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                       (((IData)(0x1fU) 
                                                                         + 
                                                                         (0x7ffU 
                                                                          & VL_SHIFTL_III(11,11,32, 
                                                                                (0x3fU 
                                                                                & (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 5U))) 
                                                                        >> 5U)] 
                                                                       << 
                                                                       ((IData)(0x20U) 
                                                                        - 
                                                                        (0x1fU 
                                                                         & VL_SHIFTL_III(11,11,32, 
                                                                                (0x3fU 
                                                                                & (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 5U))))) 
                                                                     | (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                        (0x3fU 
                                                                         & (VL_SHIFTL_III(11,11,32, 
                                                                                (0x3fU 
                                                                                & (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 5U) 
                                                                            >> 5U))] 
                                                                        >> 
                                                                        (0x1fU 
                                                                         & VL_SHIFTL_III(11,11,32, 
                                                                                (0x3fU 
                                                                                & (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 5U)))))))))) 
                             >> 0x20U));
    __Vtemp_2[0U] = __Vtemp_1[0U];
    __Vtemp_2[1U] = __Vtemp_1[1U];
    __Vtemp_2[2U] = (4U | ((IData)((((QData)((IData)(
                                                     (1U 
                                                      | ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.__PVT__u_reg__DOT__reg_error) 
                                                         << 1U)))) 
                                     << 0x21U) | (((QData)((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.__PVT__u_reg__DOT__reg_rdata)) 
                                                   << 1U) 
                                                  | (QData)((IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        ((vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                                                                          >> 0xaU) 
                                                                         | (0x2cU 
                                                                            == 
                                                                            (0x3fU 
                                                                             & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[3U] 
                                                                                >> 6U))))))))))) 
                           << 3U));
    __Vtemp_2[3U] = (((IData)((((QData)((IData)((1U 
                                                 | ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.__PVT__u_reg__DOT__reg_error) 
                                                    << 1U)))) 
                                << 0x21U) | (((QData)((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.__PVT__u_reg__DOT__reg_rdata)) 
                                              << 1U) 
                                             | (QData)((IData)(
                                                               (1U 
                                                                & (~ 
                                                                   ((vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                                                                     >> 0xaU) 
                                                                    | (0x2cU 
                                                                       == 
                                                                       (0x3fU 
                                                                        & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[3U] 
                                                                           >> 6U))))))))))) 
                      >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                              (1U 
                                                               | ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.__PVT__u_reg__DOT__reg_error) 
                                                                  << 1U)))) 
                                              << 0x21U) 
                                             | (((QData)((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.__PVT__u_reg__DOT__reg_rdata)) 
                                                 << 1U) 
                                                | (QData)((IData)(
                                                                  (1U 
                                                                   & (~ 
                                                                      ((vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                                                                        >> 0xaU) 
                                                                       | (0x2cU 
                                                                          == 
                                                                          (0x3fU 
                                                                           & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[3U] 
                                                                              >> 6U)))))))))) 
                                            >> 0x20U)) 
                                   << 3U));
    __Vtemp_3[0U] = (IData)(((0xffffffffcULL & (((0x65U 
                                                  >= 
                                                  (0x7fU 
                                                   & ((IData)(0x22U) 
                                                      * (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.__PVT__u_reg__DOT__reg_steer))))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   __Vtemp_2[
                                                                   (((IData)(0x21U) 
                                                                     + 
                                                                     (0x7fU 
                                                                      & ((IData)(0x22U) 
                                                                         * (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.__PVT__u_reg__DOT__reg_steer)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x22U) 
                                                         * (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.__PVT__u_reg__DOT__reg_steer))))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(0x22U) 
                                                         * (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.__PVT__u_reg__DOT__reg_steer)))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x22U) 
                                                           * (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.__PVT__u_reg__DOT__reg_steer))))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
                                                                       __Vtemp_2[
                                                                       (((IData)(0x1fU) 
                                                                         + 
                                                                         (0x7fU 
                                                                          & ((IData)(0x22U) 
                                                                             * (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.__PVT__u_reg__DOT__reg_steer)))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x22U) 
                                                            * (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.__PVT__u_reg__DOT__reg_steer)))))) 
                                                     | ((QData)((IData)(
                                                                        __Vtemp_2[
                                                                        (3U 
                                                                         & (((IData)(0x22U) 
                                                                             * (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.__PVT__u_reg__DOT__reg_steer)) 
                                                                            >> 5U))])) 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x22U) 
                                                            * (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.__PVT__u_reg__DOT__reg_steer))))))
                                                  : vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.u_reg__DOT__i_reg_demux__DOT____Vxrand___0) 
                                                << 2U)) 
                             | (QData)((IData)((((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_timer_2_3_i.__PVT__u_reg__DOT__u_reg_if__DOT__error) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_timer_2_3_i.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding))))));
    __Vtemp_3[1U] = ((((0U == (0x1fU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xeU] 
                                        >> 4U))) ? 
                       (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT____Vcellout__u_control_reset_rx_overflow__q) 
                           << 0xbU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT____Vcellout__u_control_rx_start_channel__q) 
                                       << 0xaU)) | 
                         (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT____Vcellout__u_control_data_width__q) 
                           << 8U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT____Vcellout__u_control_en_io__q) 
                                      << 7U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT____Vcellout__u_control_reset_watermark__q) 
                                                << 6U)))) 
                        | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT____Vcellout__u_control_en_watermark__q) 
                             << 5U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT____Vcellout__u_control_intr_en__q) 
                                       << 4U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT____Vcellout__u_control_en_rx__q) 
                                                   << 2U) 
                                                  | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT____Vcellout__u_control_en_ws__q) 
                                                      << 1U) 
                                                     | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT____Vcellout__u_control_en__q)))))
                        : ((4U == (0x1fU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xeU] 
                                            >> 4U)))
                            ? ((4U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__data_rx_overflow_sync_i__DOT__reg_q) 
                                      << 1U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT__status_rx_data_ready_qs) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT____Vcellout__i2s_core_i__running_o)))
                            : ((8U == (0x1fU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xeU] 
                                                >> 4U)))
                                ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT____Vcellout__u_clkdividx__q)
                                : ((0xcU == (0x1fU 
                                             & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xeU] 
                                                >> 4U)))
                                    ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__rx_cdc_i__DOT__i_dst__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                        ? vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__rx_cdc_i__DOT__i_dst__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q
                                        : vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__rx_cdc_i__DOT__i_dst__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q)
                                    : ((0x10U == (0x1fU 
                                                  & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xeU] 
                                                     >> 4U)))
                                        ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT____Vcellout__u_watermark__q)
                                        : ((0x14U == 
                                            (0x1fU 
                                             & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xeU] 
                                                >> 4U)))
                                            ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__watermark_counter__DOT__counter_q)
                                            : 0xffffffffU)))))) 
                      << 4U) | (IData)((((0xffffffffcULL 
                                          & (((0x65U 
                                               >= (0x7fU 
                                                   & ((IData)(0x22U) 
                                                      * (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.__PVT__u_reg__DOT__reg_steer))))
                                               ? (((QData)((IData)(
                                                                   __Vtemp_2[
                                                                   (((IData)(0x21U) 
                                                                     + 
                                                                     (0x7fU 
                                                                      & ((IData)(0x22U) 
                                                                         * (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.__PVT__u_reg__DOT__reg_steer)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x22U) 
                                                         * (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.__PVT__u_reg__DOT__reg_steer))))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(0x22U) 
                                                         * (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.__PVT__u_reg__DOT__reg_steer)))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x22U) 
                                                           * (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.__PVT__u_reg__DOT__reg_steer))))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
                                                                       __Vtemp_2[
                                                                       (((IData)(0x1fU) 
                                                                         + 
                                                                         (0x7fU 
                                                                          & ((IData)(0x22U) 
                                                                             * (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.__PVT__u_reg__DOT__reg_steer)))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x22U) 
                                                            * (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.__PVT__u_reg__DOT__reg_steer)))))) 
                                                     | ((QData)((IData)(
                                                                        __Vtemp_2[
                                                                        (3U 
                                                                         & (((IData)(0x22U) 
                                                                             * (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.__PVT__u_reg__DOT__reg_steer)) 
                                                                            >> 5U))])) 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x22U) 
                                                            * (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.__PVT__u_reg__DOT__reg_steer))))))
                                               : vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.u_reg__DOT__i_reg_demux__DOT____Vxrand___0) 
                                             << 2U)) 
                                         | (QData)((IData)(
                                                           (((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_timer_2_3_i.__PVT__u_reg__DOT__u_reg_if__DOT__error) 
                                                             << 1U) 
                                                            | (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_timer_2_3_i.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding))))) 
                                        >> 0x20U)));
    __Vtemp_3[2U] = (((0U == (0x1fU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xeU] 
                                       >> 4U))) ? (
                                                   ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT____Vcellout__u_control_reset_rx_overflow__q) 
                                                      << 0xbU) 
                                                     | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT____Vcellout__u_control_rx_start_channel__q) 
                                                        << 0xaU)) 
                                                    | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT____Vcellout__u_control_data_width__q) 
                                                        << 8U) 
                                                       | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT____Vcellout__u_control_en_io__q) 
                                                           << 7U) 
                                                          | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT____Vcellout__u_control_reset_watermark__q) 
                                                             << 6U)))) 
                                                   | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT____Vcellout__u_control_en_watermark__q) 
                                                        << 5U) 
                                                       | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT____Vcellout__u_control_intr_en__q) 
                                                          << 4U)) 
                                                      | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT____Vcellout__u_control_en_rx__q) 
                                                          << 2U) 
                                                         | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT____Vcellout__u_control_en_ws__q) 
                                                             << 1U) 
                                                            | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT____Vcellout__u_control_en__q)))))
                       : ((4U == (0x1fU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xeU] 
                                           >> 4U)))
                           ? ((4U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__data_rx_overflow_sync_i__DOT__reg_q) 
                                     << 1U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT__status_rx_data_ready_qs) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT____Vcellout__i2s_core_i__running_o)))
                           : ((8U == (0x1fU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xeU] 
                                               >> 4U)))
                               ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT____Vcellout__u_clkdividx__q)
                               : ((0xcU == (0x1fU & 
                                            (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xeU] 
                                             >> 4U)))
                                   ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__rx_cdc_i__DOT__i_dst__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                       ? vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__rx_cdc_i__DOT__i_dst__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q
                                       : vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__rx_cdc_i__DOT__i_dst__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q)
                                   : ((0x10U == (0x1fU 
                                                 & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xeU] 
                                                    >> 4U)))
                                       ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT____Vcellout__u_watermark__q)
                                       : ((0x14U == 
                                           (0x1fU & 
                                            (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xeU] 
                                             >> 4U)))
                                           ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__watermark_counter__DOT__counter_q)
                                           : 0xffffffffU)))))) 
                     >> 0x1cU);
    __Vtemp_6[0U] = (IData)((0x100000000ULL | (((QData)((IData)(
                                                                ((vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[2U] 
                                                                  >> 4U) 
                                                                 & (0x28U 
                                                                    != 
                                                                    (0x3fU 
                                                                     & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[1U]))))) 
                                                << 0x21U) 
                                               | (QData)((IData)(
                                                                 ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__empty)
                                                                   ? 0U
                                                                   : 
                                                                  (((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                                                    & (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.__PVT__core_rx_valid))
                                                                    ? vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__data_q
                                                                    : 
                                                                   (((0U 
                                                                      == 
                                                                      (0x1fU 
                                                                       & VL_SHIFTL_III(11,11,32, 
                                                                                (0x3fU 
                                                                                & (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 5U)))
                                                                      ? 0U
                                                                      : 
                                                                     (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                      (((IData)(0x1fU) 
                                                                        + 
                                                                        (0x7ffU 
                                                                         & VL_SHIFTL_III(11,11,32, 
                                                                                (0x3fU 
                                                                                & (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 5U))) 
                                                                       >> 5U)] 
                                                                      << 
                                                                      ((IData)(0x20U) 
                                                                       - 
                                                                       (0x1fU 
                                                                        & VL_SHIFTL_III(11,11,32, 
                                                                                (0x3fU 
                                                                                & (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 5U))))) 
                                                                    | (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                       (0x3fU 
                                                                        & (VL_SHIFTL_III(11,11,32, 
                                                                                (0x3fU 
                                                                                & (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 5U) 
                                                                           >> 5U))] 
                                                                       >> 
                                                                       (0x1fU 
                                                                        & VL_SHIFTL_III(11,11,32, 
                                                                                (0x3fU 
                                                                                & (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 5U)))))))))));
    __Vtemp_6[1U] = (IData)(((0x100000000ULL | (((QData)((IData)(
                                                                 ((vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[2U] 
                                                                   >> 4U) 
                                                                  & (0x28U 
                                                                     != 
                                                                     (0x3fU 
                                                                      & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[1U]))))) 
                                                 << 0x21U) 
                                                | (QData)((IData)(
                                                                  ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__empty)
                                                                    ? 0U
                                                                    : 
                                                                   (((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                                                     & (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.__PVT__core_rx_valid))
                                                                     ? vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__data_q
                                                                     : 
                                                                    (((0U 
                                                                       == 
                                                                       (0x1fU 
                                                                        & VL_SHIFTL_III(11,11,32, 
                                                                                (0x3fU 
                                                                                & (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 5U)))
                                                                       ? 0U
                                                                       : 
                                                                      (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                       (((IData)(0x1fU) 
                                                                         + 
                                                                         (0x7ffU 
                                                                          & VL_SHIFTL_III(11,11,32, 
                                                                                (0x3fU 
                                                                                & (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 5U))) 
                                                                        >> 5U)] 
                                                                       << 
                                                                       ((IData)(0x20U) 
                                                                        - 
                                                                        (0x1fU 
                                                                         & VL_SHIFTL_III(11,11,32, 
                                                                                (0x3fU 
                                                                                & (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 5U))))) 
                                                                     | (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                        (0x3fU 
                                                                         & (VL_SHIFTL_III(11,11,32, 
                                                                                (0x3fU 
                                                                                & (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 5U) 
                                                                            >> 5U))] 
                                                                        >> 
                                                                        (0x1fU 
                                                                         & VL_SHIFTL_III(11,11,32, 
                                                                                (0x3fU 
                                                                                & (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 5U)))))))))) 
                             >> 0x20U));
    __Vtemp_7[0U] = __Vtemp_6[0U];
    __Vtemp_7[1U] = __Vtemp_6[1U];
    __Vtemp_7[2U] = (4U | ((IData)((((QData)((IData)(
                                                     (1U 
                                                      | ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.__PVT__u_reg__DOT__reg_error) 
                                                         << 1U)))) 
                                     << 0x21U) | (((QData)((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.__PVT__u_reg__DOT__reg_rdata)) 
                                                   << 1U) 
                                                  | (QData)((IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        ((vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                                                                          >> 0xaU) 
                                                                         | (0x2cU 
                                                                            == 
                                                                            (0x3fU 
                                                                             & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[3U] 
                                                                                >> 6U))))))))))) 
                           << 3U));
    __Vtemp_7[3U] = (((IData)((((QData)((IData)((1U 
                                                 | ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.__PVT__u_reg__DOT__reg_error) 
                                                    << 1U)))) 
                                << 0x21U) | (((QData)((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.__PVT__u_reg__DOT__reg_rdata)) 
                                              << 1U) 
                                             | (QData)((IData)(
                                                               (1U 
                                                                & (~ 
                                                                   ((vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                                                                     >> 0xaU) 
                                                                    | (0x2cU 
                                                                       == 
                                                                       (0x3fU 
                                                                        & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[3U] 
                                                                           >> 6U))))))))))) 
                      >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                              (1U 
                                                               | ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.__PVT__u_reg__DOT__reg_error) 
                                                                  << 1U)))) 
                                              << 0x21U) 
                                             | (((QData)((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.__PVT__u_reg__DOT__reg_rdata)) 
                                                 << 1U) 
                                                | (QData)((IData)(
                                                                  (1U 
                                                                   & (~ 
                                                                      ((vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                                                                        >> 0xaU) 
                                                                       | (0x2cU 
                                                                          == 
                                                                          (0x3fU 
                                                                           & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[3U] 
                                                                              >> 6U)))))))))) 
                                            >> 0x20U)) 
                                   << 3U));
    __Vtemp_8[1U] = (((IData)((0x3ffffffffULL & ((0x65U 
                                                  >= 
                                                  (0x7fU 
                                                   & ((IData)(0x22U) 
                                                      * (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.__PVT__u_reg__DOT__reg_steer))))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   __Vtemp_7[
                                                                   (((IData)(0x21U) 
                                                                     + 
                                                                     (0x7fU 
                                                                      & ((IData)(0x22U) 
                                                                         * (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.__PVT__u_reg__DOT__reg_steer)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x22U) 
                                                         * (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.__PVT__u_reg__DOT__reg_steer))))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(0x22U) 
                                                         * (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.__PVT__u_reg__DOT__reg_steer)))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x22U) 
                                                           * (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.__PVT__u_reg__DOT__reg_steer))))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
                                                                       __Vtemp_7[
                                                                       (((IData)(0x1fU) 
                                                                         + 
                                                                         (0x7fU 
                                                                          & ((IData)(0x22U) 
                                                                             * (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.__PVT__u_reg__DOT__reg_steer)))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x22U) 
                                                            * (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.__PVT__u_reg__DOT__reg_steer)))))) 
                                                     | ((QData)((IData)(
                                                                        __Vtemp_7[
                                                                        (3U 
                                                                         & (((IData)(0x22U) 
                                                                             * (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.__PVT__u_reg__DOT__reg_steer)) 
                                                                            >> 5U))])) 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x22U) 
                                                            * (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.__PVT__u_reg__DOT__reg_steer))))))
                                                  : vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.u_reg__DOT__i_reg_demux__DOT____Vxrand___0))) 
                      << 2U) | (IData)(((((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_reg_if__DOT__error)) 
                                          << 0x21U) 
                                         | (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_reg_if__DOT__outstanding)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_reg_if__DOT__rdata)))) 
                                        >> 0x20U)));
    __Vtemp_8[2U] = (((IData)((0x3ffffffffULL & ((0x65U 
                                                  >= 
                                                  (0x7fU 
                                                   & ((IData)(0x22U) 
                                                      * (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.__PVT__u_reg__DOT__reg_steer))))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   __Vtemp_7[
                                                                   (((IData)(0x21U) 
                                                                     + 
                                                                     (0x7fU 
                                                                      & ((IData)(0x22U) 
                                                                         * (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.__PVT__u_reg__DOT__reg_steer)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x22U) 
                                                         * (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.__PVT__u_reg__DOT__reg_steer))))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(0x22U) 
                                                         * (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.__PVT__u_reg__DOT__reg_steer)))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x22U) 
                                                           * (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.__PVT__u_reg__DOT__reg_steer))))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
                                                                       __Vtemp_7[
                                                                       (((IData)(0x1fU) 
                                                                         + 
                                                                         (0x7fU 
                                                                          & ((IData)(0x22U) 
                                                                             * (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.__PVT__u_reg__DOT__reg_steer)))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x22U) 
                                                            * (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.__PVT__u_reg__DOT__reg_steer)))))) 
                                                     | ((QData)((IData)(
                                                                        __Vtemp_7[
                                                                        (3U 
                                                                         & (((IData)(0x22U) 
                                                                             * (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.__PVT__u_reg__DOT__reg_steer)) 
                                                                            >> 5U))])) 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x22U) 
                                                            * (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.__PVT__u_reg__DOT__reg_steer))))))
                                                  : vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.u_reg__DOT__i_reg_demux__DOT____Vxrand___0))) 
                      >> 0x1eU) | ((IData)(((0x3ffffffffULL 
                                             & ((0x65U 
                                                 >= 
                                                 (0x7fU 
                                                  & ((IData)(0x22U) 
                                                     * (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.__PVT__u_reg__DOT__reg_steer))))
                                                 ? 
                                                (((QData)((IData)(
                                                                  __Vtemp_7[
                                                                  (((IData)(0x21U) 
                                                                    + 
                                                                    (0x7fU 
                                                                     & ((IData)(0x22U) 
                                                                        * (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.__PVT__u_reg__DOT__reg_steer)))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0x22U) 
                                                        * (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.__PVT__u_reg__DOT__reg_steer))))
                                                    ? 0x20U
                                                    : 
                                                   ((IData)(0x40U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0x22U) 
                                                        * (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.__PVT__u_reg__DOT__reg_steer)))))) 
                                                 | (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x22U) 
                                                          * (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.__PVT__u_reg__DOT__reg_steer))))
                                                      ? 0ULL
                                                      : 
                                                     ((QData)((IData)(
                                                                      __Vtemp_7[
                                                                      (((IData)(0x1fU) 
                                                                        + 
                                                                        (0x7fU 
                                                                         & ((IData)(0x22U) 
                                                                            * (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.__PVT__u_reg__DOT__reg_steer)))) 
                                                                       >> 5U)])) 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0x22U) 
                                                           * (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.__PVT__u_reg__DOT__reg_steer)))))) 
                                                    | ((QData)((IData)(
                                                                       __Vtemp_7[
                                                                       (3U 
                                                                        & (((IData)(0x22U) 
                                                                            * (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.__PVT__u_reg__DOT__reg_steer)) 
                                                                           >> 5U))])) 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(0x22U) 
                                                           * (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.__PVT__u_reg__DOT__reg_steer))))))
                                                 : vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.u_reg__DOT__i_reg_demux__DOT____Vxrand___0)) 
                                            >> 0x20U)) 
                                   << 2U));
    __Vtemp_10[5U] = (((0xfU & ((IData)((((QData)((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_timer_2_3_i.__PVT__u_reg__DOT__u_reg_if__DOT__rdata)) 
                                          << 2U) | (QData)((IData)(
                                                                   (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_reg_if__DOT__error) 
                                                                     << 1U) 
                                                                    | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_reg_if__DOT__outstanding)))))) 
                                >> 0x1aU)) | ((IData)(
                                                      ((((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_reg_if__DOT__rdata)) 
                                                         << 2U) 
                                                        | (QData)((IData)(
                                                                          (1U 
                                                                           | ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.__PVT__i_reg_file__DOT__reg_error) 
                                                                              << 1U))))) 
                                                       >> 0x20U)) 
                                              >> 0x1cU)) 
                      | ((0x30U & ((IData)((((QData)((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_timer_2_3_i.__PVT__u_reg__DOT__u_reg_if__DOT__rdata)) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_reg_if__DOT__error) 
                                                                << 1U) 
                                                               | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_reg_if__DOT__outstanding)))))) 
                                   >> 0x1aU)) | ((IData)(
                                                         ((((QData)((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_timer_2_3_i.__PVT__u_reg__DOT__u_reg_if__DOT__rdata)) 
                                                            << 2U) 
                                                           | (QData)((IData)(
                                                                             (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_reg_if__DOT__error) 
                                                                               << 1U) 
                                                                              | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_reg_if__DOT__outstanding))))) 
                                                          >> 0x20U)) 
                                                 << 6U)));
    __Vtemp_11[0U] = (IData)((((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_reg_if__DOT__error)) 
                               << 0x21U) | (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_reg_if__DOT__outstanding)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_reg_if__DOT__rdata)))));
    __Vtemp_11[1U] = __Vtemp_8[1U];
    __Vtemp_11[2U] = ((vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.__PVT__i_reg_file__DOT__reg_rdata 
                       << 4U) | __Vtemp_8[2U]);
    __Vtemp_11[3U] = (((IData)((((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_reg_if__DOT__rdata)) 
                                 << 2U) | (QData)((IData)(
                                                          (1U 
                                                           | ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.__PVT__i_reg_file__DOT__reg_error) 
                                                              << 1U)))))) 
                       << 4U) | (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.__PVT__i_reg_file__DOT__reg_rdata 
                                 >> 0x1cU));
    __Vtemp_11[4U] = (((IData)((((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_reg_if__DOT__rdata)) 
                                 << 2U) | (QData)((IData)(
                                                          (1U 
                                                           | ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.__PVT__i_reg_file__DOT__reg_error) 
                                                              << 1U)))))) 
                       >> 0x1cU) | (((IData)((((QData)((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_timer_2_3_i.__PVT__u_reg__DOT__u_reg_if__DOT__rdata)) 
                                               << 2U) 
                                              | (QData)((IData)(
                                                                (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_reg_if__DOT__error) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_reg_if__DOT__outstanding)))))) 
                                     << 6U) | ((IData)(
                                                       ((((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_reg_if__DOT__rdata)) 
                                                          << 2U) 
                                                         | (QData)((IData)(
                                                                           (1U 
                                                                            | ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.__PVT__i_reg_file__DOT__reg_error) 
                                                                               << 1U))))) 
                                                        >> 0x20U)) 
                                               << 4U)));
    __Vtemp_11[5U] = ((__Vtemp_3[0U] << 8U) | __Vtemp_10[5U]);
    __Vtemp_11[6U] = ((__Vtemp_3[0U] >> 0x18U) | (__Vtemp_3[1U] 
                                                  << 8U));
    __Vtemp_11[7U] = ((__Vtemp_3[1U] >> 0x18U) | (((IData)(
                                                           (((QData)((IData)(
                                                                             (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__error) 
                                                                               << 1U) 
                                                                              | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__outstanding)))) 
                                                             << 0x22U) 
                                                            | (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__rdata)) 
                                                                << 2U) 
                                                               | (QData)((IData)(
                                                                                (1U 
                                                                                | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT__reg_error) 
                                                                                << 1U))))))) 
                                                   << 0xcU) 
                                                  | (__Vtemp_3[2U] 
                                                     << 8U)));
    __Vtemp_11[8U] = (((0xffU & ((IData)((((QData)((IData)(
                                                           (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__error) 
                                                             << 1U) 
                                                            | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__outstanding)))) 
                                           << 0x22U) 
                                          | (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__rdata)) 
                                              << 2U) 
                                             | (QData)((IData)(
                                                               (1U 
                                                                | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT__reg_error) 
                                                                   << 1U))))))) 
                                 >> 0x14U)) | (__Vtemp_3[2U] 
                                               >> 0x18U)) 
                      | ((0xf00U & ((IData)((((QData)((IData)(
                                                              (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__error) 
                                                                << 1U) 
                                                               | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__outstanding)))) 
                                              << 0x22U) 
                                             | (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__rdata)) 
                                                 << 2U) 
                                                | (QData)((IData)(
                                                                  (1U 
                                                                   | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT__reg_error) 
                                                                      << 1U))))))) 
                                    >> 0x14U)) | ((IData)(
                                                          ((((QData)((IData)(
                                                                             (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__error) 
                                                                               << 1U) 
                                                                              | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__outstanding)))) 
                                                             << 0x22U) 
                                                            | (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__rdata)) 
                                                                << 2U) 
                                                               | (QData)((IData)(
                                                                                (1U 
                                                                                | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT__reg_error) 
                                                                                << 1U)))))) 
                                                           >> 0x20U)) 
                                                  << 0xcU)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__peripheral_rsp 
        = (0x3ffffffffULL & ((0x10fU >= (0x1ffU & ((IData)(0x22U) 
                                                   * (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__peripheral_select))))
                              ? (((QData)((IData)(__Vtemp_11[
                                                  (((IData)(0x21U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x22U) 
                                                        * (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__peripheral_select)))) 
                                                   >> 5U)])) 
                                  << ((0U == (0x1fU 
                                              & ((IData)(0x22U) 
                                                 * (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__peripheral_select))))
                                       ? 0x20U : ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x22U) 
                                                      * (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__peripheral_select)))))) 
                                 | (((0U == (0x1fU 
                                             & ((IData)(0x22U) 
                                                * (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__peripheral_select))))
                                      ? 0ULL : ((QData)((IData)(
                                                                __Vtemp_11[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  (0x1ffU 
                                                                   & ((IData)(0x22U) 
                                                                      * (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__peripheral_select)))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x22U) 
                                                     * (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__peripheral_select)))))) 
                                    | ((QData)((IData)(
                                                       __Vtemp_11[
                                                       (0xfU 
                                                        & (((IData)(0x22U) 
                                                            * (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__peripheral_select)) 
                                                           >> 5U))])) 
                                       >> (0x1fU & 
                                           ((IData)(0x22U) 
                                            * (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__peripheral_select))))))
                              : vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__reg_demux_i__DOT____Vxrand___0));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__periph_to_reg_i__DOT__r_valid_d 
        = (IData)(((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__peripheral_req[2U] 
                    >> 5U) & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__peripheral_rsp 
                              >> 0x20U)));
    vlSelfRef.__VdfgRegularize_h495687df_0_54 = ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__periph_to_reg_i__DOT__r_valid_d)) 
                                                 & (0U 
                                                    != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__status_cnt_q)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__consumer_state_n 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__consumer_state_q)
            ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__consumer_state_q)
                ? ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__periph_to_reg_i__DOT__r_valid_d)) 
                   & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__consumer_state_q))
                : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__consumer_state_q))
            : ((IData)(vlSelfRef.__VdfgRegularize_h495687df_0_54) 
               | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__consumer_state_q)));
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__60(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__60\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__i2s_ws_out_x_muxed 
        = ((1U & (IData)((vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                          >> 0x30U))) ? ((1U & (IData)(
                                                       (vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                                                        >> 0x30U)))
                                          ? (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.i_reg_file__DOT____Vcellout__u_gpio_out_gpio_out_21__q)
                                          : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__ws))
            : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__ws));
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__i2s_ws_oe_x_muxed) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_i2s_ws__DOT__pad__strong__out1 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__i2s_ws_out_x_muxed;
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__i2s_ws_in_x = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__gpio_21_in_x = 0U;
    if ((1U & (IData)((vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                       >> 0x30U)))) {
        if ((1U & (~ (IData)((vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                              >> 0x30U))))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__i2s_ws_in_x 
                = vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_i2s_ws__DOT__pad__strong__out1;
        }
        if ((1U & (IData)((vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                           >> 0x30U)))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__gpio_21_in_x 
                = vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_i2s_ws__DOT__pad__strong__out1;
        }
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__i2s_ws_in_x 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_i2s_ws__DOT__pad__strong__out1;
    }
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__62(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__62\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o 
        = (1U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q)
                  ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__vld_o) 
                     & (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__1__KET____DOT__demux_xbar_i.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o))
                  : (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__1__KET____DOT__demux_xbar_i.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = ((1U > (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o));
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__71(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__71\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o 
        = (1U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q)
                  ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__vld_o) 
                     & (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__3__KET____DOT__demux_xbar_i.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o))
                  : (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__3__KET____DOT__demux_xbar_i.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o 
        = (1U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q)
                  ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__vld_o) 
                     & (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__4__KET____DOT__demux_xbar_i.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o))
                  : (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__4__KET____DOT__demux_xbar_i.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U <= (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U > (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U <= (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
              & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U > (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
              & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o)));
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes__BRA__413__03a345__KET__[0U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellinp__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__data_i[0U];
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes__BRA__413__03a345__KET__[1U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellinp__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__data_i[1U];
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes__BRA__413__03a345__KET__[2U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellinp__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__data_i[2U];
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes__BRA__413__03a345__KET__[0U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellinp__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__data_i[0U];
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes__BRA__413__03a345__KET__[1U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellinp__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__data_i[1U];
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes__BRA__413__03a345__KET__[2U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellinp__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__data_i[2U];
    }
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT____VdfgRegularize_h00452607_0_10 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes__BRA__206__03a138__KET__[0U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes__BRA__413__03a345__KET__[0U];
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes__BRA__206__03a138__KET__[1U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes__BRA__413__03a345__KET__[1U];
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes__BRA__206__03a138__KET__[2U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes__BRA__413__03a345__KET__[2U];
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT____VdfgRegularize_h00452607_0_10 = 2U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes__BRA__206__03a138__KET__[0U] = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes__BRA__206__03a138__KET__[1U] = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes__BRA__206__03a138__KET__[2U] = 0U;
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__BRA__8__03a6__KET__ 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
            ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0)
                ? 4U : 5U) : 0U);
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes__BRA__8__03a6__KET__ 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
            ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0)
                ? 4U : 5U) : 0U);
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__72(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__72\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & ((1U & (IData)((vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                              >> 0x35U))) ? ((1U & (IData)(
                                                           (vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                                                            >> 0x35U)))
                                              ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__gpio_26_oe_x)
                                              : (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.cio_sd_en_o))
                : (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.cio_sd_en_o)))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_spi2_sd_0__DOT__pad__strong__out1 
            = (1U & ((1U & (IData)((vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                                    >> 0x35U))) ? (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                                                               >> 0x35U)))
                                                    ? (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.i_reg_file__DOT____Vcellout__u_gpio_out_gpio_out_26__q)
                                                    : (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.cio_sd_o))
                      : (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.cio_sd_o)));
    }
    if ((1U & ((1U & (IData)((vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                              >> 0x36U))) ? ((1U & (IData)(
                                                           (vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                                                            >> 0x36U)))
                                              ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__gpio_27_oe_x)
                                              : ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.cio_sd_en_o) 
                                                 >> 1U))
                : ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.cio_sd_en_o) 
                   >> 1U)))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_spi2_sd_1__DOT__pad__strong__out1 
            = (1U & ((1U & (IData)((vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                                    >> 0x36U))) ? (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                                                               >> 0x36U)))
                                                    ? (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.i_reg_file__DOT____Vcellout__u_gpio_out_gpio_out_27__q)
                                                    : 
                                                   ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.cio_sd_o) 
                                                    >> 1U))
                      : ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.cio_sd_o) 
                         >> 1U)));
    }
    if ((1U & ((1U & (IData)((vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                              >> 0x37U))) ? ((1U & (IData)(
                                                           (vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                                                            >> 0x37U)))
                                              ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__gpio_28_oe_x)
                                              : ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.cio_sd_en_o) 
                                                 >> 2U))
                : ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.cio_sd_en_o) 
                   >> 2U)))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_spi2_sd_2__DOT__pad__strong__out1 
            = (1U & ((1U & (IData)((vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                                    >> 0x37U))) ? (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                                                               >> 0x37U)))
                                                    ? (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.i_reg_file__DOT____Vcellout__u_gpio_out_gpio_out_28__q)
                                                    : 
                                                   ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.cio_sd_o) 
                                                    >> 2U))
                      : ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.cio_sd_o) 
                         >> 2U)));
    }
    if ((1U & ((1U & (IData)((vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                              >> 0x38U))) ? ((1U & (IData)(
                                                           (vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                                                            >> 0x38U)))
                                              ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__gpio_29_oe_x)
                                              : ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.cio_sd_en_o) 
                                                 >> 3U))
                : ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.cio_sd_en_o) 
                   >> 3U)))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_spi2_sd_3__DOT__pad__strong__out1 
            = (1U & ((1U & (IData)((vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                                    >> 0x38U))) ? (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                                                               >> 0x38U)))
                                                    ? (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.i_reg_file__DOT____Vcellout__u_gpio_out_gpio_out_29__q)
                                                    : 
                                                   ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.cio_sd_o) 
                                                    >> 3U))
                      : ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.cio_sd_o) 
                         >> 3U)));
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__gpio_26_in_x = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__spi2_sd_0_in_x = 0U;
    if ((1U & (IData)((vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                       >> 0x35U)))) {
        if ((1U & (IData)((vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                           >> 0x35U)))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__gpio_26_in_x 
                = vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_spi2_sd_0__DOT__pad__strong__out1;
        }
        if ((1U & (~ (IData)((vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                              >> 0x35U))))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__spi2_sd_0_in_x 
                = vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_spi2_sd_0__DOT__pad__strong__out1;
        }
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__spi2_sd_0_in_x 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_spi2_sd_0__DOT__pad__strong__out1;
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__gpio_27_in_x = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__spi2_sd_1_in_x = 0U;
    if ((1U & (IData)((vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                       >> 0x36U)))) {
        if ((1U & (IData)((vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                           >> 0x36U)))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__gpio_27_in_x 
                = vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_spi2_sd_1__DOT__pad__strong__out1;
        }
        if ((1U & (~ (IData)((vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                              >> 0x36U))))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__spi2_sd_1_in_x 
                = vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_spi2_sd_1__DOT__pad__strong__out1;
        }
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__spi2_sd_1_in_x 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_spi2_sd_1__DOT__pad__strong__out1;
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__gpio_28_in_x = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__spi2_sd_2_in_x = 0U;
    if ((1U & (IData)((vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                       >> 0x37U)))) {
        if ((1U & (IData)((vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                           >> 0x37U)))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__gpio_28_in_x 
                = vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_spi2_sd_2__DOT__pad__strong__out1;
        }
        if ((1U & (~ (IData)((vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                              >> 0x37U))))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__spi2_sd_2_in_x 
                = vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_spi2_sd_2__DOT__pad__strong__out1;
        }
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__spi2_sd_2_in_x 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_spi2_sd_2__DOT__pad__strong__out1;
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__gpio_29_in_x = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__spi2_sd_3_in_x = 0U;
    if ((1U & (IData)((vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                       >> 0x38U)))) {
        if ((1U & (IData)((vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                           >> 0x38U)))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__gpio_29_in_x 
                = vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_spi2_sd_3__DOT__pad__strong__out1;
        }
        if ((1U & (~ (IData)((vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                              >> 0x38U))))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__spi2_sd_3_in_x 
                = vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_spi2_sd_3__DOT__pad__strong__out1;
        }
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__spi2_sd_3_in_x 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_spi2_sd_3__DOT__pad__strong__out1;
    }
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__73(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__73\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_gateway__DOT__set 
        = (((QData)((IData)((((((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_51__q)
                                   ? ((~ (IData)((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_gateway__DOT__src_q 
                                                  >> 0x33U))) 
                                      & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__w25q128jw_controller_reg_top_i__DOT____Vcellout__u_intr_status__q))
                                   : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__w25q128jw_controller_reg_top_i__DOT____Vcellout__u_intr_status__q)) 
                                 << 0x13U) | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_50__q)
                                                 ? 
                                                ((~ (IData)(
                                                            (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_gateway__DOT__src_q 
                                                             >> 0x32U))) 
                                                 & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_intr_event))
                                                 : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_intr_event)) 
                                               << 0x12U) 
                                              | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_49__q)
                                                   ? 
                                                  ((~ (IData)(
                                                              (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_gateway__DOT__src_q 
                                                               >> 0x31U))) 
                                                   & (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.intr_spi_event_o))
                                                   : (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host.intr_spi_event_o)) 
                                                 << 0x11U))) 
                               | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_48__q)
                                     ? ((~ (IData)(
                                                   (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_gateway__DOT__src_q 
                                                    >> 0x30U))) 
                                        & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_intr_host_timeout))
                                     : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_intr_host_timeout)) 
                                   << 0x10U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_47__q)
                                                  ? 
                                                 ((~ (IData)(
                                                             (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_gateway__DOT__src_q 
                                                              >> 0x2fU))) 
                                                  & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_intr_ack_stop))
                                                  : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_intr_ack_stop)) 
                                                << 0xfU))) 
                              | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_46__q)
                                     ? ((~ (IData)(
                                                   (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_gateway__DOT__src_q 
                                                    >> 0x2eU))) 
                                        & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_intr_acq_overflow))
                                     : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_intr_acq_overflow)) 
                                   << 0xeU) | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_45__q)
                                                  ? 
                                                 ((~ (IData)(
                                                             (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_gateway__DOT__src_q 
                                                              >> 0x2dU))) 
                                                  & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_intr_tx_overflow))
                                                  : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_intr_tx_overflow)) 
                                                << 0xdU) 
                                               | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_44__q)
                                                    ? 
                                                   ((~ (IData)(
                                                               (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_gateway__DOT__src_q 
                                                                >> 0x2cU))) 
                                                    & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_intr_tx_nonempty))
                                                    : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_intr_tx_nonempty)) 
                                                  << 0xcU))) 
                                 | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_43__q)
                                       ? ((~ (IData)(
                                                     (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_gateway__DOT__src_q 
                                                      >> 0x2bU))) 
                                          & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_intr_tx_empty))
                                       : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_intr_tx_empty)) 
                                     << 0xbU) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_42__q)
                                                   ? 
                                                  ((~ (IData)(
                                                              (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_gateway__DOT__src_q 
                                                               >> 0x2aU))) 
                                                   & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_intr_trans_complete))
                                                   : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_intr_trans_complete)) 
                                                 << 0xaU)))) 
                             | ((((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_41__q)
                                     ? ((~ (IData)(
                                                   (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_gateway__DOT__src_q 
                                                    >> 0x29U))) 
                                        & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_intr_sda_unstable))
                                     : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_intr_sda_unstable)) 
                                   << 9U) | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_40__q)
                                                ? (
                                                   (~ (IData)(
                                                              (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_gateway__DOT__src_q 
                                                               >> 0x28U))) 
                                                   & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_intr_stretch_timeout))
                                                : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_intr_stretch_timeout)) 
                                              << 8U) 
                                             | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_39__q)
                                                  ? 
                                                 ((~ (IData)(
                                                             (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_gateway__DOT__src_q 
                                                              >> 0x27U))) 
                                                  & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_intr_sda_interference))
                                                  : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_intr_sda_interference)) 
                                                << 7U))) 
                                 | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_38__q)
                                       ? ((~ (IData)(
                                                     (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_gateway__DOT__src_q 
                                                      >> 0x26U))) 
                                          & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_intr_scl_interference))
                                       : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_intr_scl_interference)) 
                                     << 6U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_37__q)
                                                 ? 
                                                ((~ (IData)(
                                                            (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_gateway__DOT__src_q 
                                                             >> 0x25U))) 
                                                 & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_intr_nak))
                                                 : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_intr_nak)) 
                                               << 5U))) 
                                | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_36__q)
                                       ? ((~ (IData)(
                                                     (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_gateway__DOT__src_q 
                                                      >> 0x24U))) 
                                          & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_intr_rx_overflow))
                                       : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_intr_rx_overflow)) 
                                     << 4U) | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_35__q)
                                                  ? 
                                                 ((~ (IData)(
                                                             (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_gateway__DOT__src_q 
                                                              >> 0x23U))) 
                                                  & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_intr_fmt_overflow))
                                                  : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_intr_fmt_overflow)) 
                                                << 3U) 
                                               | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_34__q)
                                                    ? 
                                                   ((~ (IData)(
                                                               (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_gateway__DOT__src_q 
                                                                >> 0x22U))) 
                                                    & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_intr_rx_watermark))
                                                    : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_intr_rx_watermark)) 
                                                  << 2U))) 
                                   | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_33__q)
                                         ? ((~ (IData)(
                                                       (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_gateway__DOT__src_q 
                                                        >> 0x21U))) 
                                            & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_intr_fmt_watermark))
                                         : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_intr_fmt_watermark)) 
                                       << 1U) | (1U 
                                                 & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_32__q)
                                                     ? 
                                                    ((~ (IData)(
                                                                (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_gateway__DOT__src_q 
                                                                 >> 0x20U))) 
                                                     & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.pin_level_interrupts_o 
                                                        >> 0x1fU))
                                                     : 
                                                    (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.pin_level_interrupts_o 
                                                     >> 0x1fU))))))))) 
            << 0x20U) | (QData)((IData)(((((((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_31__q)
                                                ? (
                                                   (~ (IData)(
                                                              (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_gateway__DOT__src_q 
                                                               >> 0x1fU))) 
                                                   & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.pin_level_interrupts_o 
                                                      >> 0x1eU))
                                                : (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.pin_level_interrupts_o 
                                                   >> 0x1eU)) 
                                              << 0x1fU) 
                                             | (0x40000000U 
                                                & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_30__q)
                                                     ? 
                                                    ((~ (IData)(
                                                                (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_gateway__DOT__src_q 
                                                                 >> 0x1eU))) 
                                                     & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.pin_level_interrupts_o 
                                                        >> 0x1dU))
                                                     : 
                                                    (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.pin_level_interrupts_o 
                                                     >> 0x1dU)) 
                                                   << 0x1eU))) 
                                            | ((0x20000000U 
                                                & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_29__q)
                                                     ? 
                                                    ((~ (IData)(
                                                                (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_gateway__DOT__src_q 
                                                                 >> 0x1dU))) 
                                                     & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.pin_level_interrupts_o 
                                                        >> 0x1cU))
                                                     : 
                                                    (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.pin_level_interrupts_o 
                                                     >> 0x1cU)) 
                                                   << 0x1dU)) 
                                               | (0x10000000U 
                                                  & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_28__q)
                                                       ? 
                                                      ((~ (IData)(
                                                                  (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_gateway__DOT__src_q 
                                                                   >> 0x1cU))) 
                                                       & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.pin_level_interrupts_o 
                                                          >> 0x1bU))
                                                       : 
                                                      (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.pin_level_interrupts_o 
                                                       >> 0x1bU)) 
                                                     << 0x1cU)))) 
                                           | (((0x8000000U 
                                                & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_27__q)
                                                     ? 
                                                    ((~ (IData)(
                                                                (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_gateway__DOT__src_q 
                                                                 >> 0x1bU))) 
                                                     & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.pin_level_interrupts_o 
                                                        >> 0x1aU))
                                                     : 
                                                    (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.pin_level_interrupts_o 
                                                     >> 0x1aU)) 
                                                   << 0x1bU)) 
                                               | (0x4000000U 
                                                  & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_26__q)
                                                       ? 
                                                      ((~ (IData)(
                                                                  (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_gateway__DOT__src_q 
                                                                   >> 0x1aU))) 
                                                       & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.pin_level_interrupts_o 
                                                          >> 0x19U))
                                                       : 
                                                      (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.pin_level_interrupts_o 
                                                       >> 0x19U)) 
                                                     << 0x1aU))) 
                                              | ((0x2000000U 
                                                  & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_25__q)
                                                       ? 
                                                      ((~ (IData)(
                                                                  (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_gateway__DOT__src_q 
                                                                   >> 0x19U))) 
                                                       & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.pin_level_interrupts_o 
                                                          >> 0x18U))
                                                       : 
                                                      (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.pin_level_interrupts_o 
                                                       >> 0x18U)) 
                                                     << 0x19U)) 
                                                 | (0x1000000U 
                                                    & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_24__q)
                                                         ? 
                                                        ((~ (IData)(
                                                                    (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_gateway__DOT__src_q 
                                                                     >> 0x18U))) 
                                                         & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.pin_level_interrupts_o 
                                                            >> 0x17U))
                                                         : 
                                                        (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.pin_level_interrupts_o 
                                                         >> 0x17U)) 
                                                       << 0x18U))))) 
                                          | ((((0x800000U 
                                                & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_23__q)
                                                     ? 
                                                    ((~ (IData)(
                                                                (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_gateway__DOT__src_q 
                                                                 >> 0x17U))) 
                                                     & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.pin_level_interrupts_o 
                                                        >> 0x16U))
                                                     : 
                                                    (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.pin_level_interrupts_o 
                                                     >> 0x16U)) 
                                                   << 0x17U)) 
                                               | (0x400000U 
                                                  & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_22__q)
                                                       ? 
                                                      ((~ (IData)(
                                                                  (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_gateway__DOT__src_q 
                                                                   >> 0x16U))) 
                                                       & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.pin_level_interrupts_o 
                                                          >> 0x15U))
                                                       : 
                                                      (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.pin_level_interrupts_o 
                                                       >> 0x15U)) 
                                                     << 0x16U))) 
                                              | ((0x200000U 
                                                  & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_21__q)
                                                       ? 
                                                      ((~ (IData)(
                                                                  (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_gateway__DOT__src_q 
                                                                   >> 0x15U))) 
                                                       & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.pin_level_interrupts_o 
                                                          >> 0x14U))
                                                       : 
                                                      (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.pin_level_interrupts_o 
                                                       >> 0x14U)) 
                                                     << 0x15U)) 
                                                 | (0x100000U 
                                                    & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_20__q)
                                                         ? 
                                                        ((~ (IData)(
                                                                    (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_gateway__DOT__src_q 
                                                                     >> 0x14U))) 
                                                         & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.pin_level_interrupts_o 
                                                            >> 0x13U))
                                                         : 
                                                        (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.pin_level_interrupts_o 
                                                         >> 0x13U)) 
                                                       << 0x14U)))) 
                                             | (((0x80000U 
                                                  & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_19__q)
                                                       ? 
                                                      ((~ (IData)(
                                                                  (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_gateway__DOT__src_q 
                                                                   >> 0x13U))) 
                                                       & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.pin_level_interrupts_o 
                                                          >> 0x12U))
                                                       : 
                                                      (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.pin_level_interrupts_o 
                                                       >> 0x12U)) 
                                                     << 0x13U)) 
                                                 | (0x40000U 
                                                    & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_18__q)
                                                         ? 
                                                        ((~ (IData)(
                                                                    (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_gateway__DOT__src_q 
                                                                     >> 0x12U))) 
                                                         & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.pin_level_interrupts_o 
                                                            >> 0x11U))
                                                         : 
                                                        (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.pin_level_interrupts_o 
                                                         >> 0x11U)) 
                                                       << 0x12U))) 
                                                | ((0x20000U 
                                                    & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_17__q)
                                                         ? 
                                                        ((~ (IData)(
                                                                    (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_gateway__DOT__src_q 
                                                                     >> 0x11U))) 
                                                         & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.pin_level_interrupts_o 
                                                            >> 0x10U))
                                                         : 
                                                        (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.pin_level_interrupts_o 
                                                         >> 0x10U)) 
                                                       << 0x11U)) 
                                                   | (0x10000U 
                                                      & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_16__q)
                                                           ? 
                                                          ((~ (IData)(
                                                                      (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_gateway__DOT__src_q 
                                                                       >> 0x10U))) 
                                                           & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.pin_level_interrupts_o 
                                                              >> 0xfU))
                                                           : 
                                                          (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.pin_level_interrupts_o 
                                                           >> 0xfU)) 
                                                         << 0x10U)))))) 
                                         | (((((0x8000U 
                                                & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_15__q)
                                                     ? 
                                                    ((~ (IData)(
                                                                (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_gateway__DOT__src_q 
                                                                 >> 0xfU))) 
                                                     & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.pin_level_interrupts_o 
                                                        >> 0xeU))
                                                     : 
                                                    (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.pin_level_interrupts_o 
                                                     >> 0xeU)) 
                                                   << 0xfU)) 
                                               | (0x4000U 
                                                  & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_14__q)
                                                       ? 
                                                      ((~ (IData)(
                                                                  (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_gateway__DOT__src_q 
                                                                   >> 0xeU))) 
                                                       & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.pin_level_interrupts_o 
                                                          >> 0xdU))
                                                       : 
                                                      (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.pin_level_interrupts_o 
                                                       >> 0xdU)) 
                                                     << 0xeU))) 
                                              | ((0x2000U 
                                                  & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_13__q)
                                                       ? 
                                                      ((~ (IData)(
                                                                  (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_gateway__DOT__src_q 
                                                                   >> 0xdU))) 
                                                       & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.pin_level_interrupts_o 
                                                          >> 0xcU))
                                                       : 
                                                      (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.pin_level_interrupts_o 
                                                       >> 0xcU)) 
                                                     << 0xdU)) 
                                                 | (0x1000U 
                                                    & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_12__q)
                                                         ? 
                                                        ((~ (IData)(
                                                                    (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_gateway__DOT__src_q 
                                                                     >> 0xcU))) 
                                                         & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.pin_level_interrupts_o 
                                                            >> 0xbU))
                                                         : 
                                                        (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.pin_level_interrupts_o 
                                                         >> 0xbU)) 
                                                       << 0xcU)))) 
                                             | (((0x800U 
                                                  & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_11__q)
                                                       ? 
                                                      ((~ (IData)(
                                                                  (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_gateway__DOT__src_q 
                                                                   >> 0xbU))) 
                                                       & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.pin_level_interrupts_o 
                                                          >> 0xaU))
                                                       : 
                                                      (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.pin_level_interrupts_o 
                                                       >> 0xaU)) 
                                                     << 0xbU)) 
                                                 | (0x400U 
                                                    & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_10__q)
                                                         ? 
                                                        ((~ (IData)(
                                                                    (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_gateway__DOT__src_q 
                                                                     >> 0xaU))) 
                                                         & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.pin_level_interrupts_o 
                                                            >> 9U))
                                                         : 
                                                        (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.pin_level_interrupts_o 
                                                         >> 9U)) 
                                                       << 0xaU))) 
                                                | ((0x200U 
                                                    & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_9__q)
                                                         ? 
                                                        ((~ (IData)(
                                                                    (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_gateway__DOT__src_q 
                                                                     >> 9U))) 
                                                         & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.pin_level_interrupts_o 
                                                            >> 8U))
                                                         : 
                                                        (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.pin_level_interrupts_o 
                                                         >> 8U)) 
                                                       << 9U)) 
                                                   | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_8__q)
                                                        ? 
                                                       ((~ (IData)(
                                                                   (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_gateway__DOT__src_q 
                                                                    >> 8U))) 
                                                        & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_intr_rx_parity_err))
                                                        : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_intr_rx_parity_err)) 
                                                      << 8U)))) 
                                            | ((((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_7__q)
                                                    ? 
                                                   ((~ (IData)(
                                                               (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_gateway__DOT__src_q 
                                                                >> 7U))) 
                                                    & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_intr_rx_timeout))
                                                    : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_intr_rx_timeout)) 
                                                  << 7U) 
                                                 | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_6__q)
                                                      ? 
                                                     ((~ (IData)(
                                                                 (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_gateway__DOT__src_q 
                                                                  >> 6U))) 
                                                      & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_intr_rx_break_err))
                                                      : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_intr_rx_break_err)) 
                                                    << 6U)) 
                                                | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_5__q)
                                                      ? 
                                                     ((~ (IData)(
                                                                 (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_gateway__DOT__src_q 
                                                                  >> 5U))) 
                                                      & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_intr_rx_frame_err))
                                                      : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_intr_rx_frame_err)) 
                                                    << 5U) 
                                                   | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_4__q)
                                                        ? 
                                                       ((~ (IData)(
                                                                   (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_gateway__DOT__src_q 
                                                                    >> 4U))) 
                                                        & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_intr_rx_overflow))
                                                        : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_intr_rx_overflow)) 
                                                      << 4U))) 
                                               | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_3__q)
                                                      ? 
                                                     ((~ (IData)(
                                                                 (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_gateway__DOT__src_q 
                                                                  >> 3U))) 
                                                      & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_intr_tx_empty))
                                                      : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_intr_tx_empty)) 
                                                    << 3U) 
                                                   | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_2__q)
                                                        ? 
                                                       ((~ (IData)(
                                                                   (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_gateway__DOT__src_q 
                                                                    >> 2U))) 
                                                        & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_intr_rx_watermark))
                                                        : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_intr_rx_watermark)) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_1__q)
                                                       ? 
                                                      ((~ (IData)(
                                                                  (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_gateway__DOT__src_q 
                                                                   >> 1U))) 
                                                       & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_intr_tx_watermark))
                                                       : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_intr_tx_watermark)) 
                                                     << 1U))))))));
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__76(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__76\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__ma_req__BRA__0__KET__ 
        = (1U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q)
                  ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__vld_o) 
                     & (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__0__KET____DOT__demux_xbar_i.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o))
                  : (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__0__KET____DOT__demux_xbar_i.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__ma_req__BRA__0__KET__) 
           | ((1U <= (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
              & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__ma_req__BRA__0__KET__)) 
                 | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__3__KET__ 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__ma_req__BRA__0__KET__) 
           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__BRA__5__03a3__KET__ 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
            ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__ma_req__BRA__0__KET__)
                ? 0U : 1U) : ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1)
                               ? 2U : 3U));
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes__BRA__275__03a207__KET__[0U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellinp__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__data_i[0U];
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes__BRA__275__03a207__KET__[1U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellinp__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__data_i[1U];
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes__BRA__275__03a207__KET__[2U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellinp__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__data_i[2U];
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes__BRA__275__03a207__KET__[0U] 
            = (IData)(((QData)((IData)((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__stored_addr_d 
                                        >> 2U))) << 0x22U));
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes__BRA__275__03a207__KET__[1U] 
            = (IData)((((QData)((IData)((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__stored_addr_d 
                                         >> 2U))) << 0x22U) 
                       >> 0x20U));
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes__BRA__275__03a207__KET__[2U] = 0xfU;
    }
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__84(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__84\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT____VdfgRegularize_h251a7f89_0_1;
    testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT____VdfgRegularize_h251a7f89_0_1 = 0;
    CData/*0:0*/ testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT____VdfgRegularize_h251a7f89_0_2;
    testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT____VdfgRegularize_h251a7f89_0_2 = 0;
    VlWide<15>/*479:0*/ __Vtemp_13;
    // Body
    __Vtemp_13[0U] = 0U;
    __Vtemp_13[1U] = vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i.__PVT__tc_ram_i__DOT__rdata_q;
    __Vtemp_13[2U] = vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i.__PVT__tc_ram_i__DOT__rdata_q;
    __Vtemp_13[3U] = vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram2_i.__PVT__tc_ram_i__DOT__rdata_q;
    __Vtemp_13[4U] = vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram3_i.__PVT__tc_ram_i__DOT__rdata_q;
    __Vtemp_13[5U] = vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram4_i.__PVT__tc_ram_i__DOT__rdata_q;
    __Vtemp_13[6U] = vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram5_i.__PVT__tc_ram_i__DOT__rdata_q;
    __Vtemp_13[7U] = vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram6_i.__PVT__tc_ram_i__DOT__rdata_q;
    __Vtemp_13[8U] = vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram7_i.__PVT__tc_ram_i__DOT__rdata_q;
    __Vtemp_13[9U] = vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram8_i.__PVT__tc_ram_i__DOT__rdata_q;
    __Vtemp_13[0xaU] = vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram9_i.__PVT__tc_ram_i__DOT__rdata_q;
    __Vtemp_13[0xbU] = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT____Vcellout__dm_obi_top_i__slave_rdata_o;
    __Vtemp_13[0xcU] = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT____Vcellout__obi_resp_fifo_i__data_o;
    __Vtemp_13[0xdU] = (IData)((((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__flash_mem_slave_resp)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT____Vcellout__obi_resp_fifo_i__data_o))));
    __Vtemp_13[0xeU] = (IData)(((((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__flash_mem_slave_resp)) 
                                  << 0x20U) | (QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT____Vcellout__obi_resp_fifo_i__data_o))) 
                                >> 0x20U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__xbar_master_rsp_data 
        = ((0x1dfU >= (0x1ffU & VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_q), 5U)))
            ? (((0U == (0x1fU & VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_q), 5U)))
                 ? 0U : (__Vtemp_13[(((IData)(0x1fU) 
                                      + (0x1ffU & VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_q), 5U))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_q), 5U))))) 
               | (__Vtemp_13[(0xfU & (VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_q), 5U) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_q), 5U))))
            : vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT____Vxrand___2);
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__xbar_master_rsp_rvalid 
        = (((0xeU >= (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_q))
             ? (((0x4000U & ((IData)((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__flash_mem_slave_resp 
                                      >> 0x20U)) << 0xeU)) 
                 | (IData)(vlSelfRef.__VdfgRegularize_h544d41b1_0_4)) 
                >> (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_q))
             : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT____Vxrand___3)) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_fifo_i__DOT____Vcellinp__obi_resp_fifo_i__data_i 
        = (IData)(((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__xbar_master_rsp_data)) 
                   >> (0x3fU & VL_SHIFTL_III(6,6,32, (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__2__KET____DOT__demux_xbar_i.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_q), 5U))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__data_addr_in_rdata 
        = (IData)(((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__xbar_master_rsp_data)) 
                   >> (0x3fU & VL_SHIFTL_III(6,6,32, (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__5__KET____DOT__demux_xbar_i.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_q), 5U))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT____Vcellinp__cv32e20_i__data_rdata_i 
        = (IData)(((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__xbar_master_rsp_data)) 
                   >> (0x3fU & VL_SHIFTL_III(6,6,32, (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__1__KET____DOT__demux_xbar_i.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_q), 5U))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__data_in_rdata 
        = (IData)(((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__xbar_master_rsp_data)) 
                   >> (0x3fU & VL_SHIFTL_III(6,6,32, (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__3__KET____DOT__demux_xbar_i.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_q), 5U))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT____Vcellinp__cv32e20_i__instr_rdata_i 
        = (IData)(((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__xbar_master_rsp_data)) 
                   >> (0x3fU & VL_SHIFTL_III(6,6,32, (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__0__KET____DOT__demux_xbar_i.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_q), 5U))));
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q) {
        if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__xbar_master_rsp_rvalid) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_d 
                = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__master_xbar_req_req) 
                   & (IData)(vlSelfRef.__VdfgRegularize_h495687df_0_36));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__xbar_master_rsp_gnt 
                = vlSelfRef.__VdfgRegularize_h495687df_0_36;
        } else {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_d 
                = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__xbar_master_rsp_gnt = 0U;
        }
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_d 
            = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__master_xbar_req_req) 
               & (IData)(vlSelfRef.__VdfgRegularize_h495687df_0_35));
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__xbar_master_rsp_gnt 
            = vlSelfRef.__VdfgRegularize_h495687df_0_35;
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_fifo_i__DOT__obi_resp_fifo_i__DOT__mem_n 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_fifo_i__DOT__obi_resp_fifo_i__DOT__mem_q;
    if (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_fifo_i__DOT__fifo_resp_push) 
         & (1U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_fifo_i__DOT__obi_resp_fifo_i__DOT__status_cnt_q)))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_fifo_i__DOT__obi_resp_fifo_i__DOT__mem_n 
            = (((~ ((IData)(0xffffffffU) << (0x1fU 
                                             & VL_SHIFTL_III(5,32,32, (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_fifo_i__DOT__obi_resp_fifo_i__DOT__write_pointer_q), 5U)))) 
                & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_fifo_i__DOT__obi_resp_fifo_i__DOT__mem_n) 
               | (0xffffffffULL & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_fifo_i__DOT____Vcellinp__obi_resp_fifo_i__data_i 
                                   << (0x1fU & VL_SHIFTL_III(5,32,32, (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_fifo_i__DOT__obi_resp_fifo_i__DOT__write_pointer_q), 5U)))));
    }
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
    vlSelfRef.__VdfgRegularize_h495687df_0_17 = ((0xff00U 
                                                  & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT____Vcellinp__cv32e20_i__data_rdata_i 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                       >> 0x10U)));
    testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT____VdfgRegularize_h251a7f89_0_1 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_sign_ext__q) 
           & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__data_in_rdata 
              >> 0xfU));
    testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT____VdfgRegularize_h251a7f89_0_2 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_sign_ext__q) 
           & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__data_in_rdata 
              >> 0x1fU));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d__BRA__63__03a32__KET__ 
        = ((4U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
            ? vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[2U]
            : vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT____Vcellinp__cv32e20_i__instr_rdata_i);
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d__BRA__31__03a0__KET__ 
        = ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
            ? vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U]
            : vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT____Vcellinp__cv32e20_i__instr_rdata_i);
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
        = ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
            ? vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[0U]
            : vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT____Vcellinp__cv32e20_i__instr_rdata_i);
    vlSelfRef.__VdfgRegularize_h495687df_0_29 = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__xbar_slave_req_req) 
                                                 & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__xbar_master_rsp_gnt));
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__state_q) {
        if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__state_q) {
            if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__xbar_master_rsp_rvalid) {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__slave_xbar_rsp_gnt_outstanding 
                    = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__xbar_master_rsp_gnt;
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__state_n 
                    = vlSelfRef.__VdfgRegularize_h495687df_0_29;
            } else {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__slave_xbar_rsp_gnt_outstanding = 0U;
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__state_n 
                    = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__state_q;
            }
        } else {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__slave_xbar_rsp_gnt_outstanding 
                = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__xbar_master_rsp_gnt;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__state_n 
                = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__state_q;
        }
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__slave_xbar_rsp_gnt_outstanding 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__xbar_master_rsp_gnt;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__state_n 
            = ((IData)(vlSelfRef.__VdfgRegularize_h495687df_0_29) 
               | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__state_q));
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_rdata_ext 
        = ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_type_q))
            ? ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                ? ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                        ? (((- (IData)((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT____Vcellinp__cv32e20_i__data_rdata_i 
                                        >> 0x1fU))) 
                            << 8U) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT____Vcellinp__cv32e20_i__data_rdata_i 
                                      >> 0x18U)) : 
                       VL_SHIFTR_III(32,32,32, vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT____Vcellinp__cv32e20_i__data_rdata_i, 0x18U))
                    : ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                        ? (((- (IData)((1U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT____Vcellinp__cv32e20_i__data_rdata_i 
                                              >> 0x17U)))) 
                            << 8U) | (0xffU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT____Vcellinp__cv32e20_i__data_rdata_i 
                                               >> 0x10U)))
                        : (0xffU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT____Vcellinp__cv32e20_i__data_rdata_i 
                                    >> 0x10U)))) : 
               ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                 ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                     ? (((- (IData)((1U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT____Vcellinp__cv32e20_i__data_rdata_i 
                                           >> 0xfU)))) 
                         << 8U) | (0xffU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT____Vcellinp__cv32e20_i__data_rdata_i 
                                            >> 8U)))
                     : (0xffU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT____Vcellinp__cv32e20_i__data_rdata_i 
                                 >> 8U))) : ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                              ? (((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT____Vcellinp__cv32e20_i__data_rdata_i 
                                                                 >> 7U)))) 
                                                  << 8U) 
                                                 | (0xffU 
                                                    & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT____Vcellinp__cv32e20_i__data_rdata_i))
                                              : (0xffU 
                                                 & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT____Vcellinp__cv32e20_i__data_rdata_i))))
            : ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_type_q))
                ? ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                            ? (((- (IData)((1U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT____Vcellinp__cv32e20_i__data_rdata_i 
                                                  >> 7U)))) 
                                << 0x10U) | (IData)(vlSelfRef.__VdfgRegularize_h495687df_0_17))
                            : (IData)(vlSelfRef.__VdfgRegularize_h495687df_0_17))
                        : ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                            ? (((- (IData)((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT____Vcellinp__cv32e20_i__data_rdata_i 
                                            >> 0x1fU))) 
                                << 0x10U) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT____Vcellinp__cv32e20_i__data_rdata_i 
                                             >> 0x10U))
                            : VL_SHIFTR_III(32,32,32, vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT____Vcellinp__cv32e20_i__data_rdata_i, 0x10U)))
                    : ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                            ? (((- (IData)((1U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT____Vcellinp__cv32e20_i__data_rdata_i 
                                                  >> 0x17U)))) 
                                << 0x10U) | (0xffffU 
                                             & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT____Vcellinp__cv32e20_i__data_rdata_i 
                                                >> 8U)))
                            : (0xffffU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT____Vcellinp__cv32e20_i__data_rdata_i 
                                          >> 8U))) : 
                       ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                         ? (((- (IData)((1U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT____Vcellinp__cv32e20_i__data_rdata_i 
                                               >> 0xfU)))) 
                             << 0x10U) | (0xffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT____Vcellinp__cv32e20_i__data_rdata_i))
                         : (0xffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT____Vcellinp__cv32e20_i__data_rdata_i))))
                : ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT____Vcellinp__cv32e20_i__data_rdata_i 
                            << 8U) | (0xffU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__rdata_q 
                                               >> 0x10U)))
                        : ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT____Vcellinp__cv32e20_i__data_rdata_i 
                            << 0x10U) | (0xffffU & 
                                         (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__rdata_q 
                                          >> 8U))))
                    : ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT____Vcellinp__cv32e20_i__data_rdata_i 
                            << 0x18U) | vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__rdata_q)
                        : vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT____Vcellinp__cv32e20_i__data_rdata_i))));
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
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h108cb819_0_7) 
           & (3U != (3U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h108cb819_0_7) 
           & (3U != (3U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                           >> 0x10U))));
    if ((1U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q)) {
        if ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                = ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U] 
                    << 0x10U) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                 >> 0x10U));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_err 
                = (((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed)) 
                    & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__1__KET__)) 
                   | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__0__KET__));
        } else {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                = ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT____Vcellinp__cv32e20_i__instr_rdata_i 
                    << 0x10U) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                 >> 0x10U));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_err 
                = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err;
        }
        if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two = 1U;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_valid 
                = (1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid));
        } else {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two = 0U;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_valid 
                = (1U & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                          >> 1U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                    & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_valid))));
        }
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_err 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_valid 
            = (1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid));
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__slave_xbar_rsp_gnt_outstanding) 
            & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__xbar_slave_req_req))
            ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__0__KET__)
                ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx)
                : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
            : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__slave_xbar_rsp_gnt_outstanding) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__ 
        = ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__slave_xbar_rsp_gnt_outstanding));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__wb_i__DOT__rf_wdata_wb_mux[1U] 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_rdata_ext;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__rf_wdata_wb 
        = (((- (IData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__rf_we_id))) 
            & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__rf_wdata_id) 
           | ((- (IData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__rf_we_lsu))) 
              & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_rdata_ext));
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
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__illegal_c_insn = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_decompressed 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata;
    if ((2U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
        if ((1U & (~ vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata))) {
            if ((0x8000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((0x4000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((0x2000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                    if ((1U & (~ (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                  >> 0xdU)))) {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = (0x12023U | (((0xc000000U 
                                             & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                << 0x13U)) 
                                            | ((0x2000000U 
                                                & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0xdU)) 
                                               | (0x1f00000U 
                                                  & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 0x12U)))) 
                                           | (0xe00U 
                                              & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)));
                    }
                } else {
                    if ((0x2000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    } else if ((1U & (~ (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                         >> 0xcU)))) {
                        if ((0U == (0x1fU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             >> 2U)))) {
                            if ((0U == (0x1fU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 >> 7U)))) {
                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                            }
                        }
                    }
                    if ((1U & (~ (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                  >> 0xdU)))) {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = ((0x1000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)
                                ? ((0U != (0x1fU & 
                                           (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            >> 2U)))
                                    ? (0x33U | ((0x1f00000U 
                                                 & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                    << 0x12U)) 
                                                | ((0xf8000U 
                                                    & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                       << 8U)) 
                                                   | (0xf80U 
                                                      & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata))))
                                    : ((0U == (0x1fU 
                                               & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  >> 7U)))
                                        ? 0x100073U
                                        : (0xe7U | 
                                           (0xf8000U 
                                            & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 8U)))))
                                : ((0U != (0x1fU & 
                                           (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            >> 2U)))
                                    ? (0x33U | ((0x1f00000U 
                                                 & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                    << 0x12U)) 
                                                | (0xf80U 
                                                   & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)))
                                    : (0x67U | (0xf8000U 
                                                & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 8U)))));
                    }
                }
            } else if ((0x4000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((0x2000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                } else if ((0U == (0x1fU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            >> 7U)))) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
                if ((1U & (~ (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                              >> 0xdU)))) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x12003U | ((0xc000000U 
                                        & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                           << 0x18U)) 
                                       | ((0x2000000U 
                                           & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 0xdU)) 
                                          | ((0x1c00000U 
                                              & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 0x12U)) 
                                             | (0xf80U 
                                                & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)))));
                }
            } else {
                if ((0x2000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                } else if ((0x1000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
                if ((1U & (~ (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                              >> 0xdU)))) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x1013U | ((0x1f00000U & 
                                       (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                        << 0x12U)) 
                                      | ((0xf8000U 
                                          & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             << 8U)) 
                                         | (0xf80U 
                                            & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata))));
                }
            }
        }
    } else if ((1U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
        if ((0x8000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
            if ((1U & (~ (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                          >> 0xeU)))) {
                if ((1U & (~ (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                              >> 0xdU)))) {
                    if ((0x800U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        if ((0x400U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                            if ((0x1000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                            }
                        }
                    } else if ((0x1000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                }
            }
            if ((0x4000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x40063U | (((- (IData)((1U 
                                                & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   >> 0xcU)))) 
                                    << 0x1cU) | ((0xc000000U 
                                                  & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 0x15U)) 
                                                 | ((0x2000000U 
                                                     & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                        << 0x17U)) 
                                                    | ((0x38000U 
                                                        & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                           << 8U)) 
                                                       | (((0x1000U 
                                                            & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                               >> 1U)) 
                                                           | (0xc00U 
                                                              & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) 
                                                          | ((0x300U 
                                                              & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                 << 5U)) 
                                                             | (0x80U 
                                                                & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                   >> 5U)))))))));
            } else if ((0x2000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x6fU | (((((0x80000000U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x13U)) 
                                   | (0x40000000U & 
                                      (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                       << 0x16U))) 
                                  | ((0x30000000U & 
                                      (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                       << 0x13U)) | 
                                     ((0x8000000U & 
                                       (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                        << 0x15U)) 
                                      | (0x4000000U 
                                         & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0x13U))))) 
                                 | ((0x2000000U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x17U)) 
                                    | ((0x1000000U 
                                        & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                           << 0xdU)) 
                                       | (0xe00000U 
                                          & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             << 0x12U))))) 
                                | ((0x1ff000U & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                >> 0xcU)))) 
                                                 << 0xcU)) 
                                   | (0x80U & ((~ (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   >> 0xfU)) 
                                               << 7U)))));
            } else if ((0x800U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((0x400U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((1U & (~ (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                  >> 0xcU)))) {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = ((0x40U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)
                                ? ((0x20U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)
                                    ? (0x847433U | 
                                       ((0x700000U 
                                         & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0x12U)) 
                                        | ((0x38000U 
                                            & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 8U)) 
                                           | (0x380U 
                                              & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata))))
                                    : (0x846433U | 
                                       ((0x700000U 
                                         & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0x12U)) 
                                        | ((0x38000U 
                                            & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 8U)) 
                                           | (0x380U 
                                              & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)))))
                                : ((0x20U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)
                                    ? (0x844433U | 
                                       ((0x700000U 
                                         & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0x12U)) 
                                        | ((0x38000U 
                                            & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 8U)) 
                                           | (0x380U 
                                              & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata))))
                                    : (0x40840433U 
                                       | ((0x700000U 
                                           & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 0x12U)) 
                                          | ((0x38000U 
                                              & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 8U)) 
                                             | (0x380U 
                                                & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata))))));
                    }
                } else {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x47413U | (((((- (IData)(
                                                     (1U 
                                                      & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                         >> 0xcU)))) 
                                          << 0x1aU) 
                                         | (0x2000000U 
                                            & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0xdU))) 
                                        | (0x1f00000U 
                                           & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 0x12U))) 
                                       | ((0x38000U 
                                           & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 8U)) 
                                          | (0x380U 
                                             & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata))));
                }
            } else {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x45413U | ((0x40000000U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x14U)) 
                                   | (((0x1f00000U 
                                        & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                           << 0x12U)) 
                                       | (0x38000U 
                                          & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             << 8U))) 
                                      | (0x380U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata))));
            }
        } else if ((0x4000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
            if ((0x2000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((0U == ((0x20U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                      >> 7U)) | (0x1fU 
                                                 & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                    >> 2U))))) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x37U | (((- (IData)((1U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   >> 0xcU)))) 
                                 << 0x11U) | ((0x1f000U 
                                               & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0xaU)) 
                                              | (0xf80U 
                                                 & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata))));
                if ((2U == (0x1fU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                     >> 7U)))) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x10113U | (((- (IData)(
                                                   (1U 
                                                    & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                       >> 0xcU)))) 
                                        << 0x1dU) | 
                                       (((0x18000000U 
                                          & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             << 0x18U)) 
                                         | (0x4000000U 
                                            & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0x15U))) 
                                        | ((0x2000000U 
                                            & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0x17U)) 
                                           | (0x1000000U 
                                              & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 0x12U))))));
                }
            } else {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x13U | (((- (IData)((1U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   >> 0xcU)))) 
                                 << 0x1aU) | ((0x2000000U 
                                               & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0xdU)) 
                                              | ((0x1f00000U 
                                                  & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 0x12U)) 
                                                 | (0xf80U 
                                                    & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)))));
            }
        } else {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_decompressed 
                = ((0x2000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)
                    ? (0x6fU | (((((0x80000000U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x13U)) 
                                   | (0x40000000U & 
                                      (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                       << 0x16U))) 
                                  | ((0x30000000U & 
                                      (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                       << 0x13U)) | 
                                     ((0x8000000U & 
                                       (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                        << 0x15U)) 
                                      | (0x4000000U 
                                         & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0x13U))))) 
                                 | ((0x2000000U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x17U)) 
                                    | ((0x1000000U 
                                        & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                           << 0xdU)) 
                                       | (0xe00000U 
                                          & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             << 0x12U))))) 
                                | ((0x1ff000U & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                >> 0xcU)))) 
                                                 << 0xcU)) 
                                   | (0x80U & ((~ (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   >> 0xfU)) 
                                               << 7U)))))
                    : (0x13U | ((((- (IData)((1U & 
                                              (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               >> 0xcU)))) 
                                  << 0x1aU) | ((0x2000000U 
                                                & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0xdU)) 
                                               | (0x1f00000U 
                                                  & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 0x12U)))) 
                                | ((0xf8000U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                << 8U)) 
                                   | (0xf80U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)))));
        }
    } else if ((0x8000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
        if ((0x4000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
            if ((0x2000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            }
            if ((1U & (~ (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                          >> 0xdU)))) {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x842023U | ((((0x4000000U & 
                                       (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                        << 0x15U)) 
                                      | (0x2000000U 
                                         & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0xdU))) 
                                     | (0x700000U & 
                                        (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                         << 0x12U))) 
                                    | ((0x38000U & 
                                        (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                         << 8U)) | 
                                       ((0xc00U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata) 
                                        | (0x200U & 
                                           (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 3U))))));
            }
        } else {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
        }
    } else if ((0x4000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
        if ((0x2000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
        }
        if ((1U & (~ (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                      >> 0xdU)))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_decompressed 
                = (0x42403U | ((0x4000000U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 0x15U)) 
                               | ((0x3800000U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 0xdU)) 
                                  | ((0x400000U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x10U)) 
                                     | ((0x38000U & 
                                         (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                          << 8U)) | 
                                        (0x380U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 5U)))))));
        }
    } else {
        if ((0x2000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
        } else if ((0U == (0xffU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                    >> 5U)))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
        }
        if ((1U & (~ (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                      >> 0xdU)))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_decompressed 
                = (0x10413U | ((0x3c000000U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0x13U)) 
                               | ((0x3000000U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 0xdU)) 
                                  | ((0x800000U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x12U)) 
                                     | ((0x400000U 
                                         & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0x10U)) 
                                        | (0x380U & 
                                           (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 5U)))))));
        }
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__ 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__2__KET__));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__ 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__ 
        = ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_d 
        = (0x7fffffffU & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__pc_set)
                           ? (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_addr_n 
                              >> 1U) : (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                        + ((2U & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                  << 1U)) 
                                           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_new_id_d 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_valid) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_ready));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h108cb819_0_9 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_ready) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_valid));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__gnt_o 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
           & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
              & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__gnt_o 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
           & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
              & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__gnt_o 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
           & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
              & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__gnt_o 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
           & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
              & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__ma_gnt__BRA__0__KET__ 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
           & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
              & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__ma_req__BRA__0__KET__)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__gnt_o 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
           & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
              & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_valid_id_d 
        = (((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__pc_set)) 
            & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_new_id_d)) 
           | ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__instr_valid_clear)) 
              & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_valid_id_q)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h108cb819_0_9) 
           & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed)) 
              | vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_9 = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__5__KET____DOT__demux_xbar_i.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__gnt_o));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_10 = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__4__KET____DOT__demux_xbar_i.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                 & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__gnt_o));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_12 = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__2__KET____DOT__demux_xbar_i.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                 & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__gnt_o));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_11 = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__3__KET____DOT__demux_xbar_i.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                 & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__gnt_o));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_14 = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__0__KET____DOT__demux_xbar_i.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                 & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__ma_gnt__BRA__0__KET__));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_23 = (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__ma_gnt__BRA__0__KET__)) 
                                                  << 0x21U) 
                                                 | (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__vld_o)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__xbar_master_rsp_data))));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_13 = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__1__KET____DOT__demux_xbar_i.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                 & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__gnt_o));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__2__KET__ 
        = ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__2__KET__));
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__1__KET__ 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__2__KET__;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__0__KET__ 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__1__KET__;
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__1__KET__ 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__1__KET__;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__0__KET__ 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__0__KET__;
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__1__KET__ 
        = (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__2__KET__) 
            & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
           | ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
              & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h108cb819_0_3)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__0__KET__ 
        = (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__1__KET__) 
            & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
           | ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
              & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h108cb819_0_11)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_d 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q)
            ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__vld_o)
                ? ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__5__KET____DOT__demux_xbar_i.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                   & (IData)(vlSelfRef.__VdfgRegularize_h16038c0c_0_9))
                : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q))
            : (IData)(vlSelfRef.__VdfgRegularize_h16038c0c_0_9));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_d 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q)
            ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__vld_o)
                ? ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__4__KET____DOT__demux_xbar_i.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                   & (IData)(vlSelfRef.__VdfgRegularize_h16038c0c_0_10))
                : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q))
            : (IData)(vlSelfRef.__VdfgRegularize_h16038c0c_0_10));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_d 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q)
            ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__vld_o)
                ? ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__2__KET____DOT__demux_xbar_i.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                   & (IData)(vlSelfRef.__VdfgRegularize_h16038c0c_0_12))
                : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q))
            : (IData)(vlSelfRef.__VdfgRegularize_h16038c0c_0_12));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_d 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q)
            ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__vld_o)
                ? ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__3__KET____DOT__demux_xbar_i.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                   & (IData)(vlSelfRef.__VdfgRegularize_h16038c0c_0_11))
                : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q))
            : (IData)(vlSelfRef.__VdfgRegularize_h16038c0c_0_11));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_d 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q)
            ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__vld_o)
                ? ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__0__KET____DOT__demux_xbar_i.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                   & (IData)(vlSelfRef.__VdfgRegularize_h16038c0c_0_14))
                : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q))
            : (IData)(vlSelfRef.__VdfgRegularize_h16038c0c_0_14));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_24[0U] = (IData)(vlSelfRef.__VdfgRegularize_h16038c0c_0_23);
    vlSelfRef.__VdfgRegularize_h16038c0c_0_24[1U] = 
        ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__xbar_master_rsp_data 
          << 2U) | (IData)((vlSelfRef.__VdfgRegularize_h16038c0c_0_23 
                            >> 0x20U)));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_24[2U] = 
        ((0xfffffffcU & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__gnt_o) 
                          << 3U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__vld_o) 
                                    << 2U))) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_one_to_n_i__DOT__xbar_master_rsp_data 
                                                >> 0x1eU));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_d 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q)
            ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__vld_o)
                ? ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__1__KET____DOT__demux_xbar_i.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                   & (IData)(vlSelfRef.__VdfgRegularize_h16038c0c_0_13))
                : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q))
            : (IData)(vlSelfRef.__VdfgRegularize_h16038c0c_0_13));
}
