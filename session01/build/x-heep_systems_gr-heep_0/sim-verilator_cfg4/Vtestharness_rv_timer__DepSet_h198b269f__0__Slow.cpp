// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness_rv_timer.h"

VL_ATTR_COLD void Vtestharness_rv_timer___ctor_var_reset(Vtestharness_rv_timer* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_rv_timer___ctor_var_reset\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3161515032326629241ull);
    VL_SCOPED_RAND_RESET_W(107, vlSelf->tl_i, __VscopeHash, 717864233454436411ull);
    VL_SCOPED_RAND_RESET_W(66, vlSelf->tl_o, __VscopeHash, 14475261017617439938ull);
    vlSelf->intr_timer_expired_0_0_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2600504399474433619ull);
    vlSelf->intr_timer_expired_1_0_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2547571358308638126ull);
    VL_SCOPED_RAND_RESET_W(310, vlSelf->__PVT__reg2hw, __VscopeHash, 14106023928444074128ull);
    VL_SCOPED_RAND_RESET_W(136, vlSelf->__PVT__hw2reg, __VscopeHash, 15323136289072650499ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__prescaler[__Vi0] = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 18335446415778370535ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__step[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6399494957627430472ull);
    }
    vlSelf->__PVT__tick__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13166599598799855984ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__mtime_d[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9201516851884165335ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__mtime[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4477095035137272562ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 1; ++__Vi1) {
            vlSelf->__PVT__mtimecmp[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13719303139878274067ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 1; ++__Vi1) {
            vlSelf->__PVT__mtimecmp_update[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16639124640980835339ull);
        }
    }
    vlSelf->__PVT__intr_out__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7265182531008189136ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__Vcellinp__gen_harts__BRA__0__KET____DOT__u_core__mtimecmp[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9319080808450679502ull);
    }
    vlSelf->__Vcellinp__gen_harts__BRA__0__KET____DOT__u_core__mtime = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2798389522074271554ull);
    vlSelf->__Vcellout__gen_harts__BRA__0__KET____DOT__u_core__mtime_d = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12898811848252312911ull);
    vlSelf->__Vcellout__gen_harts__BRA__1__KET____DOT__u_intr_hw__intr_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7135239677002421621ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__Vcellinp__gen_harts__BRA__1__KET____DOT__u_core__mtimecmp[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2079801577020480656ull);
    }
    vlSelf->__Vcellinp__gen_harts__BRA__1__KET____DOT__u_core__mtime = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6766535661383387567ull);
    vlSelf->__Vcellout__gen_harts__BRA__1__KET____DOT__u_core__mtime_d = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3639836748718989050ull);
    vlSelf->__Vcellout__gen_harts__BRA__1__KET____DOT__u_core__tick = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2777965935322773863ull);
    vlSelf->__PVT__u_reg__DOT__reg_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9080526070669042950ull);
    vlSelf->__PVT__u_reg__DOT__reg_error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3004928139467402748ull);
    vlSelf->__PVT__u_reg__DOT__wr_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18226200909601097533ull);
    vlSelf->__PVT__u_reg__DOT__reg_rdata_next = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10790086751881178366ull);
    VL_SCOPED_RAND_RESET_W(107, vlSelf->__PVT__u_reg__DOT__tl_reg_h2d, __VscopeHash, 6998653105193557326ull);
    vlSelf->__PVT__u_reg__DOT__timer_v_lower0_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8336800422377731721ull);
    vlSelf->__PVT__u_reg__DOT__timer_v_upper0_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11238925032981273158ull);
    vlSelf->__PVT__u_reg__DOT__intr_state0_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16425514939296089951ull);
    vlSelf->__PVT__u_reg__DOT__intr_test0_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5243754558126967804ull);
    vlSelf->__PVT__u_reg__DOT__timer_v_lower1_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10655905080777689335ull);
    vlSelf->__PVT__u_reg__DOT__timer_v_upper1_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15695682043586157931ull);
    vlSelf->__PVT__u_reg__DOT__intr_state1_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10453519515301169467ull);
    vlSelf->__PVT__u_reg__DOT__intr_test1_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3897967516941573461ull);
    vlSelf->u_reg__DOT____Vcellout__u_ctrl_active_0__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5134820653247516808ull);
    vlSelf->u_reg__DOT____Vcellout__u_ctrl_active_1__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1445622415486603776ull);
    vlSelf->u_reg__DOT____Vcellout__u_cfg0_prescale__q = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 10784308890353405284ull);
    vlSelf->u_reg__DOT____Vcellout__u_cfg0_step__q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9368617648833786659ull);
    vlSelf->u_reg__DOT____Vcellout__u_timer_v_lower0__q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9948758721531970065ull);
    vlSelf->u_reg__DOT____Vcellout__u_timer_v_upper0__q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12806514827521784953ull);
    vlSelf->u_reg__DOT____Vcellout__u_compare_lower0_0__q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9002021892740007773ull);
    vlSelf->u_reg__DOT____Vcellout__u_compare_lower0_0__qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7822182611689010221ull);
    vlSelf->u_reg__DOT____Vcellout__u_compare_upper0_0__q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1321768315101813318ull);
    vlSelf->u_reg__DOT____Vcellout__u_compare_upper0_0__qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 504879524992653994ull);
    vlSelf->u_reg__DOT____Vcellout__u_intr_enable0__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6886594449994484502ull);
    vlSelf->u_reg__DOT____Vcellout__u_intr_state0__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16329400206206816642ull);
    vlSelf->u_reg__DOT____Vcellout__u_cfg1_prescale__q = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 7604928202296960409ull);
    vlSelf->u_reg__DOT____Vcellout__u_cfg1_step__q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17780272620271428147ull);
    vlSelf->u_reg__DOT____Vcellout__u_timer_v_lower1__q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12103682283286868146ull);
    vlSelf->u_reg__DOT____Vcellout__u_timer_v_upper1__q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8768665052447954072ull);
    vlSelf->u_reg__DOT____Vcellout__u_compare_lower1_0__q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7043246646251013584ull);
    vlSelf->u_reg__DOT____Vcellout__u_compare_lower1_0__qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6479276780202130387ull);
    vlSelf->u_reg__DOT____Vcellout__u_compare_upper1_0__q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9690287557494059287ull);
    vlSelf->u_reg__DOT____Vcellout__u_compare_upper1_0__qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4862798183526635290ull);
    vlSelf->u_reg__DOT____Vcellout__u_intr_enable1__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17643087689508873810ull);
    vlSelf->u_reg__DOT____Vcellout__u_intr_state1__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6806423614393483257ull);
    vlSelf->__PVT__u_reg__DOT__addr_hit = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 1707141598254270963ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__outstanding = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14797738846245542840ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__a_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1706730600893819760ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15885962746042624578ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 653044860779738909ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__err_internal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12983886618155008317ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__malformed_meta_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10778480949098129555ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__reqid = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5496800438965226891ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__reqsz = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2660273660147212013ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__rspop = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8023656714930195240ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__rd_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4298417715922207639ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__wr_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8567638118188061591ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7827154220208558367ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2313916425443592934ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13891138626421203419ull);
    vlSelf->u_reg__DOT__u_reg_if__DOT__u_err__DOT____VdfgRegularize_h76d05708_0_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12853804561363607086ull);
    vlSelf->__PVT__u_reg__DOT__u_ctrl_active_0__DOT__qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 851863446672413319ull);
    vlSelf->__PVT__u_reg__DOT__u_ctrl_active_0__DOT__wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3603217245877928954ull);
    vlSelf->__PVT__u_reg__DOT__u_ctrl_active_1__DOT__qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4495375979415696999ull);
    vlSelf->__PVT__u_reg__DOT__u_cfg0_prescale__DOT__qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1360657227534961215ull);
    vlSelf->__PVT__u_reg__DOT__u_cfg0_prescale__DOT__wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18325549130786451921ull);
    vlSelf->__PVT__u_reg__DOT__u_cfg0_step__DOT__qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3772129262345863693ull);
    vlSelf->__PVT__u_reg__DOT__u_timer_v_lower0__DOT__qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13861312760492282851ull);
    vlSelf->__PVT__u_reg__DOT__u_timer_v_upper0__DOT__qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13759702663818096185ull);
    vlSelf->__PVT__u_reg__DOT__u_compare_lower0_0__DOT__wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15801460230490409978ull);
    vlSelf->__PVT__u_reg__DOT__u_compare_upper0_0__DOT__wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1721947085281714361ull);
    vlSelf->__PVT__u_reg__DOT__u_intr_enable0__DOT__qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17008861264871860766ull);
    vlSelf->__PVT__u_reg__DOT__u_intr_enable0__DOT__wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14730752644191135932ull);
    vlSelf->__PVT__u_reg__DOT__u_intr_state0__DOT__qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18175114341079235487ull);
    vlSelf->__PVT__u_reg__DOT__u_intr_state0__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6462143487825401731ull);
    vlSelf->__PVT__u_reg__DOT__u_cfg1_prescale__DOT__qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9170370671546965111ull);
    vlSelf->__PVT__u_reg__DOT__u_cfg1_prescale__DOT__wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7483596385304852396ull);
    vlSelf->__PVT__u_reg__DOT__u_cfg1_step__DOT__qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8582552132645598824ull);
    vlSelf->__PVT__u_reg__DOT__u_timer_v_lower1__DOT__qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14261980257279782536ull);
    vlSelf->__PVT__u_reg__DOT__u_timer_v_upper1__DOT__qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5662274248506778090ull);
    vlSelf->__PVT__u_reg__DOT__u_compare_lower1_0__DOT__wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11130431215012087965ull);
    vlSelf->__PVT__u_reg__DOT__u_compare_upper1_0__DOT__wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16032018606053435157ull);
    vlSelf->__PVT__u_reg__DOT__u_intr_enable1__DOT__qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16378421206300728038ull);
    vlSelf->__PVT__u_reg__DOT__u_intr_enable1__DOT__wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4695934369845523963ull);
    vlSelf->__PVT__u_reg__DOT__u_intr_state1__DOT__qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9567592676021086464ull);
    vlSelf->__PVT__u_reg__DOT__u_intr_state1__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13290415248488028367ull);
    vlSelf->__PVT__gen_harts__BRA__0__KET____DOT__u_intr_hw__DOT__new_event = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15490590562776857761ull);
    vlSelf->__PVT__gen_harts__BRA__0__KET____DOT__u_core__DOT__tick_count = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 17614430373656013125ull);
    vlSelf->__PVT__gen_harts__BRA__1__KET____DOT__u_intr_hw__DOT__new_event = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11939121367920584391ull);
    vlSelf->__PVT__gen_harts__BRA__1__KET____DOT__u_core__DOT__tick_count = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 9924074429725754694ull);
}
