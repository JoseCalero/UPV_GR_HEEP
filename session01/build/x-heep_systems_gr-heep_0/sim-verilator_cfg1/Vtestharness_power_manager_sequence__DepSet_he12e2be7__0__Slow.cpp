// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness_power_manager_sequence.h"

VL_ATTR_COLD void Vtestharness_power_manager_sequence___ctor_var_reset(Vtestharness_power_manager_sequence* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_power_manager_sequence___ctor_var_reset\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3161515032326629241ull);
    vlSelf->start_off_sequence_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4394072827080579571ull);
    vlSelf->start_on_sequence_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 204906613021589670ull);
    vlSelf->switch_ack_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13299985987145256101ull);
    vlSelf->switch_onoff_signal_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9066758624901129085ull);
    vlSelf->__PVT__sequence_curr_state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18223563050509454805ull);
    vlSelf->__PVT__sequence_next_state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7362910284401941235ull);
    vlSelf->__PVT__switch_onoff_signal_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10803825739054077045ull);
    vlSelf->__PVT__switch_onoff_signal_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16146598841607593598ull);
}
