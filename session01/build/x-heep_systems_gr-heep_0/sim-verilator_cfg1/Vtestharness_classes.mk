# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtestharness.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace-fst/--trace-saif/--trace-vcd)
VM_TRACE = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 1
# Tracing output mode in SAIF format?  0/1 (from --trace-saif)
VM_TRACE_SAIF = 0
# Tracing output mode in VCD format?  0/1 (from --trace-vcd)
VM_TRACE_VCD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
  Vtestharness \
  Vtestharness__Dpi_Export__0 \
  Vtestharness___024root__DepSet_hbc650c6c__0 \
  Vtestharness___024root__DepSet_hbc650c6c__1 \
  Vtestharness___024root__DepSet_hbc650c6c__2 \
  Vtestharness___024root__DepSet_hbc650c6c__3 \
  Vtestharness___024root__DepSet_hbc650c6c__4 \
  Vtestharness___024root__DepSet_hbc650c6c__5 \
  Vtestharness___024root__DepSet_h3e9cff1f__0 \
  Vtestharness___024root__DepSet_h3e9cff1f__1 \
  Vtestharness___024unit__DepSet_h888bae81__0 \
  Vtestharness_rv_timer__DepSet_h6374d5ec__0 \
  Vtestharness_sram_wrapper__N2000__DepSet_h48daf197__0 \
  Vtestharness_gpio__Tz2_TBz3__DepSet_h6fda383a__0 \
  Vtestharness_gpio__Tz2_TBz3__DepSet_h6fda383a__1 \
  Vtestharness_gpio__Tz2_TBz3__DepSet_h0d31caf1__0 \
  Vtestharness_power_manager_sequence__DepSet_h5bd7df24__0 \
  Vtestharness_if_xif__X3__DepSet_hdabb79e4__0 \
  Vtestharness_xbar_varlat_one_to_n__X2_N1__DepSet_h4a382cec__0 \
  Vtestharness_spi_host__Tz2_TBz3__DepSet_he0aec498__0 \
  Vtestharness_spi_host__Tz2_TBz3__DepSet_he0aec498__1 \
  Vtestharness_spi_host__Tz2_TBz3__DepSet_h9a653753__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
  Vtestharness__ConstPool_0 \
  Vtestharness___024root__Slow \
  Vtestharness___024root__DepSet_hbc650c6c__0__Slow \
  Vtestharness___024root__DepSet_hbc650c6c__1__Slow \
  Vtestharness___024root__DepSet_hbc650c6c__2__Slow \
  Vtestharness___024root__DepSet_h3e9cff1f__0__Slow \
  Vtestharness_spi_device_reg_pkg__Slow \
  Vtestharness_spi_device_reg_pkg__DepSet_hbc5eba7a__0__Slow \
  Vtestharness___024unit__Slow \
  Vtestharness___024unit__DepSet_h32825d4c__0__Slow \
  Vtestharness_pdm2pcm_reg_pkg__Slow \
  Vtestharness_pdm2pcm_reg_pkg__DepSet_h6aaa2a6b__0__Slow \
  Vtestharness_pad_control_reg_pkg__Slow \
  Vtestharness_pad_control_reg_pkg__DepSet_hdd7f71bd__0__Slow \
  Vtestharness_serial_link_reg_pkg__Slow \
  Vtestharness_serial_link_reg_pkg__DepSet_h807a9ea8__0__Slow \
  Vtestharness_serial_link_single_channel_reg_pkg__Slow \
  Vtestharness_serial_link_single_channel_reg_pkg__DepSet_h7427c35c__0__Slow \
  Vtestharness_rv_timer__Slow \
  Vtestharness_rv_timer__DepSet_h6374d5ec__0__Slow \
  Vtestharness_rv_timer__DepSet_h198b269f__0__Slow \
  Vtestharness_sram_wrapper__N2000__Slow \
  Vtestharness_sram_wrapper__N2000__DepSet_hf2310256__0__Slow \
  Vtestharness_gpio__Tz2_TBz3__Slow \
  Vtestharness_gpio__Tz2_TBz3__DepSet_h6fda383a__0__Slow \
  Vtestharness_gpio__Tz2_TBz3__DepSet_h6fda383a__1__Slow \
  Vtestharness_gpio__Tz2_TBz3__DepSet_h0d31caf1__0__Slow \
  Vtestharness_power_manager_sequence__Slow \
  Vtestharness_power_manager_sequence__DepSet_h5bd7df24__0__Slow \
  Vtestharness_power_manager_sequence__DepSet_he12e2be7__0__Slow \
  Vtestharness_if_xif__X3__Slow \
  Vtestharness_if_xif__X3__DepSet_hdabb79e4__0__Slow \
  Vtestharness_xbar_varlat_one_to_n__X2_N1__Slow \
  Vtestharness_xbar_varlat_one_to_n__X2_N1__DepSet_hf0cfdf9f__0__Slow \
  Vtestharness_spi_host__Tz2_TBz3__Slow \
  Vtestharness_spi_host__Tz2_TBz3__DepSet_he0aec498__0__Slow \
  Vtestharness_spi_host__Tz2_TBz3__DepSet_h9a653753__0__Slow \
  Vtestharness_core_v_mini_mcu_pkg__Slow \
  Vtestharness_core_v_mini_mcu_pkg__DepSet_h98409c7a__0__Slow \
  Vtestharness_power_manager_reg_pkg__Slow \
  Vtestharness_power_manager_reg_pkg__DepSet_h59077e7b__0__Slow \
  Vtestharness_gpio_reg_pkg__Slow \
  Vtestharness_gpio_reg_pkg__DepSet_h8b70e517__0__Slow \
  Vtestharness_i2s_reg_pkg__Slow \
  Vtestharness_i2s_reg_pkg__DepSet_h2eb87c6e__0__Slow \
  Vtestharness_soc_ctrl_reg_pkg__Slow \
  Vtestharness_soc_ctrl_reg_pkg__DepSet_h437967fd__0__Slow \
  Vtestharness_fast_intr_ctrl_reg_pkg__Slow \
  Vtestharness_fast_intr_ctrl_reg_pkg__DepSet_h01c7c882__0__Slow \
  Vtestharness_i2c_reg_pkg__Slow \
  Vtestharness_i2c_reg_pkg__DepSet_h5332563b__0__Slow \
  Vtestharness_rv_plic_reg_pkg__Slow \
  Vtestharness_rv_plic_reg_pkg__DepSet_h9cc439d0__0__Slow \
  Vtestharness_rv_timer_reg_pkg__Slow \
  Vtestharness_rv_timer_reg_pkg__DepSet_hf27e4955__0__Slow \
  Vtestharness_uart_reg_pkg__Slow \
  Vtestharness_uart_reg_pkg__DepSet_ha8d6cd93__0__Slow \
  Vtestharness_obi_spimemio_reg_pkg__Slow \
  Vtestharness_obi_spimemio_reg_pkg__DepSet_h3b2613ee__0__Slow \
  Vtestharness_spi_host_reg_pkg__Slow \
  Vtestharness_spi_host_reg_pkg__DepSet_h5a6c44f6__0__Slow \
  Vtestharness_w25q128jw_controller_reg_pkg__Slow \
  Vtestharness_w25q128jw_controller_reg_pkg__DepSet_h0d24051a__0__Slow \
  Vtestharness_dma_reg_pkg__Slow \
  Vtestharness_dma_reg_pkg__DepSet_h89f9c3a6__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
  Vtestharness__Dpi \
  Vtestharness__Trace__0 \
  Vtestharness__Trace__1 \
  Vtestharness__Trace__2 \
  Vtestharness__Trace__3 \
  Vtestharness__Trace__4 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
  Vtestharness__Syms \
  Vtestharness__Trace__0__Slow \
  Vtestharness__TraceDecls__0__Slow \
  Vtestharness__Trace__1__Slow \
  Vtestharness__Trace__2__Slow \
  Vtestharness__Trace__3__Slow \
  Vtestharness__Trace__4__Slow \
  Vtestharness__Trace__5__Slow \
  Vtestharness__Trace__6__Slow \
  Vtestharness__Trace__7__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
  verilated \
  verilated_dpi \
  verilated_fst_c \
  verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \

# Verilated -*- Makefile -*-
