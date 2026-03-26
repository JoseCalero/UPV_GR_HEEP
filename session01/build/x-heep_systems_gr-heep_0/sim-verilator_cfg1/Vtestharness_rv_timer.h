// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestharness.h for the primary calling header

#ifndef VERILATED_VTESTHARNESS_RV_TIMER_H_
#define VERILATED_VTESTHARNESS_RV_TIMER_H_  // guard

#include "verilated.h"


class Vtestharness__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestharness_rv_timer final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rst_ni,0,0);
        VL_OUT8(intr_timer_expired_0_0_o,0,0);
        VL_OUT8(intr_timer_expired_1_0_o,0,0);
        CData/*0:0*/ __PVT__tick__BRA__0__KET__;
        CData/*0:0*/ __PVT__intr_out__BRA__0__KET__;
        CData/*0:0*/ __Vcellout__gen_harts__BRA__1__KET____DOT__u_intr_hw__intr_o;
        CData/*0:0*/ __Vcellout__gen_harts__BRA__1__KET____DOT__u_core__tick;
        CData/*0:0*/ __PVT__u_reg__DOT__reg_we;
        CData/*0:0*/ __PVT__u_reg__DOT__reg_error;
        CData/*0:0*/ __PVT__u_reg__DOT__wr_err;
        CData/*0:0*/ __PVT__u_reg__DOT__timer_v_lower0_we;
        CData/*0:0*/ __PVT__u_reg__DOT__timer_v_upper0_we;
        CData/*0:0*/ __PVT__u_reg__DOT__intr_state0_we;
        CData/*0:0*/ __PVT__u_reg__DOT__intr_test0_we;
        CData/*0:0*/ __PVT__u_reg__DOT__timer_v_lower1_we;
        CData/*0:0*/ __PVT__u_reg__DOT__timer_v_upper1_we;
        CData/*0:0*/ __PVT__u_reg__DOT__intr_state1_we;
        CData/*0:0*/ __PVT__u_reg__DOT__intr_test1_we;
        CData/*0:0*/ u_reg__DOT____Vcellout__u_ctrl_active_0__q;
        CData/*0:0*/ u_reg__DOT____Vcellout__u_ctrl_active_1__q;
        CData/*7:0*/ u_reg__DOT____Vcellout__u_cfg0_step__q;
        CData/*0:0*/ u_reg__DOT____Vcellout__u_compare_lower0_0__qe;
        CData/*0:0*/ u_reg__DOT____Vcellout__u_compare_upper0_0__qe;
        CData/*0:0*/ u_reg__DOT____Vcellout__u_intr_enable0__q;
        CData/*0:0*/ u_reg__DOT____Vcellout__u_intr_state0__q;
        CData/*7:0*/ u_reg__DOT____Vcellout__u_cfg1_step__q;
        CData/*0:0*/ u_reg__DOT____Vcellout__u_compare_lower1_0__qe;
        CData/*0:0*/ u_reg__DOT____Vcellout__u_compare_upper1_0__qe;
        CData/*0:0*/ u_reg__DOT____Vcellout__u_intr_enable1__q;
        CData/*0:0*/ u_reg__DOT____Vcellout__u_intr_state1__q;
        CData/*0:0*/ __PVT__u_reg__DOT__u_reg_if__DOT__outstanding;
        CData/*0:0*/ __PVT__u_reg__DOT__u_reg_if__DOT__a_ack;
        CData/*0:0*/ __PVT__u_reg__DOT__u_reg_if__DOT__error;
        CData/*0:0*/ __PVT__u_reg__DOT__u_reg_if__DOT__err_internal;
        CData/*0:0*/ __PVT__u_reg__DOT__u_reg_if__DOT__malformed_meta_err;
        CData/*7:0*/ __PVT__u_reg__DOT__u_reg_if__DOT__reqid;
        CData/*1:0*/ __PVT__u_reg__DOT__u_reg_if__DOT__reqsz;
        CData/*2:0*/ __PVT__u_reg__DOT__u_reg_if__DOT__rspop;
        CData/*0:0*/ __PVT__u_reg__DOT__u_reg_if__DOT__rd_req;
        CData/*0:0*/ __PVT__u_reg__DOT__u_reg_if__DOT__wr_req;
        CData/*0:0*/ __PVT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk;
        CData/*0:0*/ __PVT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk;
        CData/*0:0*/ __PVT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk;
        CData/*0:0*/ u_reg__DOT__u_reg_if__DOT__u_err__DOT____VdfgRegularize_h76d05708_0_1;
        CData/*0:0*/ __PVT__u_reg__DOT__u_ctrl_active_0__DOT__qe;
        CData/*0:0*/ __PVT__u_reg__DOT__u_ctrl_active_0__DOT__wr_en;
        CData/*0:0*/ __PVT__u_reg__DOT__u_ctrl_active_1__DOT__qe;
        CData/*0:0*/ __PVT__u_reg__DOT__u_cfg0_prescale__DOT__qe;
        CData/*0:0*/ __PVT__u_reg__DOT__u_cfg0_prescale__DOT__wr_en;
        CData/*0:0*/ __PVT__u_reg__DOT__u_cfg0_step__DOT__qe;
        CData/*0:0*/ __PVT__u_reg__DOT__u_timer_v_lower0__DOT__qe;
        CData/*0:0*/ __PVT__u_reg__DOT__u_timer_v_upper0__DOT__qe;
        CData/*0:0*/ __PVT__u_reg__DOT__u_compare_lower0_0__DOT__wr_en;
        CData/*0:0*/ __PVT__u_reg__DOT__u_compare_upper0_0__DOT__wr_en;
        CData/*0:0*/ __PVT__u_reg__DOT__u_intr_enable0__DOT__qe;
        CData/*0:0*/ __PVT__u_reg__DOT__u_intr_enable0__DOT__wr_en;
        CData/*0:0*/ __PVT__u_reg__DOT__u_intr_state0__DOT__qe;
        CData/*0:0*/ __PVT__u_reg__DOT__u_intr_state0__DOT__wr_data;
        CData/*0:0*/ __PVT__u_reg__DOT__u_cfg1_prescale__DOT__qe;
        CData/*0:0*/ __PVT__u_reg__DOT__u_cfg1_prescale__DOT__wr_en;
        CData/*0:0*/ __PVT__u_reg__DOT__u_cfg1_step__DOT__qe;
        CData/*0:0*/ __PVT__u_reg__DOT__u_timer_v_lower1__DOT__qe;
        CData/*0:0*/ __PVT__u_reg__DOT__u_timer_v_upper1__DOT__qe;
    };
    struct {
        CData/*0:0*/ __PVT__u_reg__DOT__u_compare_lower1_0__DOT__wr_en;
        CData/*0:0*/ __PVT__u_reg__DOT__u_compare_upper1_0__DOT__wr_en;
        CData/*0:0*/ __PVT__u_reg__DOT__u_intr_enable1__DOT__qe;
        CData/*0:0*/ __PVT__u_reg__DOT__u_intr_enable1__DOT__wr_en;
        CData/*0:0*/ __PVT__u_reg__DOT__u_intr_state1__DOT__qe;
        CData/*0:0*/ __PVT__u_reg__DOT__u_intr_state1__DOT__wr_data;
        CData/*0:0*/ __PVT__gen_harts__BRA__0__KET____DOT__u_intr_hw__DOT__new_event;
        CData/*0:0*/ __PVT__gen_harts__BRA__1__KET____DOT__u_intr_hw__DOT__new_event;
        SData/*11:0*/ u_reg__DOT____Vcellout__u_cfg0_prescale__q;
        SData/*11:0*/ u_reg__DOT____Vcellout__u_cfg1_prescale__q;
        SData/*11:0*/ __PVT__gen_harts__BRA__0__KET____DOT__u_core__DOT__tick_count;
        SData/*11:0*/ __PVT__gen_harts__BRA__1__KET____DOT__u_core__DOT__tick_count;
        IData/*31:0*/ __PVT__u_reg__DOT__reg_rdata_next;
        IData/*31:0*/ u_reg__DOT____Vcellout__u_timer_v_lower0__q;
        IData/*31:0*/ u_reg__DOT____Vcellout__u_timer_v_upper0__q;
        IData/*31:0*/ u_reg__DOT____Vcellout__u_compare_lower0_0__q;
        IData/*31:0*/ u_reg__DOT____Vcellout__u_compare_upper0_0__q;
        IData/*31:0*/ u_reg__DOT____Vcellout__u_timer_v_lower1__q;
        IData/*31:0*/ u_reg__DOT____Vcellout__u_timer_v_upper1__q;
        IData/*31:0*/ u_reg__DOT____Vcellout__u_compare_lower1_0__q;
        IData/*31:0*/ u_reg__DOT____Vcellout__u_compare_upper1_0__q;
        IData/*16:0*/ __PVT__u_reg__DOT__addr_hit;
        IData/*31:0*/ __PVT__u_reg__DOT__u_reg_if__DOT__rdata;
        VL_INW(tl_i,106,0,4);
        VL_OUTW(tl_o,65,0,3);
        VlWide<10>/*309:0*/ __PVT__reg2hw;
        VlWide<5>/*135:0*/ __PVT__hw2reg;
        QData/*63:0*/ __Vcellinp__gen_harts__BRA__0__KET____DOT__u_core__mtime;
        QData/*63:0*/ __Vcellout__gen_harts__BRA__0__KET____DOT__u_core__mtime_d;
        QData/*63:0*/ __Vcellinp__gen_harts__BRA__1__KET____DOT__u_core__mtime;
        QData/*63:0*/ __Vcellout__gen_harts__BRA__1__KET____DOT__u_core__mtime_d;
        VlWide<4>/*106:0*/ __PVT__u_reg__DOT__tl_reg_h2d;
        VlUnpacked<SData/*11:0*/, 2> __PVT__prescaler;
        VlUnpacked<CData/*7:0*/, 2> __PVT__step;
        VlUnpacked<QData/*63:0*/, 2> __PVT__mtime_d;
        VlUnpacked<QData/*63:0*/, 2> __PVT__mtime;
        VlUnpacked<VlUnpacked<QData/*63:0*/, 1>, 2> __PVT__mtimecmp;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 1>, 2> __PVT__mtimecmp_update;
        VlUnpacked<QData/*63:0*/, 1> __Vcellinp__gen_harts__BRA__0__KET____DOT__u_core__mtimecmp;
        VlUnpacked<QData/*63:0*/, 1> __Vcellinp__gen_harts__BRA__1__KET____DOT__u_core__mtimecmp;
    };

    // INTERNAL VARIABLES
    Vtestharness__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestharness_rv_timer(Vtestharness__Syms* symsp, const char* v__name);
    ~Vtestharness_rv_timer();
    VL_UNCOPYABLE(Vtestharness_rv_timer);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
