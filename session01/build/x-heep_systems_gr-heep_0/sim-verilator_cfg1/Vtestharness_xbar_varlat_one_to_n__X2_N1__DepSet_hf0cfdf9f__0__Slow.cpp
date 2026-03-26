// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness_xbar_varlat_one_to_n__X2_N1.h"

VL_ATTR_COLD void Vtestharness_xbar_varlat_one_to_n__X2_N1___ctor_var_reset(Vtestharness_xbar_varlat_one_to_n__X2_N1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_xbar_varlat_one_to_n__X2_N1___ctor_var_reset\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3161515032326629241ull);
    VL_SCOPED_RAND_RESET_W(96, vlSelf->addr_map_i, __VscopeHash, 8621101563022911903ull);
    vlSelf->default_idx_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3875014668551346361ull);
    VL_SCOPED_RAND_RESET_W(70, vlSelf->master_req_i, __VscopeHash, 11447676996038533414ull);
    vlSelf->master_resp_o = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 9936788075372641391ull);
    VL_SCOPED_RAND_RESET_W(140, vlSelf->slave_req_o, __VscopeHash, 13277910329351125222ull);
    VL_SCOPED_RAND_RESET_W(68, vlSelf->slave_resp_i, __VscopeHash, 3458426764214545720ull);
    vlSelf->__PVT__xbar_master_rsp_gnt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12652112293097967118ull);
    vlSelf->__PVT__xbar_master_rsp_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6665350105192045503ull);
    vlSelf->__Vcellinp__u_addr_decode__addr_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16238032824817807747ull);
    vlSelf->u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8133601396066641456ull);
    vlSelf->__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7260637770670801844ull);
    vlSelf->__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12008231121808371358ull);
    vlSelf->__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13800346427144851393ull);
    vlSelf->__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5381869271375900043ull);
    vlSelf->__VdfgRegularize_h495687df_0_25 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8186347004413078833ull);
    vlSelf->__VdfgRegularize_h495687df_0_81 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6119098446019788907ull);
    vlSelf->__VdfgRegularize_h495687df_0_82 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12832059918681022798ull);
    vlSelf->__VdfgRegularize_h495687df_0_84 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9859713559901660522ull);
    vlSelf->__VdfgRegularize_h495687df_0_85 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11087784668234177930ull);
    vlSelf->__VdfgRegularize_h495687df_0_86 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17800746140895635406ull);
}
