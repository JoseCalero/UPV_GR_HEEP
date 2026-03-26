// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness_if_xif__X3.h"

VL_ATTR_COLD void Vtestharness_if_xif__X3___ctor_var_reset(Vtestharness_if_xif__X3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_if_xif__X3___ctor_var_reset\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__compressed_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15299834141933457647ull);
    vlSelf->__PVT__compressed_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7737360208450486583ull);
    vlSelf->__PVT__compressed_req = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 9040833168019464441ull);
    vlSelf->__PVT__compressed_resp = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 7728396782988182295ull);
    vlSelf->__PVT__issue_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7595555069044752685ull);
    vlSelf->__PVT__issue_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16401065666683342661ull);
    VL_SCOPED_RAND_RESET_W(144, vlSelf->__PVT__issue_req, __VscopeHash, 17430095753457046857ull);
    vlSelf->__PVT__issue_resp = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6156809858129804286ull);
    vlSelf->__PVT__commit_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1248538124957539926ull);
    vlSelf->__PVT__commit = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6902039264876868477ull);
    vlSelf->__PVT__mem_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1551974250180885553ull);
    vlSelf->__PVT__mem_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6248464876150524742ull);
    VL_SCOPED_RAND_RESET_W(82, vlSelf->__PVT__mem_req, __VscopeHash, 14303737313341316090ull);
    vlSelf->__PVT__mem_resp = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 856639540562025922ull);
    vlSelf->__PVT__mem_result_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3520999761238563407ull);
    vlSelf->__PVT__mem_result = VL_SCOPED_RAND_RESET_Q(38, __VscopeHash, 12159006580506649642ull);
    vlSelf->__PVT__result_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8916821378957780047ull);
    vlSelf->__PVT__result_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16967871585272011918ull);
    vlSelf->__PVT__result = VL_SCOPED_RAND_RESET_Q(60, __VscopeHash, 16664408842984530663ull);
}
