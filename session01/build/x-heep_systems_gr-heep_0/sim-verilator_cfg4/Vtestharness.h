// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VTESTHARNESS_H_
#define VERILATED_VTESTHARNESS_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class Vtestharness__Syms;
class Vtestharness___024root;
class VerilatedFstC;
class Vtestharness___024unit;
class Vtestharness_core_v_mini_mcu_pkg;
class Vtestharness_dma_reg_pkg;
class Vtestharness_fast_intr_ctrl_reg_pkg;
class Vtestharness_gpio__Tz2_TBz3;
class Vtestharness_gpio_reg_pkg;
class Vtestharness_i2c_reg_pkg;
class Vtestharness_i2s_reg_pkg;
class Vtestharness_if_xif__X3;
class Vtestharness_obi_spimemio_reg_pkg;
class Vtestharness_pad_control_reg_pkg;
class Vtestharness_pdm2pcm_reg_pkg;
class Vtestharness_power_manager_reg_pkg;
class Vtestharness_power_manager_sequence;
class Vtestharness_rr_arb_tree__N6_D45_Ez38;
class Vtestharness_rv_plic_reg_pkg;
class Vtestharness_rv_timer;
class Vtestharness_rv_timer_reg_pkg;
class Vtestharness_serial_link_reg_pkg;
class Vtestharness_serial_link_single_channel_reg_pkg;
class Vtestharness_soc_ctrl_reg_pkg;
class Vtestharness_spi_device_reg_pkg;
class Vtestharness_spi_host__Tz2_TBz3;
class Vtestharness_spi_host_reg_pkg;
class Vtestharness_sram_wrapper__N2000;
class Vtestharness_uart_reg_pkg;
class Vtestharness_w25q128jw_controller_reg_pkg;
class Vtestharness_xbar_varlat_one_to_n__X2_N1;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vtestharness VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vtestharness__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = true;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk_i,0,0);
    VL_IN8(&rst_ni,0,0);
    VL_IN8(&boot_select_i,0,0);
    VL_IN8(&execute_from_flash_i,0,0);
    VL_OUT8(&exit_valid_o,0,0);
    VL_IN8(&jtag_tck_i,0,0);
    VL_IN8(&jtag_tms_i,0,0);
    VL_IN8(&jtag_trst_ni,0,0);
    VL_IN8(&jtag_tdi_i,0,0);
    VL_OUT8(&jtag_tdo_o,0,0);
    VL_OUT(&exit_value_o,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vtestharness_spi_device_reg_pkg* const __PVT__spi_device_reg_pkg;
    Vtestharness___024unit* const __PVT____024unit;
    Vtestharness_pdm2pcm_reg_pkg* const __PVT__pdm2pcm_reg_pkg;
    Vtestharness_pad_control_reg_pkg* const __PVT__pad_control_reg_pkg;
    Vtestharness_serial_link_reg_pkg* const __PVT__serial_link_reg_pkg;
    Vtestharness_serial_link_single_channel_reg_pkg* const __PVT__serial_link_single_channel_reg_pkg;
    Vtestharness_core_v_mini_mcu_pkg* const __PVT__core_v_mini_mcu_pkg;
    Vtestharness_power_manager_reg_pkg* const __PVT__power_manager_reg_pkg;
    Vtestharness_gpio_reg_pkg* const __PVT__gpio_reg_pkg;
    Vtestharness_i2s_reg_pkg* const __PVT__i2s_reg_pkg;
    Vtestharness_soc_ctrl_reg_pkg* const __PVT__soc_ctrl_reg_pkg;
    Vtestharness_fast_intr_ctrl_reg_pkg* const __PVT__fast_intr_ctrl_reg_pkg;
    Vtestharness_i2c_reg_pkg* const __PVT__i2c_reg_pkg;
    Vtestharness_rv_plic_reg_pkg* const __PVT__rv_plic_reg_pkg;
    Vtestharness_rv_timer_reg_pkg* const __PVT__rv_timer_reg_pkg;
    Vtestharness_uart_reg_pkg* const __PVT__uart_reg_pkg;
    Vtestharness_obi_spimemio_reg_pkg* const __PVT__obi_spimemio_reg_pkg;
    Vtestharness_spi_host_reg_pkg* const __PVT__spi_host_reg_pkg;
    Vtestharness_w25q128jw_controller_reg_pkg* const __PVT__w25q128jw_controller_reg_pkg;
    Vtestharness_dma_reg_pkg* const __PVT__dma_reg_pkg;
    Vtestharness_if_xif__X3* const __PVT__testharness__DOT__gr_heep_i__DOT__ext_xif;
    Vtestharness_xbar_varlat_one_to_n__X2_N1* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__0__KET____DOT__demux_xbar_i;
    Vtestharness_xbar_varlat_one_to_n__X2_N1* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__1__KET____DOT__demux_xbar_i;
    Vtestharness_xbar_varlat_one_to_n__X2_N1* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__2__KET____DOT__demux_xbar_i;
    Vtestharness_xbar_varlat_one_to_n__X2_N1* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__3__KET____DOT__demux_xbar_i;
    Vtestharness_xbar_varlat_one_to_n__X2_N1* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__4__KET____DOT__demux_xbar_i;
    Vtestharness_xbar_varlat_one_to_n__X2_N1* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__5__KET____DOT__demux_xbar_i;
    Vtestharness_rr_arb_tree__N6_D45_Ez38* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree;
    Vtestharness_rr_arb_tree__N6_D45_Ez38* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__1__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree;
    Vtestharness_rr_arb_tree__N6_D45_Ez38* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__2__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree;
    Vtestharness_rr_arb_tree__N6_D45_Ez38* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__3__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree;
    Vtestharness_rr_arb_tree__N6_D45_Ez38* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__4__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree;
    Vtestharness_rr_arb_tree__N6_D45_Ez38* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__5__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree;
    Vtestharness_rr_arb_tree__N6_D45_Ez38* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__6__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree;
    Vtestharness_rr_arb_tree__N6_D45_Ez38* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__7__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree;
    Vtestharness_rr_arb_tree__N6_D45_Ez38* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__8__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree;
    Vtestharness_rr_arb_tree__N6_D45_Ez38* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__9__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree;
    Vtestharness_rr_arb_tree__N6_D45_Ez38* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__10__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree;
    Vtestharness_rr_arb_tree__N6_D45_Ez38* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__11__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree;
    Vtestharness_rr_arb_tree__N6_D45_Ez38* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__12__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree;
    Vtestharness_rr_arb_tree__N6_D45_Ez38* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__13__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree;
    Vtestharness_rr_arb_tree__N6_D45_Ez38* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__14__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree;
    Vtestharness_sram_wrapper__N2000* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i;
    Vtestharness_sram_wrapper__N2000* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i;
    Vtestharness_sram_wrapper__N2000* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram2_i;
    Vtestharness_sram_wrapper__N2000* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram3_i;
    Vtestharness_sram_wrapper__N2000* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram4_i;
    Vtestharness_sram_wrapper__N2000* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram5_i;
    Vtestharness_sram_wrapper__N2000* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram6_i;
    Vtestharness_sram_wrapper__N2000* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram7_i;
    Vtestharness_sram_wrapper__N2000* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram8_i;
    Vtestharness_sram_wrapper__N2000* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram9_i;
    Vtestharness_rv_timer* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__rv_timer_0_1_i;
    Vtestharness_gpio__Tz2_TBz3* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i;
    Vtestharness_spi_host__Tz2_TBz3* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i;
    Vtestharness_power_manager_sequence* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_periph_switch_i;
    Vtestharness_power_manager_sequence* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_periph_iso_i;
    Vtestharness_power_manager_sequence* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_0_switch_i;
    Vtestharness_power_manager_sequence* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_0_iso_i;
    Vtestharness_power_manager_sequence* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_0_retentive_i;
    Vtestharness_power_manager_sequence* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_1_switch_i;
    Vtestharness_power_manager_sequence* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_1_iso_i;
    Vtestharness_power_manager_sequence* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_1_retentive_i;
    Vtestharness_power_manager_sequence* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_2_switch_i;
    Vtestharness_power_manager_sequence* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_2_iso_i;
    Vtestharness_power_manager_sequence* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_2_retentive_i;
    Vtestharness_power_manager_sequence* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_3_switch_i;
    Vtestharness_power_manager_sequence* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_3_iso_i;
    Vtestharness_power_manager_sequence* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_3_retentive_i;
    Vtestharness_power_manager_sequence* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_4_switch_i;
    Vtestharness_power_manager_sequence* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_4_iso_i;
    Vtestharness_power_manager_sequence* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_4_retentive_i;
    Vtestharness_power_manager_sequence* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_5_switch_i;
    Vtestharness_power_manager_sequence* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_5_iso_i;
    Vtestharness_power_manager_sequence* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_5_retentive_i;
    Vtestharness_power_manager_sequence* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_6_switch_i;
    Vtestharness_power_manager_sequence* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_6_iso_i;
    Vtestharness_power_manager_sequence* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_6_retentive_i;
    Vtestharness_power_manager_sequence* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_7_switch_i;
    Vtestharness_power_manager_sequence* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_7_iso_i;
    Vtestharness_power_manager_sequence* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_7_retentive_i;
    Vtestharness_power_manager_sequence* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_8_switch_i;
    Vtestharness_power_manager_sequence* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_8_iso_i;
    Vtestharness_power_manager_sequence* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_8_retentive_i;
    Vtestharness_power_manager_sequence* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_9_switch_i;
    Vtestharness_power_manager_sequence* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_9_iso_i;
    Vtestharness_power_manager_sequence* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_9_retentive_i;
    Vtestharness_spi_host__Tz2_TBz3* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i;
    Vtestharness_gpio__Tz2_TBz3* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i;
    Vtestharness_rv_timer* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_timer_2_3_i;
    Vtestharness_spi_host__Tz2_TBz3* const __PVT__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vtestharness___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vtestharness(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vtestharness(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vtestharness();
  private:
    VL_UNCOPYABLE(Vtestharness);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    /// DPI Export functions
    static void load_flash_hex(const char* firmware_file);
    static void tb_getMemSize(int* mem_size);
    static void tb_loadHEX(const char* file);
    static void tb_readHEX(const char* file, svLogicVecVal* stimuli);
    static void tb_set_exit_loop();
    static void tb_writetoSram0(int addr, const svLogicVecVal* val3, const svLogicVecVal* val2, const svLogicVecVal* val1, const svLogicVecVal* val0);
    static void tb_writetoSram1(int addr, const svLogicVecVal* val3, const svLogicVecVal* val2, const svLogicVecVal* val1, const svLogicVecVal* val0);
    static void tb_writetoSram2(int addr, const svLogicVecVal* val3, const svLogicVecVal* val2, const svLogicVecVal* val1, const svLogicVecVal* val0);
    static void tb_writetoSram3(int addr, const svLogicVecVal* val3, const svLogicVecVal* val2, const svLogicVecVal* val1, const svLogicVecVal* val0);
    static void tb_writetoSram4(int addr, const svLogicVecVal* val3, const svLogicVecVal* val2, const svLogicVecVal* val1, const svLogicVecVal* val0);
    static void tb_writetoSram5(int addr, const svLogicVecVal* val3, const svLogicVecVal* val2, const svLogicVecVal* val1, const svLogicVecVal* val0);
    static void tb_writetoSram6(int addr, const svLogicVecVal* val3, const svLogicVecVal* val2, const svLogicVecVal* val1, const svLogicVecVal* val0);
    static void tb_writetoSram7(int addr, const svLogicVecVal* val3, const svLogicVecVal* val2, const svLogicVecVal* val1, const svLogicVecVal* val0);
    static void tb_writetoSram8(int addr, const svLogicVecVal* val3, const svLogicVecVal* val2, const svLogicVecVal* val1, const svLogicVecVal* val0);
    static void tb_writetoSram9(int addr, const svLogicVecVal* val3, const svLogicVecVal* val2, const svLogicVecVal* val1, const svLogicVecVal* val0);

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
