// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness__Syms.h"
#include "Vtestharness___024root.h"

extern const VlUnpacked<CData/*2:0*/, 128> Vtestharness__ConstPool__TABLE_h9e9d1c20_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtestharness__ConstPool__TABLE_h482f8380_0;

VL_ATTR_COLD void Vtestharness___024root___stl_sequent__TOP__3(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___stl_sequent__TOP__3\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx28;
    __Vtableidx28 = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<6>/*191:0*/ __Vtemp_10;
    VlWide<9>/*287:0*/ __Vtemp_11;
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_global_trigger_slots 
        = ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT__status_rx_data_ready_qs) 
             << 4U) | ((((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT____Vcellout__u_use_spimemio__q)) 
                         & (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.tx_ready_o)) 
                        << 3U) | (((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT____Vcellout__u_use_spimemio__q)) 
                                   & (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.rx_valid_o)) 
                                  << 2U))) | (((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.tx_ready_o) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.rx_valid_o)));
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
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__ungated_output_clock 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__clk_div_bypass_en_q)
            ? (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.clk_i)
            : ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__use_odd_division_q)
                ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__t_ff1_q) 
                   ^ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__t_ff2_q))
                : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__t_ff1_q)));
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
    __Vtableidx28 = ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_periph_reset__q) 
                       << 6U) | (0x20U & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_periph_reset__q)) 
                                          << 5U))) 
                     | (((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_periph_iso_i.switch_ack_i) 
                         << 4U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_periph_reset_i__DOT__switch_onoff_signal_q) 
                                    << 3U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_periph_reset_i__DOT__sequence_curr_state))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_periph_reset_i__DOT__sequence_next_state 
        = Vtestharness__ConstPool__TABLE_h9e9d1c20_0
        [__Vtableidx28];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_periph_reset_i__DOT__switch_onoff_signal_d 
        = Vtestharness__ConstPool__TABLE_h482f8380_0
        [__Vtableidx28];
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
    if ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__ungated_output_clock)))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__i_clk_gate__DOT__clk_en 
            = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__gate_en_q) 
               & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT____Vcellout__u_control_en__q));
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__periph_to_reg_i__DOT__r_valid_d 
        = (IData)(((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__peripheral_req[2U] 
                    >> 5U) & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__peripheral_rsp 
                              >> 0x20U)));
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
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__sck 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__i_clk_gate__DOT__clk_en) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__ungated_output_clock));
    vlSelfRef.__VdfgRegularize_h495687df_0_200 = ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__periph_to_reg_i__DOT__r_valid_d)) 
                                                  & (0U 
                                                     != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__status_cnt_q)));
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
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__consumer_state_n 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__consumer_state_q)
            ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__consumer_state_q)
                ? ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__periph_to_reg_i__DOT__r_valid_d)) 
                   & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__consumer_state_q))
                : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__consumer_state_q))
            : ((IData)(vlSelfRef.__VdfgRegularize_h495687df_0_200) 
               | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__consumer_state_q)));
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
