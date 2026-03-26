// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness_if_xif__X3.h"

VL_ATTR_COLD void Vtestharness_if_xif__X3___eval_initial__TOP__testharness__DOT__gr_heep_i__DOT__ext_xif(Vtestharness_if_xif__X3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_if_xif__X3___eval_initial__TOP__testharness__DOT__gr_heep_i__DOT__ext_xif\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.issue_req[0U] = (0xfffffe00U & vlSelfRef.issue_req[0U]);
    vlSelfRef.issue_req[0U] = (0x3ffU & vlSelfRef.issue_req[0U]);
    vlSelfRef.issue_req[1U] = 0U;
    vlSelfRef.issue_req[2U] = (0xfffffc00U & vlSelfRef.issue_req[2U]);
    vlSelfRef.issue_req[3U] = (0x3ffU & vlSelfRef.issue_req[3U]);
    vlSelfRef.issue_req[4U] = 0U;
}

VL_ATTR_COLD void Vtestharness_if_xif__X3___ctor_var_reset(Vtestharness_if_xif__X3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_if_xif__X3___ctor_var_reset\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__compressed_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7737360208450486583ull);
    vlSelf->__PVT__compressed_resp = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 7728396782988182295ull);
    vlSelf->issue_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16401065666683342661ull);
    VL_SCOPED_RAND_RESET_W(144, vlSelf->issue_req, __VscopeHash, 17430095753457046857ull);
    vlSelf->issue_resp = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6156809858129804286ull);
    vlSelf->__PVT__mem_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1551974250180885553ull);
    VL_SCOPED_RAND_RESET_W(82, vlSelf->__PVT__mem_req, __VscopeHash, 14303737313341316090ull);
    vlSelf->result_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8916821378957780047ull);
    vlSelf->result = VL_SCOPED_RAND_RESET_Q(60, __VscopeHash, 16664408842984530663ull);
}
