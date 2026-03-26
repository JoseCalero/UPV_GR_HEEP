// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestharness.h for the primary calling header

#ifndef VERILATED_VTESTHARNESS_RR_ARB_TREE__N6_D45_EZ38_H_
#define VERILATED_VTESTHARNESS_RR_ARB_TREE__N6_D45_EZ38_H_  // guard

#include "verilated.h"


class Vtestharness__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestharness_rr_arb_tree__N6_D45_Ez38 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rst_ni,0,0);
        VL_IN8(flush_i,0,0);
        VL_IN8(rr_i,2,0);
        VL_IN8(req_i,5,0);
        VL_OUT8(gnt_o,5,0);
        VL_OUT8(req_o,0,0);
        VL_IN8(gnt_i,0,0);
        VL_OUT8(__PVT__idx_o,2,0);
        CData/*0:0*/ __PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__;
        CData/*0:0*/ __PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__;
        CData/*0:0*/ __PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__;
        CData/*0:0*/ __PVT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__;
        CData/*0:0*/ __PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__;
        CData/*0:0*/ __PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__;
        CData/*0:0*/ __PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__;
        CData/*0:0*/ __PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__;
        CData/*2:0*/ __PVT__gen_arbiter__DOT__rr_q;
        CData/*2:0*/ __PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        CData/*2:0*/ __PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx;
        CData/*2:0*/ __PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx;
        CData/*0:0*/ __PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty;
        CData/*0:0*/ __PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
        CData/*0:0*/ __PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
        CData/*0:0*/ __PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
        CData/*0:0*/ __PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel;
        CData/*0:0*/ __PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel;
        CData/*0:0*/ __PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel;
        CData/*0:0*/ __PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__7__KET__;
        CData/*0:0*/ __PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__;
        CData/*0:0*/ __PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__;
        CData/*0:0*/ __PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__;
        CData/*2:0*/ __PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes__BRA__23__03a21__KET__;
        CData/*0:0*/ gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0;
        CData/*0:0*/ gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1;
        CData/*0:0*/ __PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__7__KET__;
        CData/*0:0*/ __PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__;
        CData/*0:0*/ __PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__;
        CData/*0:0*/ __PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__;
        CData/*2:0*/ __PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__BRA__23__03a21__KET__;
        CData/*0:0*/ gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0;
        CData/*0:0*/ gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_75;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_76;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_77;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_78;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_79;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_80;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_81;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_82;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_83;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_84;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_85;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_86;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_87;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_88;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_89;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_90;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_91;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_92;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_93;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_94;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_95;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_96;
    };
    struct {
        CData/*0:0*/ __VdfgRegularize_h495687df_0_97;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_98;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_99;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_100;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_101;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_102;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_103;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_104;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_105;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_106;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_107;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_108;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_109;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_110;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_111;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_112;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_113;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_114;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_115;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_116;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_117;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_118;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_119;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_120;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_121;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_122;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_123;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_124;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_125;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_126;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_127;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_128;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_129;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_130;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_131;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_132;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_133;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_134;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_135;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_136;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_137;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_138;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_139;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_140;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_141;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_142;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_143;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_144;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_145;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_146;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_147;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_148;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_149;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_150;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_151;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_152;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_153;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_154;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_155;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_156;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_157;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_158;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_351;
        CData/*0:0*/ __VdfgRegularize_h495687df_0_394;
    };
    struct {
        VL_INW(data_i,413,0,13);
        VL_OUTW(data_o,68,0,3);
    };

    // INTERNAL VARIABLES
    Vtestharness__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestharness_rr_arb_tree__N6_D45_Ez38(Vtestharness__Syms* symsp, const char* v__name);
    ~Vtestharness_rr_arb_tree__N6_D45_Ez38();
    VL_UNCOPYABLE(Vtestharness_rr_arb_tree__N6_D45_Ez38);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
