// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness__Syms.h"
#include "Vtestharness_xbar_varlat_one_to_n__X2_N1.h"

VL_ATTR_COLD void Vtestharness_xbar_varlat_one_to_n__X2_N1___stl_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__4__KET____DOT__demux_xbar_i__0(Vtestharness_xbar_varlat_one_to_n__X2_N1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_xbar_varlat_one_to_n__X2_N1___stl_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__4__KET____DOT__demux_xbar_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d 
        = ((0xf0000000U <= vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____Vcellinp__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__4__KET____DOT__addr_decode_i__addr_i) 
           & (0xf1000000U > vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____Vcellinp__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__4__KET____DOT__addr_decode_i__addr_i));
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
}
