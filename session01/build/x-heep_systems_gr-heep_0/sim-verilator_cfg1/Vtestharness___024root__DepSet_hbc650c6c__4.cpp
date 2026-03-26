// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness__Syms.h"
#include "Vtestharness___024root.h"

extern const VlUnpacked<CData/*0:0*/, 32> Vtestharness__ConstPool__TABLE_h08fbe4e8_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtestharness__ConstPool__TABLE_h7137cf27_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtestharness__ConstPool__TABLE_h0fca7b0f_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtestharness__ConstPool__TABLE_h3a0a6a71_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtestharness__ConstPool__TABLE_h5815741b_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtestharness__ConstPool__TABLE_haaa89d7e_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtestharness__ConstPool__TABLE_h3467d5b9_0;
extern const VlUnpacked<CData/*3:0*/, 32> Vtestharness__ConstPool__TABLE_h7ebd0033_0;

VL_INLINE_OPT void Vtestharness___024root___nba_sequent__TOP__49(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_sequent__TOP__49\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    // Body
    __Vtableidx8 = (((IData)(vlSelfRef.jtag_tms_i) 
                     << 4U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__tap_state_q));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__test_logic_reset 
        = Vtestharness__ConstPool__TABLE_h08fbe4e8_0
        [__Vtableidx8];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__capture_dr 
        = Vtestharness__ConstPool__TABLE_h7137cf27_0
        [__Vtableidx8];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__shift_dr 
        = Vtestharness__ConstPool__TABLE_h0fca7b0f_0
        [__Vtableidx8];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__update_dr 
        = Vtestharness__ConstPool__TABLE_h3a0a6a71_0
        [__Vtableidx8];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__capture_ir 
        = Vtestharness__ConstPool__TABLE_h5815741b_0
        [__Vtableidx8];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__shift_ir 
        = Vtestharness__ConstPool__TABLE_haaa89d7e_0
        [__Vtableidx8];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__update_ir 
        = Vtestharness__ConstPool__TABLE_h3467d5b9_0
        [__Vtableidx8];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__tap_state_d 
        = Vtestharness__ConstPool__TABLE_h7ebd0033_0
        [__Vtableidx8];
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__shift_ir) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__tdo_mux 
            = (1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q));
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__tdo_mux 
            = (1U & ((1U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q))
                      ? vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__idcode_q
                      : ((0x10U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q))
                          ? vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dtmcs_q
                          : ((0x11U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q))
                              ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dr_q)
                              : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__bypass_q)))));
        if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((0x11U 
                                                 == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q)) 
                                                << 2U) 
                                               | (((0x10U 
                                                    == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q)) 
                                                   << 1U) 
                                                  | (1U 
                                                     == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q)))))))))) {
            if ((0U != (((0x11U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q)) 
                         << 2U) | (((0x10U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q)) 
                                    << 1U) | (1U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: dmi_jtag_tap.sv:176: Assertion failed in %Ntestharness.gr_heep_i.core_v_mini_mcu_i.debug_subsystem_i.dmi_jtag_i.i_dmi_jtag_tap.p_out_sel: unique case, but multiple matches found for '5'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 5,(IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q));
                    VL_STOP_MT("../../../hw/vendor/x-heep/hw/vendor/pulp_platform_riscv_dbg/src/dmi_jtag_tap.sv", 176, "");
                }
            }
        }
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dtmcs_d 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dtmcs_q;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__jtag_ir_d 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q;
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__update_ir) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__jtag_ir_d 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q;
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_d 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q;
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__shift_ir) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_d 
            = (((IData)(vlSelfRef.jtag_tdi_i) << 4U) 
               | (0xfU & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q) 
                          >> 1U)));
    }
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__capture_ir) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_d = 5U;
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__idcode_d 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__idcode_q;
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__capture_dr) {
        if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dtmcs_select) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dtmcs_d 
                = (0x1071U | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__error_q) 
                              << 0xaU));
        }
        if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__idcode_select) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__idcode_d = 0x10001c05U;
        }
    }
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__shift_dr) {
        if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dtmcs_select) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dtmcs_d 
                = (((IData)(vlSelfRef.jtag_tdi_i) << 0x1fU) 
                   | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dtmcs_q 
                      >> 1U));
        }
        if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__idcode_select) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__idcode_d 
                = (((IData)(vlSelfRef.jtag_tdi_i) << 0x1fU) 
                   | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__idcode_q 
                      >> 1U));
        }
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__bypass_d 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__bypass_q;
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__capture_dr) {
        if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__bypass_select) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__bypass_d = 0U;
        }
    }
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__shift_dr) {
        if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__bypass_select) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__bypass_d 
                = vlSelfRef.jtag_tdi_i;
        }
    }
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__test_logic_reset) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__jtag_ir_d = 1U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_d = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__idcode_d = 0x10001c05U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__bypass_d = 0U;
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dmi_clear 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__test_logic_reset) 
           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dtmcs_select) 
              & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__update_dr) 
                 & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dtmcs_q 
                    >> 0x11U))));
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__23(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__23\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o 
        = (1U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q)
                  ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__vld_o) 
                     & (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__5__KET____DOT__demux_xbar_i.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o))
                  : (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__5__KET____DOT__demux_xbar_i.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o)));
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__24(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__24\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_fifo_i__DOT__fifo_resp_push 
        = ((1U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_fifo_i__DOT__obi_resp_fifo_i__DOT__status_cnt_q)) 
           & (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__2__KET____DOT__demux_xbar_i.__PVT__xbar_master_rsp_rvalid));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_fifo_i__DOT__obi_resp_fifo_i__DOT__status_cnt_n 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_fifo_i__DOT__obi_resp_fifo_i__DOT__status_cnt_q;
    if (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_fifo_i__DOT__fifo_resp_push) 
         & (1U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_fifo_i__DOT__obi_resp_fifo_i__DOT__status_cnt_q)))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_fifo_i__DOT__obi_resp_fifo_i__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_fifo_i__DOT__obi_resp_fifo_i__DOT__status_cnt_q)));
    }
    if (((0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_fifo_i__DOT__obi_resp_fifo_i__DOT__status_cnt_q)) 
         & (0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_fifo_i__DOT__obi_resp_fifo_i__DOT__status_cnt_q)))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_fifo_i__DOT__obi_resp_fifo_i__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_fifo_i__DOT__obi_resp_fifo_i__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_fifo_i__DOT__fifo_resp_push) 
           & (0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_fifo_i__DOT__obi_resp_fifo_i__DOT__status_cnt_q))) 
          & (1U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_fifo_i__DOT__obi_resp_fifo_i__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_fifo_i__DOT__obi_resp_fifo_i__DOT__status_cnt_q)))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_fifo_i__DOT__obi_resp_fifo_i__DOT__status_cnt_n 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_fifo_i__DOT__obi_resp_fifo_i__DOT__status_cnt_q;
    }
    vlSelfRef.__VdfgRegularize_h495687df_0_238 = ((1U 
                                                   != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_fifo_i__DOT__obi_resp_fifo_i__DOT__status_cnt_q)) 
                                                  & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_fifo_i__DOT__fifo_resp_push));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_fifo_i__DOT__obi_resp_fifo_i__DOT__write_pointer_n 
        = ((IData)(vlSelfRef.__VdfgRegularize_h495687df_0_238)
            ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_fifo_i__DOT__obi_resp_fifo_i__DOT__write_pointer_q) 
               & ((IData)(1U) + (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_fifo_i__DOT__obi_resp_fifo_i__DOT__write_pointer_q)))
            : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_fifo_i__DOT__obi_resp_fifo_i__DOT__write_pointer_q));
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__25(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__25\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o 
        = (1U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q)
                  ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__vld_o) 
                     & (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__2__KET____DOT__demux_xbar_i.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o))
                  : (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__2__KET____DOT__demux_xbar_i.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U <= (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U > (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o));
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__26(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__26\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__din_ready 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__din_valid) 
           & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__next_fetch) 
              & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_resetn)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__dout_valid 
        = (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__xfer_ddr_q)
             ? ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__last_fetch)) 
                & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__fetch))
             : ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__fetch)) 
                & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer__DOT__next_fetch))) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_resetn));
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__config_en) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__yo_spi_sck 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_clk;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT____Vcellout__obi_spimemio_i__flash_csb_o 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_csb;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT____Vcellout__obi_spimemio_i__flash_io3_oe_o 
            = (1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_io3_oe));
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT____Vcellout__obi_spimemio_i__flash_io2_oe_o 
            = (1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_io2_oe));
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT____Vcellout__obi_spimemio_i__flash_io1_oe_o 
            = (1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_io1_oe));
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT____Vcellout__obi_spimemio_i__flash_io0_oe_o 
            = (1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__xfer_io0_oe));
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__yo_spi_sck 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__config_clk;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT____Vcellout__obi_spimemio_i__flash_csb_o 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__config_csb;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT____Vcellout__obi_spimemio_i__flash_io3_oe_o 
            = (1U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__config_oe) 
                     >> 3U));
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT____Vcellout__obi_spimemio_i__flash_io2_oe_o 
            = (1U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__config_oe) 
                     >> 2U));
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT____Vcellout__obi_spimemio_i__flash_io1_oe_o 
            = (1U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__config_oe) 
                     >> 1U));
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT____Vcellout__obi_spimemio_i__flash_io0_oe_o 
            = (1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__obi_spimemio_i__DOT__spimemio_i__DOT__config_oe));
    }
    if (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT____Vcellout__u_use_spimemio__q) 
         | (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.u_reg__DOT____Vcellout__u_control_output_en__q))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_spi_flash_sck__DOT__pad__strong__out1 
            = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT____Vcellout__u_use_spimemio__q)
                ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__yo_spi_sck)
                : (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.__PVT__u_spi_core__DOT__u_fsm__DOT__sck_q));
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT____Vcellout__ao_peripheral_subsystem_i__spi_flash_csb_o 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT____Vcellout__u_use_spimemio__q)
            ? (2U | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT____Vcellout__obi_spimemio_i__flash_csb_o))
            : (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.__PVT__u_spi_core__DOT__u_fsm__DOT__csb_q));
    if ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT____Vcellout__ao_peripheral_subsystem_i__spi_flash_csb_en_o))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_spi_flash_cs_1__DOT__pad__strong__out1 
            = (1U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT____Vcellout__ao_peripheral_subsystem_i__spi_flash_csb_o) 
                     >> 1U));
    }
    if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT____Vcellout__ao_peripheral_subsystem_i__spi_flash_csb_en_o))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_spi_flash_cs_0__DOT__pad__strong__out1 
            = (1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT____Vcellout__ao_peripheral_subsystem_i__spi_flash_csb_o));
    }
}

extern const VlWide<10>/*319:0*/ Vtestharness__ConstPool__CONST_h356ddd95_0;

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__27(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__27\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__dma_init_state_d 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__dma_init_state_q;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__dma_init_return_d 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__dma_init_return_q;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__top_state_d 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__top_state_q;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__read_state_d 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__read_state_q;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__erase_state_d 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__erase_state_q;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__fwait_state_d 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__fwait_state_q;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__modify_state_d 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__modify_state_q;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__write_state_d 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__write_state_q;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__fwait_cnt_d 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__fwait_cnt_q;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__page_cnt_d 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__page_cnt_q;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__sector_iter_offset_d 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__sector_iter_offset_q;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__md_offset_d 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__md_offset_q;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__sector_offset = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__hw2reg 
        = (0x7fffffffffULL & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__hw2reg);
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__hw2reg 
        = (0x7f800000000ULL & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__hw2reg);
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[0U] 
        = Vtestharness__ConstPool__CONST_h356ddd95_0[0U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[1U] 
        = Vtestharness__ConstPool__CONST_h356ddd95_0[1U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[2U] 
        = Vtestharness__ConstPool__CONST_h356ddd95_0[2U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[3U] 
        = Vtestharness__ConstPool__CONST_h356ddd95_0[3U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[4U] 
        = Vtestharness__ConstPool__CONST_h356ddd95_0[4U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[5U] 
        = Vtestharness__ConstPool__CONST_h356ddd95_0[5U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[6U] 
        = Vtestharness__ConstPool__CONST_h356ddd95_0[6U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[7U] 
        = Vtestharness__ConstPool__CONST_h356ddd95_0[7U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[8U] 
        = Vtestharness__ConstPool__CONST_h356ddd95_0[8U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[9U] 
        = Vtestharness__ConstPool__CONST_h356ddd95_0[9U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__dma_size = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__flash_address = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U] = 0xfU;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[0U] = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__spi_host_reg_req_offset = 0U;
    if ((4U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__top_state_q))) {
        if ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__top_state_q))) {
            if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__top_state_q))) {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__top_state_d = 0U;
            } else if ((0U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__dma_init_state_q))) {
                if ((0U == vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_state_q)) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__dma_init_state_d = 1U;
                }
            } else if ((1U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__dma_init_state_q))) {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__dma_init_state_d = 2U;
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[7U] 
                    = (0x1000000U | (0xffffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[7U]));
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[8U] = 0x2000000U;
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[9U] = 0U;
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[5U] 
                    = (0x200000U | (0x1fffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[5U]));
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[6U] 
                    = (0x40U | (0xff800000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[6U]));
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[2U] 
                    = (0x92900U | (0xffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[2U]));
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[3U] = 0x200010U;
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[4U] = 0x102000U;
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[5U] 
                    = (0x1000U | (0xfff80000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[5U]));
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[2U] 
                    = (0x10U | (0xffffffcfU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[2U]));
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[2U] 
                    = (0x100U | (0xfffff8ffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[2U]));
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[2U] 
                    = (4U | (0xfffffff3U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[2U]));
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[0U] 
                    = (0x2800U | (0xffff87ffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[0U]));
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[0U] 
                    = (1U | (0xfffffe00U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[0U]));
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[1U] 
                    = (0x8102040U | (0x3fU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[1U]));
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[2U] 
                    = (0xfffffffcU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[2U]);
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[6U] 
                    = (0x800000U | (0x7fffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[6U]));
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[7U] 
                    = (0xff000000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[7U]);
            } else if ((2U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__dma_init_state_q))) {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__dma_init_state_d = 0U;
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__top_state_d 
                    = ((0U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__dma_init_return_q))
                        ? 1U : ((1U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__dma_init_return_q))
                                 ? 4U : ((2U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__dma_init_return_q))
                                          ? 5U : 0U)));
            } else {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__dma_init_state_d = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__top_state_q))) {
            if ((8U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__write_state_q))) {
                if ((4U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__write_state_q))) {
                    if ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__write_state_q))) {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__write_state_d = 0U;
                    } else if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__write_state_q))) {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__spi_host_reg_req_offset = 0x24U;
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U] 
                            = (0x30U | vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U]);
                        if ((IData)(((0x100000000ULL 
                                      == (0x300000000ULL 
                                          & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.reg_rsp_o)) 
                                     & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__idx_o)))) {
                            if ((0xfU == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__page_cnt_q))) {
                                if ((0U == ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[1U] 
                                             << 0x16U) 
                                            | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[0U] 
                                               >> 0xaU)))) {
                                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__write_state_d = 0U;
                                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__top_state_d = 2U;
                                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__fwait_state_d = 0U;
                                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__page_cnt_d = 0U;
                                } else {
                                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__fwait_cnt_d = 0U;
                                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__page_cnt_d = 0U;
                                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__sector_iter_offset_d 
                                        = ((IData)(0x1000U) 
                                           + vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__sector_iter_offset_q);
                                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__top_state_d = 1U;
                                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__write_state_d = 0U;
                                }
                            } else {
                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__page_cnt_d 
                                    = (0xfU & ((IData)(1U) 
                                               + (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__page_cnt_q)));
                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__write_state_d = 1U;
                            }
                        }
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[0U] = 0x100000ffU;
                    } else if (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.__PVT__u_reg__DOT__u_status_ready__DOT__wr_data) {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__write_state_d = 0xdU;
                    }
                } else if ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__write_state_q))) {
                    if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__write_state_q))) {
                        if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_write_unit_i__DOT__dma_done) {
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__write_state_d = 0xcU;
                        }
                    } else {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__write_state_d = 0xbU;
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[8U] 
                            = (0x2000000U | vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[8U]);
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[8U] 
                            = ((0x3ffffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[8U]) 
                               | ((((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[3U] 
                                     << 0x16U) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[2U] 
                                                  >> 0xaU)) 
                                   + VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__page_cnt_q), 8U)) 
                                  << 0x1aU));
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[9U] 
                            = ((((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[3U] 
                                  << 0x16U) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[2U] 
                                               >> 0xaU)) 
                                + VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__page_cnt_q), 8U)) 
                               >> 6U);
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[7U] 
                            = (0x59000000U | (0xffffffU 
                                              & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[7U]));
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[8U] 
                            = (0x400400U | (0xfe000000U 
                                            & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[8U]));
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[5U] 
                            = (0x9000U | (0xfff80fffU 
                                          & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[5U]));
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[4U] 
                            = (0x2000U | (0xfff01fffU 
                                          & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[4U]));
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[2U] 
                            = (0x892000U | (0x1fffU 
                                            & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[2U]));
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[3U] 
                            = (0x10U | (0xffe00000U 
                                        & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[3U]));
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[0U] 
                            = (1U | ((0xfffffe00U & 
                                      vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[0U]) 
                                     | (0x1feU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[0U] 
                                                  << 1U))));
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[6U] 
                            = (0x2040U | (0xff80003fU 
                                          & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[6U]));
                    }
                } else if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__write_state_q))) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__top_state_d = 6U;
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__dma_init_return_d = 2U;
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__write_state_d = 0xaU;
                } else {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__spi_host_reg_req_offset = 0x24U;
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U] 
                        = (0x30U | vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U]);
                    if ((IData)(((0x100000000ULL == 
                                  (0x300000000ULL & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.reg_rsp_o)) 
                                 & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__idx_o)))) {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__write_state_d = 9U;
                    }
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[0U] = 0x11000003U;
                }
            } else if ((4U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__write_state_q))) {
                if ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__write_state_q))) {
                    if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__write_state_q))) {
                        if (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.__PVT__u_reg__DOT__u_status_ready__DOT__wr_data) {
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__write_state_d = 8U;
                        }
                    } else {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__spi_host_reg_req_offset = 0x2cU;
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U] 
                            = (0x30U | vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U]);
                        if ((IData)(((0x100000000ULL 
                                      == (0x300000000ULL 
                                          & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.reg_rsp_o)) 
                                     & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__idx_o)))) {
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__write_state_d = 7U;
                        }
                        VL_ASSIGNSEL_WI(70, 32, 0U, vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req, 
                                        (2U | (0xffffff00U 
                                               & ([&]() {
                                            vlSelfRef.__Vfunc_testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__bitfield_byteswap32__54__adress_to_swap 
                                                = (
                                                   ((0xfff000U 
                                                     & ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[4U] 
                                                         << 0x16U) 
                                                        | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[3U] 
                                                           >> 0xaU))) 
                                                    + vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__sector_iter_offset_q) 
                                                   | VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__page_cnt_q), 8U));
                                            vlSelfRef.__Vfunc_testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__bitfield_byteswap32__54__Vfuncout 
                                                = (
                                                   ((vlSelfRef.__Vfunc_testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__bitfield_byteswap32__54__adress_to_swap 
                                                     << 0x18U) 
                                                    | (0xff0000U 
                                                       & (vlSelfRef.__Vfunc_testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__bitfield_byteswap32__54__adress_to_swap 
                                                          << 8U))) 
                                                   | ((0xff00U 
                                                       & (vlSelfRef.__Vfunc_testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__bitfield_byteswap32__54__adress_to_swap 
                                                          >> 8U)) 
                                                      | (vlSelfRef.__Vfunc_testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__bitfield_byteswap32__54__adress_to_swap 
                                                         >> 0x18U)));
                                        }(), vlSelfRef.__Vfunc_testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__bitfield_byteswap32__54__Vfuncout))));
                    }
                } else if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__write_state_q))) {
                    if ((0x48U > (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.__PVT__u_data_fifos__DOT__tx_depth))) {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__write_state_d = 6U;
                    }
                } else {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__spi_host_reg_req_offset = 0x24U;
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U] 
                        = (0x30U | vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U]);
                    if ((IData)(((0x100000000ULL == 
                                  (0x300000000ULL & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.reg_rsp_o)) 
                                 & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__idx_o)))) {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__write_state_d = 5U;
                    }
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[0U] = 0x10000000U;
                }
            } else if ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__write_state_q))) {
                if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__write_state_q))) {
                    if (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.__PVT__u_reg__DOT__u_status_ready__DOT__wr_data) {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__write_state_d = 4U;
                    }
                } else {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__spi_host_reg_req_offset = 0x2cU;
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U] 
                        = (0x30U | vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U]);
                    if ((IData)(((0x100000000ULL == 
                                  (0x300000000ULL & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.reg_rsp_o)) 
                                 & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__idx_o)))) {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__write_state_d = 3U;
                    }
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[0U] = 6U;
                }
            } else if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__write_state_q))) {
                if ((0x48U > (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.__PVT__u_data_fifos__DOT__tx_depth))) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__write_state_d = 2U;
                }
            } else {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__write_state_d = 1U;
            }
        } else {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__sector_offset 
                = ((0U == vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__sector_iter_offset_q)
                    ? (0xfffU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[3U] 
                                 >> 0xaU)) : 0U);
            if ((0U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__modify_state_q))) {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__top_state_d = 6U;
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__dma_init_return_d = 1U;
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__modify_state_d = 1U;
            } else if ((1U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__modify_state_q))) {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__modify_state_d = 2U;
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[8U] 
                    = ((0x1ffffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[8U]) 
                       | ((IData)((1ULL | ((QData)((IData)(
                                                           (((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[2U] 
                                                              << 0x16U) 
                                                             | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[1U] 
                                                                >> 0xaU)) 
                                                            + vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__md_offset_q))) 
                                           << 1U))) 
                          << 0x19U));
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[9U] 
                    = (0x3ffffffU & (((IData)((1ULL 
                                               | ((QData)((IData)(
                                                                  (((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[2U] 
                                                                     << 0x16U) 
                                                                    | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[1U] 
                                                                       >> 0xaU)) 
                                                                   + vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__md_offset_q))) 
                                                  << 1U))) 
                                      >> 7U) | ((IData)(
                                                        ((1ULL 
                                                          | ((QData)((IData)(
                                                                             (((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[2U] 
                                                                                << 0x16U) 
                                                                               | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[1U] 
                                                                                >> 0xaU)) 
                                                                              + vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__md_offset_q))) 
                                                             << 1U)) 
                                                         >> 0x20U)) 
                                                << 0x19U)));
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[7U] 
                    = ((0xffffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[7U]) 
                       | ((IData)((1ULL | ((QData)((IData)(
                                                           (((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[3U] 
                                                              << 0x16U) 
                                                             | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[2U] 
                                                                >> 0xaU)) 
                                                            + vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__sector_offset))) 
                                           << 1U))) 
                          << 0x18U));
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[8U] 
                    = ((0xfe000000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[8U]) 
                       | (((IData)((1ULL | ((QData)((IData)(
                                                            (((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[3U] 
                                                               << 0x16U) 
                                                              | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[2U] 
                                                                 >> 0xaU)) 
                                                             + vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__sector_offset))) 
                                            << 1U))) 
                           >> 8U) | ((IData)(((1ULL 
                                               | ((QData)((IData)(
                                                                  (((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[3U] 
                                                                     << 0x16U) 
                                                                    | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[2U] 
                                                                       >> 0xaU)) 
                                                                   + vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__sector_offset))) 
                                                  << 1U)) 
                                              >> 0x20U)) 
                                     << 0x18U)));
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[5U] 
                    = (0x9000U | (0xfff80fffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[5U]));
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[4U] 
                    = (0x12000U | (0xfff01fffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[4U]));
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[2U] 
                    = (0x92000U | (0x1fffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[2U]));
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[3U] 
                    = (0x10U | (0xffe00000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[3U]));
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[0U] 
                    = (1U | (0xfffffe00U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[0U]));
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[6U] 
                    = (0x40U | vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[6U]);
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__dma_size 
                    = ((((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[1U] 
                          << 0x16U) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[0U] 
                                       >> 0xaU)) < 
                        ((IData)(0x1000U) - vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__sector_offset))
                        ? ((0U == (3U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[0U] 
                                         >> 0xaU)))
                            ? VL_SHIFTR_III(32,32,32, 
                                            ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[1U] 
                                              << 0x16U) 
                                             | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[0U] 
                                                >> 0xaU)), 2U)
                            : ((IData)(1U) + VL_SHIFTR_III(32,32,32, 
                                                           ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[1U] 
                                                             << 0x16U) 
                                                            | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[0U] 
                                                               >> 0xaU)), 2U)))
                        : VL_SHIFTR_III(32,32,32, ((IData)(0x1000U) 
                                                   - vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__sector_offset), 2U));
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[6U] 
                    = ((0xff80007fU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[6U]) 
                       | (0x7fff80U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__dma_size 
                                       << 7U)));
            } else if ((2U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__modify_state_q))) {
                if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_write_unit_i__DOT__dma_done) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__hw2reg 
                        = (4ULL | vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__hw2reg);
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__modify_state_d = 0U;
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__top_state_d = 5U;
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__write_state_d = 0U;
                    if ((((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[1U] 
                           << 0x16U) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[0U] 
                                        >> 0xaU)) < 
                         ((IData)(0x1000U) - vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__sector_offset))) {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__hw2reg 
                            = (0x7f800000007ULL & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__hw2reg);
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__md_offset_d = 0U;
                    } else {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__hw2reg 
                            = ((0x7f800000007ULL & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__hw2reg) 
                               | ((QData)((IData)((
                                                   ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[1U] 
                                                     << 0x16U) 
                                                    | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[0U] 
                                                       >> 0xaU)) 
                                                   - 
                                                   ((IData)(0x1000U) 
                                                    - vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__sector_offset)))) 
                                  << 3U));
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__md_offset_d 
                            = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__md_offset_q 
                               + ((IData)(0x1000U) 
                                  - vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__sector_offset));
                    }
                }
            } else {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__modify_state_d = 0U;
            }
        }
    } else if ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__top_state_q))) {
        if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__top_state_q))) {
            if ((8U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__erase_state_q))) {
                if ((4U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__erase_state_q))) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__erase_state_d = 0U;
                } else if ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__erase_state_q))) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__erase_state_d = 0U;
                } else if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__erase_state_q))) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__erase_state_d = 0U;
                } else {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__spi_host_reg_req_offset = 0x24U;
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U] 
                        = (0x30U | vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U]);
                    if ((IData)(((0x100000000ULL == 
                                  (0x300000000ULL & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.reg_rsp_o)) 
                                 & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__idx_o)))) {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__erase_state_d = 0U;
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__top_state_d = 2U;
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__fwait_state_d = 1U;
                    }
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[0U] = 0x10000003U;
                }
            } else if ((4U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__erase_state_q))) {
                if ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__erase_state_q))) {
                    if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__erase_state_q))) {
                        if (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.__PVT__u_reg__DOT__u_status_ready__DOT__wr_data) {
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__erase_state_d = 8U;
                        }
                    } else {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__spi_host_reg_req_offset = 0x2cU;
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U] 
                            = (0x30U | vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U]);
                        if ((IData)(((0x100000000ULL 
                                      == (0x300000000ULL 
                                          & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.reg_rsp_o)) 
                                     & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__idx_o)))) {
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__erase_state_d = 7U;
                        }
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__flash_address 
                            = ((0xfff000U & ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[4U] 
                                              << 0x16U) 
                                             | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[3U] 
                                                >> 0xaU))) 
                               + vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__sector_iter_offset_q);
                        VL_ASSIGNSEL_WI(70, 32, 0U, vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req, 
                                        (0x20U | (0xffffff00U 
                                                  & ([&]() {
                                            vlSelfRef.__Vfunc_testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__bitfield_byteswap32__57__adress_to_swap 
                                                = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__flash_address;
                                            vlSelfRef.__Vfunc_testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__bitfield_byteswap32__57__Vfuncout 
                                                = (
                                                   ((vlSelfRef.__Vfunc_testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__bitfield_byteswap32__57__adress_to_swap 
                                                     << 0x18U) 
                                                    | (0xff0000U 
                                                       & (vlSelfRef.__Vfunc_testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__bitfield_byteswap32__57__adress_to_swap 
                                                          << 8U))) 
                                                   | ((0xff00U 
                                                       & (vlSelfRef.__Vfunc_testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__bitfield_byteswap32__57__adress_to_swap 
                                                          >> 8U)) 
                                                      | (vlSelfRef.__Vfunc_testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__bitfield_byteswap32__57__adress_to_swap 
                                                         >> 0x18U)));
                                        }(), vlSelfRef.__Vfunc_testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__bitfield_byteswap32__57__Vfuncout))));
                    }
                } else if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__erase_state_q))) {
                    if ((0x48U > (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.__PVT__u_data_fifos__DOT__tx_depth))) {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__erase_state_d = 6U;
                    }
                } else {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__spi_host_reg_req_offset = 0x24U;
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U] 
                        = (0x30U | vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U]);
                    if ((IData)(((0x100000000ULL == 
                                  (0x300000000ULL & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.reg_rsp_o)) 
                                 & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__idx_o)))) {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__erase_state_d = 5U;
                    }
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[0U] = 0x10000000U;
                }
            } else if ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__erase_state_q))) {
                if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__erase_state_q))) {
                    if (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.__PVT__u_reg__DOT__u_status_ready__DOT__wr_data) {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__erase_state_d = 4U;
                    }
                } else {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__spi_host_reg_req_offset = 0x2cU;
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U] 
                        = (0x30U | vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U]);
                    if ((IData)(((0x100000000ULL == 
                                  (0x300000000ULL & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.reg_rsp_o)) 
                                 & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__idx_o)))) {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__erase_state_d = 3U;
                    }
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[0U] = 6U;
                }
            } else if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__erase_state_q))) {
                if ((0x48U > (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.__PVT__u_data_fifos__DOT__tx_depth))) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__erase_state_d = 2U;
                }
            } else {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__erase_state_d = 1U;
            }
        } else if ((8U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__fwait_state_q))) {
            if ((4U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__fwait_state_q))) {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__fwait_state_d = 0U;
            } else if ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__fwait_state_q))) {
                if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__fwait_state_q))) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__fwait_state_d = 0U;
                } else {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__spi_host_reg_req_offset = 0x28U;
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U] 
                        = (0x20U | (0xfU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U]));
                    if ((IData)(((0x100000000ULL == 
                                  (0x300000000ULL & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.reg_rsp_o)) 
                                 & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__idx_o)))) {
                        if ((1U & (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.reg_rsp_o))) {
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__fwait_state_d = 1U;
                        } else if ((0U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__fwait_cnt_q))) {
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__fwait_cnt_d = 1U;
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__fwait_state_d = 0U;
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__top_state_d = 3U;
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__erase_state_d = 0U;
                        } else if ((1U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__fwait_cnt_q))) {
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__fwait_cnt_d = 2U;
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__fwait_state_d = 0U;
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__top_state_d = 4U;
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__modify_state_d = 0U;
                        } else if ((2U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__fwait_cnt_q))) {
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__fwait_cnt_d = 0U;
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__fwait_state_d = 0U;
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__top_state_d = 0U;
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__md_offset_d = 0U;
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__sector_iter_offset_d = 0U;
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__hw2reg 
                                = (0x20000000000ULL 
                                   | (0x1ffffffffffULL 
                                      & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__hw2reg));
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__hw2reg 
                                = ((0x7fffffffffcULL 
                                    & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__hw2reg) 
                                   | (IData)((IData)(
                                                     (1U 
                                                      | (2U 
                                                         & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[0U] 
                                                            >> 7U))))));
                        }
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__fwait_state_q))) {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__spi_host_reg_req_offset = 0x14U;
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U] 
                    = (0x20U | (0xfU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U]));
                if ((IData)(((0x100100000ULL == (0x300100000ULL 
                                                 & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.reg_rsp_o)) 
                             & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__idx_o)))) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__fwait_state_d = 0xaU;
                }
            } else {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__spi_host_reg_req_offset = 0x24U;
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U] 
                    = (0x30U | vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U]);
                if ((IData)(((0x100000000ULL == (0x300000000ULL 
                                                 & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.reg_rsp_o)) 
                             & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__idx_o)))) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__fwait_state_d = 9U;
                }
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[0U] = 0x8000000U;
            }
        } else if ((4U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__fwait_state_q))) {
            if ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__fwait_state_q))) {
                if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__fwait_state_q))) {
                    if (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.__PVT__u_reg__DOT__u_status_ready__DOT__wr_data) {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__fwait_state_d = 8U;
                    }
                } else {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__spi_host_reg_req_offset = 0x24U;
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U] 
                        = (0x30U | vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U]);
                    if ((IData)(((0x100000000ULL == 
                                  (0x300000000ULL & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.reg_rsp_o)) 
                                 & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__idx_o)))) {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__fwait_state_d = 7U;
                    }
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[0U] = 0x11000000U;
                }
            } else if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__fwait_state_q))) {
                if (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.__PVT__u_reg__DOT__u_status_ready__DOT__wr_data) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__fwait_state_d = 6U;
                }
            } else {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__spi_host_reg_req_offset = 0x2cU;
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U] 
                    = (0x30U | vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U]);
                if ((IData)(((0x100000000ULL == (0x300000000ULL 
                                                 & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.reg_rsp_o)) 
                             & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__idx_o)))) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__fwait_state_d = 5U;
                }
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[0U] = 5U;
            }
        } else if ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__fwait_state_q))) {
            if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__fwait_state_q))) {
                if ((0x48U > (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.__PVT__u_data_fifos__DOT__tx_depth))) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__fwait_state_d = 4U;
                }
            } else {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__spi_host_reg_req_offset = 0x24U;
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U] 
                    = (0x30U | vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U]);
                if ((IData)(((0x100000000ULL == (0x300000000ULL 
                                                 & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.reg_rsp_o)) 
                             & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__idx_o)))) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__fwait_state_d = 3U;
                }
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[0U] 
                    = (1U | (0xffffff00U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__sector_iter_offset_q));
            }
        } else if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__fwait_state_q))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__spi_host_reg_req_offset = 0x24U;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U] 
                = (0x20U | (0xfU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U]));
            if ((IData)(((0x100000000ULL == (0x300000000ULL 
                                             & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.reg_rsp_o)) 
                         & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__idx_o)))) {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__sector_iter_offset_d 
                    = (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.reg_rsp_o);
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__fwait_state_d = 2U;
            }
        } else if ((0U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__fwait_cnt_q))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__fwait_cnt_d = 1U;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__fwait_state_d = 0U;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__top_state_d = 4U;
        } else if ((1U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__fwait_cnt_q))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__fwait_cnt_d = 0U;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__fwait_state_d = 0U;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__top_state_d = 0U;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__md_offset_d = 0U;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__sector_iter_offset_d = 0U;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__hw2reg 
                = (0x20000000000ULL | (0x1ffffffffffULL 
                                       & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__hw2reg));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__hw2reg 
                = ((0x7fffffffffcULL & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__hw2reg) 
                   | (IData)((IData)((1U | (2U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[0U] 
                                                  >> 7U))))));
        }
    } else if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__top_state_q))) {
        if ((0x10U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__read_state_q))) {
            if ((8U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__read_state_q))) {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__read_state_d = 0U;
            } else if ((4U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__read_state_q))) {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__read_state_d = 0U;
            } else if ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__read_state_q))) {
                if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__read_state_q))) {
                    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_write_unit_i__DOT__dma_done) {
                        if ((0x1000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[4U])) {
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__read_state_d = 0U;
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__top_state_d = 0U;
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__hw2reg 
                                = (0x20000000000ULL 
                                   | (0x1ffffffffffULL 
                                      & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__hw2reg));
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__hw2reg 
                                = ((0x7fffffffffcULL 
                                    & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__hw2reg) 
                                   | (IData)((IData)(
                                                     (1U 
                                                      | (2U 
                                                         & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[0U] 
                                                            >> 7U))))));
                        } else {
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__read_state_d = 0U;
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__top_state_d = 2U;
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__fwait_state_d = 0U;
                        }
                    }
                } else {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__spi_host_reg_req_offset = 0x24U;
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U] 
                        = (0x30U | vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U]);
                    if ((IData)(((0x100000000ULL == 
                                  (0x300000000ULL & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.reg_rsp_o)) 
                                 & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__idx_o)))) {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__read_state_d = 0x13U;
                    }
                    vlSelfRef.__Vfunc_testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__spi_cmd_pack__61__len_m1 
                        = (0xffffffU & (((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[1U] 
                                          << 0x16U) 
                                         | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[0U] 
                                            >> 0xaU)) 
                                        - (IData)(1U)));
                    vlSelfRef.__Vfunc_testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__spi_cmd_pack__61__Vfuncout 
                        = (0xc000000U | vlSelfRef.__Vfunc_testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__spi_cmd_pack__61__len_m1);
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[0U] 
                        = vlSelfRef.__Vfunc_testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__spi_cmd_pack__61__Vfuncout;
                }
            } else if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__read_state_q))) {
                if (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.__PVT__u_reg__DOT__u_status_ready__DOT__wr_data) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__read_state_d = 0x12U;
                }
            } else {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__spi_host_reg_req_offset = 0x24U;
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U] 
                    = (0x30U | vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U]);
                if ((IData)(((0x100000000ULL == (0x300000000ULL 
                                                 & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.reg_rsp_o)) 
                             & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__idx_o)))) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__read_state_d = 0x11U;
                }
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[0U] = 0x5000007U;
            }
        } else if ((8U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__read_state_q))) {
            if ((4U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__read_state_q))) {
                if ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__read_state_q))) {
                    if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__read_state_q))) {
                        if (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.__PVT__u_reg__DOT__u_status_ready__DOT__wr_data) {
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__read_state_d = 0x10U;
                        }
                    } else {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__spi_host_reg_req_offset = 0x24U;
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U] 
                            = (0x30U | vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U]);
                        if ((IData)(((0x100000000ULL 
                                      == (0x300000000ULL 
                                          & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.reg_rsp_o)) 
                                     & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__idx_o)))) {
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__read_state_d = 0xfU;
                        }
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[0U] = 0x15000003U;
                    }
                } else if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__read_state_q))) {
                    if (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.__PVT__u_reg__DOT__u_status_ready__DOT__wr_data) {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__read_state_d = 0xeU;
                    }
                } else {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__spi_host_reg_req_offset = 0x2cU;
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U] 
                        = (0x30U | vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U]);
                    if ((IData)(((0x100000000ULL == 
                                  (0x300000000ULL & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.reg_rsp_o)) 
                                 & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__idx_o)))) {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__read_state_d = 0xdU;
                    }
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__flash_address 
                        = ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[4U] 
                            << 0x16U) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[3U] 
                                         >> 0xaU));
                    VL_ASSIGNSEL_WI(70, 32, 0U, vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req, 
                                    (0xff000000U | 
                                     VL_SHIFTR_III(32,32,32, 
                                                   ([&]() {
                                        vlSelfRef.__Vfunc_testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__bitfield_byteswap32__64__adress_to_swap 
                                            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__flash_address;
                                        vlSelfRef.__Vfunc_testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__bitfield_byteswap32__64__Vfuncout 
                                            = (((vlSelfRef.__Vfunc_testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__bitfield_byteswap32__64__adress_to_swap 
                                                 << 0x18U) 
                                                | (0xff0000U 
                                                   & (vlSelfRef.__Vfunc_testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__bitfield_byteswap32__64__adress_to_swap 
                                                      << 8U))) 
                                               | ((0xff00U 
                                                   & (vlSelfRef.__Vfunc_testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__bitfield_byteswap32__64__adress_to_swap 
                                                      >> 8U)) 
                                                  | (vlSelfRef.__Vfunc_testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__bitfield_byteswap32__64__adress_to_swap 
                                                     >> 0x18U)));
                                    }(), vlSelfRef.__Vfunc_testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__bitfield_byteswap32__64__Vfuncout), 8U)));
                }
            } else if ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__read_state_q))) {
                if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__read_state_q))) {
                    if (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.__PVT__u_reg__DOT__u_status_ready__DOT__wr_data) {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__read_state_d = 0xcU;
                    }
                } else {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__spi_host_reg_req_offset = 0x24U;
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U] 
                        = (0x30U | vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U]);
                    if ((IData)(((0x100000000ULL == 
                                  (0x300000000ULL & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.reg_rsp_o)) 
                                 & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__idx_o)))) {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__read_state_d = 0xbU;
                    }
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[0U] = 0x11000000U;
                }
            } else if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__read_state_q))) {
                if (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.__PVT__u_reg__DOT__u_status_ready__DOT__wr_data) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__read_state_d = 0xaU;
                }
            } else {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__spi_host_reg_req_offset = 0x2cU;
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U] 
                    = (0x30U | vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U]);
                if ((IData)(((0x100000000ULL == (0x300000000ULL 
                                                 & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.reg_rsp_o)) 
                             & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__idx_o)))) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__read_state_d = 9U;
                }
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[0U] = 0xebU;
            }
        } else if ((4U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__read_state_q))) {
            if ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__read_state_q))) {
                if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__read_state_q))) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__spi_host_reg_req_offset = 0x24U;
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U] 
                        = (0x30U | vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U]);
                    if ((IData)(((0x100000000ULL == 
                                  (0x300000000ULL & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.reg_rsp_o)) 
                                 & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__idx_o)))) {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__read_state_d = 0x13U;
                    }
                    VL_ASSIGNSEL_WI(70, 32, 0U, vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req, 
                                    ((0x1000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[4U])
                                      ? ([&]() {
                                    vlSelfRef.__Vfunc_testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__spi_cmd_pack__66__len_m1 
                                        = (0xffffffU 
                                           & (((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[1U] 
                                                << 0x16U) 
                                               | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[0U] 
                                                  >> 0xaU)) 
                                              - (IData)(1U)));
                                    vlSelfRef.__Vfunc_testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__spi_cmd_pack__66__Vfuncout 
                                        = (0x8000000U 
                                           | vlSelfRef.__Vfunc_testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__spi_cmd_pack__66__len_m1);
                                }(), vlSelfRef.__Vfunc_testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__spi_cmd_pack__66__Vfuncout)
                                      : 0x8000fffU));
                } else if (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.__PVT__u_reg__DOT__u_status_ready__DOT__wr_data) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__read_state_d = 7U;
                }
            } else if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__read_state_q))) {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__spi_host_reg_req_offset = 0x24U;
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U] 
                    = (0x30U | vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U]);
                if ((IData)(((0x100000000ULL == (0x300000000ULL 
                                                 & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.reg_rsp_o)) 
                             & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__idx_o)))) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__read_state_d = 6U;
                }
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[0U] = 0x11000003U;
            } else if (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.__PVT__u_reg__DOT__u_status_ready__DOT__wr_data) {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__read_state_d = 5U;
            }
        } else if ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__read_state_q))) {
            if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__read_state_q))) {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__spi_host_reg_req_offset = 0x2cU;
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U] 
                    = (0x30U | vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U]);
                if ((IData)(((0x100000000ULL == (0x300000000ULL 
                                                 & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.reg_rsp_o)) 
                             & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__idx_o)))) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__read_state_d = 4U;
                }
                if ((0x1000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[4U])) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__flash_address 
                        = (0xffffffU & ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[4U] 
                                         << 0x16U) 
                                        | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[3U] 
                                           >> 0xaU)));
                    VL_ASSIGNSEL_WI(70, 32, 0U, vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req, 
                                    (3U | (0xffffff00U 
                                           & ([&]() {
                                        vlSelfRef.__Vfunc_testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__bitfield_byteswap32__69__adress_to_swap 
                                            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__flash_address;
                                        vlSelfRef.__Vfunc_testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__bitfield_byteswap32__69__Vfuncout 
                                            = (((vlSelfRef.__Vfunc_testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__bitfield_byteswap32__69__adress_to_swap 
                                                 << 0x18U) 
                                                | (0xff0000U 
                                                   & (vlSelfRef.__Vfunc_testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__bitfield_byteswap32__69__adress_to_swap 
                                                      << 8U))) 
                                               | ((0xff00U 
                                                   & (vlSelfRef.__Vfunc_testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__bitfield_byteswap32__69__adress_to_swap 
                                                      >> 8U)) 
                                                  | (vlSelfRef.__Vfunc_testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__bitfield_byteswap32__69__adress_to_swap 
                                                     >> 0x18U)));
                                    }(), vlSelfRef.__Vfunc_testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__bitfield_byteswap32__69__Vfuncout))));
                } else {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__flash_address 
                        = ((0xfff000U & ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[4U] 
                                          << 0x16U) 
                                         | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[3U] 
                                            >> 0xaU))) 
                           + vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__sector_iter_offset_q);
                    VL_ASSIGNSEL_WI(70, 32, 0U, vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req, 
                                    (3U | (0xffffff00U 
                                           & ([&]() {
                                        vlSelfRef.__Vfunc_testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__bitfield_byteswap32__70__adress_to_swap 
                                            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__flash_address;
                                        vlSelfRef.__Vfunc_testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__bitfield_byteswap32__70__Vfuncout 
                                            = (((vlSelfRef.__Vfunc_testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__bitfield_byteswap32__70__adress_to_swap 
                                                 << 0x18U) 
                                                | (0xff0000U 
                                                   & (vlSelfRef.__Vfunc_testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__bitfield_byteswap32__70__adress_to_swap 
                                                      << 8U))) 
                                               | ((0xff00U 
                                                   & (vlSelfRef.__Vfunc_testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__bitfield_byteswap32__70__adress_to_swap 
                                                      >> 8U)) 
                                                  | (vlSelfRef.__Vfunc_testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__bitfield_byteswap32__70__adress_to_swap 
                                                     >> 0x18U)));
                                    }(), vlSelfRef.__Vfunc_testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__bitfield_byteswap32__70__Vfuncout))));
                }
            } else if ((0x48U > (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.__PVT__u_data_fifos__DOT__tx_depth))) {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__read_state_d 
                    = ((0x800U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[4U])
                        ? 8U : 3U);
            }
        } else if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__read_state_q))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__read_state_d = 2U;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[7U] 
                = ((0xffffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[7U]) 
                   | ((IData)((1ULL | ((QData)((IData)(
                                                       ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[3U] 
                                                         << 0x16U) 
                                                        | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[2U] 
                                                           >> 0xaU)))) 
                                       << 1U))) << 0x18U));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[8U] 
                = (0xa2000000U | (((IData)((1ULL | 
                                            ((QData)((IData)(
                                                             ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[3U] 
                                                               << 0x16U) 
                                                              | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[2U] 
                                                                 >> 0xaU)))) 
                                             << 1U))) 
                                   >> 8U) | ((IData)(
                                                     ((1ULL 
                                                       | ((QData)((IData)(
                                                                          ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[3U] 
                                                                            << 0x16U) 
                                                                           | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[2U] 
                                                                              >> 0xaU)))) 
                                                          << 1U)) 
                                                      >> 0x20U)) 
                                             << 0x18U)));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[9U] 
                = (0x3ffffffU & (0x800800U | ((IData)(
                                                      ((1ULL 
                                                        | ((QData)((IData)(
                                                                           ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[3U] 
                                                                             << 0x16U) 
                                                                            | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[2U] 
                                                                               >> 0xaU)))) 
                                                           << 1U)) 
                                                       >> 0x20U)) 
                                              >> 8U)));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[5U] 
                = (0x1000U | (0xfff80fffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[5U]));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[4U] 
                = (0x12000U | (0xfff01fffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[4U]));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[2U] 
                = (0x92000U | (0x1fffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[2U]));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[3U] 
                = (0x90U | (0xffe00000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[3U]));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[0U] 
                = (1U | ((0xfffffe00U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[0U]) 
                         | (0x1feU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[0U] 
                                      << 1U))));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[6U] 
                = (0x40U | vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[6U]);
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__dma_size 
                = ((0x1000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[4U])
                    ? ((0U == (3U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[0U] 
                                     >> 0xaU))) ? VL_SHIFTR_III(32,32,32, 
                                                                ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[1U] 
                                                                  << 0x16U) 
                                                                 | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[0U] 
                                                                    >> 0xaU)), 2U)
                        : ((IData)(1U) + VL_SHIFTR_III(32,32,32, 
                                                       ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[1U] 
                                                         << 0x16U) 
                                                        | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[0U] 
                                                           >> 0xaU)), 2U)))
                    : 0x400U);
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[6U] 
                = ((0xff80007fU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[6U]) 
                   | (0x7fff80U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__dma_size 
                                   << 7U)));
        } else {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__top_state_d = 6U;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__dma_init_return_d = 0U;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__read_state_d = 1U;
        }
    } else if ((0x2000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__reg2hw[4U])) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__top_state_d = 1U;
    }
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_reg_top_i__DOT____Vcellout__u_hw_config_mode__q) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT____VdfgRegularize_hc3780e62_0_0[0U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[0U];
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT____VdfgRegularize_hc3780e62_0_0[1U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[1U];
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT____VdfgRegularize_hc3780e62_0_0[2U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[2U];
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT____VdfgRegularize_hc3780e62_0_0[3U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[3U];
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT____VdfgRegularize_hc3780e62_0_0[4U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[4U];
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT____VdfgRegularize_hc3780e62_0_0[5U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[5U];
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT____VdfgRegularize_hc3780e62_0_0[6U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[6U];
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT____VdfgRegularize_hc3780e62_0_0[7U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[7U];
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT____VdfgRegularize_hc3780e62_0_0[8U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[8U];
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT____VdfgRegularize_hc3780e62_0_0[9U] 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__external_dma_hw2reg_o[9U];
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT____VdfgRegularize_hc3780e62_0_0[0U] 
            = Vtestharness__ConstPool__CONST_h356ddd95_0[0U];
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT____VdfgRegularize_hc3780e62_0_0[1U] 
            = Vtestharness__ConstPool__CONST_h356ddd95_0[1U];
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT____VdfgRegularize_hc3780e62_0_0[2U] 
            = Vtestharness__ConstPool__CONST_h356ddd95_0[2U];
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT____VdfgRegularize_hc3780e62_0_0[3U] 
            = Vtestharness__ConstPool__CONST_h356ddd95_0[3U];
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT____VdfgRegularize_hc3780e62_0_0[4U] 
            = Vtestharness__ConstPool__CONST_h356ddd95_0[4U];
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT____VdfgRegularize_hc3780e62_0_0[5U] 
            = Vtestharness__ConstPool__CONST_h356ddd95_0[5U];
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT____VdfgRegularize_hc3780e62_0_0[6U] 
            = Vtestharness__ConstPool__CONST_h356ddd95_0[6U];
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT____VdfgRegularize_hc3780e62_0_0[7U] 
            = Vtestharness__ConstPool__CONST_h356ddd95_0[7U];
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT____VdfgRegularize_hc3780e62_0_0[8U] 
            = Vtestharness__ConstPool__CONST_h356ddd95_0[8U];
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT____VdfgRegularize_hc3780e62_0_0[9U] 
            = Vtestharness__ConstPool__CONST_h356ddd95_0[9U];
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[1U] 
        = ((IData)(0x20020000U) + (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__w25q128jw_controller_i__DOT__spi_host_reg_req_offset));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : ((2U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U] 
                      >> 4U)) | (1U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[6U] 
                                       >> 0x11U))));
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__idx_o) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
            = (IData)((((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[0U])) 
                        << 5U) | (QData)((IData)(((0x1eU 
                                                   & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U] 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U] 
                                                        >> 5U)))))));
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
            = (((IData)((((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[1U])) 
                          << 1U) | (QData)((IData)(
                                                   (1U 
                                                    & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U] 
                                                       >> 4U)))))) 
                << 5U) | (IData)(((((QData)((IData)(
                                                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[0U])) 
                                    << 5U) | (QData)((IData)(
                                                             ((0x1eU 
                                                               & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U] 
                                                                  << 1U)) 
                                                              | (1U 
                                                                 & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U] 
                                                                    >> 5U)))))) 
                                  >> 0x20U)));
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
            = (((IData)((((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[1U])) 
                          << 1U) | (QData)((IData)(
                                                   (1U 
                                                    & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U] 
                                                       >> 4U)))))) 
                >> 0x1bU) | ((IData)(((((QData)((IData)(
                                                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[1U])) 
                                        << 1U) | (QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__spi_host_reg_req[2U] 
                                                                     >> 4U))))) 
                                      >> 0x20U)) << 5U));
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
            = vlSelfRef.__VdfgRegularize_h16038c0c_0_32[0U];
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
            = vlSelfRef.__VdfgRegularize_h16038c0c_0_32[1U];
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
            = vlSelfRef.__VdfgRegularize_h16038c0c_0_32[2U];
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__0__KET__ 
        = ((1U > (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_d) 
              >> 1U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__idx_o 
        = (1U & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = (IData)((0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_d)));
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__28(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__28\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (1U & (((IData)((vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.reg_rsp_o 
                           >> 0x20U)) & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes))
                  ? ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_d)) 
                     | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__0__KET__))
                  : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__spi_subsystem_i__ot_reg_rsp_o 
        = (((QData)((IData)((1U & (IData)((vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.reg_rsp_o 
                                           >> 0x21U))))) 
            << 0x21U) | (((QData)((IData)((1U & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__idx_o)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.reg_rsp_o 
                                                            >> 0x20U)))))) 
                          << 0x20U) | (QData)((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.reg_rsp_o))));
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__34(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__34\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__spi_slave_miso_oe_x_muxed) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_spi_slave_miso__DOT__pad__strong__out1 
            = (1U & ((1U & (IData)((vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                                    >> 0x2bU))) ? (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                                                               >> 0x2bU)))
                                                    ? (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.i_reg_file__DOT____Vcellout__u_gpio_out_gpio_out_16__q)
                                                    : 
                                                   (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_txreg__DOT__data_int 
                                                    >> 0x1fU))
                      : (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_spi_slave_i__DOT__u_txreg__DOT__data_int 
                         >> 0x1fU)));
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__spi_slave_miso_in_x = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__gpio_16_in_x = 0U;
    if ((1U & (IData)((vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                       >> 0x2bU)))) {
        if ((1U & (~ (IData)((vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                              >> 0x2bU))))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__spi_slave_miso_in_x 
                = vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_spi_slave_miso__DOT__pad__strong__out1;
        }
        if ((1U & (IData)((vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                           >> 0x2bU)))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__gpio_16_in_x 
                = vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_spi_slave_miso__DOT__pad__strong__out1;
        }
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__spi_slave_miso_in_x 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_spi_slave_miso__DOT__pad__strong__out1;
    }
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__35(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__35\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__ungated_output_clock)))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__i_clk_gate__DOT__clk_en 
            = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__gate_en_q) 
               & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT____Vcellout__u_control_en__q));
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_global_trigger_slots 
        = ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT__status_rx_data_ready_qs) 
             << 4U) | ((((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT____Vcellout__u_use_spimemio__q)) 
                         & (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.tx_ready_o)) 
                        << 3U) | (((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT____Vcellout__u_use_spimemio__q)) 
                                   & (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i.rx_valid_o)) 
                                  << 2U))) | (((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.tx_ready_o) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i.rx_valid_o)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__sck 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__i_clk_gate__DOT__clk_en) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_clk_gen_i__DOT__ungated_output_clock));
}

extern const VlWide<18>/*575:0*/ Vtestharness__ConstPool__CONST_h775a3ab6_0;

VL_INLINE_OPT void Vtestharness___024root___nba_sequent__TOP__52(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_sequent__TOP__52\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4;
    testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4 = 0;
    CData/*0:0*/ testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____VdfgRegularize_h135b3f54_0_27;
    testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____VdfgRegularize_h135b3f54_0_27 = 0;
    CData/*0:0*/ testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT____VdfgRegularize_hcff0917f_0_12;
    testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT____VdfgRegularize_hcff0917f_0_12 = 0;
    CData/*0:0*/ testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____VdfgRegularize_hfbc725bf_0_16;
    testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____VdfgRegularize_hfbc725bf_0_16 = 0;
    CData/*0:0*/ __Vfunc_tl_a_user_chk__71__Vfuncout;
    __Vfunc_tl_a_user_chk__71__Vfuncout = 0;
    IData/*20:0*/ __Vfunc_tl_a_user_chk__71__user;
    __Vfunc_tl_a_user_chk__71__user = 0;
    CData/*0:0*/ __Vfunc_tl_a_user_chk__71__malformed_err;
    __Vfunc_tl_a_user_chk__71__malformed_err = 0;
    CData/*0:0*/ __Vfunc_tl_a_user_chk__72__Vfuncout;
    __Vfunc_tl_a_user_chk__72__Vfuncout = 0;
    IData/*20:0*/ __Vfunc_tl_a_user_chk__72__user;
    __Vfunc_tl_a_user_chk__72__user = 0;
    CData/*0:0*/ __Vfunc_tl_a_user_chk__72__malformed_err;
    __Vfunc_tl_a_user_chk__72__malformed_err = 0;
    CData/*0:0*/ __Vfunc_tl_a_user_chk__73__Vfuncout;
    __Vfunc_tl_a_user_chk__73__Vfuncout = 0;
    IData/*20:0*/ __Vfunc_tl_a_user_chk__73__user;
    __Vfunc_tl_a_user_chk__73__user = 0;
    CData/*0:0*/ __Vfunc_tl_a_user_chk__73__malformed_err;
    __Vfunc_tl_a_user_chk__73__malformed_err = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<7>/*223:0*/ __Vtemp_8;
    VlWide<10>/*319:0*/ __Vtemp_10;
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__i2s_rx_channel_i__DOT__en 
        = (IData)((0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT____Vcellout__u_control_en_rx__q)));
    if (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) {
        if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT__u_control_data_width__DOT__wr_en) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT____Vcellout__u_control_rx_start_channel__q 
                = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT__u_control_data_width__DOT__wr_en) 
                   & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xdU] 
                      >> 0xeU));
        }
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT____Vcellout__u_control_rx_start_channel__q = 0U;
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0U] 
        = Vtestharness__ConstPool__CONST_h775a3ab6_0[0U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[1U] 
        = Vtestharness__ConstPool__CONST_h775a3ab6_0[1U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U] 
        = Vtestharness__ConstPool__CONST_h775a3ab6_0[2U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[3U] 
        = Vtestharness__ConstPool__CONST_h775a3ab6_0[3U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[4U] 
        = Vtestharness__ConstPool__CONST_h775a3ab6_0[4U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[5U] 
        = Vtestharness__ConstPool__CONST_h775a3ab6_0[5U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[6U] 
        = Vtestharness__ConstPool__CONST_h775a3ab6_0[6U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U] 
        = Vtestharness__ConstPool__CONST_h775a3ab6_0[7U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
        = Vtestharness__ConstPool__CONST_h775a3ab6_0[8U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
        = Vtestharness__ConstPool__CONST_h775a3ab6_0[9U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
        = Vtestharness__ConstPool__CONST_h775a3ab6_0[0xaU];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xbU] 
        = Vtestharness__ConstPool__CONST_h775a3ab6_0[0xbU];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xcU] 
        = Vtestharness__ConstPool__CONST_h775a3ab6_0[0xcU];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xdU] 
        = Vtestharness__ConstPool__CONST_h775a3ab6_0[0xdU];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xeU] 
        = Vtestharness__ConstPool__CONST_h775a3ab6_0[0xeU];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
        = Vtestharness__ConstPool__CONST_h775a3ab6_0[0xfU];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
        = Vtestharness__ConstPool__CONST_h775a3ab6_0[0x10U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
        = Vtestharness__ConstPool__CONST_h775a3ab6_0[0x11U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__reg_demux_i__DOT____Vlvbound_h3cf4e6dc__0[0U] 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__peripheral_req[0U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__reg_demux_i__DOT____Vlvbound_h3cf4e6dc__0[1U] 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__peripheral_req[1U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__reg_demux_i__DOT____Vlvbound_h3cf4e6dc__0[2U] 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__peripheral_req[2U];
    if ((0x22fU >= (0x3ffU & ((IData)(0x46U) * (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__peripheral_select))))) {
        VL_ASSIGNSEL_WW(560, 70, (0x3ffU & ((IData)(0x46U) 
                                            * (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__peripheral_select))), vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o, vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__reg_demux_i__DOT____Vlvbound_h3cf4e6dc__0);
    }
    if ((1U & (~ VL_ONEHOT_I(((((0x14U == (0x1fU & 
                                           (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xeU] 
                                            >> 4U))) 
                                << 5U) | (((0x10U == 
                                            (0x1fU 
                                             & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xeU] 
                                                >> 4U))) 
                                           << 4U) | 
                                          ((0xcU == 
                                            (0x1fU 
                                             & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xeU] 
                                                >> 4U))) 
                                           << 3U))) 
                              | (((8U == (0x1fU & (
                                                   vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xeU] 
                                                   >> 4U))) 
                                  << 2U) | (((4U == 
                                              (0x1fU 
                                               & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xeU] 
                                                  >> 4U))) 
                                             << 1U) 
                                            | (0U == 
                                               (0x1fU 
                                                & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xeU] 
                                                   >> 4U)))))))))) {
        if ((0U != ((((0x14U == (0x1fU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xeU] 
                                          >> 4U))) 
                      << 5U) | (((0x10U == (0x1fU & 
                                            (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xeU] 
                                             >> 4U))) 
                                 << 4U) | ((0xcU == 
                                            (0x1fU 
                                             & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xeU] 
                                                >> 4U))) 
                                           << 3U))) 
                    | (((8U == (0x1fU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xeU] 
                                         >> 4U))) << 2U) 
                       | (((4U == (0x1fU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xeU] 
                                            >> 4U))) 
                           << 1U) | (0U == (0x1fU & 
                                            (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xeU] 
                                             >> 4U)))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: i2s_reg_top.sv:589: Assertion failed in %Ntestharness.gr_heep_i.core_v_mini_mcu_i.peripheral_subsystem_i.i2s_i.i2s_reg_top_i: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                VL_STOP_MT("../../../hw/vendor/x-heep/hw/vendor/xheep_i2s/rtl/i2s_reg_top.sv", 589, "");
            }
        }
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__complete_id[0U] 
        = (0x3fU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0U]);
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT__reg_we 
        = (IData)((0x300U == (0x300U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU])));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT__reg_re 
        = (IData)((0x200U == (0x300U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU])));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit 
        = (((((0xbU == (0xfU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                                >> 0xcU))) << 0xbU) 
             | (((0xaU == (0xfU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                                   >> 0xcU))) << 0xaU) 
                | ((9U == (0xfU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                                   >> 0xcU))) << 9U))) 
            | (((8U == (0xfU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                                >> 0xcU))) << 8U) | 
               (((7U == (0xfU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                                 >> 0xcU))) << 7U) 
                | ((6U == (0xfU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                                   >> 0xcU))) << 6U)))) 
           | ((((5U == (0xfU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                                >> 0xcU))) << 5U) | 
               (((4U == (0xfU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                                 >> 0xcU))) << 4U) 
                | ((3U == (0xfU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                                   >> 0xcU))) << 3U))) 
              | (((2U == (0xfU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                                  >> 0xcU))) << 2U) 
                 | (((1U == (0xfU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                                     >> 0xcU))) << 1U) 
                    | (0U == (0xfU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                                      >> 0xcU)))))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0[vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Pre_h5ee62396_0_0] = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0[(0x3fcU 
                                                                                & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[1U])] = 1U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Pre_h5ee62396_0_0 
        = (0x3fcU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[1U]);
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__addr_hit 
        = ((((((0x15U == (0x1fU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U] 
                                   >> 0x14U))) << 0x15U) 
              | (((0x14U == (0x1fU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U] 
                                      >> 0x14U))) << 0x14U) 
                 | ((0x13U == (0x1fU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U] 
                                        >> 0x14U))) 
                    << 0x13U))) | (((0x12U == (0x1fU 
                                               & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U] 
                                                  >> 0x14U))) 
                                    << 0x12U) | (((0x11U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U] 
                                                       >> 0x14U))) 
                                                  << 0x11U) 
                                                 | ((0x10U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U] 
                                                         >> 0x14U))) 
                                                    << 0x10U)))) 
            | ((((0xfU == (0x1fU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U] 
                                    >> 0x14U))) << 0xfU) 
                | (((0xeU == (0x1fU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U] 
                                       >> 0x14U))) 
                    << 0xeU) | ((0xdU == (0x1fU & (
                                                   vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U] 
                                                   >> 0x14U))) 
                                << 0xdU))) | (((0xcU 
                                                == 
                                                (0x1fU 
                                                 & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U] 
                                                    >> 0x14U))) 
                                               << 0xcU) 
                                              | ((0xbU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U] 
                                                      >> 0x14U))) 
                                                 << 0xbU)))) 
           | (((((0xaU == (0x1fU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U] 
                                    >> 0x14U))) << 0xaU) 
                | (((9U == (0x1fU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U] 
                                     >> 0x14U))) << 9U) 
                   | ((8U == (0x1fU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U] 
                                       >> 0x14U))) 
                      << 8U))) | (((7U == (0x1fU & 
                                           (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U] 
                                            >> 0x14U))) 
                                   << 7U) | (((6U == 
                                               (0x1fU 
                                                & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U] 
                                                   >> 0x14U))) 
                                              << 6U) 
                                             | ((5U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U] 
                                                     >> 0x14U))) 
                                                << 5U)))) 
              | ((((4U == (0x1fU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U] 
                                    >> 0x14U))) << 4U) 
                  | (((3U == (0x1fU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U] 
                                       >> 0x14U))) 
                      << 3U) | ((2U == (0x1fU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U] 
                                                 >> 0x14U))) 
                                << 2U))) | (((1U == 
                                              (0x1fU 
                                               & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U] 
                                                  >> 0x14U))) 
                                             << 1U) 
                                            | (0U == 
                                               (0x1fU 
                                                & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U] 
                                                   >> 0x14U)))))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__a_ack 
        = ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__outstanding)) 
           & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
              >> 0xfU));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT____VdfgRegularize_h76d05708_0_1 
        = ((0U == ((0x4000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U])
                    ? 0U : 4U)) | (1U == ((0x4000U 
                                           & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U])
                                           ? 0U : 4U)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_h2d[0U] 
        = (IData)((0x10001ULL | (((QData)((IData)((0xfU 
                                                   & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                      >> 0xaU)))) 
                                  << 0x36U) | ((QData)((IData)(
                                                               ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                                                                 << 0x16U) 
                                                                | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
                                                                   >> 0xaU)))) 
                                               << 0x16U))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_h2d[1U] 
        = ((0xfc000000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_h2d[1U]) 
           | (IData)(((0x10001ULL | (((QData)((IData)(
                                                      (0xfU 
                                                       & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                          >> 0xaU)))) 
                                      << 0x36U) | ((QData)((IData)(
                                                                   ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                                                                     << 0x16U) 
                                                                    | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
                                                                       >> 0xaU)))) 
                                                   << 0x16U))) 
                      >> 0x20U)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_h2d[1U] 
        = ((0x3ffffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_h2d[1U]) 
           | ((IData)((0x20000000000ULL | (QData)((IData)(
                                                          ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                            << 0x16U) 
                                                           | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                                                              >> 0xaU)))))) 
              << 0x1aU));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_h2d[2U] 
        = (((IData)((0x20000000000ULL | (QData)((IData)(
                                                        ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                          << 0x16U) 
                                                         | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                                                            >> 0xaU)))))) 
            >> 6U) | ((IData)(((0x20000000000ULL | (QData)((IData)(
                                                                   ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                                     << 0x16U) 
                                                                    | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                                                                       >> 0xaU))))) 
                               >> 0x20U)) << 0x1aU));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_h2d[3U] 
        = ((0x780U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_h2d[3U]) 
           | (0x7ffU & ((IData)(((0x20000000000ULL 
                                  | (QData)((IData)(
                                                    ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                      << 0x16U) 
                                                     | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                                                        >> 0xaU))))) 
                                 >> 0x20U)) >> 6U)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_h2d[3U] 
        = ((0x7fU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_h2d[3U]) 
           | (0x780U & ((0x400U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                   >> 5U)) | (((0x4000U 
                                                & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U])
                                                ? 0U
                                                : 4U) 
                                              << 7U))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_reg_if__DOT__a_ack 
        = (1U & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_reg_if__DOT__outstanding)) 
                 & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U] 
                    >> 5U)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT____VdfgRegularize_h76d05708_0_1 
        = ((0U == ((0x10U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])
                    ? 0U : 4U)) | (1U == ((0x10U & 
                                           vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])
                                           ? 0U : 4U)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__tl_reg_h2d[0U] 
        = (IData)((0x10001ULL | (((QData)((IData)((0xfU 
                                                   & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U]))) 
                                  << 0x36U) | ((QData)((IData)(
                                                               vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0U])) 
                                               << 0x16U))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__tl_reg_h2d[1U] 
        = ((0xfc000000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__tl_reg_h2d[1U]) 
           | (IData)(((0x10001ULL | (((QData)((IData)(
                                                      (0xfU 
                                                       & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U]))) 
                                      << 0x36U) | ((QData)((IData)(
                                                                   vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0U])) 
                                                   << 0x16U))) 
                      >> 0x20U)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__tl_reg_h2d[1U] 
        = ((0x3ffffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__tl_reg_h2d[1U]) 
           | ((IData)((0x20000000000ULL | (QData)((IData)(
                                                          vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[1U])))) 
              << 0x1aU));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__tl_reg_h2d[2U] 
        = (((IData)((0x20000000000ULL | (QData)((IData)(
                                                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[1U])))) 
            >> 6U) | ((IData)(((0x20000000000ULL | (QData)((IData)(
                                                                   vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[1U]))) 
                               >> 0x20U)) << 0x1aU));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__tl_reg_h2d[3U] 
        = ((0x780U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__tl_reg_h2d[3U]) 
           | (0x7ffU & ((IData)(((0x20000000000ULL 
                                  | (QData)((IData)(
                                                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[1U]))) 
                                 >> 0x20U)) >> 6U)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__tl_reg_h2d[3U] 
        = ((0x7fU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__tl_reg_h2d[3U]) 
           | (0x780U & ((0x400U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U] 
                                   << 5U)) | (((0x10U 
                                                & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])
                                                ? 0U
                                                : 4U) 
                                              << 7U))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_reg_if__DOT__a_ack 
        = (1U & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_reg_if__DOT__outstanding)) 
                 & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                    >> 0x17U)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT____VdfgRegularize_h76d05708_0_1 
        = ((0U == ((0x400000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U])
                    ? 0U : 4U)) | (1U == ((0x400000U 
                                           & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U])
                                           ? 0U : 4U)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__tl_reg_h2d[0U] 
        = (IData)((0x10001ULL | (((QData)((IData)((0xfU 
                                                   & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                                      >> 0x12U)))) 
                                  << 0x36U) | ((QData)((IData)(
                                                               ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U] 
                                                                 << 0xeU) 
                                                                | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[6U] 
                                                                   >> 0x12U)))) 
                                               << 0x16U))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__tl_reg_h2d[1U] 
        = ((0xfc000000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__tl_reg_h2d[1U]) 
           | (IData)(((0x10001ULL | (((QData)((IData)(
                                                      (0xfU 
                                                       & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                                          >> 0x12U)))) 
                                      << 0x36U) | ((QData)((IData)(
                                                                   ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U] 
                                                                     << 0xeU) 
                                                                    | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[6U] 
                                                                       >> 0x12U)))) 
                                                   << 0x16U))) 
                      >> 0x20U)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__tl_reg_h2d[1U] 
        = ((0x3ffffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__tl_reg_h2d[1U]) 
           | ((IData)((0x20000000000ULL | (QData)((IData)(
                                                          ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                                            << 0xeU) 
                                                           | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U] 
                                                              >> 0x12U)))))) 
              << 0x1aU));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__tl_reg_h2d[2U] 
        = (((IData)((0x20000000000ULL | (QData)((IData)(
                                                        ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                                          << 0xeU) 
                                                         | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U] 
                                                            >> 0x12U)))))) 
            >> 6U) | ((IData)(((0x20000000000ULL | (QData)((IData)(
                                                                   ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                                                     << 0xeU) 
                                                                    | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U] 
                                                                       >> 0x12U))))) 
                               >> 0x20U)) << 0x1aU));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__tl_reg_h2d[3U] 
        = ((0x780U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__tl_reg_h2d[3U]) 
           | (0x7ffU & ((IData)(((0x20000000000ULL 
                                  | (QData)((IData)(
                                                    ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                                      << 0xeU) 
                                                     | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U] 
                                                        >> 0x12U))))) 
                                 >> 0x20U)) >> 6U)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__tl_reg_h2d[3U] 
        = ((0x7fU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__tl_reg_h2d[3U]) 
           | (0x780U & ((0x400U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                   >> 0xdU)) | (((0x400000U 
                                                  & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U])
                                                  ? 0U
                                                  : 4U) 
                                                << 7U))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT__reg_error 
        = (((~ ((0x14U == (0x1fU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xeU] 
                                    >> 4U))) | ((0x10U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xeU] 
                                                     >> 4U))) 
                                                | ((0xcU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xeU] 
                                                        >> 4U))) 
                                                   | ((8U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xeU] 
                                                           >> 4U))) 
                                                      | ((4U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xeU] 
                                                              >> 4U))) 
                                                         | (0U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xeU] 
                                                                >> 4U))))))))) 
            & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT__reg_re) 
               | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT__reg_we))) 
           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT__reg_we) 
              & ((IData)(((0U == (0x1f0U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xeU])) 
                          & (0U != (3U & (~ ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
                                              << 0x1cU) 
                                             | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
                                                >> 4U))))))) 
                 | ((IData)(((0x40U == (0x1f0U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xeU])) 
                             & (0U != (1U & (~ ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
                                                 << 0x1cU) 
                                                | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
                                                   >> 4U))))))) 
                    | ((IData)(((0x80U == (0x1f0U & 
                                           vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xeU])) 
                                & (0U != (3U & (~ (
                                                   (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
                                                    << 0x1cU) 
                                                   | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
                                                      >> 4U))))))) 
                       | ((IData)(((0xc0U == (0x1f0U 
                                              & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xeU])) 
                                   & (0U != (0xfU & 
                                             (~ ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
                                                  << 0x1cU) 
                                                 | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
                                                    >> 4U))))))) 
                          | ((0U != (3U & (~ ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
                                               << 0x1cU) 
                                              | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
                                                 >> 4U))))) 
                             & ((0x10U == (0x1fU & 
                                           (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xeU] 
                                            >> 4U))) 
                                | (0x14U == (0x1fU 
                                             & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xeU] 
                                                >> 4U)))))))))));
    if ((1U & (~ VL_ONEHOT_I((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit))))) {
        if ((0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: uart_reg_top.sv:1575: Assertion failed in %Ntestharness.gr_heep_i.core_v_mini_mcu_i.peripheral_subsystem_i.uart_i.u_reg: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                VL_STOP_MT("../../../hw/vendor/x-heep/hw/vendor/lowrisc_opentitan/hw/ip/uart/rtl/uart_reg_top.sv", 1575, "");
            }
        }
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[0U] 
        = ((((((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                [0x7cU] << 0x1fU) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                     [0x78U] << 0x1eU)) 
              | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                  [0x74U] << 0x1dU) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                       [0x70U] << 0x1cU))) 
             | (((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                  [0x6cU] << 0x1bU) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                       [0x68U] << 0x1aU)) 
                | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                    [0x64U] << 0x19U) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                         [0x60U] << 0x18U)))) 
            | ((((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                  [0x5cU] << 0x17U) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                       [0x58U] << 0x16U)) 
                | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                    [0x54U] << 0x15U) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                         [0x50U] << 0x14U))) 
               | (((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                    [0x4cU] << 0x13U) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                         [0x48U] << 0x12U)) 
                  | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                      [0x44U] << 0x11U) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                           [0x40U] 
                                           << 0x10U))))) 
           | (((((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                  [0x3cU] << 0xfU) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                      [0x38U] << 0xeU)) 
                | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                    [0x34U] << 0xdU) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                        [0x30U] << 0xcU))) 
               | (((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                    [0x2cU] << 0xbU) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                        [0x28U] << 0xaU)) 
                  | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                      [0x24U] << 9U) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                        [0x20U] << 8U)))) 
              | ((((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                    [0x1cU] << 7U) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                      [0x18U] << 6U)) 
                  | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                      [0x14U] << 5U) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                        [0x10U] << 4U))) 
                 | (((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                      [0xcU] << 3U) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                       [8U] << 2U)) 
                    | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                        [4U] << 1U) | vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                       [0U])))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[1U] 
        = ((((((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                [0xfcU] << 0x1fU) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                     [0xf8U] << 0x1eU)) 
              | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                  [0xf4U] << 0x1dU) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                       [0xf0U] << 0x1cU))) 
             | (((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                  [0xecU] << 0x1bU) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                       [0xe8U] << 0x1aU)) 
                | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                    [0xe4U] << 0x19U) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                         [0xe0U] << 0x18U)))) 
            | ((((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                  [0xdcU] << 0x17U) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                       [0xd8U] << 0x16U)) 
                | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                    [0xd4U] << 0x15U) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                         [0xd0U] << 0x14U))) 
               | (((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                    [0xccU] << 0x13U) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                         [0xc8U] << 0x12U)) 
                  | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                      [0xc4U] << 0x11U) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                           [0xc0U] 
                                           << 0x10U))))) 
           | (((((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                  [0xbcU] << 0xfU) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                      [0xb8U] << 0xeU)) 
                | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                    [0xb4U] << 0xdU) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                        [0xb0U] << 0xcU))) 
               | (((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                    [0xacU] << 0xbU) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                        [0xa8U] << 0xaU)) 
                  | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                      [0xa4U] << 9U) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                        [0xa0U] << 8U)))) 
              | ((((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                    [0x9cU] << 7U) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                      [0x98U] << 6U)) 
                  | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                      [0x94U] << 5U) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                        [0x90U] << 4U))) 
                 | (((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                      [0x8cU] << 3U) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                        [0x88U] << 2U)) 
                    | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                        [0x84U] << 1U) | vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                       [0x80U])))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[2U] 
        = (0x1ffU & ((((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                        [0x210U] << 8U) | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                            [0x20cU] 
                                            << 7U) 
                                           | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                              [0x208U] 
                                              << 6U))) 
                      | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                          [0x204U] << 5U) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                             [0x200U] 
                                             << 4U))) 
                     | (((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                          [0x10cU] << 3U) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                             [0x108U] 
                                             << 2U)) 
                        | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                            [0x104U] << 1U) | vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                           [0x100U]))));
    if ((1U & (~ VL_ONEHOT_I(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__addr_hit)))) {
        if ((0U != vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__addr_hit)) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: i2c_reg_top.sv:3114: Assertion failed in %Ntestharness.gr_heep_i.core_v_mini_mcu_i.peripheral_subsystem_i.i2c_i.u_reg: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                VL_STOP_MT("../../../hw/vendor/x-heep/hw/vendor/lowrisc_opentitan/hw/ip/i2c/rtl/i2c_reg_top.sv", 3114, "");
            }
        }
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__rd_req 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & (4U == ((0x4000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U])
                      ? 0U : 4U)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__wr_req 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT____VdfgRegularize_h76d05708_0_1));
    __Vfunc_tl_a_user_chk__73__user = (0x1fffffU & 
                                       (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_h2d[0U] 
                                        >> 1U));
    __Vfunc_tl_a_user_chk__73__malformed_err = (1U 
                                                & (~ 
                                                   ((1U 
                                                     == 
                                                     (3U 
                                                      & (__Vfunc_tl_a_user_chk__73__user 
                                                         >> 0xeU))) 
                                                    | (2U 
                                                       == 
                                                       (3U 
                                                        & (__Vfunc_tl_a_user_chk__73__user 
                                                           >> 0xeU))))));
    __Vfunc_tl_a_user_chk__73__Vfuncout = __Vfunc_tl_a_user_chk__73__malformed_err;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__malformed_meta_err 
        = __Vfunc_tl_a_user_chk__73__Vfuncout;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk = 0U;
    if ((0x400U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_h2d[3U])) {
        if ((0U == (3U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_h2d[3U] 
                          >> 2U)))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk = 1U;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
                = (1U & (~ (0U != (0xfU & (((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_h2d[1U] 
                                             << 0xaU) 
                                            | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_h2d[1U] 
                                               >> 0x16U)) 
                                           & (~ ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                                                     >> 0xaU)))))))));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                = (0U != (0xfU & (((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_h2d[1U] 
                                    << 0xaU) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_h2d[1U] 
                                                >> 0x16U)) 
                                  & ((IData)(1U) << 
                                     (3U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                                            >> 0xaU))))));
        } else if ((1U == (3U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_h2d[3U] 
                                 >> 2U)))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk 
                = (1U & (~ (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_h2d[1U] 
                            >> 0x1aU)));
            if ((0x8000000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_h2d[1U])) {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
                    = (1U & (~ (0U != (3U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_h2d[1U] 
                                             >> 0x16U)))));
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                    = (3U == (3U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_h2d[1U] 
                                    >> 0x18U)));
            } else {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
                    = (1U & (~ (0U != (0xcU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_h2d[1U] 
                                               >> 0x16U)))));
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                    = (3U == (3U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_h2d[1U] 
                                    >> 0x16U)));
            }
        } else if ((2U == (3U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_h2d[3U] 
                                 >> 2U)))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk 
                = (1U & (~ (0U != (3U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_h2d[1U] 
                                         >> 0x1aU)))));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk = 1U;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                = (0xfU == (0xfU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_h2d[1U] 
                                    >> 0x16U)));
        } else {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk = 0U;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk = 0U;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_h2d[3U] 
                                                 >> 2U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_h2d[3U] 
                                                   >> 2U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_h2d[3U] 
                                                    >> 2U))))))))) {
            if ((0U != (((2U == (3U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_h2d[3U] 
                                       >> 2U))) << 2U) 
                        | (((1U == (3U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_h2d[3U] 
                                          >> 2U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_h2d[3U] 
                                                   >> 2U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:58: Assertion failed in %Ntestharness.gr_heep_i.core_v_mini_mcu_i.peripheral_subsystem_i.uart_i.u_reg.u_reg_if.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_h2d[3U] 
                                           >> 2U)));
                    VL_STOP_MT("../../../hw/vendor/x-heep/hw/vendor/lowrisc_opentitan/hw/ip/tlul/rtl/tlul_err.sv", 58, "");
                }
            }
        }
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk = 0U;
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_reg_if__DOT__rd_req 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & (4U == ((0x10U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])
                      ? 0U : 4U)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_reg_if__DOT__wr_req 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT____VdfgRegularize_h76d05708_0_1));
    __Vfunc_tl_a_user_chk__71__user = (0x1fffffU & 
                                       (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__tl_reg_h2d[0U] 
                                        >> 1U));
    __Vfunc_tl_a_user_chk__71__malformed_err = (1U 
                                                & (~ 
                                                   ((1U 
                                                     == 
                                                     (3U 
                                                      & (__Vfunc_tl_a_user_chk__71__user 
                                                         >> 0xeU))) 
                                                    | (2U 
                                                       == 
                                                       (3U 
                                                        & (__Vfunc_tl_a_user_chk__71__user 
                                                           >> 0xeU))))));
    __Vfunc_tl_a_user_chk__71__Vfuncout = __Vfunc_tl_a_user_chk__71__malformed_err;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_reg_if__DOT__malformed_meta_err 
        = __Vfunc_tl_a_user_chk__71__Vfuncout;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk = 0U;
    if ((0x400U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__tl_reg_h2d[3U])) {
        if ((0U == (3U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__tl_reg_h2d[3U] 
                          >> 2U)))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk = 1U;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
                = (1U & (~ (0U != (0xfU & (((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__tl_reg_h2d[1U] 
                                             << 0xaU) 
                                            | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__tl_reg_h2d[1U] 
                                               >> 0x16U)) 
                                           & (~ ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[1U]))))))));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                = (0U != (0xfU & (((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__tl_reg_h2d[1U] 
                                    << 0xaU) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__tl_reg_h2d[1U] 
                                                >> 0x16U)) 
                                  & ((IData)(1U) << 
                                     (3U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[1U])))));
        } else if ((1U == (3U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__tl_reg_h2d[3U] 
                                 >> 2U)))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk 
                = (1U & (~ (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__tl_reg_h2d[1U] 
                            >> 0x1aU)));
            if ((0x8000000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__tl_reg_h2d[1U])) {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
                    = (1U & (~ (0U != (3U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__tl_reg_h2d[1U] 
                                             >> 0x16U)))));
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                    = (3U == (3U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__tl_reg_h2d[1U] 
                                    >> 0x18U)));
            } else {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
                    = (1U & (~ (0U != (0xcU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__tl_reg_h2d[1U] 
                                               >> 0x16U)))));
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                    = (3U == (3U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__tl_reg_h2d[1U] 
                                    >> 0x16U)));
            }
        } else if ((2U == (3U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__tl_reg_h2d[3U] 
                                 >> 2U)))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk 
                = (1U & (~ (0U != (3U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__tl_reg_h2d[1U] 
                                         >> 0x1aU)))));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk = 1U;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                = (0xfU == (0xfU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__tl_reg_h2d[1U] 
                                    >> 0x16U)));
        } else {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk = 0U;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk = 0U;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__tl_reg_h2d[3U] 
                                                 >> 2U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__tl_reg_h2d[3U] 
                                                   >> 2U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__tl_reg_h2d[3U] 
                                                    >> 2U))))))))) {
            if ((0U != (((2U == (3U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__tl_reg_h2d[3U] 
                                       >> 2U))) << 2U) 
                        | (((1U == (3U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__tl_reg_h2d[3U] 
                                          >> 2U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__tl_reg_h2d[3U] 
                                                   >> 2U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:58: Assertion failed in %Ntestharness.gr_heep_i.core_v_mini_mcu_i.peripheral_subsystem_i.rv_plic_i.u_reg.u_reg_if.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__tl_reg_h2d[3U] 
                                           >> 2U)));
                    VL_STOP_MT("../../../hw/vendor/x-heep/hw/vendor/lowrisc_opentitan/hw/ip/tlul/rtl/tlul_err.sv", 58, "");
                }
            }
        }
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk = 0U;
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_reg_if__DOT__rd_req 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & (4U == ((0x400000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U])
                      ? 0U : 4U)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_reg_if__DOT__wr_req 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT____VdfgRegularize_h76d05708_0_1));
    __Vfunc_tl_a_user_chk__72__user = (0x1fffffU & 
                                       (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__tl_reg_h2d[0U] 
                                        >> 1U));
    __Vfunc_tl_a_user_chk__72__malformed_err = (1U 
                                                & (~ 
                                                   ((1U 
                                                     == 
                                                     (3U 
                                                      & (__Vfunc_tl_a_user_chk__72__user 
                                                         >> 0xeU))) 
                                                    | (2U 
                                                       == 
                                                       (3U 
                                                        & (__Vfunc_tl_a_user_chk__72__user 
                                                           >> 0xeU))))));
    __Vfunc_tl_a_user_chk__72__Vfuncout = __Vfunc_tl_a_user_chk__72__malformed_err;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_reg_if__DOT__malformed_meta_err 
        = __Vfunc_tl_a_user_chk__72__Vfuncout;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk = 0U;
    if ((0x400U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__tl_reg_h2d[3U])) {
        if ((0U == (3U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__tl_reg_h2d[3U] 
                          >> 2U)))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk = 1U;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
                = (1U & (~ (0U != (0xfU & (((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__tl_reg_h2d[1U] 
                                             << 0xaU) 
                                            | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__tl_reg_h2d[1U] 
                                               >> 0x16U)) 
                                           & (~ ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U] 
                                                     >> 0x12U)))))))));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                = (0U != (0xfU & (((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__tl_reg_h2d[1U] 
                                    << 0xaU) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__tl_reg_h2d[1U] 
                                                >> 0x16U)) 
                                  & ((IData)(1U) << 
                                     (3U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U] 
                                            >> 0x12U))))));
        } else if ((1U == (3U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__tl_reg_h2d[3U] 
                                 >> 2U)))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk 
                = (1U & (~ (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__tl_reg_h2d[1U] 
                            >> 0x1aU)));
            if ((0x8000000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__tl_reg_h2d[1U])) {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
                    = (1U & (~ (0U != (3U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__tl_reg_h2d[1U] 
                                             >> 0x16U)))));
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                    = (3U == (3U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__tl_reg_h2d[1U] 
                                    >> 0x18U)));
            } else {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
                    = (1U & (~ (0U != (0xcU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__tl_reg_h2d[1U] 
                                               >> 0x16U)))));
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                    = (3U == (3U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__tl_reg_h2d[1U] 
                                    >> 0x16U)));
            }
        } else if ((2U == (3U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__tl_reg_h2d[3U] 
                                 >> 2U)))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk 
                = (1U & (~ (0U != (3U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__tl_reg_h2d[1U] 
                                         >> 0x1aU)))));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk = 1U;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                = (0xfU == (0xfU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__tl_reg_h2d[1U] 
                                    >> 0x16U)));
        } else {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk = 0U;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk = 0U;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__tl_reg_h2d[3U] 
                                                 >> 2U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__tl_reg_h2d[3U] 
                                                   >> 2U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__tl_reg_h2d[3U] 
                                                    >> 2U))))))))) {
            if ((0U != (((2U == (3U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__tl_reg_h2d[3U] 
                                       >> 2U))) << 2U) 
                        | (((1U == (3U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__tl_reg_h2d[3U] 
                                          >> 2U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__tl_reg_h2d[3U] 
                                                   >> 2U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:58: Assertion failed in %Ntestharness.gr_heep_i.core_v_mini_mcu_i.peripheral_subsystem_i.i2c_i.u_reg.u_reg_if.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__tl_reg_h2d[3U] 
                                           >> 2U)));
                    VL_STOP_MT("../../../hw/vendor/x-heep/hw/vendor/lowrisc_opentitan/hw/ip/tlul/rtl/tlul_err.sv", 58, "");
                }
            }
        }
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk = 0U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk = 0U;
    }
    testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT____VdfgRegularize_hcff0917f_0_12 
        = ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT__reg_error)) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT__reg_we));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT__rxdata_re 
        = (IData)((((0xc0U == (0x1f0U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xeU])) 
                    & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT__reg_error))) 
                   & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT__reg_re)));
    if ((1U & (~ VL_ONEHOT_W(3, vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit)))) {
        if ((0U != ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[0U] 
                     | vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[1U]) 
                    | vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[2U]))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: rv_plic_reg_top.sv:8235: Assertion failed in %Ntestharness.gr_heep_i.core_v_mini_mcu_i.peripheral_subsystem_i.rv_plic_i.u_reg: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                VL_STOP_MT("../../../hw/vendor/x-heep/hw/vendor/lowrisc_opentitan/hw/ip/rv_plic/rtl/rv_plic_reg_top.sv", 8235, "");
            }
        }
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next = 0U;
    if ((IData)((0U != (0xffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[0U])))) {
        if ((1U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[0U])) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff00U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_0_p_7__DOT__q) 
                         << 7U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_0_p_6__DOT__q) 
                                   << 6U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_0_p_5__DOT__q) 
                                               << 5U) 
                                              | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_0_p_4__DOT__q) 
                                                 << 4U))) 
                      | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_0_p_3__DOT__q) 
                           << 3U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_0_p_2__DOT__q) 
                                     << 2U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_0_p_1__DOT__q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_0_p_0__DOT__q)))));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffff00ffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_0_p_15__DOT__q) 
                         << 0xfU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_0_p_14__DOT__q) 
                                     << 0xeU)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_0_p_13__DOT__q) 
                                                   << 0xdU) 
                                                  | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_0_p_12__DOT__q) 
                                                     << 0xcU))) 
                      | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_0_p_11__DOT__q) 
                           << 0xbU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_0_p_10__DOT__q) 
                                       << 0xaU)) | 
                         (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_0_p_9__DOT__q) 
                           << 9U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_0_p_8__DOT__q) 
                                     << 8U)))));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xff00ffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_0_p_23__DOT__q) 
                         << 0x17U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_0_p_22__DOT__q) 
                                      << 0x16U)) | 
                       (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_0_p_21__DOT__q) 
                         << 0x15U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_0_p_20__DOT__q) 
                                      << 0x14U))) | 
                      ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_0_p_19__DOT__q) 
                         << 0x13U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_0_p_18__DOT__q) 
                                      << 0x12U)) | 
                       (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_0_p_17__DOT__q) 
                         << 0x11U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_0_p_16__DOT__q) 
                                      << 0x10U)))));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_0_p_31__DOT__q) 
                         << 0x1fU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_0_p_30__DOT__q) 
                                      << 0x1eU)) | 
                       (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_0_p_29__DOT__q) 
                         << 0x1dU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_0_p_28__DOT__q) 
                                      << 0x1cU))) | 
                      ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_0_p_27__DOT__q) 
                         << 0x1bU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_0_p_26__DOT__q) 
                                      << 0x1aU)) | 
                       (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_0_p_25__DOT__q) 
                         << 0x19U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_0_p_24__DOT__q) 
                                      << 0x18U)))));
        } else if ((2U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[0U])) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff00U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_1_p_39__DOT__q) 
                         << 7U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_1_p_38__DOT__q) 
                                   << 6U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_1_p_37__DOT__q) 
                                               << 5U) 
                                              | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_1_p_36__DOT__q) 
                                                 << 4U))) 
                      | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_1_p_35__DOT__q) 
                           << 3U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_1_p_34__DOT__q) 
                                     << 2U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_1_p_33__DOT__q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_1_p_32__DOT__q)))));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffff00ffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_1_p_47__DOT__q) 
                         << 0xfU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_1_p_46__DOT__q) 
                                     << 0xeU)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_1_p_45__DOT__q) 
                                                   << 0xdU) 
                                                  | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_1_p_44__DOT__q) 
                                                     << 0xcU))) 
                      | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_1_p_43__DOT__q) 
                           << 0xbU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_1_p_42__DOT__q) 
                                       << 0xaU)) | 
                         (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_1_p_41__DOT__q) 
                           << 9U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_1_p_40__DOT__q) 
                                     << 8U)))));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xff00ffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_1_p_55__DOT__q) 
                         << 0x17U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_1_p_54__DOT__q) 
                                      << 0x16U)) | 
                       (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_1_p_53__DOT__q) 
                         << 0x15U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_1_p_52__DOT__q) 
                                      << 0x14U))) | 
                      ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_1_p_51__DOT__q) 
                         << 0x13U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_1_p_50__DOT__q) 
                                      << 0x12U)) | 
                       (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_1_p_49__DOT__q) 
                         << 0x11U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_1_p_48__DOT__q) 
                                      << 0x10U)))));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_1_p_63__DOT__q) 
                         << 0x1fU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_1_p_62__DOT__q) 
                                      << 0x1eU)) | 
                       (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_1_p_61__DOT__q) 
                         << 0x1dU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_1_p_60__DOT__q) 
                                      << 0x1cU))) | 
                      ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_1_p_59__DOT__q) 
                         << 0x1bU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_1_p_58__DOT__q) 
                                      << 0x1aU)) | 
                       (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_1_p_57__DOT__q) 
                         << 0x19U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ip_1_p_56__DOT__q) 
                                      << 0x18U)))));
        } else if ((4U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[0U])) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff00U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_7__q) 
                         << 7U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_6__q) 
                                   << 6U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_5__q) 
                                               << 5U) 
                                              | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_4__q) 
                                                 << 4U))) 
                      | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_3__q) 
                           << 3U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_2__q) 
                                     << 2U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_1__q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_0__q)))));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffff00ffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_15__q) 
                         << 0xfU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_14__q) 
                                     << 0xeU)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_13__q) 
                                                   << 0xdU) 
                                                  | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_12__q) 
                                                     << 0xcU))) 
                      | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_11__q) 
                           << 0xbU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_10__q) 
                                       << 0xaU)) | 
                         (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_9__q) 
                           << 9U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_8__q) 
                                     << 8U)))));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xff00ffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_23__q) 
                         << 0x17U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_22__q) 
                                      << 0x16U)) | 
                       (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_21__q) 
                         << 0x15U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_20__q) 
                                      << 0x14U))) | 
                      ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_19__q) 
                         << 0x13U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_18__q) 
                                      << 0x12U)) | 
                       (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_17__q) 
                         << 0x11U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_16__q) 
                                      << 0x10U)))));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_31__q) 
                         << 0x1fU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_30__q) 
                                      << 0x1eU)) | 
                       (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_29__q) 
                         << 0x1dU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_28__q) 
                                      << 0x1cU))) | 
                      ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_27__q) 
                         << 0x1bU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_26__q) 
                                      << 0x1aU)) | 
                       (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_25__q) 
                         << 0x19U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_24__q) 
                                      << 0x18U)))));
        } else if ((8U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[0U])) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff00U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_39__q) 
                         << 7U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_38__q) 
                                   << 6U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_37__q) 
                                               << 5U) 
                                              | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_36__q) 
                                                 << 4U))) 
                      | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_35__q) 
                           << 3U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_34__q) 
                                     << 2U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_33__q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_32__q)))));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffff00ffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_47__q) 
                         << 0xfU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_46__q) 
                                     << 0xeU)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_45__q) 
                                                   << 0xdU) 
                                                  | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_44__q) 
                                                     << 0xcU))) 
                      | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_43__q) 
                           << 0xbU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_42__q) 
                                       << 0xaU)) | 
                         (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_41__q) 
                           << 9U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_40__q) 
                                     << 8U)))));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xff00ffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_55__q) 
                         << 0x17U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_54__q) 
                                      << 0x16U)) | 
                       (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_53__q) 
                         << 0x15U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_52__q) 
                                      << 0x14U))) | 
                      ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_51__q) 
                         << 0x13U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_50__q) 
                                      << 0x12U)) | 
                       (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_49__q) 
                         << 0x11U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_48__q) 
                                      << 0x10U)))));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_63__q) 
                         << 0x1fU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_62__q) 
                                      << 0x1eU)) | 
                       (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_61__q) 
                         << 0x1dU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_60__q) 
                                      << 0x1cU))) | 
                      ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_59__q) 
                         << 0x1bU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_58__q) 
                                      << 0x1aU)) | 
                       (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_57__q) 
                         << 0x19U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_56__q) 
                                      << 0x18U)))));
        } else {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffff8U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((0x10U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[0U])
                       ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio0__q)
                       : ((0x20U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[0U])
                           ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio1__q)
                           : ((0x40U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[0U])
                               ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio2__q)
                               : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio3__q)))));
        }
    } else if ((IData)((0U != (0xff00U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[0U])))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next 
            = ((0xfffffff8U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next) 
               | ((0x100U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[0U])
                   ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio4__q)
                   : ((0x200U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[0U])
                       ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio5__q)
                       : ((0x400U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[0U])
                           ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio6__q)
                           : ((0x800U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[0U])
                               ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio7__q)
                               : ((0x1000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[0U])
                                   ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio8__q)
                                   : ((0x2000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[0U])
                                       ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio9__q)
                                       : ((0x4000U 
                                           & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[0U])
                                           ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio10__q)
                                           : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio11__q)))))))));
    } else if ((IData)((0U != (0xff0000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[0U])))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next 
            = ((0xfffffff8U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next) 
               | ((0x10000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[0U])
                   ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio12__q)
                   : ((0x20000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[0U])
                       ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio13__q)
                       : ((0x40000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[0U])
                           ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio14__q)
                           : ((0x80000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[0U])
                               ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio15__q)
                               : ((0x100000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[0U])
                                   ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio16__q)
                                   : ((0x200000U & 
                                       vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[0U])
                                       ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio17__q)
                                       : ((0x400000U 
                                           & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[0U])
                                           ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio18__q)
                                           : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio19__q)))))))));
    } else if ((IData)((0U != (0xff000000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[0U])))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next 
            = ((0xfffffff8U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next) 
               | ((0x1000000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[0U])
                   ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio20__q)
                   : ((0x2000000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[0U])
                       ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio21__q)
                       : ((0x4000000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[0U])
                           ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio22__q)
                           : ((0x8000000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[0U])
                               ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio23__q)
                               : ((0x10000000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[0U])
                                   ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio24__q)
                                   : ((0x20000000U 
                                       & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[0U])
                                       ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio25__q)
                                       : ((0x40000000U 
                                           & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[0U])
                                           ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio26__q)
                                           : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio27__q)))))))));
    } else if ((IData)((0U != (0xffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[1U])))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next 
            = ((0xfffffff8U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next) 
               | ((1U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[1U])
                   ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio28__q)
                   : ((2U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[1U])
                       ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio29__q)
                       : ((4U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[1U])
                           ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio30__q)
                           : ((8U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[1U])
                               ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio31__q)
                               : ((0x10U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[1U])
                                   ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio32__q)
                                   : ((0x20U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[1U])
                                       ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio33__q)
                                       : ((0x40U & 
                                           vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[1U])
                                           ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio34__q)
                                           : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio35__q)))))))));
    } else if ((IData)((0U != (0xff00U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[1U])))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next 
            = ((0xfffffff8U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next) 
               | ((0x100U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[1U])
                   ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio36__q)
                   : ((0x200U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[1U])
                       ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio37__q)
                       : ((0x400U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[1U])
                           ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio38__q)
                           : ((0x800U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[1U])
                               ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio39__q)
                               : ((0x1000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[1U])
                                   ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio40__q)
                                   : ((0x2000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[1U])
                                       ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio41__q)
                                       : ((0x4000U 
                                           & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[1U])
                                           ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio42__q)
                                           : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio43__q)))))))));
    } else if ((IData)((0U != (0xff0000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[1U])))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next 
            = ((0xfffffff8U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next) 
               | ((0x10000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[1U])
                   ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio44__q)
                   : ((0x20000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[1U])
                       ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio45__q)
                       : ((0x40000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[1U])
                           ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio46__q)
                           : ((0x80000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[1U])
                               ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio47__q)
                               : ((0x100000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[1U])
                                   ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio48__q)
                                   : ((0x200000U & 
                                       vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[1U])
                                       ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio49__q)
                                       : ((0x400000U 
                                           & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[1U])
                                           ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio50__q)
                                           : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio51__q)))))))));
    } else if ((IData)((0U != (0xff000000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[1U])))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next 
            = ((0xfffffff8U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next) 
               | ((0x1000000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[1U])
                   ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio52__q)
                   : ((0x2000000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[1U])
                       ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio53__q)
                       : ((0x4000000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[1U])
                           ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio54__q)
                           : ((0x8000000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[1U])
                               ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio55__q)
                               : ((0x10000000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[1U])
                                   ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio56__q)
                                   : ((0x20000000U 
                                       & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[1U])
                                       ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio57__q)
                                       : ((0x40000000U 
                                           & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[1U])
                                           ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio58__q)
                                           : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio59__q)))))))));
    } else if ((IData)((0U != (0xffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[2U])))) {
        if ((1U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[2U])) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffff8U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio60__q));
        } else if ((2U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[2U])) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffff8U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio61__q));
        } else if ((4U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[2U])) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffff8U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio62__q));
        } else if ((8U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[2U])) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffff8U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio63__q));
        } else if ((0x10U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[2U])) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff00U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_7__q) 
                         << 7U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_6__q) 
                                   << 6U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_5__q) 
                                               << 5U) 
                                              | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_4__q) 
                                                 << 4U))) 
                      | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_3__q) 
                           << 3U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_2__q) 
                                     << 2U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_1__q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_0__q)))));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffff00ffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_15__q) 
                         << 0xfU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_14__q) 
                                     << 0xeU)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_13__q) 
                                                   << 0xdU) 
                                                  | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_12__q) 
                                                     << 0xcU))) 
                      | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_11__q) 
                           << 0xbU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_10__q) 
                                       << 0xaU)) | 
                         (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_9__q) 
                           << 9U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_8__q) 
                                     << 8U)))));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xff00ffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_23__q) 
                         << 0x17U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_22__q) 
                                      << 0x16U)) | 
                       (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_21__q) 
                         << 0x15U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_20__q) 
                                      << 0x14U))) | 
                      ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_19__q) 
                         << 0x13U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_18__q) 
                                      << 0x12U)) | 
                       (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_17__q) 
                         << 0x11U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_16__q) 
                                      << 0x10U)))));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_31__q) 
                         << 0x1fU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_30__q) 
                                      << 0x1eU)) | 
                       (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_29__q) 
                         << 0x1dU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_28__q) 
                                      << 0x1cU))) | 
                      ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_27__q) 
                         << 0x1bU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_26__q) 
                                      << 0x1aU)) | 
                       (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_25__q) 
                         << 0x19U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_24__q) 
                                      << 0x18U)))));
        } else if ((0x20U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[2U])) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff00U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_39__q) 
                         << 7U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_38__q) 
                                   << 6U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_37__q) 
                                               << 5U) 
                                              | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_36__q) 
                                                 << 4U))) 
                      | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_35__q) 
                           << 3U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_34__q) 
                                     << 2U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_33__q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_32__q)))));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffff00ffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_47__q) 
                         << 0xfU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_46__q) 
                                     << 0xeU)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_45__q) 
                                                   << 0xdU) 
                                                  | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_44__q) 
                                                     << 0xcU))) 
                      | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_43__q) 
                           << 0xbU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_42__q) 
                                       << 0xaU)) | 
                         (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_41__q) 
                           << 9U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_40__q) 
                                     << 8U)))));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xff00ffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_55__q) 
                         << 0x17U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_54__q) 
                                      << 0x16U)) | 
                       (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_53__q) 
                         << 0x15U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_52__q) 
                                      << 0x14U))) | 
                      ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_51__q) 
                         << 0x13U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_50__q) 
                                      << 0x12U)) | 
                       (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_49__q) 
                         << 0x11U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_48__q) 
                                      << 0x10U)))));
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_63__q) 
                         << 0x1fU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_62__q) 
                                      << 0x1eU)) | 
                       (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_61__q) 
                         << 0x1dU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_60__q) 
                                      << 0x1cU))) | 
                      ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_59__q) 
                         << 0x1bU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_58__q) 
                                      << 0x1aU)) | 
                       (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_57__q) 
                         << 0x19U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_56__q) 
                                      << 0x18U)))));
        } else {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next 
                = ((0x40U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[2U])
                    ? ((0xfffffff8U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next) 
                       | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_threshold0__q))
                    : ((0xffffffc0U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next) 
                       | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__irq_id_q)));
        }
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next 
            = ((0x100U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[2U])
                ? ((0xfffffffeU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_msip0__q))
                : 0xffffffffU);
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__err_internal 
        = (1U & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                  & (0U != (3U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                                  >> 0xaU)))) | ((~ 
                                                  (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT____VdfgRegularize_h76d05708_0_1) 
                                                    | (4U 
                                                       == 
                                                       ((0x4000U 
                                                         & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U])
                                                         ? 0U
                                                         : 4U))) 
                                                   & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                                                      & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk) 
                                                         & ((4U 
                                                             == 
                                                             ((0x4000U 
                                                               & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U])
                                                               ? 0U
                                                               : 4U)) 
                                                            | ((1U 
                                                                == 
                                                                ((0x4000U 
                                                                  & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U])
                                                                  ? 0U
                                                                  : 4U)) 
                                                               | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk))))))) 
                                                 | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__malformed_meta_err))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_reg_if__DOT__err_internal 
        = (1U & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                  & (0U != (3U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[1U]))) 
                 | ((~ (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT____VdfgRegularize_h76d05708_0_1) 
                         | (4U == ((0x10U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])
                                    ? 0U : 4U))) & 
                        ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                         & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk) 
                            & ((4U == ((0x10U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])
                                        ? 0U : 4U)) 
                               | ((1U == ((0x10U & 
                                           vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])
                                           ? 0U : 4U)) 
                                  | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk))))))) 
                    | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_reg_if__DOT__malformed_meta_err))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_reg_if__DOT__err_internal 
        = (1U & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                  & (0U != (3U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U] 
                                  >> 0x12U)))) | ((~ 
                                                   (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT____VdfgRegularize_h76d05708_0_1) 
                                                     | (4U 
                                                        == 
                                                        ((0x400000U 
                                                          & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U])
                                                          ? 0U
                                                          : 4U))) 
                                                    & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                                                       & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk) 
                                                          & ((4U 
                                                              == 
                                                              ((0x400000U 
                                                                & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U])
                                                                ? 0U
                                                                : 4U)) 
                                                             | ((1U 
                                                                 == 
                                                                 ((0x400000U 
                                                                   & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U])
                                                                   ? 0U
                                                                   : 4U)) 
                                                                | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk))))))) 
                                                  | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_reg_if__DOT__malformed_meta_err))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT__u_clkdividx__DOT__wr_en 
        = (IData)(((0x80U == (0x1f0U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xeU])) 
                   & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT____VdfgRegularize_hcff0917f_0_12)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT__u_watermark__DOT__wr_en 
        = (IData)(((0x100U == (0x1f0U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xeU])) 
                   & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT____VdfgRegularize_hcff0917f_0_12)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT__u_control_data_width__DOT__wr_en 
        = (IData)(((0U == (0x1f0U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xeU])) 
                   & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT____VdfgRegularize_hcff0917f_0_12)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__rx_cdc_i__DOT__i_dst__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT__rxdata_re)) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__rx_cdc_i__DOT__i_dst__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__rx_cdc_i__DOT__i_dst__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_core_i__DOT__rx_cdc_i__DOT__i_dst__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT__rxdata_re));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT____Vcellinp__watermark_counter__en_i 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT__rxdata_re) 
           & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT__status_rx_data_ready_qs) 
              & ((0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT____Vcellout__u_watermark__q)) 
                 & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT____Vcellout__u_control_en_watermark__q))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_re 
        = ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__rd_req));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we 
        = ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__wr_req));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_re 
        = ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_reg_if__DOT__rd_req));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_we 
        = ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_reg_if__DOT__wr_req));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__reg_re 
        = ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_reg_if__DOT__rd_req));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__reg_we 
        = ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_reg_if__DOT__wr_req));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT__u_control_reset_watermark__DOT__wr_en 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT____Vcellout__u_control_reset_watermark__q) 
           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT__u_control_data_width__DOT__wr_en));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__event_i2s_event 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT____Vcellinp__watermark_counter__en_i) 
           & ((0xffffU & ((IData)(1U) + (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__watermark_counter__DOT__counter_q))) 
              >= (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT____Vcellout__u_watermark__q)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__wr_err 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we) 
           & (((0U != (1U & (~ ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                 << 0x16U) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                              >> 0xaU))))) 
               & ((0U == (0xfU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                                  >> 0xcU))) | (1U 
                                                == 
                                                (0xfU 
                                                 & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                                                    >> 0xcU))))) 
              | ((IData)(((0x2000U == (0xf000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U])) 
                          & (0U != (1U & (~ ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                              << 0x16U) 
                                             | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                >> 0xaU))))))) 
                 | ((IData)(((0x3000U == (0xf000U & 
                                          vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U])) 
                             & (0U != (0xfU & (~ ((
                                                   vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                   << 0x16U) 
                                                  | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                     >> 0xaU))))))) 
                    | ((IData)(((0x4000U == (0xf000U 
                                             & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U])) 
                                & (0U != (1U & (~ (
                                                   (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                    << 0x16U) 
                                                   | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                      >> 0xaU))))))) 
                       | ((IData)(((0x5000U == (0xf000U 
                                                & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U])) 
                                   & (0U != (1U & (~ 
                                                   ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                     << 0x16U) 
                                                    | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                       >> 0xaU))))))) 
                          | ((IData)(((0x6000U == (0xf000U 
                                                   & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U])) 
                                      & (0U != (1U 
                                                & (~ 
                                                   ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                     << 0x16U) 
                                                    | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                       >> 0xaU))))))) 
                             | ((IData)(((0x7000U == 
                                          (0xf000U 
                                           & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U])) 
                                         & (0U != (1U 
                                                   & (~ 
                                                      ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                        << 0x16U) 
                                                       | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                          >> 0xaU))))))) 
                                | ((IData)(((0x8000U 
                                             == (0xf000U 
                                                 & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U])) 
                                            & (0U != 
                                               (7U 
                                                & (~ 
                                                   ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                     << 0x16U) 
                                                    | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                       >> 0xaU))))))) 
                                   | ((IData)(((0x9000U 
                                                == 
                                                (0xf000U 
                                                 & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U])) 
                                               & (0U 
                                                  != 
                                                  (1U 
                                                   & (~ 
                                                      ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                        << 0x16U) 
                                                       | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                          >> 0xaU))))))) 
                                      | ((IData)(((0xa000U 
                                                   == 
                                                   (0xf000U 
                                                    & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U])) 
                                                  & (0U 
                                                     != 
                                                     (3U 
                                                      & (~ 
                                                         ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                           << 0x16U) 
                                                          | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                             >> 0xaU))))))) 
                                         | (IData)(
                                                   ((0xb000U 
                                                     == 
                                                     (0xf000U 
                                                      & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U])) 
                                                    & (0U 
                                                       != 
                                                       (0xfU 
                                                        & (~ 
                                                           ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                             << 0x16U) 
                                                            | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                               >> 0xaU))))))))))))))))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__wr_err 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_we) 
           & ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
               [0U] & (0U != (0xfU & (~ vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
              | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                  [4U] & (0U != (0xfU & (~ vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                 | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                     [8U] & (0U != (0xfU & (~ vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                    | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                        [0xcU] & (0U != (0xfU & (~ 
                                                 vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                       | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                           [0x10U] & (0U != (1U & (~ 
                                                   vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                          | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                              [0x14U] & (0U != (1U 
                                                & (~ 
                                                   vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                             | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                 [0x18U] & (0U != (1U 
                                                   & (~ 
                                                      vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                    [0x1cU] & (0U != 
                                               (1U 
                                                & (~ 
                                                   vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                   | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                       [0x20U] & (0U 
                                                  != 
                                                  (1U 
                                                   & (~ 
                                                      vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                      | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                          [0x24U] & 
                                          (0U != (1U 
                                                  & (~ 
                                                     vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                         | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                             [0x28U] 
                                             & (0U 
                                                != 
                                                (1U 
                                                 & (~ 
                                                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                            | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                [0x2cU] 
                                                & (0U 
                                                   != 
                                                   (1U 
                                                    & (~ 
                                                       vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                               | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                   [0x30U] 
                                                   & (0U 
                                                      != 
                                                      (1U 
                                                       & (~ 
                                                          vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                  | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                      [0x34U] 
                                                      & (0U 
                                                         != 
                                                         (1U 
                                                          & (~ 
                                                             vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                     | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                         [0x38U] 
                                                         & (0U 
                                                            != 
                                                            (1U 
                                                             & (~ 
                                                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                        | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                            [0x3cU] 
                                                            & (0U 
                                                               != 
                                                               (1U 
                                                                & (~ 
                                                                   vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                           | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                               [0x40U] 
                                                               & (0U 
                                                                  != 
                                                                  (1U 
                                                                   & (~ 
                                                                      vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                              | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                                  [0x44U] 
                                                                  & (0U 
                                                                     != 
                                                                     (1U 
                                                                      & (~ 
                                                                         vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                                 | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                                     [0x48U] 
                                                                     & (0U 
                                                                        != 
                                                                        (1U 
                                                                         & (~ 
                                                                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                                    | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                                        [0x4cU] 
                                                                        & (0U 
                                                                           != 
                                                                           (1U 
                                                                            & (~ 
                                                                               vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                                       | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                                           [0x50U] 
                                                                           & (0U 
                                                                              != 
                                                                              (1U 
                                                                               & (~ 
                                                                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                                          | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                                              [0x54U] 
                                                                              & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                                             | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                                                [0x58U] 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                                                | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                                                [0x5cU] 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                                                | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                                                [0x60U] 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                                                | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                                                [0x64U] 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                                                | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                                                [0x68U] 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                                                | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                                                [0x6cU] 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                                                | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                                                [0x70U] 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                                                | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                                                [0x74U] 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                                                | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                                                [0x78U] 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                                                | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                                                [0x7cU] 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                                                | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                                                [0x80U] 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                                                | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                                                [0x84U] 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                                                | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                                                [0x88U] 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                                                | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                                                [0x8cU] 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                                                | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                                                [0x90U] 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                                                | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                                                [0x94U] 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                                                | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                                                [0x98U] 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                                                | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                                                [0x9cU] 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                                                | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                                                [0xa0U] 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                                                | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                                                [0xa4U] 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                                                | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                                                [0xa8U] 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                                                | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                                                [0xacU] 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                                                | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                                                [0xb0U] 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                                                | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                                                [0xb4U] 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                                                | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                                                [0xb8U] 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                                                | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                                                [0xbcU] 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                                                | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                                                [0xc0U] 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                                                | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                                                [0xc4U] 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                                                | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                                                [0xc8U] 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                                                | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                                                [0xccU] 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                                                | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                                                [0xd0U] 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                                                | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                                                [0xd4U] 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                                                | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                                                [0xd8U] 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                                                | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                                                [0xdcU] 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                                                | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                                                [0xe0U] 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                                                | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                                                [0xe4U] 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                                                | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                                                [0xe8U] 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                                                | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                                                [0xecU] 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                                                | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                                                [0xf0U] 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                                                | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                                                [0xf4U] 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                                                | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                                                [0xf8U] 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                                                | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                                                [0xfcU] 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                                                | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                                                [0x100U] 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                                                | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                                                [0x104U] 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                                                | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                                                [0x108U] 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                                                | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                                                [0x10cU] 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                                                | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                                                [0x200U] 
                                                                                & (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (~ 
                                                                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                                                | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                                                [0x204U] 
                                                                                & (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (~ 
                                                                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                                                                | ((0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U]))) 
                                                                                & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                                                [0x208U] 
                                                                                | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                                                [0x20cU] 
                                                                                | vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
                                                                                [0x210U]))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__wr_err 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__reg_we) 
           & (((0U != (3U & (~ ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                 << 0xeU) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                             >> 0x12U))))) 
               & ((0U == (0x1fU & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U] 
                                   >> 0x14U))) | (1U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U] 
                                                      >> 0x14U))))) 
              | ((IData)(((0x200000U == (0x1f00000U 
                                         & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U])) 
                          & (0U != (3U & (~ ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                              << 0xeU) 
                                             | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                                >> 0x12U))))))) 
                 | ((IData)(((0x300000U == (0x1f00000U 
                                            & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U])) 
                             & (0U != (1U & (~ ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                                 << 0xeU) 
                                                | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                                   >> 0x12U))))))) 
                    | ((IData)(((0x400000U == (0x1f00000U 
                                               & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U])) 
                                & (0U != (3U & (~ (
                                                   (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                                    << 0xeU) 
                                                   | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                                      >> 0x12U))))))) 
                       | ((IData)(((0x500000U == (0x1f00000U 
                                                  & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U])) 
                                   & (0U != (1U & (~ 
                                                   ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                                     << 0xeU) 
                                                    | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                                       >> 0x12U))))))) 
                          | ((IData)(((0x600000U == 
                                       (0x1f00000U 
                                        & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U])) 
                                      & (0U != (3U 
                                                & (~ 
                                                   ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                                     << 0xeU) 
                                                    | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                                       >> 0x12U))))))) 
                             | ((IData)(((0x700000U 
                                          == (0x1f00000U 
                                              & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U])) 
                                         & (0U != (3U 
                                                   & (~ 
                                                      ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                                        << 0xeU) 
                                                       | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                                          >> 0x12U))))))) 
                                | ((IData)(((0x800000U 
                                             == (0x1f00000U 
                                                 & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U])) 
                                            & (0U != 
                                               (0xfU 
                                                & (~ 
                                                   ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                                     << 0xeU) 
                                                    | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                                       >> 0x12U))))))) 
                                   | ((IData)(((0x900000U 
                                                == 
                                                (0x1f00000U 
                                                 & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U])) 
                                               & (0U 
                                                  != 
                                                  (1U 
                                                   & (~ 
                                                      ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                                        << 0xeU) 
                                                       | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                                          >> 0x12U))))))) 
                                      | ((IData)(((0xa00000U 
                                                   == 
                                                   (0x1f00000U 
                                                    & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U])) 
                                                  & (0U 
                                                     != 
                                                     (0xfU 
                                                      & (~ 
                                                         ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                                           << 0xeU) 
                                                          | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                                             >> 0x12U))))))) 
                                         | ((IData)(
                                                    ((0xb00000U 
                                                      == 
                                                      (0x1f00000U 
                                                       & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U])) 
                                                     & (0U 
                                                        != 
                                                        (0xfU 
                                                         & (~ 
                                                            ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                                              << 0xeU) 
                                                             | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                                                >> 0x12U))))))) 
                                            | ((IData)(
                                                       ((0xc00000U 
                                                         == 
                                                         (0x1f00000U 
                                                          & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U])) 
                                                        & (0U 
                                                           != 
                                                           (0xfU 
                                                            & (~ 
                                                               ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                                                 << 0xeU) 
                                                                | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                                                   >> 0x12U))))))) 
                                               | ((IData)(
                                                          ((0xd00000U 
                                                            == 
                                                            (0x1f00000U 
                                                             & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U])) 
                                                           & (0U 
                                                              != 
                                                              (0xfU 
                                                               & (~ 
                                                                  ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                                                    << 0xeU) 
                                                                   | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                                                      >> 0x12U))))))) 
                                                  | ((IData)(
                                                             ((0xe00000U 
                                                               == 
                                                               (0x1f00000U 
                                                                & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U])) 
                                                              & (0U 
                                                                 != 
                                                                 (0xfU 
                                                                  & (~ 
                                                                     ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                                                       << 0xeU) 
                                                                      | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                                                         >> 0x12U))))))) 
                                                     | ((IData)(
                                                                ((0xf00000U 
                                                                  == 
                                                                  (0x1f00000U 
                                                                   & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U])) 
                                                                 & (0U 
                                                                    != 
                                                                    (0xfU 
                                                                     & (~ 
                                                                        ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                                                          << 0xeU) 
                                                                         | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                                                            >> 0x12U))))))) 
                                                        | ((IData)(
                                                                   ((0x1000000U 
                                                                     == 
                                                                     (0x1f00000U 
                                                                      & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U])) 
                                                                    & (0U 
                                                                       != 
                                                                       (0xfU 
                                                                        & (~ 
                                                                           ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                                                             << 0xeU) 
                                                                            | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                                                               >> 0x12U))))))) 
                                                           | ((IData)(
                                                                      ((0x1100000U 
                                                                        == 
                                                                        (0x1f00000U 
                                                                         & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U])) 
                                                                       & (0U 
                                                                          != 
                                                                          (0xfU 
                                                                           & (~ 
                                                                              ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                                                                << 0xeU) 
                                                                               | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                                                                >> 0x12U))))))) 
                                                              | ((IData)(
                                                                         ((0x1200000U 
                                                                           == 
                                                                           (0x1f00000U 
                                                                            & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U])) 
                                                                          & (0U 
                                                                             != 
                                                                             (3U 
                                                                              & (~ 
                                                                                ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                                                                << 0xeU) 
                                                                                | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                                                                >> 0x12U))))))) 
                                                                 | ((IData)(
                                                                            ((0x1300000U 
                                                                              == 
                                                                              (0x1f00000U 
                                                                               & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U])) 
                                                                             & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                                                                << 0xeU) 
                                                                                | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                                                                >> 0x12U))))))) 
                                                                    | ((IData)(
                                                                               ((0x1400000U 
                                                                                == 
                                                                                (0x1f00000U 
                                                                                & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U])) 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                                                                << 0xeU) 
                                                                                | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                                                                >> 0x12U))))))) 
                                                                       | (IData)(
                                                                                ((0x1500000U 
                                                                                == 
                                                                                (0x1f00000U 
                                                                                & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U])) 
                                                                                & (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (~ 
                                                                                ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                                                                << 0xeU) 
                                                                                | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                                                                >> 0x12U))))))))))))))))))))))))))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__watermark_counter__DOT__counter_d 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__watermark_counter__DOT__counter_q;
    if (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT____Vcellout__u_control_reset_watermark__q) 
         | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__event_i2s_event))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__watermark_counter__DOT__counter_d = 0U;
    } else if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT____Vcellinp__watermark_counter__en_i) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__watermark_counter__DOT__counter_d 
            = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__watermark_counter__DOT__counter_q)));
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_intr_event 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__event_i2s_event) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2s_i__DOT__i2s_reg_top_i__DOT____Vcellout__u_control_intr_en__q));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error 
        = (((~ (0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit))) 
            & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_re) 
               | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we))) 
           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__wr_err));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_error 
        = (((~ (0U != ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[0U] 
                        | vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[1U]) 
                       | vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__addr_hit[2U]))) 
            & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_re) 
               | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_we))) 
           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__wr_err));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__reg_error 
        = (((~ (0U != vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__addr_hit)) 
            & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__reg_re) 
               | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__reg_we))) 
           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__wr_err));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____VdfgRegularize_hfbc725bf_0_17 
        = ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_re));
    testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____VdfgRegularize_hfbc725bf_0_16 
        = ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__cc0_re 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0x20cU] & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_error)) 
                       & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_re)));
    testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4 
        = ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_error)) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__reg_we));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____VdfgRegularize_h135b3f54_0_28 
        = ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__reg_error)) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__reg_re));
    testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____VdfgRegularize_h135b3f54_0_27 
        = ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__reg_error)) 
           & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__reg_we));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__status_txfull_re 
        = (IData)(((0x4000U == (0xf000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U])) 
                   & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____VdfgRegularize_hfbc725bf_0_17)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__rdata_re 
        = (IData)(((0x5000U == (0xf000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U])) 
                   & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____VdfgRegularize_hfbc725bf_0_17)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__wr_en 
        = (IData)(((0x1000U == (0xf000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U])) 
                   & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____VdfgRegularize_hfbc725bf_0_16)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__wr_en 
        = (IData)(((0x3000U == (0xf000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U])) 
                   & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____VdfgRegularize_hfbc725bf_0_16)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_wdata__DOT__wr_en 
        = (IData)(((0x6000U == (0xf000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U])) 
                   & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____VdfgRegularize_hfbc725bf_0_16)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__wr_en 
        = (IData)(((0x7000U == (0xf000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U])) 
                   & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____VdfgRegularize_hfbc725bf_0_16)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_ovrd_txen__DOT__wr_en 
        = (IData)(((0x9000U == (0xf000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U])) 
                   & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____VdfgRegularize_hfbc725bf_0_16)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_timeout_ctrl_en__DOT__wr_en 
        = (IData)(((0xb000U == (0xf000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U])) 
                   & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____VdfgRegularize_hfbc725bf_0_16)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_tx_watermark_we 
        = (IData)(((0U == (0xf000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U])) 
                   & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____VdfgRegularize_hfbc725bf_0_16)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_test_tx_watermark_we 
        = (IData)(((0x2000U == (0xf000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U])) 
                   & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____VdfgRegularize_hfbc725bf_0_16)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__claim = 0ULL;
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__cc0_re) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__claim 
            = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__claim 
               | ((QData)((IData)(1U)) << vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__claim_id
                  [0U]));
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_le_0_le_0__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [8U] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_le_1_le_32__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0xcU] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio0__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0x10U] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio1__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0x14U] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio2__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0x18U] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio3__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0x1cU] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio4__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0x20U] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio5__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0x24U] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio6__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0x28U] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio7__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0x2cU] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio8__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0x30U] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio9__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0x34U] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio10__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0x38U] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio11__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0x3cU] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio12__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0x40U] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio13__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0x44U] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio14__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0x48U] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio15__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0x4cU] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio16__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0x50U] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio17__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0x54U] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio18__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0x58U] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio19__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0x5cU] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio20__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0x60U] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio21__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0x64U] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio22__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0x68U] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio23__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0x6cU] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio24__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0x70U] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio25__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0x74U] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio26__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0x78U] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio27__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0x7cU] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio28__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0x80U] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio29__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0x84U] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio30__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0x88U] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio31__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0x8cU] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio32__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0x90U] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio33__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0x94U] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio34__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0x98U] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio35__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0x9cU] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio36__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0xa0U] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio37__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0xa4U] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio38__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0xa8U] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio39__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0xacU] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio40__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0xb0U] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio41__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0xb4U] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio42__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0xb8U] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio43__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0xbcU] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio44__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0xc0U] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio45__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0xc4U] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio46__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0xc8U] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio47__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0xccU] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio48__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0xd0U] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio49__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0xd4U] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio50__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0xd8U] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio51__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0xdcU] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio52__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0xe0U] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio53__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0xe4U] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio54__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0xe8U] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio55__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0xecU] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio56__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0xf0U] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio57__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0xf4U] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio58__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0xf8U] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio59__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0xfcU] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio60__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0x100U] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio61__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0x104U] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio62__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0x108U] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_prio63__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0x10cU] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ie0_0_e_0__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0x200U] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_ie0_1_e_32__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0x204U] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_threshold0__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0x208U] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__u_msip0__DOT__wr_en 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0x210U] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__cc0_we 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h5ee62396_0_0
           [0x20cU] & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____VdfgRegularize_h5ee62396_0_4));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__rdata_re 
        = (IData)(((0x500000U == (0x1f00000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U])) 
                   & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____VdfgRegularize_h135b3f54_0_28)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__acqdata_abyte_re 
        = (IData)(((0x1200000U == (0x1f00000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U])) 
                   & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____VdfgRegularize_h135b3f54_0_28)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_intr_enable_ack_stop__DOT__wr_en 
        = (IData)(((0x100000U == (0x1f00000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U])) 
                   & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____VdfgRegularize_h135b3f54_0_27)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_ctrl_enablehost__DOT__wr_en 
        = (IData)(((0x300000U == (0x1f00000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U])) 
                   & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____VdfgRegularize_h135b3f54_0_27)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_fdata_fbyte__DOT__wr_en 
        = (IData)(((0x600000U == (0x1f00000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U])) 
                   & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____VdfgRegularize_h135b3f54_0_27)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_fifo_ctrl_acqrst__DOT__wr_en 
        = (IData)(((0x700000U == (0x1f00000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U])) 
                   & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____VdfgRegularize_h135b3f54_0_27)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_ovrd_sclval__DOT__wr_en 
        = (IData)(((0x900000U == (0x1f00000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U])) 
                   & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____VdfgRegularize_h135b3f54_0_27)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_timing0_thigh__DOT__wr_en 
        = (IData)(((0xb00000U == (0x1f00000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U])) 
                   & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____VdfgRegularize_h135b3f54_0_27)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_timing1_t_f__DOT__wr_en 
        = (IData)(((0xc00000U == (0x1f00000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U])) 
                   & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____VdfgRegularize_h135b3f54_0_27)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_timing2_thd_sta__DOT__wr_en 
        = (IData)(((0xd00000U == (0x1f00000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U])) 
                   & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____VdfgRegularize_h135b3f54_0_27)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_timing3_thd_dat__DOT__wr_en 
        = (IData)(((0xe00000U == (0x1f00000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U])) 
                   & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____VdfgRegularize_h135b3f54_0_27)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_timing4_t_buf__DOT__wr_en 
        = (IData)(((0xf00000U == (0x1f00000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U])) 
                   & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____VdfgRegularize_h135b3f54_0_27)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_timeout_ctrl_en__DOT__wr_en 
        = (IData)(((0x1000000U == (0x1f00000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U])) 
                   & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____VdfgRegularize_h135b3f54_0_27)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_target_id_address0__DOT__wr_en 
        = (IData)(((0x1100000U == (0x1f00000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U])) 
                   & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____VdfgRegularize_h135b3f54_0_27)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_txdata__DOT__wr_en 
        = (IData)(((0x1300000U == (0x1f00000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U])) 
                   & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____VdfgRegularize_h135b3f54_0_27)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_stretch_ctrl_enableacq__DOT__wr_en 
        = (IData)(((0x1400000U == (0x1f00000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U])) 
                   & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____VdfgRegularize_h135b3f54_0_27)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_host_timeout_ctrl__DOT__wr_en 
        = (IData)(((0x1500000U == (0x1f00000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U])) 
                   & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____VdfgRegularize_h135b3f54_0_27)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__intr_state_fmt_watermark_we 
        = (IData)(((0U == (0x1f00000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U])) 
                   & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____VdfgRegularize_h135b3f54_0_27)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__intr_test_fmt_watermark_we 
        = (IData)(((0x200000U == (0x1f00000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U])) 
                   & (IData)(testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____VdfgRegularize_h135b3f54_0_27)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__intr_hw_rx_frame_err__DOT__new_event 
        = (((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
             >> 0xeU) & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_test_tx_watermark_we)) 
           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__event_rx_frame_err));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__intr_hw_rx_break_err__DOT__new_event 
        = (((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
             >> 0xfU) & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_test_tx_watermark_we)) 
           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__event_rx_break_err));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__intr_hw_rx_timeout__DOT__new_event 
        = (((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
             >> 0x10U) & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_test_tx_watermark_we)) 
           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__event_rx_timeout));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__intr_hw_rx_parity_err__DOT__new_event 
        = (((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
             >> 0x11U) & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_test_tx_watermark_we)) 
           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__event_rx_parity_err));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__intr_hw_tx_watermark__DOT__new_event 
        = (((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
             >> 0xaU) & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_test_tx_watermark_we)) 
           | ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__tx_watermark_prev_q)) 
              & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__tx_watermark_d)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__intr_hw_rx_watermark__DOT__new_event 
        = (((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
             >> 0xbU) & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_test_tx_watermark_we)) 
           | ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_watermark_prev_q)) 
              & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_watermark_d)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__intr_hw_rx_overflow__DOT__new_event 
        = (((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
             >> 0xdU) & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_test_tx_watermark_we)) 
           | ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_fifo_wready)) 
              & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_fifo_wvalid)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__intr_hw_tx_empty__DOT__new_event 
        = (((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
             >> 0xcU) & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_test_tx_watermark_we)) 
           | ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__tx_fifo_rvalid)) 
              & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__tx_uart_idle_q)) 
                 & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__tx_uart_idle))));
    __Vtemp_2[0U] = (IData)((((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__status_txfull_re)) 
                              << 0x3eU) | (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__status_txfull_re)) 
                                            << 0x3cU) 
                                           | (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__status_txfull_re)) 
                                               << 0x3aU) 
                                              | (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__status_txfull_re)) 
                                                  << 0x38U) 
                                                 | (((QData)((IData)(
                                                                     ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__rdata_re) 
                                                                        << 0x16U) 
                                                                       | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_wdata__q) 
                                                                           << 0xeU) 
                                                                          | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_wdata__qe) 
                                                                              << 0xdU) 
                                                                             | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q) 
                                                                                << 0xcU) 
                                                                                | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__qe) 
                                                                                << 0xbU))))) 
                                                                      | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q) 
                                                                            << 0xaU) 
                                                                           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__qe) 
                                                                              << 9U)) 
                                                                          | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q) 
                                                                              << 6U) 
                                                                             | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__qe) 
                                                                                << 5U))) 
                                                                         | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q) 
                                                                              << 3U) 
                                                                             | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__qe) 
                                                                                << 2U)) 
                                                                            | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ovrd_txen__q) 
                                                                                << 1U) 
                                                                               | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ovrd_txval__q))))))) 
                                                     << 0x19U) 
                                                    | (QData)((IData)(
                                                                      ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_val__q 
                                                                        << 1U) 
                                                                       | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q))))))))));
    __Vtemp_2[1U] = (IData)(((((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__status_txfull_re)) 
                               << 0x3eU) | (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__status_txfull_re)) 
                                             << 0x3cU) 
                                            | (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__status_txfull_re)) 
                                                << 0x3aU) 
                                               | (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__status_txfull_re)) 
                                                   << 0x38U) 
                                                  | (((QData)((IData)(
                                                                      ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__rdata_re) 
                                                                         << 0x16U) 
                                                                        | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_wdata__q) 
                                                                            << 0xeU) 
                                                                           | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_wdata__qe) 
                                                                               << 0xdU) 
                                                                              | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q) 
                                                                                << 0xcU) 
                                                                                | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__qe) 
                                                                                << 0xbU))))) 
                                                                       | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q) 
                                                                             << 0xaU) 
                                                                            | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__qe) 
                                                                               << 9U)) 
                                                                           | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q) 
                                                                               << 6U) 
                                                                              | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__qe) 
                                                                                << 5U))) 
                                                                          | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q) 
                                                                               << 3U) 
                                                                              | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__qe) 
                                                                                << 2U)) 
                                                                             | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ovrd_txen__q) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ovrd_txval__q))))))) 
                                                      << 0x19U) 
                                                     | (QData)((IData)(
                                                                       ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_val__q 
                                                                         << 1U) 
                                                                        | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q))))))))) 
                             >> 0x20U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
        = ((0xfffffff0U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U]) 
           | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__status_txfull_re) 
               << 2U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__status_txfull_re)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
        = ((0xfU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U]) 
           | (0xfffffff0U & (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_test_tx_watermark_we) 
                                << 0x1fU) | ((0x40000000U 
                                              & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
                                                 << 0xdU)) 
                                             | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_test_tx_watermark_we) 
                                                << 0x1dU))) 
                              | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q) 
                                  << 0x1cU) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_rx__q) 
                                                << 0x1bU) 
                                               | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_nf__q) 
                                                  << 0x1aU)))) 
                             | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_slpbk__q) 
                                  << 0x19U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_llpbk__q) 
                                                << 0x18U) 
                                               | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q) 
                                                  << 0x17U))) 
                                | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_odd__q) 
                                    << 0x16U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_rxblvl__q) 
                                                  << 0x14U) 
                                                 | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_nco__q) 
                                                    << 4U)))))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
        = (0x1fffffffU & (((((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q) 
                               << 0x1cU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q) 
                                            << 0x1bU)) 
                             | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_empty__q) 
                                 << 0x1aU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q) 
                                              << 0x19U))) 
                            | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q) 
                                 << 0x18U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q) 
                                              << 0x17U)) 
                               | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q) 
                                   << 0x16U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q) 
                                                << 0x15U)))) 
                           | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q) 
                                 << 0x14U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q) 
                                              << 0x13U)) 
                               | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q) 
                                   << 0x12U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q) 
                                                << 0x11U))) 
                              | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q) 
                                  << 0x10U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q) 
                                                << 0xfU) 
                                               | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q) 
                                                  << 0xeU))))) 
                          | ((((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q) 
                                 << 0xdU) | (0x1000U 
                                             & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
                                                << 2U))) 
                               | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_test_tx_watermark_we) 
                                   << 0xbU) | (0x400U 
                                               & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
                                                  >> 1U)))) 
                              | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_test_tx_watermark_we) 
                                  << 9U) | ((0x100U 
                                             & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
                                                >> 4U)) 
                                            | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_test_tx_watermark_we) 
                                               << 7U)))) 
                             | ((((0x40U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
                                            >> 7U)) 
                                  | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_test_tx_watermark_we) 
                                     << 5U)) | ((0x10U 
                                                 & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
                                                    >> 0xaU)) 
                                                | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_test_tx_watermark_we) 
                                                   << 3U))) 
                                | ((4U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
                                          >> 0xdU)) 
                                   | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_test_tx_watermark_we) 
                                       << 1U) | (1U 
                                                 & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
                                                    >> 0x10U))))))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__complete = 0ULL;
    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__cc0_we) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__complete 
            = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__complete 
               | ((QData)((IData)(1U)) << vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__complete_id
                  [0U]));
    }
    vlSelfRef.__VdfgRegularize_h16038c0c_0_48[0U] = 
        (((((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_19__q) 
              << 0x1fU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_18__q) 
                           << 0x1eU)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_17__q) 
                                          << 0x1dU) 
                                         | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_16__q) 
                                            << 0x1cU))) 
           | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_15__q) 
                << 0x1bU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_14__q) 
                             << 0x1aU)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_13__q) 
                                            << 0x19U) 
                                           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_12__q) 
                                              << 0x18U)))) 
          | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_11__q) 
                << 0x17U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_10__q) 
                             << 0x16U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_9__q) 
                                            << 0x15U) 
                                           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_8__q) 
                                              << 0x14U))) 
             | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_7__q) 
                  << 0x13U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_6__q) 
                               << 0x12U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_5__q) 
                                              << 0x11U) 
                                             | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_4__q) 
                                                << 0x10U))))) 
         | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_3__q) 
               << 0xfU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_2__q) 
                           << 0xeU)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_1__q) 
                                         << 0xdU) | 
                                        (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_0__q) 
                                          << 0xcU) 
                                         | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_threshold0__q) 
                                            << 9U)))) 
            | ((0x1f8U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0U] 
                          << 3U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__cc0_we) 
                                      << 2U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT__cc0_re) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_msip0__q))))));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_48[1U] = 
        (((((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_51__q) 
              << 0x1fU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_50__q) 
                           << 0x1eU)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_49__q) 
                                          << 0x1dU) 
                                         | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_48__q) 
                                            << 0x1cU))) 
           | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_47__q) 
                << 0x1bU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_46__q) 
                             << 0x1aU)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_45__q) 
                                            << 0x19U) 
                                           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_44__q) 
                                              << 0x18U)))) 
          | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_43__q) 
                << 0x17U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_42__q) 
                             << 0x16U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_41__q) 
                                            << 0x15U) 
                                           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_40__q) 
                                              << 0x14U))) 
             | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_39__q) 
                  << 0x13U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_38__q) 
                               << 0x12U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_37__q) 
                                              << 0x11U) 
                                             | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_36__q) 
                                                << 0x10U))))) 
         | ((((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_35__q) 
                << 0xfU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_34__q) 
                            << 0xeU)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_33__q) 
                                          << 0xdU) 
                                         | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_32__q) 
                                            << 0xcU))) 
             | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_31__q) 
                  << 0xbU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_30__q) 
                              << 0xaU)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_29__q) 
                                            << 9U) 
                                           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_28__q) 
                                              << 8U)))) 
            | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_27__q) 
                  << 7U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_26__q) 
                            << 6U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_25__q) 
                                        << 5U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_24__q) 
                                                  << 4U))) 
               | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_23__q) 
                    << 3U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_22__q) 
                              << 2U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_21__q) 
                                          << 1U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_0_e_20__q))))));
    vlSelfRef.__VdfgRegularize_h16038c0c_0_48[2U] = 
        (0xfffU & (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_63__q) 
                      << 0xbU) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_62__q) 
                                   << 0xaU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_61__q) 
                                               << 9U))) 
                    | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_60__q) 
                        << 8U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_59__q) 
                                   << 7U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_58__q) 
                                             << 6U)))) 
                   | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_57__q) 
                        << 5U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_56__q) 
                                   << 4U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_55__q) 
                                             << 3U))) 
                      | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_54__q) 
                          << 2U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_53__q) 
                                     << 1U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_ie0_1_e_52__q))))));
    __Vtemp_8[5U] = (((IData)(((((QData)((IData)((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing1_t_r__q) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing1_t_f__q)))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing2_tsu_sta__q) 
                                                               << 0x10U) 
                                                              | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing2_thd_sta__q))))) 
                               >> 0x20U)) >> 0xbU) 
                     | ((IData)((((QData)((IData)((
                                                   ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__qe) 
                                                      << 0xaU) 
                                                     | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_fmtilvl__q) 
                                                        << 8U)) 
                                                    | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_fmtilvl__qe) 
                                                        << 7U) 
                                                       | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_acqrst__q) 
                                                           << 6U) 
                                                          | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_acqrst__qe) 
                                                             << 5U)))) 
                                                   | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q) 
                                                        << 4U) 
                                                       | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__qe) 
                                                           << 3U) 
                                                          | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_ovrd_txovrden__q) 
                                                             << 2U))) 
                                                      | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_ovrd_sclval__q) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_ovrd_sdaval__q)))))) 
                                  << 0x20U) | (QData)((IData)(
                                                              (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing0_thigh__q) 
                                                                << 0x10U) 
                                                               | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing0_tlow__q)))))) 
                        << 0x15U));
    __Vtemp_8[6U] = (((IData)((((QData)((IData)((((
                                                   ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__qe) 
                                                    << 0xaU) 
                                                   | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_fmtilvl__q) 
                                                      << 8U)) 
                                                  | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_fmtilvl__qe) 
                                                      << 7U) 
                                                     | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_acqrst__q) 
                                                         << 6U) 
                                                        | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_acqrst__qe) 
                                                           << 5U)))) 
                                                 | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q) 
                                                      << 4U) 
                                                     | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__qe) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_ovrd_txovrden__q) 
                                                           << 2U))) 
                                                    | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_ovrd_sclval__q) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_ovrd_sdaval__q)))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing0_thigh__q) 
                                                              << 0x10U) 
                                                             | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing0_tlow__q)))))) 
                      >> 0xbU) | ((IData)(((((QData)((IData)(
                                                             (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__qe) 
                                                                 << 0xaU) 
                                                                | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_fmtilvl__q) 
                                                                   << 8U)) 
                                                               | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_fmtilvl__qe) 
                                                                   << 7U) 
                                                                  | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_acqrst__q) 
                                                                      << 6U) 
                                                                     | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_acqrst__qe) 
                                                                        << 5U)))) 
                                                              | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q) 
                                                                   << 4U) 
                                                                  | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__qe) 
                                                                      << 3U) 
                                                                     | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_ovrd_txovrden__q) 
                                                                        << 2U))) 
                                                                 | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_ovrd_sclval__q) 
                                                                     << 1U) 
                                                                    | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_ovrd_sdaval__q)))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing0_thigh__q) 
                                                                << 0x10U) 
                                                               | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing0_tlow__q))))) 
                                           >> 0x20U)) 
                                  << 0x15U));
    __Vtemp_10[9U] = ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__rdata_re) 
                        << 0x1aU) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_fdata_fbyte__q) 
                                      << 0x12U) | (
                                                   (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_fdata_fbyte__qe) 
                                                     << 0x11U) 
                                                    | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_fdata_start__q) 
                                                        << 0x10U) 
                                                       | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_fdata_start__qe) 
                                                          << 0xfU))) 
                                                   | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_fdata_stop__q) 
                                                       << 0xeU) 
                                                      | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_fdata_stop__qe) 
                                                         << 0xdU))))) 
                      | ((((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_fdata_read__q) 
                             << 0xcU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_fdata_read__qe) 
                                         << 0xbU)) 
                           | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_fdata_rcont__q) 
                               << 0xaU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_fdata_rcont__qe) 
                                           << 9U))) 
                          | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_fdata_nakok__q) 
                              << 8U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_fdata_nakok__qe) 
                                         << 7U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q) 
                                                   << 6U)))) 
                         | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__qe) 
                             << 5U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_fmtrst__q) 
                                        << 4U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_fmtrst__qe) 
                                                   << 3U) 
                                                  | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q))))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__reg2hw[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_target_id_mask1__q)) 
                    << 0x39U) | (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__acqdata_abyte_re)) 
                                  << 0x30U) | (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__acqdata_abyte_re)) 
                                                << 0x2dU) 
                                               | (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_txdata__q)) 
                                                   << 0x25U) 
                                                  | (((QData)((IData)(
                                                                      (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_txdata__qe) 
                                                                        << 2U) 
                                                                       | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_stretch_ctrl_enableaddr__q) 
                                                                           << 1U) 
                                                                          | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_stretch_ctrl_enabletx__q))))) 
                                                      << 0x22U) 
                                                     | (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_stretch_ctrl_enableacq__q)) 
                                                         << 0x21U) 
                                                        | (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_stretch_ctrl_stop__q)) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_host_timeout_ctrl__q))))))))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__reg2hw[1U] 
        = (IData)(((((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_target_id_mask1__q)) 
                     << 0x39U) | (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__acqdata_abyte_re)) 
                                   << 0x30U) | (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__acqdata_abyte_re)) 
                                                 << 0x2dU) 
                                                | (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_txdata__q)) 
                                                    << 0x25U) 
                                                   | (((QData)((IData)(
                                                                       (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_txdata__qe) 
                                                                         << 2U) 
                                                                        | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_stretch_ctrl_enableaddr__q) 
                                                                            << 1U) 
                                                                           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_stretch_ctrl_enabletx__q))))) 
                                                       << 0x22U) 
                                                      | (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_stretch_ctrl_enableacq__q)) 
                                                          << 0x21U) 
                                                         | (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_stretch_ctrl_stop__q)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_host_timeout_ctrl__q))))))))) 
                   >> 0x20U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__reg2hw[2U] 
        = (IData)((((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_val__q)) 
                    << 0x16U) | (QData)((IData)(((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q) 
                                                   << 0x15U) 
                                                  | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_target_id_address0__q) 
                                                     << 0xeU)) 
                                                 | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_target_id_mask0__q) 
                                                     << 7U) 
                                                    | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_target_id_address1__q)))))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__reg2hw[3U] 
        = (((IData)((((QData)((IData)((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing3_tsu_dat__q) 
                                        << 0x10U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing3_thd_dat__q)))) 
                      << 0x20U) | (QData)((IData)((
                                                   ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing4_tsu_sto__q) 
                                                    << 0x10U) 
                                                   | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing4_t_buf__q)))))) 
            << 0x15U) | (IData)(((((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_val__q)) 
                                   << 0x16U) | (QData)((IData)(
                                                               ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q) 
                                                                  << 0x15U) 
                                                                 | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_target_id_address0__q) 
                                                                    << 0xeU)) 
                                                                | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_target_id_mask0__q) 
                                                                    << 7U) 
                                                                   | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_target_id_address1__q)))))) 
                                 >> 0x20U)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__reg2hw[4U] 
        = (((IData)((((QData)((IData)((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing3_tsu_dat__q) 
                                        << 0x10U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing3_thd_dat__q)))) 
                      << 0x20U) | (QData)((IData)((
                                                   ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing4_tsu_sto__q) 
                                                    << 0x10U) 
                                                   | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing4_t_buf__q)))))) 
            >> 0xbU) | ((IData)(((((QData)((IData)(
                                                   (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing3_tsu_dat__q) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing3_thd_dat__q)))) 
                                   << 0x20U) | (QData)((IData)(
                                                               (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing4_tsu_sto__q) 
                                                                 << 0x10U) 
                                                                | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing4_t_buf__q))))) 
                                 >> 0x20U)) << 0x15U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__reg2hw[5U] 
        = (((IData)((((QData)((IData)((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing1_t_r__q) 
                                        << 0x10U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing1_t_f__q)))) 
                      << 0x20U) | (QData)((IData)((
                                                   ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing2_tsu_sta__q) 
                                                    << 0x10U) 
                                                   | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing2_thd_sta__q)))))) 
            << 0x15U) | ((IData)(((((QData)((IData)(
                                                    (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing3_tsu_dat__q) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing3_thd_dat__q)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing4_tsu_sto__q) 
                                                                  << 0x10U) 
                                                                 | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing4_t_buf__q))))) 
                                  >> 0x20U)) >> 0xbU));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__reg2hw[6U] 
        = (((IData)((((QData)((IData)((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing1_t_r__q) 
                                        << 0x10U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing1_t_f__q)))) 
                      << 0x20U) | (QData)((IData)((
                                                   ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing2_tsu_sta__q) 
                                                    << 0x10U) 
                                                   | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing2_thd_sta__q)))))) 
            >> 0xbU) | ((IData)(((((QData)((IData)(
                                                   (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing1_t_r__q) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing1_t_f__q)))) 
                                   << 0x20U) | (QData)((IData)(
                                                               (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing2_tsu_sta__q) 
                                                                 << 0x10U) 
                                                                | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing2_thd_sta__q))))) 
                                 >> 0x20U)) << 0x15U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__reg2hw[7U] 
        = __Vtemp_8[5U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__reg2hw[8U] 
        = __Vtemp_8[6U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__reg2hw[9U] 
        = __Vtemp_10[9U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__reg2hw[0xaU] 
        = (0xfffffff8U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__reg2hw[0xaU]);
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__reg2hw[0xaU] 
        = ((7U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__reg2hw[0xaU]) 
           | (0xfffffff8U & (((((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__intr_test_fmt_watermark_we) 
                                  << 0x1fU) | (0x40000000U 
                                               & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[6U] 
                                                  << 9U))) 
                                | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__intr_test_fmt_watermark_we) 
                                    << 0x1dU) | (0x10000000U 
                                                 & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[6U] 
                                                    << 6U)))) 
                               | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__intr_test_fmt_watermark_we) 
                                    << 0x1bU) | (0x4000000U 
                                                 & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[6U] 
                                                    << 3U))) 
                                  | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__intr_test_fmt_watermark_we) 
                                      << 0x19U) | (0x1000000U 
                                                   & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[6U])))) 
                              | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__intr_test_fmt_watermark_we) 
                                    << 0x17U) | (0x400000U 
                                                 & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[6U] 
                                                    >> 3U))) 
                                  | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__intr_test_fmt_watermark_we) 
                                      << 0x15U) | (0x100000U 
                                                   & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[6U] 
                                                      >> 6U)))) 
                                 | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__intr_test_fmt_watermark_we) 
                                     << 0x13U) | ((0x40000U 
                                                   & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[6U] 
                                                      >> 9U)) 
                                                  | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__intr_test_fmt_watermark_we) 
                                                     << 0x11U))))) 
                             | (((((0x10000U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[6U] 
                                                >> 0xcU)) 
                                   | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__intr_test_fmt_watermark_we) 
                                      << 0xfU)) | (
                                                   (0x4000U 
                                                    & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[6U] 
                                                       >> 0xfU)) 
                                                   | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__intr_test_fmt_watermark_we) 
                                                      << 0xdU))) 
                                 | ((0x1000U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[6U] 
                                                >> 0x12U)) 
                                    | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__intr_test_fmt_watermark_we) 
                                        << 0xbU) | 
                                       (0x400U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[6U] 
                                                  >> 0x15U))))) 
                                | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__intr_test_fmt_watermark_we) 
                                      << 9U) | (0x100U 
                                                & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U] 
                                                   << 8U))) 
                                    | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__intr_test_fmt_watermark_we) 
                                        << 7U) | (0x40U 
                                                  & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U] 
                                                     << 5U)))) 
                                   | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__intr_test_fmt_watermark_we) 
                                       << 5U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_ctrl_enablehost__q) 
                                                  << 4U) 
                                                 | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_ctrl_enabletarget__q) 
                                                    << 3U))))))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__reg2hw[0xbU] 
        = (((((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_scl_interference__q) 
                << 0x1fU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_sda_interference__q) 
                             << 0x1eU)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_stretch_timeout__q) 
                                            << 0x1dU) 
                                           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_sda_unstable__q) 
                                              << 0x1cU))) 
             | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_trans_complete__q) 
                  << 0x1bU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_empty__q) 
                               << 0x1aU)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_nonempty__q) 
                                              << 0x19U) 
                                             | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_overflow__q) 
                                                << 0x18U)))) 
            | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_acq_overflow__q) 
                  << 0x17U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_ack_stop__q) 
                               << 0x16U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_host_timeout__q) 
                                              << 0x15U) 
                                             | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_fmt_watermark__q) 
                                                << 0x14U))) 
               | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q) 
                    << 0x13U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_fmt_overflow__q) 
                                 << 0x12U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q) 
                                                << 0x11U) 
                                               | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_nak__q) 
                                                  << 0x10U))))) 
           | ((((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_scl_interference__q) 
                  << 0xfU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_sda_interference__q) 
                              << 0xeU)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_stretch_timeout__q) 
                                            << 0xdU) 
                                           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_sda_unstable__q) 
                                              << 0xcU))) 
               | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_trans_complete__q) 
                    << 0xbU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q) 
                                << 0xaU)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_nonempty__q) 
                                              << 9U) 
                                             | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_overflow__q) 
                                                << 8U)))) 
              | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_acq_overflow__q) 
                    << 7U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_ack_stop__q) 
                              << 6U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_host_timeout__q) 
                                          << 5U) | 
                                         (0x10U & (
                                                   vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[6U] 
                                                   >> 0xeU)))) 
                 | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__intr_test_fmt_watermark_we) 
                      << 3U) | (4U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[6U] 
                                      >> 0x11U))) | 
                    (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__intr_test_fmt_watermark_we) 
                      << 1U) | (1U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[6U] 
                                      >> 0x14U)))))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__reg2hw[0xcU] 
        = (0x1fU & ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_fmt_watermark__q) 
                      << 4U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q) 
                                 << 3U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_fmt_overflow__q) 
                                           << 2U))) 
                    | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q) 
                        << 1U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_nak__q))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_stretch_timeout__DOT__new_event 
        = (((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[6U] 
             >> 0x19U) & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__intr_test_fmt_watermark_we)) 
           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__event_stretch_timeout));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_trans_complete__DOT__new_event 
        = (((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[6U] 
             >> 0x1bU) & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__intr_test_fmt_watermark_we)) 
           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__event_trans_complete));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_tx_empty__DOT__new_event 
        = (((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[6U] 
             >> 0x1cU) & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__intr_test_fmt_watermark_we)) 
           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__event_tx_empty));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_tx_nonempty__DOT__new_event 
        = (((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[6U] 
             >> 0x1dU) & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__intr_test_fmt_watermark_we)) 
           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__event_tx_nonempty));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_ack_stop__DOT__new_event 
        = ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U] 
            & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__intr_test_fmt_watermark_we)) 
           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__event_ack_stop));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_fmt_watermark__DOT__new_event 
        = (((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[6U] 
             >> 0x12U) & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__intr_test_fmt_watermark_we)) 
           | ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__fmt_watermark_q)) 
              & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__fmt_watermark_d)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_rx_watermark__DOT__new_event 
        = (((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[6U] 
             >> 0x13U) & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__intr_test_fmt_watermark_we)) 
           | ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__rx_watermark_q)) 
              & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__rx_watermark_d)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_fmt_overflow__DOT__new_event 
        = (((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[6U] 
             >> 0x14U) & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__intr_test_fmt_watermark_we)) 
           | ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__fmt_fifo_wready)) 
              & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__fmt_fifo_wvalid)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_rx_overflow__DOT__new_event 
        = (((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[6U] 
             >> 0x15U) & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__intr_test_fmt_watermark_we)) 
           | ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__rx_fifo_wready)) 
              & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__rx_fifo_wvalid)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_tx_overflow__DOT__new_event 
        = (((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[6U] 
             >> 0x1eU) & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__intr_test_fmt_watermark_we)) 
           | ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__tx_fifo_wready)) 
              & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_txdata__qe)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_acq_overflow__DOT__new_event 
        = (((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[6U] 
             >> 0x1fU) & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__intr_test_fmt_watermark_we)) 
           | ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__acq_fifo_wready)) 
              & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__acq_fifo_wvalid)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_host_timeout__DOT__new_event 
        = (((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U] 
             >> 1U) & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__intr_test_fmt_watermark_we)) 
           | ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__target_idle)) 
              & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__scl_high_cnt 
                 > vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_host_timeout_ctrl__q)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__wr_data 
        = ((~ ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
                >> 0xeU) & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_tx_watermark_we))) 
           & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__intr_hw_rx_frame_err__DOT__new_event)
               ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__intr_hw_rx_frame_err__DOT__new_event) 
                  | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q))
               : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_intr_state_rx_break_err__DOT__wr_data 
        = ((~ ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
                >> 0xfU) & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_tx_watermark_we))) 
           & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__intr_hw_rx_break_err__DOT__new_event)
               ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__intr_hw_rx_break_err__DOT__new_event) 
                  | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q))
               : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_intr_state_rx_timeout__DOT__wr_data 
        = ((~ ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
                >> 0x10U) & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_tx_watermark_we))) 
           & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__intr_hw_rx_timeout__DOT__new_event)
               ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__intr_hw_rx_timeout__DOT__new_event) 
                  | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q))
               : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__wr_data 
        = ((~ ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
                >> 0x11U) & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_tx_watermark_we))) 
           & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__intr_hw_rx_parity_err__DOT__new_event)
               ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__intr_hw_rx_parity_err__DOT__new_event) 
                  | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q))
               : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_intr_state_tx_watermark__DOT__wr_data 
        = ((~ ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
                >> 0xaU) & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_tx_watermark_we))) 
           & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__intr_hw_tx_watermark__DOT__new_event)
               ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__intr_hw_tx_watermark__DOT__new_event) 
                  | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q))
               : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_intr_state_rx_watermark__DOT__wr_data 
        = ((~ ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
                >> 0xbU) & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_tx_watermark_we))) 
           & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__intr_hw_rx_watermark__DOT__new_event)
               ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__intr_hw_rx_watermark__DOT__new_event) 
                  | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q))
               : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_intr_state_rx_overflow__DOT__wr_data 
        = ((~ ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
                >> 0xdU) & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_tx_watermark_we))) 
           & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__intr_hw_rx_overflow__DOT__new_event)
               ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__intr_hw_rx_overflow__DOT__new_event) 
                  | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q))
               : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_intr_state_tx_empty__DOT__wr_data 
        = ((~ ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
                >> 0xcU) & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_tx_watermark_we))) 
           & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__intr_hw_tx_empty__DOT__new_event)
               ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__intr_hw_tx_empty__DOT__new_event) 
                  | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_empty__q))
               : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_empty__q)));
    if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
                                             >> 0x14U))) 
                               << 2U) | (((1U == (3U 
                                                  & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
                                                     >> 0x14U))) 
                                          << 1U) | 
                                         (0U == (3U 
                                                 & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
                                                    >> 0x14U))))))))) {
        if ((0U != (((2U == (3U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
                                   >> 0x14U))) << 2U) 
                    | (((1U == (3U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
                                      >> 0x14U))) << 1U) 
                       | (0U == (3U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
                                       >> 0x14U))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: uart_core.sv:104: Assertion failed in %Ntestharness.gr_heep_i.core_v_mini_mcu_i.peripheral_subsystem_i.uart_i.uart_core: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (3U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
                                    >> 0x14U)));
                VL_STOP_MT("../../../hw/vendor/x-heep/hw/vendor/lowrisc_opentitan/hw/ip/uart/rtl/uart_core.sv", 104, "");
            }
        }
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__ie[0U] 
        = (((QData)((IData)(vlSelfRef.__VdfgRegularize_h16038c0c_0_48[2U])) 
            << 0x34U) | (((QData)((IData)(vlSelfRef.__VdfgRegularize_h16038c0c_0_48[1U])) 
                          << 0x14U) | ((QData)((IData)(
                                                       vlSelfRef.__VdfgRegularize_h16038c0c_0_48[0U])) 
                                       >> 0xcU)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__reg2hw[0U] 
        = vlSelfRef.__VdfgRegularize_h16038c0c_0_48[0U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__reg2hw[1U] 
        = vlSelfRef.__VdfgRegularize_h16038c0c_0_48[1U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__reg2hw[2U] 
        = ((0xc0000000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__reg2hw[2U]) 
           | ((0xfffc0000U & ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio58__q) 
                                << 0x1bU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio59__q) 
                                             << 0x18U)) 
                              | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio60__q) 
                                  << 0x15U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio61__q) 
                                               << 0x12U)))) 
              | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio62__q) 
                  << 0xfU) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio63__q) 
                               << 0xcU) | vlSelfRef.__VdfgRegularize_h16038c0c_0_48[2U]))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__reg2hw[2U] 
        = ((0x3fffffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__reg2hw[2U]) 
           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio57__q) 
              << 0x1eU));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__reg2hw[3U] 
        = ((0xffffff80U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__reg2hw[3U]) 
           | (0x3fffffffU & ((0x3ffffff0U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio55__q) 
                                             << 4U)) 
                             | ((0x3ffffffeU & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio56__q) 
                                                << 1U)) 
                                | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio57__q) 
                                   >> 2U)))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__reg2hw[3U] 
        = ((0xfe00007fU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__reg2hw[3U]) 
           | (0xffffff80U & ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio49__q) 
                               << 0x16U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio50__q) 
                                             << 0x13U) 
                                            | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio51__q) 
                                               << 0x10U))) 
                             | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio52__q) 
                                 << 0xdU) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio53__q) 
                                              << 0xaU) 
                                             | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio54__q) 
                                                << 7U))))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__reg2hw[3U] 
        = ((0x1ffffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__reg2hw[3U]) 
           | (0xfe000000U & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio46__q) 
                              << 0x1fU) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio47__q) 
                                            << 0x1cU) 
                                           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio48__q) 
                                              << 0x19U)))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__reg2hw[4U] 
        = ((0xffffffe0U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__reg2hw[4U]) 
           | (0x1ffffffU & ((0x1fffffcU & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio45__q) 
                                           << 2U)) 
                            | ((0x1ffffffU & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio46__q) 
                                              >> 1U)) 
                               | ((0x1ffffffU & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio47__q) 
                                                 >> 4U)) 
                                  | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio48__q) 
                                     >> 7U))))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__reg2hw[4U] 
        = ((0xffffc01fU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__reg2hw[4U]) 
           | (0xffffffe0U & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio42__q) 
                              << 0xbU) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio43__q) 
                                           << 8U) | 
                                          ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio44__q) 
                                           << 5U)))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__reg2hw[4U] 
        = ((0x3fffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__reg2hw[4U]) 
           | (0xffffc000U & ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio36__q) 
                               << 0x1dU) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio37__q) 
                                             << 0x1aU) 
                                            | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio38__q) 
                                               << 0x17U))) 
                             | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio39__q) 
                                 << 0x14U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio40__q) 
                                               << 0x11U) 
                                              | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio41__q) 
                                                 << 0xeU))))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__reg2hw[5U] 
        = ((0xff000000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__reg2hw[5U]) 
           | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio28__q) 
                 << 0x15U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio29__q) 
                              << 0x12U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio30__q) 
                                             << 0xfU) 
                                            | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio31__q) 
                                               << 0xcU))) 
              | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio32__q) 
                   << 9U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio33__q) 
                             << 6U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio34__q) 
                                         << 3U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio35__q)))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__reg2hw[5U] 
        = ((0xffffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__reg2hw[5U]) 
           | (0xff000000U & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio25__q) 
                              << 0x1eU) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio26__q) 
                                            << 0x1bU) 
                                           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio27__q) 
                                              << 0x18U)))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__reg2hw[6U] 
        = ((0xfffffff0U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__reg2hw[6U]) 
           | (0xffffffU & ((0xfffffeU & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio24__q) 
                                         << 1U)) | 
                           ((0xffffffU & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio25__q) 
                                          >> 2U)) | 
                            ((0xffffffU & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio26__q) 
                                           >> 5U)) 
                             | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio27__q) 
                                >> 8U))))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__reg2hw[6U] 
        = ((0xf000000fU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__reg2hw[6U]) 
           | (0xfffffff0U & (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio16__q) 
                                << 0x19U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio17__q) 
                                             << 0x16U)) 
                              | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio18__q) 
                                  << 0x13U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio19__q) 
                                               << 0x10U))) 
                             | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio20__q) 
                                  << 0xdU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio21__q) 
                                              << 0xaU)) 
                                | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio22__q) 
                                    << 7U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio23__q) 
                                              << 4U))))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__reg2hw[6U] 
        = ((0xfffffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__reg2hw[6U]) 
           | (0xf0000000U & (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio14__q) 
                              << 0x1fU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio15__q) 
                                           << 0x1cU))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__reg2hw[7U] 
        = ((0xffffff00U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__reg2hw[7U]) 
           | (0xfffffffU & (((0xfffffe0U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio12__q) 
                                            << 5U)) 
                             | (0xffffffcU & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio13__q) 
                                              << 2U))) 
                            | ((0xfffffffU & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio14__q) 
                                              >> 1U)) 
                               | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio15__q) 
                                  >> 4U)))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__reg2hw[7U] 
        = ((0xffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__reg2hw[7U]) 
           | (0xffffff00U & (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio4__q) 
                                << 0x1dU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio5__q) 
                                             << 0x1aU)) 
                              | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio6__q) 
                                  << 0x17U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio7__q) 
                                               << 0x14U))) 
                             | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio8__q) 
                                  << 0x11U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio9__q) 
                                               << 0xeU)) 
                                | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio10__q) 
                                    << 0xbU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio11__q) 
                                                << 8U))))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__reg2hw[8U] 
        = (((((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_19__q) 
                << 0x1fU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_18__q) 
                             << 0x1eU)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_17__q) 
                                            << 0x1dU) 
                                           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_16__q) 
                                              << 0x1cU))) 
             | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_15__q) 
                  << 0x1bU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_14__q) 
                               << 0x1aU)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_13__q) 
                                              << 0x19U) 
                                             | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_12__q) 
                                                << 0x18U)))) 
            | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_11__q) 
                  << 0x17U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_10__q) 
                               << 0x16U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_9__q) 
                                              << 0x15U) 
                                             | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_8__q) 
                                                << 0x14U))) 
               | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_7__q) 
                    << 0x13U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_6__q) 
                                 << 0x12U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_5__q) 
                                                << 0x11U) 
                                               | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_4__q) 
                                                  << 0x10U))))) 
           | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_3__q) 
                 << 0xfU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_2__q) 
                             << 0xeU)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_1__q) 
                                           << 0xdU) 
                                          | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_0__q) 
                                              << 0xcU) 
                                             | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio0__q) 
                                                << 9U)))) 
              | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio1__q) 
                  << 6U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio2__q) 
                             << 3U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_prio3__q)))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__reg2hw[9U] 
        = (((((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_51__q) 
                << 0x1fU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_50__q) 
                             << 0x1eU)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_49__q) 
                                            << 0x1dU) 
                                           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_48__q) 
                                              << 0x1cU))) 
             | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_47__q) 
                  << 0x1bU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_46__q) 
                               << 0x1aU)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_45__q) 
                                              << 0x19U) 
                                             | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_44__q) 
                                                << 0x18U)))) 
            | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_43__q) 
                  << 0x17U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_42__q) 
                               << 0x16U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_41__q) 
                                              << 0x15U) 
                                             | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_40__q) 
                                                << 0x14U))) 
               | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_39__q) 
                    << 0x13U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_38__q) 
                                 << 0x12U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_37__q) 
                                                << 0x11U) 
                                               | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_36__q) 
                                                  << 0x10U))))) 
           | ((((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_35__q) 
                  << 0xfU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_34__q) 
                              << 0xeU)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_33__q) 
                                            << 0xdU) 
                                           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_32__q) 
                                              << 0xcU))) 
               | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_31__q) 
                    << 0xbU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_30__q) 
                                << 0xaU)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_29__q) 
                                              << 9U) 
                                             | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_28__q) 
                                                << 8U)))) 
              | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_27__q) 
                    << 7U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_26__q) 
                              << 6U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_25__q) 
                                          << 5U) | 
                                         ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_24__q) 
                                          << 4U))) 
                 | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_23__q) 
                      << 3U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_22__q) 
                                << 2U)) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_21__q) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_0_le_20__q))))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__reg2hw[0xaU] 
        = (0xfffU & (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_63__q) 
                        << 0xbU) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_62__q) 
                                     << 0xaU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_61__q) 
                                                 << 9U))) 
                      | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_60__q) 
                          << 8U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_59__q) 
                                     << 7U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_58__q) 
                                               << 6U)))) 
                     | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_57__q) 
                          << 5U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_56__q) 
                                     << 4U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_55__q) 
                                               << 3U))) 
                        | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_54__q) 
                            << 2U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_53__q) 
                                       << 1U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_le_1_le_52__q))))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellinp__u_intr_state_stretch_timeout__d 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_stretch_timeout__DOT__new_event) 
           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_stretch_timeout__q));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellinp__u_intr_state_trans_complete__d 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_trans_complete__DOT__new_event) 
           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_trans_complete__q));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellinp__u_intr_state_tx_empty__d 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_tx_empty__DOT__new_event) 
           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_empty__q));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellinp__u_intr_state_tx_nonempty__d 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_tx_nonempty__DOT__new_event) 
           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_nonempty__q));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellinp__u_intr_state_ack_stop__d 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_ack_stop__DOT__new_event) 
           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_ack_stop__q));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellinp__u_intr_state_fmt_watermark__d 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_fmt_watermark__DOT__new_event) 
           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_fmt_watermark__q));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellinp__u_intr_state_rx_watermark__d 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_rx_watermark__DOT__new_event) 
           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellinp__u_intr_state_fmt_overflow__d 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_fmt_overflow__DOT__new_event) 
           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_fmt_overflow__q));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellinp__u_intr_state_rx_overflow__d 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_rx_overflow__DOT__new_event) 
           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellinp__u_intr_state_tx_overflow__d 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_tx_overflow__DOT__new_event) 
           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_overflow__q));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellinp__u_intr_state_acq_overflow__d 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_acq_overflow__DOT__new_event) 
           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_acq_overflow__q));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellinp__u_intr_state_host_timeout__d 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_host_timeout__DOT__new_event) 
           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_host_timeout__q));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_intr_state_stretch_timeout__DOT__wr_data 
        = ((~ ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[6U] 
                >> 0x19U) & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__intr_state_fmt_watermark_we))) 
           & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_stretch_timeout__DOT__new_event)
               ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellinp__u_intr_state_stretch_timeout__d)
               : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_stretch_timeout__q)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_intr_state_trans_complete__DOT__wr_data 
        = ((~ ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[6U] 
                >> 0x1bU) & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__intr_state_fmt_watermark_we))) 
           & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_trans_complete__DOT__new_event)
               ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellinp__u_intr_state_trans_complete__d)
               : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_trans_complete__q)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_intr_state_tx_empty__DOT__wr_data 
        = ((~ ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[6U] 
                >> 0x1cU) & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__intr_state_fmt_watermark_we))) 
           & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_tx_empty__DOT__new_event)
               ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellinp__u_intr_state_tx_empty__d)
               : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_empty__q)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_intr_state_tx_nonempty__DOT__wr_data 
        = ((~ ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[6U] 
                >> 0x1dU) & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__intr_state_fmt_watermark_we))) 
           & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_tx_nonempty__DOT__new_event)
               ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellinp__u_intr_state_tx_nonempty__d)
               : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_nonempty__q)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_intr_state_ack_stop__DOT__wr_data 
        = ((~ (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U] 
               & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__intr_state_fmt_watermark_we))) 
           & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_ack_stop__DOT__new_event)
               ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellinp__u_intr_state_ack_stop__d)
               : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_ack_stop__q)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_intr_state_fmt_watermark__DOT__wr_data 
        = ((~ ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[6U] 
                >> 0x12U) & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__intr_state_fmt_watermark_we))) 
           & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_fmt_watermark__DOT__new_event)
               ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellinp__u_intr_state_fmt_watermark__d)
               : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_fmt_watermark__q)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_intr_state_rx_watermark__DOT__wr_data 
        = ((~ ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[6U] 
                >> 0x13U) & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__intr_state_fmt_watermark_we))) 
           & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_rx_watermark__DOT__new_event)
               ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellinp__u_intr_state_rx_watermark__d)
               : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_intr_state_fmt_overflow__DOT__wr_data 
        = ((~ ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[6U] 
                >> 0x14U) & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__intr_state_fmt_watermark_we))) 
           & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_fmt_overflow__DOT__new_event)
               ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellinp__u_intr_state_fmt_overflow__d)
               : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_fmt_overflow__q)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_intr_state_rx_overflow__DOT__wr_data 
        = ((~ ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[6U] 
                >> 0x15U) & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__intr_state_fmt_watermark_we))) 
           & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_rx_overflow__DOT__new_event)
               ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellinp__u_intr_state_rx_overflow__d)
               : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_intr_state_tx_overflow__DOT__wr_data 
        = ((~ ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[6U] 
                >> 0x1eU) & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__intr_state_fmt_watermark_we))) 
           & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_tx_overflow__DOT__new_event)
               ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellinp__u_intr_state_tx_overflow__d)
               : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_overflow__q)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_intr_state_acq_overflow__DOT__wr_data 
        = ((~ ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[6U] 
                >> 0x1fU) & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__intr_state_fmt_watermark_we))) 
           & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_acq_overflow__DOT__new_event)
               ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellinp__u_intr_state_acq_overflow__d)
               : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_acq_overflow__q)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_intr_state_host_timeout__DOT__wr_data 
        = ((~ ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[7U] 
                >> 1U) & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__intr_state_fmt_watermark_we))) 
           & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_host_timeout__DOT__new_event)
               ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellinp__u_intr_state_host_timeout__d)
               : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_host_timeout__q)));
}

extern const VlUnpacked<CData/*2:0*/, 256> Vtestharness__ConstPool__TABLE_h115ec5a7_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtestharness__ConstPool__TABLE_h8ab3c515_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtestharness__ConstPool__TABLE_h82031680_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtestharness__ConstPool__TABLE_h9e20db95_0;
extern const VlUnpacked<CData/*2:0*/, 512> Vtestharness__ConstPool__TABLE_h0694787c_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vtestharness__ConstPool__TABLE_h1799a869_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vtestharness__ConstPool__TABLE_h13e14fcb_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vtestharness__ConstPool__TABLE_h6c4535ed_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vtestharness__ConstPool__TABLE_h51f4b2a8_0;

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__38(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__38\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __Vtableidx26;
    __Vtableidx26 = 0;
    CData/*7:0*/ __Vtableidx27;
    __Vtableidx27 = 0;
    SData/*8:0*/ __Vtableidx28;
    __Vtableidx28 = 0;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<5>/*159:0*/ __Vtemp_6;
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__clock_en 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__fetch_enable_q) 
           & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__core_busy_q) 
              | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__haltreq) 
                 | (0U != vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__irqs))));
    if ((1U & (~ (IData)(vlSelfRef.clk_i)))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__core_clock_gate_i__DOT__clk_en 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__clock_en;
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____VdfgRegularize_h2d098798_0_0 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_power_gate_core__q) 
           & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__clock_en)) 
              & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__fetch_enable_q)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__gen_no_rs3_flop__DOT__unused_clk 
        = ((IData)(vlSelfRef.clk_i) & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__core_clock_gate_i__DOT__clk_en));
    __Vtableidx27 = ((((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____VdfgRegularize_h2d098798_0_0) 
                         | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_master_cpu_force_switch_off__q)) 
                        << 7U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__cpu_powergate_counter_expired_switch_off) 
                                  << 6U)) | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__start_on_sequence) 
                                               | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_master_cpu_force_switch_on__q)) 
                                              << 5U) 
                                             | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__cpu_powergate_counter_expired_switch_on) 
                                                << 4U))) 
                     | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_counter_sequence_cpu_switch_i__DOT__switch_onoff_signal_q) 
                         << 3U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_counter_sequence_cpu_switch_i__DOT__sequence_curr_state)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_counter_sequence_cpu_switch_i__DOT__sequence_next_state 
        = Vtestharness__ConstPool__TABLE_h115ec5a7_0
        [__Vtableidx27];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__cpu_powergate_counter_start_switch_off 
        = Vtestharness__ConstPool__TABLE_h8ab3c515_0
        [__Vtableidx27];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__cpu_powergate_counter_start_switch_on 
        = Vtestharness__ConstPool__TABLE_h82031680_0
        [__Vtableidx27];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_counter_sequence_cpu_switch_i__DOT__switch_onoff_signal_d 
        = Vtestharness__ConstPool__TABLE_h9e20db95_0
        [__Vtableidx27];
    __Vtableidx26 = ((((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____VdfgRegularize_h2d098798_0_0) 
                         | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_master_cpu_force_reset_assert__q)) 
                        << 8U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__cpu_powergate_counter_expired_reset_assert) 
                                   << 7U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__start_on_sequence) 
                                              | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_master_cpu_force_reset_deassert__q)) 
                                             << 6U))) 
                      | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__cpu_powergate_counter_expired_reset_deassert) 
                          << 5U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__cpu_switch_wait_ack) 
                                    << 4U))) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_counter_sequence_cpu_reset_i__DOT__switch_onoff_signal_q) 
                                                 << 3U) 
                                                | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_counter_sequence_cpu_reset_i__DOT__sequence_curr_state)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_counter_sequence_cpu_reset_i__DOT__sequence_next_state 
        = Vtestharness__ConstPool__TABLE_h0694787c_0
        [__Vtableidx26];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__cpu_powergate_counter_start_reset_assert 
        = Vtestharness__ConstPool__TABLE_h1799a869_0
        [__Vtableidx26];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__cpu_powergate_counter_start_reset_deassert 
        = Vtestharness__ConstPool__TABLE_h13e14fcb_0
        [__Vtableidx26];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_counter_sequence_cpu_reset_i__DOT__switch_onoff_signal_d 
        = Vtestharness__ConstPool__TABLE_h6c4535ed_0
        [__Vtableidx26];
    __Vtableidx28 = ((((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____VdfgRegularize_h2d098798_0_0) 
                         | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_master_cpu_force_iso_off__q)) 
                        << 8U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__cpu_powergate_counter_expired_iso_off) 
                                   << 7U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__start_on_sequence) 
                                              | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_master_cpu_force_iso_on__q)) 
                                             << 6U))) 
                      | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__cpu_powergate_counter_expired_iso_on) 
                          << 5U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__cpu_switch_wait_ack) 
                                    << 4U))) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_counter_sequence_cpu_iso_i__DOT__switch_onoff_signal_q) 
                                                 << 3U) 
                                                | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_counter_sequence_cpu_iso_i__DOT__sequence_curr_state)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_counter_sequence_cpu_iso_i__DOT__sequence_next_state 
        = Vtestharness__ConstPool__TABLE_h0694787c_0
        [__Vtableidx28];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__cpu_powergate_counter_start_iso_off 
        = Vtestharness__ConstPool__TABLE_h1799a869_0
        [__Vtableidx28];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__cpu_powergate_counter_start_iso_on 
        = Vtestharness__ConstPool__TABLE_h13e14fcb_0
        [__Vtableidx28];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_counter_sequence_cpu_iso_i__DOT__switch_onoff_signal_d 
        = Vtestharness__ConstPool__TABLE_h51f4b2a8_0
        [__Vtableidx28];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_powergate_switch_off_i__hw2reg_de_o = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_powergate_switch_off_i__hw2reg_d_o 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_cpu_switch_off_counter__q 
           - (IData)(1U));
    if ((0U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__reg_to_counter_cpu_powergate_switch_off_i__DOT__counter_curr_state))) {
        if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__cpu_powergate_counter_start_switch_off) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_powergate_switch_off_i__hw2reg_de_o = 1U;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__reg_to_counter_cpu_powergate_switch_off_i__DOT__counter_next_state = 1U;
        } else {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_powergate_switch_off_i__hw2reg_de_o = 0U;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__reg_to_counter_cpu_powergate_switch_off_i__DOT__counter_next_state = 0U;
        }
    } else if ((1U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__reg_to_counter_cpu_powergate_switch_off_i__DOT__counter_curr_state))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_powergate_switch_off_i__hw2reg_de_o = 1U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__reg_to_counter_cpu_powergate_switch_off_i__DOT__counter_next_state 
            = ((0U == vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_powergate_switch_off_i__hw2reg_d_o)
                ? 2U : 1U);
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__reg_to_counter_cpu_powergate_switch_off_i__DOT__counter_next_state 
            = ((2U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__reg_to_counter_cpu_powergate_switch_off_i__DOT__counter_curr_state))
                ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_cpu_counters_stop_cpu_switch_off_stop_bit_counter__q)
                    ? 0U : 2U) : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__reg_to_counter_cpu_powergate_switch_off_i__DOT__counter_curr_state));
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_powergate_switch_on_i__hw2reg_de_o = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_powergate_switch_on_i__hw2reg_d_o 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_cpu_switch_on_counter__q 
           - (IData)(1U));
    if ((0U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__reg_to_counter_cpu_powergate_switch_on_i__DOT__counter_curr_state))) {
        if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__cpu_powergate_counter_start_switch_on) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_powergate_switch_on_i__hw2reg_de_o = 1U;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__reg_to_counter_cpu_powergate_switch_on_i__DOT__counter_next_state = 1U;
        } else {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_powergate_switch_on_i__hw2reg_de_o = 0U;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__reg_to_counter_cpu_powergate_switch_on_i__DOT__counter_next_state = 0U;
        }
    } else if ((1U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__reg_to_counter_cpu_powergate_switch_on_i__DOT__counter_curr_state))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_powergate_switch_on_i__hw2reg_de_o = 1U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__reg_to_counter_cpu_powergate_switch_on_i__DOT__counter_next_state 
            = ((0U == vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_powergate_switch_on_i__hw2reg_d_o)
                ? 2U : 1U);
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__reg_to_counter_cpu_powergate_switch_on_i__DOT__counter_next_state 
            = ((2U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__reg_to_counter_cpu_powergate_switch_on_i__DOT__counter_curr_state))
                ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_cpu_counters_stop_cpu_switch_on_stop_bit_counter__q)
                    ? 0U : 2U) : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__reg_to_counter_cpu_powergate_switch_on_i__DOT__counter_curr_state));
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_reset_assert_i__hw2reg_de_o = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_reset_assert_i__hw2reg_d_o 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_cpu_reset_assert_counter__q 
           - (IData)(1U));
    if ((0U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__reg_to_counter_cpu_reset_assert_i__DOT__counter_curr_state))) {
        if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__cpu_powergate_counter_start_reset_assert) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_reset_assert_i__hw2reg_de_o = 1U;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__reg_to_counter_cpu_reset_assert_i__DOT__counter_next_state = 1U;
        } else {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_reset_assert_i__hw2reg_de_o = 0U;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__reg_to_counter_cpu_reset_assert_i__DOT__counter_next_state = 0U;
        }
    } else if ((1U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__reg_to_counter_cpu_reset_assert_i__DOT__counter_curr_state))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_reset_assert_i__hw2reg_de_o = 1U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__reg_to_counter_cpu_reset_assert_i__DOT__counter_next_state 
            = ((0U == vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_reset_assert_i__hw2reg_d_o)
                ? 2U : 1U);
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__reg_to_counter_cpu_reset_assert_i__DOT__counter_next_state 
            = ((2U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__reg_to_counter_cpu_reset_assert_i__DOT__counter_curr_state))
                ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_cpu_counters_stop_cpu_reset_assert_stop_bit_counter__q)
                    ? 0U : 2U) : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__reg_to_counter_cpu_reset_assert_i__DOT__counter_curr_state));
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_reset_deassert_i__hw2reg_de_o = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_reset_deassert_i__hw2reg_d_o 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_cpu_reset_deassert_counter__q 
           - (IData)(1U));
    if ((0U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__reg_to_counter_cpu_reset_deassert_i__DOT__counter_curr_state))) {
        if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__cpu_powergate_counter_start_reset_deassert) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_reset_deassert_i__hw2reg_de_o = 1U;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__reg_to_counter_cpu_reset_deassert_i__DOT__counter_next_state = 1U;
        } else {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_reset_deassert_i__hw2reg_de_o = 0U;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__reg_to_counter_cpu_reset_deassert_i__DOT__counter_next_state = 0U;
        }
    } else if ((1U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__reg_to_counter_cpu_reset_deassert_i__DOT__counter_curr_state))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_reset_deassert_i__hw2reg_de_o = 1U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__reg_to_counter_cpu_reset_deassert_i__DOT__counter_next_state 
            = ((0U == vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_reset_deassert_i__hw2reg_d_o)
                ? 2U : 1U);
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__reg_to_counter_cpu_reset_deassert_i__DOT__counter_next_state 
            = ((2U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__reg_to_counter_cpu_reset_deassert_i__DOT__counter_curr_state))
                ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_cpu_counters_stop_cpu_reset_deassert_stop_bit_counter__q)
                    ? 0U : 2U) : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__reg_to_counter_cpu_reset_deassert_i__DOT__counter_curr_state));
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_powergate_iso_off_i__hw2reg_de_o = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_powergate_iso_off_i__hw2reg_d_o 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_cpu_iso_off_counter__q 
           - (IData)(1U));
    if ((0U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__reg_to_counter_cpu_powergate_iso_off_i__DOT__counter_curr_state))) {
        if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__cpu_powergate_counter_start_iso_off) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_powergate_iso_off_i__hw2reg_de_o = 1U;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__reg_to_counter_cpu_powergate_iso_off_i__DOT__counter_next_state = 1U;
        } else {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_powergate_iso_off_i__hw2reg_de_o = 0U;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__reg_to_counter_cpu_powergate_iso_off_i__DOT__counter_next_state = 0U;
        }
    } else if ((1U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__reg_to_counter_cpu_powergate_iso_off_i__DOT__counter_curr_state))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_powergate_iso_off_i__hw2reg_de_o = 1U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__reg_to_counter_cpu_powergate_iso_off_i__DOT__counter_next_state 
            = ((0U == vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_powergate_iso_off_i__hw2reg_d_o)
                ? 2U : 1U);
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__reg_to_counter_cpu_powergate_iso_off_i__DOT__counter_next_state 
            = ((2U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__reg_to_counter_cpu_powergate_iso_off_i__DOT__counter_curr_state))
                ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_cpu_counters_stop_cpu_iso_off_stop_bit_counter__q)
                    ? 0U : 2U) : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__reg_to_counter_cpu_powergate_iso_off_i__DOT__counter_curr_state));
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_powergate_iso_on_i__hw2reg_de_o = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_powergate_iso_on_i__hw2reg_d_o 
        = (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_cpu_iso_on_counter__q 
           - (IData)(1U));
    if ((0U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__reg_to_counter_cpu_powergate_iso_on_i__DOT__counter_curr_state))) {
        if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__cpu_powergate_counter_start_iso_on) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_powergate_iso_on_i__hw2reg_de_o = 1U;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__reg_to_counter_cpu_powergate_iso_on_i__DOT__counter_next_state = 1U;
        } else {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_powergate_iso_on_i__hw2reg_de_o = 0U;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__reg_to_counter_cpu_powergate_iso_on_i__DOT__counter_next_state = 0U;
        }
    } else if ((1U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__reg_to_counter_cpu_powergate_iso_on_i__DOT__counter_curr_state))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_powergate_iso_on_i__hw2reg_de_o = 1U;
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__reg_to_counter_cpu_powergate_iso_on_i__DOT__counter_next_state 
            = ((0U == vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_powergate_iso_on_i__hw2reg_d_o)
                ? 2U : 1U);
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__reg_to_counter_cpu_powergate_iso_on_i__DOT__counter_next_state 
            = ((2U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__reg_to_counter_cpu_powergate_iso_on_i__DOT__counter_curr_state))
                ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_cpu_counters_stop_cpu_iso_on_stop_bit_counter__q)
                    ? 0U : 2U) : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__reg_to_counter_cpu_powergate_iso_on_i__DOT__counter_curr_state));
    }
    __Vtemp_5[1U] = (((IData)((((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_powergate_iso_on_i__hw2reg_d_o)) 
                                << 0xfU) | (QData)((IData)(
                                                           (0x1555U 
                                                            | ((((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_powergate_iso_on_i__hw2reg_de_o) 
                                                                   << 0xeU) 
                                                                  | (0x2000U 
                                                                     & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__sync_periph_ack_i__DOT__reg_q) 
                                                                        << 0xcU))) 
                                                                 | (0x800U 
                                                                    & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__sync_ram_0_ack_i__DOT__reg_q) 
                                                                       << 0xaU))) 
                                                                | ((0x200U 
                                                                    & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__sync_ram_1_ack_i__DOT__reg_q) 
                                                                       << 8U)) 
                                                                   | (0x80U 
                                                                      & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__sync_ram_2_ack_i__DOT__reg_q) 
                                                                         << 6U)))) 
                                                               | (((0x20U 
                                                                    & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__sync_ram_3_ack_i__DOT__reg_q) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__sync_ram_4_ack_i__DOT__reg_q) 
                                                                         << 2U))) 
                                                                  | (2U 
                                                                     & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__sync_ram_5_ack_i__DOT__reg_q))))))))) 
                      << 0xeU) | (IData)(((0x4000000000ULL 
                                           | (((QData)((IData)(
                                                               (5U 
                                                                | ((8U 
                                                                    & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__sync_ram_6_ack_i__DOT__reg_q) 
                                                                       << 2U)) 
                                                                   | (2U 
                                                                      & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__sync_ram_7_ack_i__DOT__reg_q)))))) 
                                               << 0x2aU) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   | (2U 
                                                                      & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__sync_ram_8_ack_i__DOT__reg_q))))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__sync_ram_9_ack_i__DOT__reg_q) 
                                                                         >> 1U)))) 
                                                     << 0x27U) 
                                                    | vlSelfRef.__VdfgRegularize_h16038c0c_0_44)))) 
                                          >> 0x20U)));
    __Vtemp_5[2U] = (((IData)((((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_powergate_iso_on_i__hw2reg_d_o)) 
                                << 0xfU) | (QData)((IData)(
                                                           (0x1555U 
                                                            | ((((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_powergate_iso_on_i__hw2reg_de_o) 
                                                                   << 0xeU) 
                                                                  | (0x2000U 
                                                                     & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__sync_periph_ack_i__DOT__reg_q) 
                                                                        << 0xcU))) 
                                                                 | (0x800U 
                                                                    & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__sync_ram_0_ack_i__DOT__reg_q) 
                                                                       << 0xaU))) 
                                                                | ((0x200U 
                                                                    & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__sync_ram_1_ack_i__DOT__reg_q) 
                                                                       << 8U)) 
                                                                   | (0x80U 
                                                                      & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__sync_ram_2_ack_i__DOT__reg_q) 
                                                                         << 6U)))) 
                                                               | (((0x20U 
                                                                    & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__sync_ram_3_ack_i__DOT__reg_q) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__sync_ram_4_ack_i__DOT__reg_q) 
                                                                         << 2U))) 
                                                                  | (2U 
                                                                     & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__sync_ram_5_ack_i__DOT__reg_q))))))))) 
                      >> 0x12U) | ((IData)(((((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_powergate_iso_on_i__hw2reg_d_o)) 
                                              << 0xfU) 
                                             | (QData)((IData)(
                                                               (0x1555U 
                                                                | ((((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_powergate_iso_on_i__hw2reg_de_o) 
                                                                       << 0xeU) 
                                                                      | (0x2000U 
                                                                         & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__sync_periph_ack_i__DOT__reg_q) 
                                                                            << 0xcU))) 
                                                                     | (0x800U 
                                                                        & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__sync_ram_0_ack_i__DOT__reg_q) 
                                                                           << 0xaU))) 
                                                                    | ((0x200U 
                                                                        & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__sync_ram_1_ack_i__DOT__reg_q) 
                                                                           << 8U)) 
                                                                       | (0x80U 
                                                                          & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__sync_ram_2_ack_i__DOT__reg_q) 
                                                                             << 6U)))) 
                                                                   | (((0x20U 
                                                                        & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__sync_ram_3_ack_i__DOT__reg_q) 
                                                                           << 4U)) 
                                                                       | (8U 
                                                                          & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__sync_ram_4_ack_i__DOT__reg_q) 
                                                                             << 2U))) 
                                                                      | (2U 
                                                                         & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__sync_ram_5_ack_i__DOT__reg_q)))))))) 
                                            >> 0x20U)) 
                                   << 0xeU));
    __Vtemp_6[4U] = (((0x1fffffffU & ((IData)((((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_powergate_switch_off_i__hw2reg_de_o)) 
                                                << 0x21U) 
                                               | (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_powergate_switch_on_i__hw2reg_d_o)) 
                                                   << 1U) 
                                                  | (QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_powergate_switch_on_i__hw2reg_de_o))))) 
                                      >> 2U)) | ((IData)(
                                                         ((((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_powergate_iso_off_i__hw2reg_d_o)) 
                                                            << 1U) 
                                                           | (QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_powergate_iso_off_i__hw2reg_de_o))) 
                                                          >> 0x20U)) 
                                                 >> 3U)) 
                     | ((0x20000000U & ((IData)((((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_powergate_switch_off_i__hw2reg_de_o)) 
                                                  << 0x21U) 
                                                 | (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_powergate_switch_on_i__hw2reg_d_o)) 
                                                     << 1U) 
                                                    | (QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_powergate_switch_on_i__hw2reg_de_o))))) 
                                        >> 2U)) | ((IData)(
                                                           ((((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_powergate_switch_off_i__hw2reg_de_o)) 
                                                              << 0x21U) 
                                                             | (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_powergate_switch_on_i__hw2reg_d_o)) 
                                                                 << 1U) 
                                                                | (QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_powergate_switch_on_i__hw2reg_de_o)))) 
                                                            >> 0x20U)) 
                                                   << 0x1eU)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__hw2reg[0U] 
        = (IData)((0x4000000000ULL | (((QData)((IData)(
                                                       (5U 
                                                        | ((8U 
                                                            & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__sync_ram_6_ack_i__DOT__reg_q) 
                                                               << 2U)) 
                                                           | (2U 
                                                              & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__sync_ram_7_ack_i__DOT__reg_q)))))) 
                                       << 0x2aU) | 
                                      (((QData)((IData)(
                                                        (1U 
                                                         | (2U 
                                                            & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__sync_ram_8_ack_i__DOT__reg_q))))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__sync_ram_9_ack_i__DOT__reg_q) 
                                                             >> 1U)))) 
                                         << 0x27U) 
                                        | vlSelfRef.__VdfgRegularize_h16038c0c_0_44)))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__hw2reg[1U] 
        = __Vtemp_5[1U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__hw2reg[2U] 
        = (((IData)((((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_powergate_iso_off_i__hw2reg_d_o)) 
                      << 1U) | (QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_powergate_iso_off_i__hw2reg_de_o)))) 
            << 0x1dU) | __Vtemp_5[2U]);
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__hw2reg[3U] 
        = (((IData)((((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_powergate_iso_off_i__hw2reg_d_o)) 
                      << 1U) | (QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_powergate_iso_off_i__hw2reg_de_o)))) 
            >> 3U) | (((IData)((((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_powergate_switch_off_i__hw2reg_de_o)) 
                                 << 0x21U) | (((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_powergate_switch_on_i__hw2reg_d_o)) 
                                               << 1U) 
                                              | (QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_powergate_switch_on_i__hw2reg_de_o))))) 
                       << 0x1eU) | ((IData)(((((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_powergate_iso_off_i__hw2reg_d_o)) 
                                               << 1U) 
                                              | (QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_powergate_iso_off_i__hw2reg_de_o))) 
                                             >> 0x20U)) 
                                    << 0x1dU)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__hw2reg[4U] 
        = __Vtemp_6[4U];
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__hw2reg[5U] 
        = (IData)((((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_reset_deassert_i__hw2reg_de_o)) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_powergate_switch_off_i__hw2reg_d_o))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__hw2reg[6U] 
        = ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_reset_deassert_i__hw2reg_d_o 
            << 1U) | (IData)(((((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_reset_deassert_i__hw2reg_de_o)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_powergate_switch_off_i__hw2reg_d_o))) 
                              >> 0x20U)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__hw2reg[7U] 
        = (((IData)((((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_reset_assert_i__hw2reg_d_o)) 
                      << 1U) | (QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_reset_assert_i__hw2reg_de_o)))) 
            << 1U) | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_reset_deassert_i__hw2reg_d_o 
                      >> 0x1fU));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__hw2reg[8U] 
        = ((0xfffffffcU & (0x14U | ((0x1fff80U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__fast_intr_ctrl_i__DOT__fast_intr_ctrl_reg_top_i__DOT____Vcellout__u_fast_intr_pending__q) 
                                                  << 7U)) 
                                    | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__irq_q) 
                                         << 6U) | ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__rv_timer_0_1_i.__PVT__intr_out__BRA__0__KET__) 
                                                   << 5U)) 
                                       | (8U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__sync_cpu_ack_i__DOT__reg_q) 
                                                << 2U)))))) 
           | (((IData)((((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_reset_assert_i__hw2reg_d_o)) 
                         << 1U) | (QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_reset_assert_i__hw2reg_de_o)))) 
               >> 0x1fU) | ((IData)(((((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_reset_assert_i__hw2reg_d_o)) 
                                       << 1U) | (QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT____Vcellout__reg_to_counter_cpu_reset_assert_i__hw2reg_de_o))) 
                                     >> 0x20U)) << 1U)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__hw2reg[9U] = 0U;
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__39(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__39\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT____Vcellinp__cv32e20_i__instr_rvalid_i 
        = (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__xbar_varlat_n_to_one_i__DOT__u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__vld_o) 
            >> (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__0__KET____DOT__demux_xbar_i.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_q)) 
           & (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__0__KET____DOT__demux_xbar_i.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q));
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__44(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__44\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
    if ((0x800U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))) {
        if ((0x400U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))) {
            if ((0x200U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))) {
                if ((0x100U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))) {
                    if ((1U & (~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr) 
                                  >> 7U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr) 
                                      >> 6U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr) 
                                          >> 5U)))) {
                                if ((0x10U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr) 
                                                  >> 3U)))) {
                                        if ((4U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr) 
                                                     >> 1U)))) {
                                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                            }
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))) {
                                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))
                                                    ? 0U
                                                    : 0x23U);
                                        } else if (
                                                   (1U 
                                                    & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))) {
                                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0x602U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((0x200U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))) {
            if ((0x100U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))) {
                if ((0x80U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))) {
                    if ((1U & (~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr) 
                                  >> 6U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr) 
                                      >> 5U)))) {
                            if ((0x10U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))) {
                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter
                                               [(0x1fU 
                                                 & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))] 
                                               >> 0x20U));
                            } else if ((8U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))) {
                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter
                                               [(0x1fU 
                                                 & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))] 
                                               >> 0x20U));
                            } else if ((4U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))) {
                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter
                                               [(0x1fU 
                                                 & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))] 
                                               >> 0x20U));
                            } else if ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))) {
                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter
                                               [(0x1fU 
                                                 & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))] 
                                               >> 0x20U));
                            } else if ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr)))) {
                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter
                                               [(0x1fU 
                                                 & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))] 
                                               >> 0x20U));
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr) 
                                     >> 6U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr) 
                                  >> 5U)))) {
                        if ((0x10U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))) {
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter
                                          [(0x1fU & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))]);
                        } else if ((8U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))) {
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter
                                          [(0x1fU & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))]);
                        } else if ((4U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))) {
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter
                                          [(0x1fU & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))]);
                        } else if ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))) {
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter
                                          [(0x1fU & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))]);
                        } else if ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr)))) {
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter
                                          [(0x1fU & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))]);
                        }
                    }
                }
            }
        }
    } else if ((0x400U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))) {
        if ((0x200U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))) {
            if ((0x100U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))) {
                if ((0x80U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))) {
                    if ((0x40U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))) {
                        if ((1U & (~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr) 
                                      >> 5U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr) 
                                          >> 4U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))) {
                                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((0x20U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))) {
                        if ((0x10U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))) {
                            if ((1U & (~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr) 
                                              >> 2U)))) {
                                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                        = ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))
                                                ? vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q
                                                : vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q)
                                            : ((1U 
                                                & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))
                                                ? vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q
                                                : vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q));
                                }
                            }
                        } else if ((8U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))) {
                            if ((1U & (~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))) {
                                    if ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr)))) {
                                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                    }
                                } else if ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr)))) {
                                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr) 
                                             >> 2U)))) {
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))
                                    ? ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))
                                        ? 0U : vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__DOT__rdata_q)
                                    : ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))
                                        ? (0x28001048U 
                                           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q) 
                                              << 2U))
                                        : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q)));
                        }
                    }
                }
            }
        }
    } else if ((0x200U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))) {
        if ((0x100U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))) {
            if ((0x80U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))) {
                if ((1U & (~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr) 
                              >> 6U)))) {
                    if ((0x20U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))) {
                        if ((0x10U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))) {
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = ((8U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))
                                    ? ((4U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))
                                        ? ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))
                                                ? vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0xfU]
                                                : vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0xeU])
                                            : ((1U 
                                                & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))
                                                ? vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0xdU]
                                                : vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0xcU]))
                                        : ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))
                                                ? vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0xbU]
                                                : vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0xaU])
                                            : ((1U 
                                                & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))
                                                ? vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [9U]
                                                : vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [8U])))
                                    : ((4U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))
                                        ? ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))
                                                ? vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [7U]
                                                : vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [6U])
                                            : ((1U 
                                                & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))
                                                ? vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [5U]
                                                : vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [4U]))
                                        : ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))
                                                ? vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [3U]
                                                : vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [2U])
                                            : ((1U 
                                                & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))
                                                ? vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [1U]
                                                : vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0U]))));
                        } else if ((1U & (~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr) 
                                             >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr) 
                                          >> 2U)))) {
                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))
                                        ? ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))
                                            ? (((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                 [0xfU] 
                                                 << 0x18U) 
                                                | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [0xeU] 
                                                   << 0x10U)) 
                                               | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [0xdU] 
                                                   << 8U) 
                                                  | vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                  [0xcU]))
                                            : (((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                 [0xbU] 
                                                 << 0x18U) 
                                                | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [0xaU] 
                                                   << 0x10U)) 
                                               | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [9U] 
                                                   << 8U) 
                                                  | vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                  [8U])))
                                        : ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))
                                            ? (((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                 [7U] 
                                                 << 0x18U) 
                                                | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [6U] 
                                                   << 0x10U)) 
                                               | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [5U] 
                                                   << 8U) 
                                                  | vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                  [4U]))
                                            : (((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                 [3U] 
                                                 << 0x18U) 
                                                | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [2U] 
                                                   << 0x10U)) 
                                               | ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [1U] 
                                                   << 8U) 
                                                  | vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                  [0U]))));
                            }
                        }
                    }
                }
            } else if ((0x40U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))) {
                if ((1U & (~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr) 
                              >> 5U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr) 
                                  >> 4U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))) {
                                if ((1U & (~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr)))) {
                                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                            = ((0xfffffff7U 
                                                & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                               | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__u_reg__DOT____Vcellout__u_msip0__q) 
                                                  << 3U));
                                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                            = ((0xffffff7fU 
                                                & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                               | ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__rv_timer_0_1_i.__PVT__intr_out__BRA__0__KET__) 
                                                  << 7U));
                                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                            = ((0xfffff7ffU 
                                                & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                               | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_plic_i__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__irq_q) 
                                                  << 0xbU));
                                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                            = ((0xffffU 
                                                & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                               | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__fast_intr_ctrl_i__DOT__fast_intr_ctrl_reg_top_i__DOT____Vcellout__u_fast_intr_pending__q) 
                                                  << 0x10U));
                                    }
                                }
                            } else {
                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))
                                        ? ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))
                                            ? vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q
                                            : ((0x80000000U 
                                                & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q) 
                                                   << 0x19U)) 
                                               | (0x3fU 
                                                  & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q))))
                                        : ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))
                                            ? vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q
                                            : vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q));
                            }
                        }
                    }
                }
            } else if ((0x20U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))) {
                if ((0x10U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent
                        [(0x1fU & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))];
                } else if ((8U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent
                        [(0x1fU & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))];
                } else if ((4U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent
                        [(0x1fU & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))];
                } else if ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))) {
                    if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))) {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent
                            [(0x1fU & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))];
                    }
                } else if ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr)))) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = (0xfffffff8U | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcountinhibit_q));
                }
            } else if ((0x10U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))) {
                if ((8U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))) {
                    if ((1U & (~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))) {
                            if ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr)))) {
                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr) 
                                     >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr)))) {
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                        }
                    }
                }
            } else if ((8U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))) {
                if ((1U & (~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))) {
                        if ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr)))) {
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                        }
                    }
                }
            } else if ((4U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))) {
                if ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))) {
                    if ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr)))) {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                    }
                } else if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q;
                } else {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xfffffff7U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (8U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                    >> 0xfU)));
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xffffff7fU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x80U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                       >> 0xaU)));
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xfffff7ffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x800U & (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                        >> 5U)));
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                              << 0x10U));
                }
            } else if ((1U & (~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr) 
                                 >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_addr))) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0x40101104U;
                } else {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xfffffff7U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (8U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                    >> 2U)));
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xffffff7fU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x80U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                       << 3U)));
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xffffe7ffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x1800U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                         << 9U)));
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xfffdffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x20000U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                          << 0x10U)));
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xffdfffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x200000U & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                           << 0x15U)));
                }
            }
        }
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int 
        = ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__csr_op))
            ? ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__csr_op))
                ? ((~ vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operand_a) 
                   & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int)
                : (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operand_a 
                   | vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int))
            : vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e20_i__DOT__u_cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operand_a);
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__48(Vtestharness___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__48\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & ((1U & (IData)((vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                              >> 0x39U))) ? ((1U & (IData)(
                                                           (vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                                                            >> 0x39U)))
                                              ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__gpio_31_oe_x)
                                              : (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__scl_int)))
                : (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__scl_int))))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_i2c_scl__DOT__pad__strong__out1 
            = ((1U & (IData)((vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                              >> 0x39U))) && ((1U & (IData)(
                                                            (vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                                                             >> 0x39U))) 
                                              && (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.i_reg_file__DOT____Vcellout__u_gpio_out_gpio_out_31__q)));
    }
    if ((1U & ((1U & (IData)((vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                              >> 0x3aU))) ? ((1U & (IData)(
                                                           (vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                                                            >> 0x3aU)))
                                              ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__gpio_30_oe_x)
                                              : (~ 
                                                 ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_ovrd_txovrden__q)
                                                   ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_ovrd_sdaval__q)
                                                   : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__sda_out_fsm))))
                : (~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_ovrd_txovrden__q)
                       ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_ovrd_sdaval__q)
                       : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__sda_out_fsm)))))) {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_i2c_sda__DOT__pad__strong__out1 
            = ((1U & (IData)((vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                              >> 0x3aU))) && ((1U & (IData)(
                                                            (vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                                                             >> 0x3aU))) 
                                              && (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.i_reg_file__DOT____Vcellout__u_gpio_out_gpio_out_30__q)));
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__gpio_31_in_x = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__i2c_scl_in_x = 0U;
    if ((1U & (IData)((vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                       >> 0x39U)))) {
        if ((1U & (IData)((vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                           >> 0x39U)))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__gpio_31_in_x 
                = vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_i2c_scl__DOT__pad__strong__out1;
        }
        if ((1U & (~ (IData)((vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                              >> 0x39U))))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__i2c_scl_in_x 
                = vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_i2c_scl__DOT__pad__strong__out1;
        }
    } else {
        vlSelfRef.testharness__DOT__gr_heep_i__DOT__i2c_scl_in_x 
            = vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_i2c_scl__DOT__pad__strong__out1;
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__gpio_30_in_x = 0U;
    if ((1U & (IData)((vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                       >> 0x3aU)))) {
        if ((1U & (IData)((vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                           >> 0x3aU)))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__gpio_30_in_x 
                = vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_i2c_sda__DOT__pad__strong__out1;
        }
    }
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__i2c_sda_in_x 
        = ((1U & (IData)((vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                          >> 0x3aU))) ? ((~ (IData)(
                                                    (vlSelfRef.testharness__DOT__gr_heep_i__DOT__pad_muxes 
                                                     >> 0x3aU))) 
                                         & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_i2c_sda__DOT__pad__strong__out1))
            : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_i2c_sda__DOT__pad__strong__out1));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__load_tcount = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d 
        = vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_sel = 0xaU;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__event_scl_interference = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__event_sda_unstable = 0U;
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__event_nak = 0U;
    if ((0x20U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
        if ((0x10U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__load_tcount = 0U;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d = 0U;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_sel = 0xaU;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__event_scl_interference = 0U;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__event_sda_unstable = 0U;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__event_nak = 0U;
        } else if ((8U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
            if ((4U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
                if ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
                    if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__load_tcount = 0U;
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d = 0U;
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_sel = 0xaU;
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__event_scl_interference = 0U;
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__event_sda_unstable = 0U;
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__event_nak = 0U;
                    } else {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d 
                            = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_stretch_ctrl_stop__q)
                                ? 0x28U : 0x2eU);
                    }
                } else {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d 
                        = ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))
                            ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_stretch_ctrl_stop__q)
                                ? 0x25U : 0x2dU) : 
                           ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_stretch_ctrl_stop__q)
                             ? 0x1bU : 0x2cU));
                }
            } else if ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
                if ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q)))) {
                    if ((0U != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__fifo_status_txlvl_qs))) {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__load_tcount = 1U;
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_sel = 2U;
                    }
                }
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d 
                    = ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))
                        ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__acq_fifo_wready)
                            ? 0x23U : 0x2bU) : ((0U 
                                                 == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__fifo_status_txlvl_qs))
                                                 ? 0x2aU
                                                 : 0x1eU));
            } else {
                if ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q)))) {
                    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_ctrl_enabletarget__q) {
                        if ((1U & (~ ((1U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__fifo_status_txlvl_qs)) 
                                      & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_txdata__qe)))))) {
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__load_tcount = 1U;
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_sel = 2U;
                        }
                    }
                }
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d 
                    = ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))
                        ? 0U : ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_ctrl_enabletarget__q)
                                 ? (((1U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__fifo_status_txlvl_qs)) 
                                     & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_txdata__qe)))
                                     ? 0x2aU : 0x1eU)
                                 : 0U));
            }
        } else if ((4U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
                if ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q)))) {
                    if ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__i2c_scl_in_x)))) {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__load_tcount = 1U;
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_sel = 6U;
                    }
                }
                if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
                    if ((1U == vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_q)) {
                        if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__bit_ack) {
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d 
                                = (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__start_det) 
                                    | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__stop_det))
                                    ? 0x29U : 0x23U);
                        }
                    }
                } else if ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__i2c_scl_in_x)))) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d = 0x27U;
                }
            } else if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
                if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__i2c_scl_in_x) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d = 0x26U;
                }
            } else if ((1U == vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_q)) {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d 
                    = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_stretch_ctrl_enableacq__q)
                        ? 0x2dU : 0x25U);
            }
        } else if ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
                if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__bit_ack) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__load_tcount = 1U;
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d = 0x24U;
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_sel = 6U;
                }
            } else if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__i2c_scl_in_x) {
                if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__host_ack) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d 
                        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_stretch_ctrl_enabletx__q)
                            ? 0x2eU : 0x28U);
                } else if (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__start_det) 
                            | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__stop_det))) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d = 0x29U;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
            if ((1U == vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_q)) {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__load_tcount = 1U;
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d 
                    = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__bit_ack)
                        ? 0x22U : 0x1eU);
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_sel = 2U;
            }
        } else if ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__i2c_scl_in_x)))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__load_tcount = 1U;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d = 0x21U;
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_sel = 6U;
        }
    } else {
        if ((0x10U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
            if ((8U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
                if ((4U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
                    if ((1U & (~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
                            if ((1U == vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_q)) {
                                if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__input_byte))) {
                                    if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__tx_fifo_rvalid) {
                                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__load_tcount = 1U;
                                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_sel = 2U;
                                    }
                                }
                            }
                        } else if ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__i2c_scl_in_x)))) {
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__load_tcount = 1U;
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_sel = 6U;
                        }
                    }
                    if ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
                        if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
                            if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__i2c_scl_in_x) {
                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d = 0x20U;
                            }
                        } else if ((1U == vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_q)) {
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d = 0x1fU;
                        }
                    } else if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
                        if ((1U == vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_q)) {
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d 
                                = ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__input_byte))
                                    ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__tx_fifo_rvalid)
                                        ? 0x1eU : 0x2aU)
                                    : ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__acq_fifo_wready)
                                        ? 0x23U : 0x2bU));
                        }
                    } else if ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__i2c_scl_in_x)))) {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d = 0x1dU;
                    }
                } else {
                    if ((1U & (~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
                            if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__bit_ack) {
                                if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__address_match) {
                                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__load_tcount = 1U;
                                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_sel = 6U;
                                }
                            }
                        } else if ((1U == vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_q)) {
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__load_tcount = 1U;
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_sel = 8U;
                        }
                    }
                    if ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
                        if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
                            if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__i2c_scl_in_x) {
                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d = 0x1cU;
                            }
                        } else if ((1U == vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_q)) {
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d 
                                = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_stretch_ctrl_enableaddr__q)
                                    ? 0x2cU : 0x1bU);
                        }
                    } else if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
                        if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__bit_ack) {
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d 
                                = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__address_match)
                                    ? 0x1aU : 0U);
                        }
                    } else if ((1U == vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_q)) {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d = 4U;
                    }
                }
            } else if ((4U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
                if ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
                    if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
                        if ((1U == vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_q)) {
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__load_tcount = 1U;
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d = 6U;
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_sel = 2U;
                        }
                    } else {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__load_tcount = 1U;
                        if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__fmt_flag_read_bytes) {
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d = 0xeU;
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_sel = 2U;
                        } else if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__fmt_flag_start_before) {
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d = 2U;
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_sel = 0U;
                        } else {
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d = 6U;
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_sel = 2U;
                        }
                    }
                } else if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
                    if ((1U == vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_q)) {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__load_tcount = 1U;
                        if ((1U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__byte_index))) {
                            if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__fmt_flag_stop_after) {
                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d = 0x18U;
                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_sel = 7U;
                            } else {
                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d = 1U;
                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_sel = 0xaU;
                            }
                        } else {
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d = 0xeU;
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_sel = 2U;
                        }
                    }
                } else if ((1U == vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_q)) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__load_tcount = 1U;
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d = 0x15U;
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_sel = 5U;
                }
            } else if ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
                if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
                    if ((1U == vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_q)) {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__load_tcount = 1U;
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d = 0x14U;
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_sel = 4U;
                    }
                } else if ((1U == vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_q)) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__load_tcount = 1U;
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d = 0x13U;
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_sel = 3U;
                }
            } else if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
                if ((1U == vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_q)) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__load_tcount = 1U;
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d 
                        = ((0U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__bit_index))
                            ? 0x12U : 0xeU);
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_sel = 2U;
                }
            } else if ((1U == vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_q)) {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__load_tcount = 1U;
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d = 0x11U;
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_sel = 5U;
            }
            if ((1U & (~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
                    if ((1U & (~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q)))) {
                            if (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__scl_i_q) 
                                 & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__i2c_scl_in_x)))) {
                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__event_scl_interference = 1U;
                            }
                            if (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__sda_i_q) 
                                 != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__i2c_sda_in_x))) {
                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__event_sda_unstable = 1U;
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q) 
                                     >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q)))) {
                        if (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__scl_i_q) 
                             & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__i2c_scl_in_x)))) {
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__event_scl_interference = 1U;
                        }
                        if (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__sda_i_q) 
                             != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__i2c_sda_in_x))) {
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__event_sda_unstable = 1U;
                        }
                    }
                }
            }
        } else if ((8U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
            if ((4U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
                if ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
                    if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
                        if ((1U == vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_q)) {
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__load_tcount = 1U;
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d = 0x10U;
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_sel = 4U;
                        }
                    } else if ((1U == vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_q)) {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__load_tcount = 1U;
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d = 0xfU;
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_sel = 3U;
                    }
                } else if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
                    if ((1U == vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_q)) {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__load_tcount = 1U;
                        if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__fmt_flag_stop_after) {
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d = 0x18U;
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_sel = 7U;
                        } else {
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d = 1U;
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_sel = 0xaU;
                        }
                    }
                } else if ((1U == vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_q)) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__load_tcount = 1U;
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d = 0xdU;
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_sel = 5U;
                }
                if ((1U & (~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q)))) {
                        if (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__scl_i_q) 
                             & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__i2c_scl_in_x)))) {
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__event_scl_interference = 1U;
                        }
                        if (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__sda_i_q) 
                             != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__i2c_sda_in_x))) {
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__event_sda_unstable = 1U;
                        }
                    }
                }
            } else {
                if ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
                    if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
                        if ((1U == vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_q)) {
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__load_tcount = 1U;
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d = 0xcU;
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_sel = 4U;
                        }
                    } else if ((1U == vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_q)) {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__load_tcount = 1U;
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d = 0xbU;
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_sel = 3U;
                    }
                } else if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
                    if ((1U == vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_q)) {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__load_tcount = 1U;
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d 
                            = ((0U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__bit_index))
                                ? 0xaU : 6U);
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_sel = 2U;
                    }
                } else if ((1U == vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_q)) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__load_tcount = 1U;
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d = 9U;
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_sel = 5U;
                }
                if ((1U & (~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q)))) {
                        if (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__scl_i_q) 
                             & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__i2c_scl_in_x)))) {
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__event_scl_interference = 1U;
                        }
                        if (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__sda_i_q) 
                             != (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__i2c_sda_in_x))) {
                            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__event_sda_unstable = 1U;
                        }
                    }
                }
            }
        } else if ((4U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
                if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
                    if ((1U == vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_q)) {
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__load_tcount = 1U;
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d = 8U;
                        vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_sel = 4U;
                    }
                } else if ((1U == vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_q)) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__load_tcount = 1U;
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d = 7U;
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_sel = 3U;
                }
            } else if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
                if ((1U == vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_q)) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__load_tcount = 1U;
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d 
                        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_ctrl_enablehost__q)
                            ? 1U : 0U);
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_sel = 0xaU;
                }
            } else if ((1U == vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_q)) {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__load_tcount = 1U;
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d = 5U;
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_sel = 9U;
            }
        } else if ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
                if ((1U == vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_q)) {
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__load_tcount = 1U;
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d = 0x17U;
                    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_sel = 6U;
                }
            } else if ((1U == vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_q)) {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__load_tcount = 1U;
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d = 3U;
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_sel = 1U;
            }
        } else if ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__load_tcount = 1U;
            if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_ctrl_enablehost__q) {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d 
                    = (((1U == (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__fifo_status_fmtlvl_qs)) 
                        & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__fmt_fifo_wvalid)))
                        ? 0U : 0x16U);
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_sel = 0xaU;
            } else {
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d = 0x18U;
                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_sel = 7U;
            }
        } else if ((1U & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_ctrl_enablehost__q)) 
                          & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_ctrl_enabletarget__q))))) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d = 0U;
        } else if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_ctrl_enablehost__q) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d 
                = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__fmt_fifo_rvalid)
                    ? 0x16U : 0U);
        } else if (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_ctrl_enabletarget__q) {
            vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d 
                = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__start_det)
                    ? 0x19U : 0U);
        }
        if ((1U & (~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q) 
                      >> 4U)))) {
            if ((8U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
                if ((4U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) {
                    if ((1U & (~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q)))) {
                            if ((1U & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__i2c_sda_in_x)) 
                                       & (~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__fmt_fifo_rvalid) 
                                             & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__fmt_fifo_rdata) 
                                                >> 0xcU)))))) {
                                vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__event_nak = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.__VdfgRegularize_h495687df_0_129 = ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__i2c_sda_in_x)) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_h495687df_0_73));
    vlSelfRef.__VdfgRegularize_h495687df_0_130 = ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__i2c_sda_in_x)) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_h495687df_0_72));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_d 
        = (0xfffffU & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__load_tcount)
                        ? ((8U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_sel))
                            ? ((4U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_sel))
                                ? 1U : ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_sel))
                                         ? 1U : ((1U 
                                                  & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_sel))
                                                  ? 
                                                 (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing1_t_r__q) 
                                                   + (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing4_t_buf__q)) 
                                                  - (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing2_tsu_sta__q))
                                                  : 
                                                 ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing1_t_r__q) 
                                                  + (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing4_tsu_sto__q)))))
                            : ((4U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_sel))
                                ? ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_sel))
                                    ? ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_sel))
                                        ? (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing1_t_f__q) 
                                            + (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing0_tlow__q)) 
                                           - (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing3_thd_dat__q))
                                        : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing3_thd_dat__q))
                                    : ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_sel))
                                        ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing1_t_f__q) 
                                           + (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing3_thd_dat__q))
                                        : ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing1_t_r__q) 
                                           + ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing0_thigh__q) 
                                              + (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing1_t_f__q)))))
                                : ((2U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_sel))
                                    ? ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_sel))
                                        ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing1_t_r__q) 
                                           + (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing3_tsu_dat__q))
                                        : ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing0_tlow__q) 
                                             - (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing1_t_r__q)) 
                                            - (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing3_tsu_dat__q)) 
                                           - (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing3_thd_dat__q)))
                                    : ((1U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_sel))
                                        ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing1_t_f__q) 
                                           + (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing2_thd_sta__q))
                                        : ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing1_t_r__q) 
                                           + (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_timing2_tsu_sta__q))))))
                        : (vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_q 
                           - (0U == vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__stretch))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_scl_interference__DOT__new_event 
        = (((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[6U] 
             >> 0x17U) & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__intr_test_fmt_watermark_we)) 
           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__event_scl_interference));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_sda_unstable__DOT__new_event 
        = (((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[6U] 
             >> 0x1aU) & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__intr_test_fmt_watermark_we)) 
           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__event_sda_unstable));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_nak__DOT__new_event 
        = (((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[6U] 
             >> 0x16U) & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__intr_test_fmt_watermark_we)) 
           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__event_nak));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_sda_interference__DOT__new_event 
        = (1U & (((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[6U] 
                   >> 0x18U) & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__intr_test_fmt_watermark_we)) 
                 | ((~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q) 
                        >> 5U)) & ((0x10U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))
                                    ? ((~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q) 
                                           >> 3U)) 
                                       & ((4U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))
                                           ? ((~ ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q) 
                                                  >> 1U)) 
                                              & (IData)(vlSelfRef.__VdfgRegularize_h495687df_0_129))
                                           : (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q) 
                                               >> 1U) 
                                              & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h495687df_0_129)))))
                                    : ((8U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))
                                        ? (IData)((
                                                   (0U 
                                                    == 
                                                    (6U 
                                                     & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))) 
                                                   & (IData)(vlSelfRef.__VdfgRegularize_h495687df_0_130)))
                                        : ((4U & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))
                                                ? ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q) 
                                                   & (IData)(vlSelfRef.__VdfgRegularize_h495687df_0_130))
                                                : (
                                                   (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__i2c_sda_in_x)) 
                                                   & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q)))
                                            : ((2U 
                                                & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q))
                                                ? (
                                                   (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q)) 
                                                   & (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__i2c_sda_in_x)))
                                                : (
                                                   (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q)) 
                                                   & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__i2c_sda_in_x)) 
                                                      & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_ctrl_enablehost__q))))))))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellinp__u_intr_state_scl_interference__d 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_scl_interference__DOT__new_event) 
           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_scl_interference__q));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellinp__u_intr_state_sda_unstable__d 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_sda_unstable__DOT__new_event) 
           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_sda_unstable__q));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellinp__u_intr_state_nak__d 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_nak__DOT__new_event) 
           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_nak__q));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellinp__u_intr_state_sda_interference__d 
        = ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_sda_interference__DOT__new_event) 
           | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_sda_interference__q));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_intr_state_scl_interference__DOT__wr_data 
        = ((~ ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[6U] 
                >> 0x17U) & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__intr_state_fmt_watermark_we))) 
           & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_scl_interference__DOT__new_event)
               ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellinp__u_intr_state_scl_interference__d)
               : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_scl_interference__q)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_intr_state_sda_unstable__DOT__wr_data 
        = ((~ ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[6U] 
                >> 0x1aU) & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__intr_state_fmt_watermark_we))) 
           & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_sda_unstable__DOT__new_event)
               ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellinp__u_intr_state_sda_unstable__d)
               : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_sda_unstable__q)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_intr_state_nak__DOT__wr_data 
        = ((~ ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[6U] 
                >> 0x16U) & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__intr_state_fmt_watermark_we))) 
           & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_nak__DOT__new_event)
               ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellinp__u_intr_state_nak__d)
               : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_nak__q)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__u_intr_state_sda_interference__DOT__wr_data 
        = ((~ ((vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[6U] 
                >> 0x18U) & (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__intr_state_fmt_watermark_we))) 
           & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_sda_interference__DOT__new_event)
               ? (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellinp__u_intr_state_sda_interference__d)
               : (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellout__u_intr_state_sda_interference__q)));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__hw2reg[0U] 
        = ((0xfc000000U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__hw2reg[0U]) 
           | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__sda_rx_val) 
               << 0xaU) | ((0x3fcU & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__acq_fifo_rdata) 
                                      << 2U)) | (3U 
                                                 & ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__acq_fifo_rdata) 
                                                    >> 8U)))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__hw2reg[0U] 
        = ((0x3ffffffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__hw2reg[0U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__fifo_status_fmtlvl_qs)) 
                        << 0x22U) | (((QData)((IData)(
                                                      (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__fifo_status_txlvl_qs) 
                                                        << 6U) 
                                                       | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__fifo_status_rxlvl_qs)))) 
                                      << 0x16U) | (QData)((IData)(
                                                                  (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__fifo_status_acqlvl_qs) 
                                                                    << 0x10U) 
                                                                   | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__scl_rx_val))))))) 
              << 0x1aU));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__hw2reg[1U] 
        = (((IData)((((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__fifo_status_fmtlvl_qs)) 
                      << 0x22U) | (((QData)((IData)(
                                                    (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__fifo_status_txlvl_qs) 
                                                      << 6U) 
                                                     | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__fifo_status_rxlvl_qs)))) 
                                    << 0x16U) | (QData)((IData)(
                                                                (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__fifo_status_acqlvl_qs) 
                                                                  << 0x10U) 
                                                                 | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__scl_rx_val))))))) 
            >> 6U) | ((IData)(((((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__fifo_status_fmtlvl_qs)) 
                                 << 0x22U) | (((QData)((IData)(
                                                               (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__fifo_status_txlvl_qs) 
                                                                 << 6U) 
                                                                | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__fifo_status_rxlvl_qs)))) 
                                               << 0x16U) 
                                              | (QData)((IData)(
                                                                (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__fifo_status_acqlvl_qs) 
                                                                  << 0x10U) 
                                                                 | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__scl_rx_val)))))) 
                               >> 0x20U)) << 0x1aU));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__hw2reg[2U] 
        = ((0xfffffffcU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__hw2reg[2U]) 
           | ((IData)(((((QData)((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__fifo_status_fmtlvl_qs)) 
                         << 0x22U) | (((QData)((IData)(
                                                       (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__fifo_status_txlvl_qs) 
                                                         << 6U) 
                                                        | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__fifo_status_rxlvl_qs)))) 
                                       << 0x16U) | (QData)((IData)(
                                                                   (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__fifo_status_acqlvl_qs) 
                                                                     << 0x10U) 
                                                                    | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__scl_rx_val)))))) 
                       >> 0x20U)) >> 6U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__hw2reg[2U] 
        = ((0xfffffc03U & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__hw2reg[2U]) 
           | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT__rdata_qs) 
              << 2U));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__hw2reg[2U] 
        = ((0x3ffU & vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__hw2reg[2U]) 
           | (0xfffffc00U & ((((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellinp__u_intr_state_tx_empty__d) 
                                 << 0x1fU) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_tx_empty__DOT__new_event) 
                                               << 0x1eU) 
                                              | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellinp__u_intr_state_tx_nonempty__d) 
                                                 << 0x1dU))) 
                               | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_tx_nonempty__DOT__new_event) 
                                   << 0x1cU) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellinp__u_intr_state_tx_overflow__d) 
                                                 << 0x1bU) 
                                                | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_tx_overflow__DOT__new_event) 
                                                   << 0x1aU)))) 
                              | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellinp__u_intr_state_acq_overflow__d) 
                                   << 0x19U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_acq_overflow__DOT__new_event) 
                                                 << 0x18U) 
                                                | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellinp__u_intr_state_ack_stop__d) 
                                                   << 0x17U))) 
                                 | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_ack_stop__DOT__new_event) 
                                     << 0x16U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellinp__u_intr_state_host_timeout__d) 
                                                  << 0x15U)))) 
                             | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_host_timeout__DOT__new_event) 
                                   << 0x14U) | ((0x80000U 
                                                 & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__fmt_fifo_wready)) 
                                                    << 0x13U)) 
                                                | (0x40000U 
                                                   & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__rx_fifo_wready)) 
                                                      << 0x12U)))) 
                                 | ((0x20000U & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__fmt_fifo_rvalid)) 
                                                 << 0x11U)) 
                                    | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__host_idle) 
                                        << 0x10U) | 
                                       ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__target_idle) 
                                        << 0xfU)))) 
                                | (((0x4000U & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__rx_fifo_rvalid)) 
                                                << 0xeU)) 
                                    | ((0x2000U & (
                                                   (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__tx_fifo_wready)) 
                                                   << 0xdU)) 
                                       | (0x1000U & 
                                          ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__acq_fifo_wready)) 
                                           << 0xcU)))) 
                                   | ((0x800U & ((~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__tx_fifo_rvalid)) 
                                                 << 0xbU)) 
                                      | (0x400U & (
                                                   (~ (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__acq_fifo_rvalid)) 
                                                   << 0xaU))))))));
    vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__hw2reg[3U] 
        = (0xfffffU & ((((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellinp__u_intr_state_fmt_watermark__d) 
                           << 0x13U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_fmt_watermark__DOT__new_event) 
                                         << 0x12U) 
                                        | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellinp__u_intr_state_rx_watermark__d) 
                                           << 0x11U))) 
                         | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_rx_watermark__DOT__new_event) 
                             << 0x10U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellinp__u_intr_state_fmt_overflow__d) 
                                          << 0xfU))) 
                        | ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_fmt_overflow__DOT__new_event) 
                             << 0xeU) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellinp__u_intr_state_rx_overflow__d) 
                                          << 0xdU) 
                                         | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_rx_overflow__DOT__new_event) 
                                            << 0xcU))) 
                           | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellinp__u_intr_state_nak__d) 
                               << 0xbU) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_nak__DOT__new_event) 
                                           << 0xaU)))) 
                       | (((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellinp__u_intr_state_scl_interference__d) 
                             << 9U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_scl_interference__DOT__new_event) 
                                        << 8U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellinp__u_intr_state_sda_interference__d) 
                                                  << 7U))) 
                           | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_sda_interference__DOT__new_event) 
                               << 6U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellinp__u_intr_state_stretch_timeout__d) 
                                         << 5U))) | 
                          ((((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_stretch_timeout__DOT__new_event) 
                             << 4U) | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellinp__u_intr_state_sda_unstable__d) 
                                        << 3U) | ((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_sda_unstable__DOT__new_event) 
                                                  << 2U))) 
                           | (((IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__u_reg__DOT____Vcellinp__u_intr_state_trans_complete__d) 
                               << 1U) | (IData)(vlSelfRef.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i2c_i__DOT__i2c_core__DOT__intr_hw_trans_complete__DOT__new_event))))));
}
