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
    VL_SCOPED_RAND_RESET_W(69, vlSelf->__PVT__master_xbar_req_data, __VscopeHash, 18241604441898152271ull);
    vlSelf->u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8133601396066641456ull);
    vlSelf->__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7260637770670801844ull);
    vlSelf->__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12008231121808371358ull);
    vlSelf->__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13800346427144851393ull);
    vlSelf->__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5381869271375900043ull);
    vlSelf->__VdfgRegularize_h495687df_0_65 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16471316745068039978ull);
    vlSelf->__VdfgRegularize_h495687df_0_227 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15822973274327954623ull);
    vlSelf->__VdfgRegularize_h495687df_0_228 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10586038980531428485ull);
    vlSelf->__VdfgRegularize_h495687df_0_230 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1462748782824268662ull);
    vlSelf->__VdfgRegularize_h495687df_0_231 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14770142329016703000ull);
    vlSelf->__VdfgRegularize_h495687df_0_232 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2820119633969102907ull);
    VL_SCOPED_RAND_RESET_W(70, vlSelf->__VdfgRegularize_h495687df_0_303, __VscopeHash, 9025968979170987157ull);
    VL_SCOPED_RAND_RESET_W(70, vlSelf->__VdfgRegularize_h495687df_0_304, __VscopeHash, 4406824293650804137ull);
}
