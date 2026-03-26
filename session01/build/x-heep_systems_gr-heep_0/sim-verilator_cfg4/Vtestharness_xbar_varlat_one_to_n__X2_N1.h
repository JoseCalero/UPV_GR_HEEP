// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestharness.h for the primary calling header

#ifndef VERILATED_VTESTHARNESS_XBAR_VARLAT_ONE_TO_N__X2_N1_H_
#define VERILATED_VTESTHARNESS_XBAR_VARLAT_ONE_TO_N__X2_N1_H_  // guard

#include "verilated.h"


class Vtestharness__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestharness_xbar_varlat_one_to_n__X2_N1 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    VL_IN8(default_idx_i,0,0);
    CData/*0:0*/ __PVT__xbar_master_rsp_gnt;
    CData/*0:0*/ __PVT__xbar_master_rsp_rvalid;
    CData/*1:0*/ u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o;
    CData/*0:0*/ __PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_d;
    CData/*0:0*/ __PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q;
    CData/*0:0*/ __PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d;
    CData/*0:0*/ __PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_q;
    CData/*0:0*/ __VdfgRegularize_h495687df_0_65;
    CData/*0:0*/ __VdfgRegularize_h495687df_0_227;
    CData/*0:0*/ __VdfgRegularize_h495687df_0_228;
    CData/*0:0*/ __VdfgRegularize_h495687df_0_230;
    CData/*0:0*/ __VdfgRegularize_h495687df_0_231;
    CData/*0:0*/ __VdfgRegularize_h495687df_0_232;
    VlWide<3>/*68:0*/ __PVT__master_xbar_req_data;
    VlWide<3>/*69:0*/ __VdfgRegularize_h495687df_0_303;
    VlWide<3>/*69:0*/ __VdfgRegularize_h495687df_0_304;
    VL_INW(addr_map_i,95,0,3);
    VL_INW(master_req_i,69,0,3);
    VL_OUT64(master_resp_o,33,0);
    VL_OUTW(slave_req_o,139,0,5);
    VL_INW(slave_resp_i,67,0,3);

    // INTERNAL VARIABLES
    Vtestharness__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestharness_xbar_varlat_one_to_n__X2_N1(Vtestharness__Syms* symsp, const char* v__name);
    ~Vtestharness_xbar_varlat_one_to_n__X2_N1();
    VL_UNCOPYABLE(Vtestharness_xbar_varlat_one_to_n__X2_N1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
