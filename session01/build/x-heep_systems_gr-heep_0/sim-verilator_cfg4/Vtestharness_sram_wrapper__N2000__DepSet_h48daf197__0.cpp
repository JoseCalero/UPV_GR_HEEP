// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness__Syms.h"
#include "Vtestharness_sram_wrapper__N2000.h"

VL_INLINE_OPT void Vtestharness_sram_wrapper__N2000___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__0(Vtestharness_sram_wrapper__N2000* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_sram_wrapper__N2000___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __VdlyVal__tc_ram_i__DOT__sram__v0;
    __VdlyVal__tc_ram_i__DOT__sram__v0 = 0;
    SData/*12:0*/ __VdlyDim0__tc_ram_i__DOT__sram__v0;
    __VdlyDim0__tc_ram_i__DOT__sram__v0 = 0;
    CData/*0:0*/ __VdlySet__tc_ram_i__DOT__sram__v0;
    __VdlySet__tc_ram_i__DOT__sram__v0 = 0;
    CData/*7:0*/ __VdlyVal__tc_ram_i__DOT__sram__v1;
    __VdlyVal__tc_ram_i__DOT__sram__v1 = 0;
    SData/*12:0*/ __VdlyDim0__tc_ram_i__DOT__sram__v1;
    __VdlyDim0__tc_ram_i__DOT__sram__v1 = 0;
    CData/*0:0*/ __VdlySet__tc_ram_i__DOT__sram__v1;
    __VdlySet__tc_ram_i__DOT__sram__v1 = 0;
    CData/*7:0*/ __VdlyVal__tc_ram_i__DOT__sram__v2;
    __VdlyVal__tc_ram_i__DOT__sram__v2 = 0;
    SData/*12:0*/ __VdlyDim0__tc_ram_i__DOT__sram__v2;
    __VdlyDim0__tc_ram_i__DOT__sram__v2 = 0;
    CData/*0:0*/ __VdlySet__tc_ram_i__DOT__sram__v2;
    __VdlySet__tc_ram_i__DOT__sram__v2 = 0;
    CData/*7:0*/ __VdlyVal__tc_ram_i__DOT__sram__v3;
    __VdlyVal__tc_ram_i__DOT__sram__v3 = 0;
    SData/*12:0*/ __VdlyDim0__tc_ram_i__DOT__sram__v3;
    __VdlyDim0__tc_ram_i__DOT__sram__v3 = 0;
    CData/*0:0*/ __VdlySet__tc_ram_i__DOT__sram__v3;
    __VdlySet__tc_ram_i__DOT__sram__v3 = 0;
    // Body
    __VdlySet__tc_ram_i__DOT__sram__v0 = 0U;
    __VdlySet__tc_ram_i__DOT__sram__v1 = 0U;
    __VdlySet__tc_ram_i__DOT__sram__v2 = 0U;
    __VdlySet__tc_ram_i__DOT__sram__v3 = 0U;
    if (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni) {
        vlSelfRef.__PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk5__DOT__i = 1U;
        vlSelfRef.__PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 1U;
        vlSelfRef.__PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk7__DOT__i = 1U;
        vlSelfRef.__PVT__tc_ram_i__DOT__rdata_q = (
                                                   ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__1__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.req_o) 
                                                    & (~ 
                                                       (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__1__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U] 
                                                        >> 4U)))
                                                    ? 
                                                   vlSelfRef.tc_ram_i__DOT__sram
                                                   [
                                                   (0x1fffU 
                                                    & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__1__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                                       >> 2U))]
                                                    : 
                                                   vlSelfRef.tc_ram_i__DOT__sram
                                                   [vlSelfRef.__PVT__tc_ram_i__DOT__r_addr_q]);
        if (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__1__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.req_o) {
            if ((0x10U & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__1__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U])) {
                vlSelfRef.__PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 4U;
                if ((1U & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__1__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U])) {
                    __VdlyVal__tc_ram_i__DOT__sram__v0 
                        = (0xffU & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__1__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[0U]);
                    __VdlyDim0__tc_ram_i__DOT__sram__v0 
                        = (0x1fffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__1__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                      >> 2U));
                    __VdlySet__tc_ram_i__DOT__sram__v0 = 1U;
                }
                if ((2U & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__1__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U])) {
                    __VdlyVal__tc_ram_i__DOT__sram__v1 
                        = (0xffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__1__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[0U] 
                                    >> 8U));
                    __VdlyDim0__tc_ram_i__DOT__sram__v1 
                        = (0x1fffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__1__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                      >> 2U));
                    __VdlySet__tc_ram_i__DOT__sram__v1 = 1U;
                }
                if ((4U & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__1__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U])) {
                    __VdlyVal__tc_ram_i__DOT__sram__v2 
                        = (0xffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__1__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[0U] 
                                    >> 0x10U));
                    __VdlyDim0__tc_ram_i__DOT__sram__v2 
                        = (0x1fffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__1__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                      >> 2U));
                    __VdlySet__tc_ram_i__DOT__sram__v2 = 1U;
                }
                if ((8U & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__1__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U])) {
                    __VdlyVal__tc_ram_i__DOT__sram__v3 
                        = (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__1__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[0U] 
                           >> 0x18U);
                    __VdlyDim0__tc_ram_i__DOT__sram__v3 
                        = (0x1fffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__1__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                      >> 2U));
                    __VdlySet__tc_ram_i__DOT__sram__v3 = 1U;
                }
            }
            if ((1U & (~ (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__1__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U] 
                          >> 4U)))) {
                vlSelfRef.tc_ram_i__DOT____Vlvbound_hdd9b40f9__0 
                    = (0x1fffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__1__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                  >> 2U));
                vlSelfRef.__PVT__tc_ram_i__DOT__r_addr_q 
                    = vlSelfRef.tc_ram_i__DOT____Vlvbound_hdd9b40f9__0;
            }
        }
    } else {
        vlSelfRef.__PVT__tc_ram_i__DOT__r_addr_q = 0U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni)))) {
        vlSelfRef.__PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk4__DOT__i = 1U;
    }
    if (__VdlySet__tc_ram_i__DOT__sram__v0) {
        vlSelfRef.tc_ram_i__DOT__sram[__VdlyDim0__tc_ram_i__DOT__sram__v0] 
            = ((0xffffff00U & vlSelfRef.tc_ram_i__DOT__sram
                [__VdlyDim0__tc_ram_i__DOT__sram__v0]) 
               | (IData)(__VdlyVal__tc_ram_i__DOT__sram__v0));
    }
    if (__VdlySet__tc_ram_i__DOT__sram__v1) {
        vlSelfRef.tc_ram_i__DOT__sram[__VdlyDim0__tc_ram_i__DOT__sram__v1] 
            = ((0xffff00ffU & vlSelfRef.tc_ram_i__DOT__sram
                [__VdlyDim0__tc_ram_i__DOT__sram__v1]) 
               | ((IData)(__VdlyVal__tc_ram_i__DOT__sram__v1) 
                  << 8U));
    }
    if (__VdlySet__tc_ram_i__DOT__sram__v2) {
        vlSelfRef.tc_ram_i__DOT__sram[__VdlyDim0__tc_ram_i__DOT__sram__v2] 
            = ((0xff00ffffU & vlSelfRef.tc_ram_i__DOT__sram
                [__VdlyDim0__tc_ram_i__DOT__sram__v2]) 
               | ((IData)(__VdlyVal__tc_ram_i__DOT__sram__v2) 
                  << 0x10U));
    }
    if (__VdlySet__tc_ram_i__DOT__sram__v3) {
        vlSelfRef.tc_ram_i__DOT__sram[__VdlyDim0__tc_ram_i__DOT__sram__v3] 
            = ((0xffffffU & vlSelfRef.tc_ram_i__DOT__sram
                [__VdlyDim0__tc_ram_i__DOT__sram__v3]) 
               | ((IData)(__VdlyVal__tc_ram_i__DOT__sram__v3) 
                  << 0x18U));
    }
}

VL_INLINE_OPT void Vtestharness_sram_wrapper__N2000___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__0(Vtestharness_sram_wrapper__N2000* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_sram_wrapper__N2000___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __VdlyVal__tc_ram_i__DOT__sram__v0;
    __VdlyVal__tc_ram_i__DOT__sram__v0 = 0;
    SData/*12:0*/ __VdlyDim0__tc_ram_i__DOT__sram__v0;
    __VdlyDim0__tc_ram_i__DOT__sram__v0 = 0;
    CData/*0:0*/ __VdlySet__tc_ram_i__DOT__sram__v0;
    __VdlySet__tc_ram_i__DOT__sram__v0 = 0;
    CData/*7:0*/ __VdlyVal__tc_ram_i__DOT__sram__v1;
    __VdlyVal__tc_ram_i__DOT__sram__v1 = 0;
    SData/*12:0*/ __VdlyDim0__tc_ram_i__DOT__sram__v1;
    __VdlyDim0__tc_ram_i__DOT__sram__v1 = 0;
    CData/*0:0*/ __VdlySet__tc_ram_i__DOT__sram__v1;
    __VdlySet__tc_ram_i__DOT__sram__v1 = 0;
    CData/*7:0*/ __VdlyVal__tc_ram_i__DOT__sram__v2;
    __VdlyVal__tc_ram_i__DOT__sram__v2 = 0;
    SData/*12:0*/ __VdlyDim0__tc_ram_i__DOT__sram__v2;
    __VdlyDim0__tc_ram_i__DOT__sram__v2 = 0;
    CData/*0:0*/ __VdlySet__tc_ram_i__DOT__sram__v2;
    __VdlySet__tc_ram_i__DOT__sram__v2 = 0;
    CData/*7:0*/ __VdlyVal__tc_ram_i__DOT__sram__v3;
    __VdlyVal__tc_ram_i__DOT__sram__v3 = 0;
    SData/*12:0*/ __VdlyDim0__tc_ram_i__DOT__sram__v3;
    __VdlyDim0__tc_ram_i__DOT__sram__v3 = 0;
    CData/*0:0*/ __VdlySet__tc_ram_i__DOT__sram__v3;
    __VdlySet__tc_ram_i__DOT__sram__v3 = 0;
    // Body
    __VdlySet__tc_ram_i__DOT__sram__v0 = 0U;
    __VdlySet__tc_ram_i__DOT__sram__v1 = 0U;
    __VdlySet__tc_ram_i__DOT__sram__v2 = 0U;
    __VdlySet__tc_ram_i__DOT__sram__v3 = 0U;
    if (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni) {
        vlSelfRef.__PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk5__DOT__i = 1U;
        vlSelfRef.__PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 1U;
        vlSelfRef.__PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk7__DOT__i = 1U;
        vlSelfRef.__PVT__tc_ram_i__DOT__rdata_q = (
                                                   ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__2__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.req_o) 
                                                    & (~ 
                                                       (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__2__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U] 
                                                        >> 4U)))
                                                    ? 
                                                   vlSelfRef.tc_ram_i__DOT__sram
                                                   [
                                                   (0x1fffU 
                                                    & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__2__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                                       >> 2U))]
                                                    : 
                                                   vlSelfRef.tc_ram_i__DOT__sram
                                                   [vlSelfRef.__PVT__tc_ram_i__DOT__r_addr_q]);
        if (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__2__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.req_o) {
            if ((0x10U & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__2__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U])) {
                vlSelfRef.__PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 4U;
                if ((1U & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__2__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U])) {
                    __VdlyVal__tc_ram_i__DOT__sram__v0 
                        = (0xffU & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__2__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[0U]);
                    __VdlyDim0__tc_ram_i__DOT__sram__v0 
                        = (0x1fffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__2__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                      >> 2U));
                    __VdlySet__tc_ram_i__DOT__sram__v0 = 1U;
                }
                if ((2U & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__2__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U])) {
                    __VdlyVal__tc_ram_i__DOT__sram__v1 
                        = (0xffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__2__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[0U] 
                                    >> 8U));
                    __VdlyDim0__tc_ram_i__DOT__sram__v1 
                        = (0x1fffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__2__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                      >> 2U));
                    __VdlySet__tc_ram_i__DOT__sram__v1 = 1U;
                }
                if ((4U & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__2__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U])) {
                    __VdlyVal__tc_ram_i__DOT__sram__v2 
                        = (0xffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__2__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[0U] 
                                    >> 0x10U));
                    __VdlyDim0__tc_ram_i__DOT__sram__v2 
                        = (0x1fffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__2__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                      >> 2U));
                    __VdlySet__tc_ram_i__DOT__sram__v2 = 1U;
                }
                if ((8U & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__2__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U])) {
                    __VdlyVal__tc_ram_i__DOT__sram__v3 
                        = (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__2__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[0U] 
                           >> 0x18U);
                    __VdlyDim0__tc_ram_i__DOT__sram__v3 
                        = (0x1fffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__2__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                      >> 2U));
                    __VdlySet__tc_ram_i__DOT__sram__v3 = 1U;
                }
            }
            if ((1U & (~ (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__2__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U] 
                          >> 4U)))) {
                vlSelfRef.tc_ram_i__DOT____Vlvbound_hdd9b40f9__0 
                    = (0x1fffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__2__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                  >> 2U));
                vlSelfRef.__PVT__tc_ram_i__DOT__r_addr_q 
                    = vlSelfRef.tc_ram_i__DOT____Vlvbound_hdd9b40f9__0;
            }
        }
    } else {
        vlSelfRef.__PVT__tc_ram_i__DOT__r_addr_q = 0U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni)))) {
        vlSelfRef.__PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk4__DOT__i = 1U;
    }
    if (__VdlySet__tc_ram_i__DOT__sram__v0) {
        vlSelfRef.tc_ram_i__DOT__sram[__VdlyDim0__tc_ram_i__DOT__sram__v0] 
            = ((0xffffff00U & vlSelfRef.tc_ram_i__DOT__sram
                [__VdlyDim0__tc_ram_i__DOT__sram__v0]) 
               | (IData)(__VdlyVal__tc_ram_i__DOT__sram__v0));
    }
    if (__VdlySet__tc_ram_i__DOT__sram__v1) {
        vlSelfRef.tc_ram_i__DOT__sram[__VdlyDim0__tc_ram_i__DOT__sram__v1] 
            = ((0xffff00ffU & vlSelfRef.tc_ram_i__DOT__sram
                [__VdlyDim0__tc_ram_i__DOT__sram__v1]) 
               | ((IData)(__VdlyVal__tc_ram_i__DOT__sram__v1) 
                  << 8U));
    }
    if (__VdlySet__tc_ram_i__DOT__sram__v2) {
        vlSelfRef.tc_ram_i__DOT__sram[__VdlyDim0__tc_ram_i__DOT__sram__v2] 
            = ((0xff00ffffU & vlSelfRef.tc_ram_i__DOT__sram
                [__VdlyDim0__tc_ram_i__DOT__sram__v2]) 
               | ((IData)(__VdlyVal__tc_ram_i__DOT__sram__v2) 
                  << 0x10U));
    }
    if (__VdlySet__tc_ram_i__DOT__sram__v3) {
        vlSelfRef.tc_ram_i__DOT__sram[__VdlyDim0__tc_ram_i__DOT__sram__v3] 
            = ((0xffffffU & vlSelfRef.tc_ram_i__DOT__sram
                [__VdlyDim0__tc_ram_i__DOT__sram__v3]) 
               | ((IData)(__VdlyVal__tc_ram_i__DOT__sram__v3) 
                  << 0x18U));
    }
}

VL_INLINE_OPT void Vtestharness_sram_wrapper__N2000___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram2_i__0(Vtestharness_sram_wrapper__N2000* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_sram_wrapper__N2000___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram2_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __VdlyVal__tc_ram_i__DOT__sram__v0;
    __VdlyVal__tc_ram_i__DOT__sram__v0 = 0;
    SData/*12:0*/ __VdlyDim0__tc_ram_i__DOT__sram__v0;
    __VdlyDim0__tc_ram_i__DOT__sram__v0 = 0;
    CData/*0:0*/ __VdlySet__tc_ram_i__DOT__sram__v0;
    __VdlySet__tc_ram_i__DOT__sram__v0 = 0;
    CData/*7:0*/ __VdlyVal__tc_ram_i__DOT__sram__v1;
    __VdlyVal__tc_ram_i__DOT__sram__v1 = 0;
    SData/*12:0*/ __VdlyDim0__tc_ram_i__DOT__sram__v1;
    __VdlyDim0__tc_ram_i__DOT__sram__v1 = 0;
    CData/*0:0*/ __VdlySet__tc_ram_i__DOT__sram__v1;
    __VdlySet__tc_ram_i__DOT__sram__v1 = 0;
    CData/*7:0*/ __VdlyVal__tc_ram_i__DOT__sram__v2;
    __VdlyVal__tc_ram_i__DOT__sram__v2 = 0;
    SData/*12:0*/ __VdlyDim0__tc_ram_i__DOT__sram__v2;
    __VdlyDim0__tc_ram_i__DOT__sram__v2 = 0;
    CData/*0:0*/ __VdlySet__tc_ram_i__DOT__sram__v2;
    __VdlySet__tc_ram_i__DOT__sram__v2 = 0;
    CData/*7:0*/ __VdlyVal__tc_ram_i__DOT__sram__v3;
    __VdlyVal__tc_ram_i__DOT__sram__v3 = 0;
    SData/*12:0*/ __VdlyDim0__tc_ram_i__DOT__sram__v3;
    __VdlyDim0__tc_ram_i__DOT__sram__v3 = 0;
    CData/*0:0*/ __VdlySet__tc_ram_i__DOT__sram__v3;
    __VdlySet__tc_ram_i__DOT__sram__v3 = 0;
    // Body
    __VdlySet__tc_ram_i__DOT__sram__v0 = 0U;
    __VdlySet__tc_ram_i__DOT__sram__v1 = 0U;
    __VdlySet__tc_ram_i__DOT__sram__v2 = 0U;
    __VdlySet__tc_ram_i__DOT__sram__v3 = 0U;
    if (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni) {
        vlSelfRef.__PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk5__DOT__i = 1U;
        vlSelfRef.__PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 1U;
        vlSelfRef.__PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk7__DOT__i = 1U;
        vlSelfRef.__PVT__tc_ram_i__DOT__rdata_q = (
                                                   ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__3__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.req_o) 
                                                    & (~ 
                                                       (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__3__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U] 
                                                        >> 4U)))
                                                    ? 
                                                   vlSelfRef.tc_ram_i__DOT__sram
                                                   [
                                                   (0x1fffU 
                                                    & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__3__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                                       >> 5U))]
                                                    : 
                                                   vlSelfRef.tc_ram_i__DOT__sram
                                                   [vlSelfRef.__PVT__tc_ram_i__DOT__r_addr_q]);
        if (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__3__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.req_o) {
            if ((0x10U & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__3__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U])) {
                vlSelfRef.__PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 4U;
                if ((1U & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__3__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U])) {
                    __VdlyVal__tc_ram_i__DOT__sram__v0 
                        = (0xffU & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__3__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[0U]);
                    __VdlyDim0__tc_ram_i__DOT__sram__v0 
                        = (0x1fffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__3__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                      >> 5U));
                    __VdlySet__tc_ram_i__DOT__sram__v0 = 1U;
                }
                if ((2U & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__3__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U])) {
                    __VdlyVal__tc_ram_i__DOT__sram__v1 
                        = (0xffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__3__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[0U] 
                                    >> 8U));
                    __VdlyDim0__tc_ram_i__DOT__sram__v1 
                        = (0x1fffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__3__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                      >> 5U));
                    __VdlySet__tc_ram_i__DOT__sram__v1 = 1U;
                }
                if ((4U & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__3__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U])) {
                    __VdlyVal__tc_ram_i__DOT__sram__v2 
                        = (0xffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__3__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[0U] 
                                    >> 0x10U));
                    __VdlyDim0__tc_ram_i__DOT__sram__v2 
                        = (0x1fffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__3__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                      >> 5U));
                    __VdlySet__tc_ram_i__DOT__sram__v2 = 1U;
                }
                if ((8U & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__3__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U])) {
                    __VdlyVal__tc_ram_i__DOT__sram__v3 
                        = (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__3__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[0U] 
                           >> 0x18U);
                    __VdlyDim0__tc_ram_i__DOT__sram__v3 
                        = (0x1fffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__3__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                      >> 5U));
                    __VdlySet__tc_ram_i__DOT__sram__v3 = 1U;
                }
            }
            if ((1U & (~ (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__3__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U] 
                          >> 4U)))) {
                vlSelfRef.tc_ram_i__DOT____Vlvbound_hdd9b40f9__0 
                    = (0x1fffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__3__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                  >> 5U));
                vlSelfRef.__PVT__tc_ram_i__DOT__r_addr_q 
                    = vlSelfRef.tc_ram_i__DOT____Vlvbound_hdd9b40f9__0;
            }
        }
    } else {
        vlSelfRef.__PVT__tc_ram_i__DOT__r_addr_q = 0U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni)))) {
        vlSelfRef.__PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk4__DOT__i = 1U;
    }
    if (__VdlySet__tc_ram_i__DOT__sram__v0) {
        vlSelfRef.tc_ram_i__DOT__sram[__VdlyDim0__tc_ram_i__DOT__sram__v0] 
            = ((0xffffff00U & vlSelfRef.tc_ram_i__DOT__sram
                [__VdlyDim0__tc_ram_i__DOT__sram__v0]) 
               | (IData)(__VdlyVal__tc_ram_i__DOT__sram__v0));
    }
    if (__VdlySet__tc_ram_i__DOT__sram__v1) {
        vlSelfRef.tc_ram_i__DOT__sram[__VdlyDim0__tc_ram_i__DOT__sram__v1] 
            = ((0xffff00ffU & vlSelfRef.tc_ram_i__DOT__sram
                [__VdlyDim0__tc_ram_i__DOT__sram__v1]) 
               | ((IData)(__VdlyVal__tc_ram_i__DOT__sram__v1) 
                  << 8U));
    }
    if (__VdlySet__tc_ram_i__DOT__sram__v2) {
        vlSelfRef.tc_ram_i__DOT__sram[__VdlyDim0__tc_ram_i__DOT__sram__v2] 
            = ((0xff00ffffU & vlSelfRef.tc_ram_i__DOT__sram
                [__VdlyDim0__tc_ram_i__DOT__sram__v2]) 
               | ((IData)(__VdlyVal__tc_ram_i__DOT__sram__v2) 
                  << 0x10U));
    }
    if (__VdlySet__tc_ram_i__DOT__sram__v3) {
        vlSelfRef.tc_ram_i__DOT__sram[__VdlyDim0__tc_ram_i__DOT__sram__v3] 
            = ((0xffffffU & vlSelfRef.tc_ram_i__DOT__sram
                [__VdlyDim0__tc_ram_i__DOT__sram__v3]) 
               | ((IData)(__VdlyVal__tc_ram_i__DOT__sram__v3) 
                  << 0x18U));
    }
}

VL_INLINE_OPT void Vtestharness_sram_wrapper__N2000___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram3_i__0(Vtestharness_sram_wrapper__N2000* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_sram_wrapper__N2000___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram3_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __VdlyVal__tc_ram_i__DOT__sram__v0;
    __VdlyVal__tc_ram_i__DOT__sram__v0 = 0;
    SData/*12:0*/ __VdlyDim0__tc_ram_i__DOT__sram__v0;
    __VdlyDim0__tc_ram_i__DOT__sram__v0 = 0;
    CData/*0:0*/ __VdlySet__tc_ram_i__DOT__sram__v0;
    __VdlySet__tc_ram_i__DOT__sram__v0 = 0;
    CData/*7:0*/ __VdlyVal__tc_ram_i__DOT__sram__v1;
    __VdlyVal__tc_ram_i__DOT__sram__v1 = 0;
    SData/*12:0*/ __VdlyDim0__tc_ram_i__DOT__sram__v1;
    __VdlyDim0__tc_ram_i__DOT__sram__v1 = 0;
    CData/*0:0*/ __VdlySet__tc_ram_i__DOT__sram__v1;
    __VdlySet__tc_ram_i__DOT__sram__v1 = 0;
    CData/*7:0*/ __VdlyVal__tc_ram_i__DOT__sram__v2;
    __VdlyVal__tc_ram_i__DOT__sram__v2 = 0;
    SData/*12:0*/ __VdlyDim0__tc_ram_i__DOT__sram__v2;
    __VdlyDim0__tc_ram_i__DOT__sram__v2 = 0;
    CData/*0:0*/ __VdlySet__tc_ram_i__DOT__sram__v2;
    __VdlySet__tc_ram_i__DOT__sram__v2 = 0;
    CData/*7:0*/ __VdlyVal__tc_ram_i__DOT__sram__v3;
    __VdlyVal__tc_ram_i__DOT__sram__v3 = 0;
    SData/*12:0*/ __VdlyDim0__tc_ram_i__DOT__sram__v3;
    __VdlyDim0__tc_ram_i__DOT__sram__v3 = 0;
    CData/*0:0*/ __VdlySet__tc_ram_i__DOT__sram__v3;
    __VdlySet__tc_ram_i__DOT__sram__v3 = 0;
    // Body
    __VdlySet__tc_ram_i__DOT__sram__v0 = 0U;
    __VdlySet__tc_ram_i__DOT__sram__v1 = 0U;
    __VdlySet__tc_ram_i__DOT__sram__v2 = 0U;
    __VdlySet__tc_ram_i__DOT__sram__v3 = 0U;
    if (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni) {
        vlSelfRef.__PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk5__DOT__i = 1U;
        vlSelfRef.__PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 1U;
        vlSelfRef.__PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk7__DOT__i = 1U;
        vlSelfRef.__PVT__tc_ram_i__DOT__rdata_q = (
                                                   ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__4__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.req_o) 
                                                    & (~ 
                                                       (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__4__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U] 
                                                        >> 4U)))
                                                    ? 
                                                   vlSelfRef.tc_ram_i__DOT__sram
                                                   [
                                                   (0x1fffU 
                                                    & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__4__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                                       >> 5U))]
                                                    : 
                                                   vlSelfRef.tc_ram_i__DOT__sram
                                                   [vlSelfRef.__PVT__tc_ram_i__DOT__r_addr_q]);
        if (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__4__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.req_o) {
            if ((0x10U & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__4__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U])) {
                vlSelfRef.__PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 4U;
                if ((1U & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__4__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U])) {
                    __VdlyVal__tc_ram_i__DOT__sram__v0 
                        = (0xffU & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__4__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[0U]);
                    __VdlyDim0__tc_ram_i__DOT__sram__v0 
                        = (0x1fffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__4__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                      >> 5U));
                    __VdlySet__tc_ram_i__DOT__sram__v0 = 1U;
                }
                if ((2U & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__4__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U])) {
                    __VdlyVal__tc_ram_i__DOT__sram__v1 
                        = (0xffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__4__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[0U] 
                                    >> 8U));
                    __VdlyDim0__tc_ram_i__DOT__sram__v1 
                        = (0x1fffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__4__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                      >> 5U));
                    __VdlySet__tc_ram_i__DOT__sram__v1 = 1U;
                }
                if ((4U & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__4__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U])) {
                    __VdlyVal__tc_ram_i__DOT__sram__v2 
                        = (0xffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__4__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[0U] 
                                    >> 0x10U));
                    __VdlyDim0__tc_ram_i__DOT__sram__v2 
                        = (0x1fffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__4__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                      >> 5U));
                    __VdlySet__tc_ram_i__DOT__sram__v2 = 1U;
                }
                if ((8U & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__4__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U])) {
                    __VdlyVal__tc_ram_i__DOT__sram__v3 
                        = (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__4__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[0U] 
                           >> 0x18U);
                    __VdlyDim0__tc_ram_i__DOT__sram__v3 
                        = (0x1fffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__4__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                      >> 5U));
                    __VdlySet__tc_ram_i__DOT__sram__v3 = 1U;
                }
            }
            if ((1U & (~ (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__4__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U] 
                          >> 4U)))) {
                vlSelfRef.tc_ram_i__DOT____Vlvbound_hdd9b40f9__0 
                    = (0x1fffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__4__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                  >> 5U));
                vlSelfRef.__PVT__tc_ram_i__DOT__r_addr_q 
                    = vlSelfRef.tc_ram_i__DOT____Vlvbound_hdd9b40f9__0;
            }
        }
    } else {
        vlSelfRef.__PVT__tc_ram_i__DOT__r_addr_q = 0U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni)))) {
        vlSelfRef.__PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk4__DOT__i = 1U;
    }
    if (__VdlySet__tc_ram_i__DOT__sram__v0) {
        vlSelfRef.tc_ram_i__DOT__sram[__VdlyDim0__tc_ram_i__DOT__sram__v0] 
            = ((0xffffff00U & vlSelfRef.tc_ram_i__DOT__sram
                [__VdlyDim0__tc_ram_i__DOT__sram__v0]) 
               | (IData)(__VdlyVal__tc_ram_i__DOT__sram__v0));
    }
    if (__VdlySet__tc_ram_i__DOT__sram__v1) {
        vlSelfRef.tc_ram_i__DOT__sram[__VdlyDim0__tc_ram_i__DOT__sram__v1] 
            = ((0xffff00ffU & vlSelfRef.tc_ram_i__DOT__sram
                [__VdlyDim0__tc_ram_i__DOT__sram__v1]) 
               | ((IData)(__VdlyVal__tc_ram_i__DOT__sram__v1) 
                  << 8U));
    }
    if (__VdlySet__tc_ram_i__DOT__sram__v2) {
        vlSelfRef.tc_ram_i__DOT__sram[__VdlyDim0__tc_ram_i__DOT__sram__v2] 
            = ((0xff00ffffU & vlSelfRef.tc_ram_i__DOT__sram
                [__VdlyDim0__tc_ram_i__DOT__sram__v2]) 
               | ((IData)(__VdlyVal__tc_ram_i__DOT__sram__v2) 
                  << 0x10U));
    }
    if (__VdlySet__tc_ram_i__DOT__sram__v3) {
        vlSelfRef.tc_ram_i__DOT__sram[__VdlyDim0__tc_ram_i__DOT__sram__v3] 
            = ((0xffffffU & vlSelfRef.tc_ram_i__DOT__sram
                [__VdlyDim0__tc_ram_i__DOT__sram__v3]) 
               | ((IData)(__VdlyVal__tc_ram_i__DOT__sram__v3) 
                  << 0x18U));
    }
}

VL_INLINE_OPT void Vtestharness_sram_wrapper__N2000___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram4_i__0(Vtestharness_sram_wrapper__N2000* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_sram_wrapper__N2000___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram4_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __VdlyVal__tc_ram_i__DOT__sram__v0;
    __VdlyVal__tc_ram_i__DOT__sram__v0 = 0;
    SData/*12:0*/ __VdlyDim0__tc_ram_i__DOT__sram__v0;
    __VdlyDim0__tc_ram_i__DOT__sram__v0 = 0;
    CData/*0:0*/ __VdlySet__tc_ram_i__DOT__sram__v0;
    __VdlySet__tc_ram_i__DOT__sram__v0 = 0;
    CData/*7:0*/ __VdlyVal__tc_ram_i__DOT__sram__v1;
    __VdlyVal__tc_ram_i__DOT__sram__v1 = 0;
    SData/*12:0*/ __VdlyDim0__tc_ram_i__DOT__sram__v1;
    __VdlyDim0__tc_ram_i__DOT__sram__v1 = 0;
    CData/*0:0*/ __VdlySet__tc_ram_i__DOT__sram__v1;
    __VdlySet__tc_ram_i__DOT__sram__v1 = 0;
    CData/*7:0*/ __VdlyVal__tc_ram_i__DOT__sram__v2;
    __VdlyVal__tc_ram_i__DOT__sram__v2 = 0;
    SData/*12:0*/ __VdlyDim0__tc_ram_i__DOT__sram__v2;
    __VdlyDim0__tc_ram_i__DOT__sram__v2 = 0;
    CData/*0:0*/ __VdlySet__tc_ram_i__DOT__sram__v2;
    __VdlySet__tc_ram_i__DOT__sram__v2 = 0;
    CData/*7:0*/ __VdlyVal__tc_ram_i__DOT__sram__v3;
    __VdlyVal__tc_ram_i__DOT__sram__v3 = 0;
    SData/*12:0*/ __VdlyDim0__tc_ram_i__DOT__sram__v3;
    __VdlyDim0__tc_ram_i__DOT__sram__v3 = 0;
    CData/*0:0*/ __VdlySet__tc_ram_i__DOT__sram__v3;
    __VdlySet__tc_ram_i__DOT__sram__v3 = 0;
    // Body
    __VdlySet__tc_ram_i__DOT__sram__v0 = 0U;
    __VdlySet__tc_ram_i__DOT__sram__v1 = 0U;
    __VdlySet__tc_ram_i__DOT__sram__v2 = 0U;
    __VdlySet__tc_ram_i__DOT__sram__v3 = 0U;
    if (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni) {
        vlSelfRef.__PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk5__DOT__i = 1U;
        vlSelfRef.__PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 1U;
        vlSelfRef.__PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk7__DOT__i = 1U;
        vlSelfRef.__PVT__tc_ram_i__DOT__rdata_q = (
                                                   ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__5__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.req_o) 
                                                    & (~ 
                                                       (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__5__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U] 
                                                        >> 4U)))
                                                    ? 
                                                   vlSelfRef.tc_ram_i__DOT__sram
                                                   [
                                                   (0x1fffU 
                                                    & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__5__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                                       >> 5U))]
                                                    : 
                                                   vlSelfRef.tc_ram_i__DOT__sram
                                                   [vlSelfRef.__PVT__tc_ram_i__DOT__r_addr_q]);
        if (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__5__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.req_o) {
            if ((0x10U & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__5__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U])) {
                vlSelfRef.__PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 4U;
                if ((1U & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__5__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U])) {
                    __VdlyVal__tc_ram_i__DOT__sram__v0 
                        = (0xffU & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__5__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[0U]);
                    __VdlyDim0__tc_ram_i__DOT__sram__v0 
                        = (0x1fffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__5__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                      >> 5U));
                    __VdlySet__tc_ram_i__DOT__sram__v0 = 1U;
                }
                if ((2U & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__5__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U])) {
                    __VdlyVal__tc_ram_i__DOT__sram__v1 
                        = (0xffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__5__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[0U] 
                                    >> 8U));
                    __VdlyDim0__tc_ram_i__DOT__sram__v1 
                        = (0x1fffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__5__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                      >> 5U));
                    __VdlySet__tc_ram_i__DOT__sram__v1 = 1U;
                }
                if ((4U & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__5__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U])) {
                    __VdlyVal__tc_ram_i__DOT__sram__v2 
                        = (0xffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__5__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[0U] 
                                    >> 0x10U));
                    __VdlyDim0__tc_ram_i__DOT__sram__v2 
                        = (0x1fffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__5__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                      >> 5U));
                    __VdlySet__tc_ram_i__DOT__sram__v2 = 1U;
                }
                if ((8U & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__5__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U])) {
                    __VdlyVal__tc_ram_i__DOT__sram__v3 
                        = (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__5__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[0U] 
                           >> 0x18U);
                    __VdlyDim0__tc_ram_i__DOT__sram__v3 
                        = (0x1fffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__5__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                      >> 5U));
                    __VdlySet__tc_ram_i__DOT__sram__v3 = 1U;
                }
            }
            if ((1U & (~ (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__5__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U] 
                          >> 4U)))) {
                vlSelfRef.tc_ram_i__DOT____Vlvbound_hdd9b40f9__0 
                    = (0x1fffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__5__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                  >> 5U));
                vlSelfRef.__PVT__tc_ram_i__DOT__r_addr_q 
                    = vlSelfRef.tc_ram_i__DOT____Vlvbound_hdd9b40f9__0;
            }
        }
    } else {
        vlSelfRef.__PVT__tc_ram_i__DOT__r_addr_q = 0U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni)))) {
        vlSelfRef.__PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk4__DOT__i = 1U;
    }
    if (__VdlySet__tc_ram_i__DOT__sram__v0) {
        vlSelfRef.tc_ram_i__DOT__sram[__VdlyDim0__tc_ram_i__DOT__sram__v0] 
            = ((0xffffff00U & vlSelfRef.tc_ram_i__DOT__sram
                [__VdlyDim0__tc_ram_i__DOT__sram__v0]) 
               | (IData)(__VdlyVal__tc_ram_i__DOT__sram__v0));
    }
    if (__VdlySet__tc_ram_i__DOT__sram__v1) {
        vlSelfRef.tc_ram_i__DOT__sram[__VdlyDim0__tc_ram_i__DOT__sram__v1] 
            = ((0xffff00ffU & vlSelfRef.tc_ram_i__DOT__sram
                [__VdlyDim0__tc_ram_i__DOT__sram__v1]) 
               | ((IData)(__VdlyVal__tc_ram_i__DOT__sram__v1) 
                  << 8U));
    }
    if (__VdlySet__tc_ram_i__DOT__sram__v2) {
        vlSelfRef.tc_ram_i__DOT__sram[__VdlyDim0__tc_ram_i__DOT__sram__v2] 
            = ((0xff00ffffU & vlSelfRef.tc_ram_i__DOT__sram
                [__VdlyDim0__tc_ram_i__DOT__sram__v2]) 
               | ((IData)(__VdlyVal__tc_ram_i__DOT__sram__v2) 
                  << 0x10U));
    }
    if (__VdlySet__tc_ram_i__DOT__sram__v3) {
        vlSelfRef.tc_ram_i__DOT__sram[__VdlyDim0__tc_ram_i__DOT__sram__v3] 
            = ((0xffffffU & vlSelfRef.tc_ram_i__DOT__sram
                [__VdlyDim0__tc_ram_i__DOT__sram__v3]) 
               | ((IData)(__VdlyVal__tc_ram_i__DOT__sram__v3) 
                  << 0x18U));
    }
}

VL_INLINE_OPT void Vtestharness_sram_wrapper__N2000___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram5_i__0(Vtestharness_sram_wrapper__N2000* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_sram_wrapper__N2000___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram5_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __VdlyVal__tc_ram_i__DOT__sram__v0;
    __VdlyVal__tc_ram_i__DOT__sram__v0 = 0;
    SData/*12:0*/ __VdlyDim0__tc_ram_i__DOT__sram__v0;
    __VdlyDim0__tc_ram_i__DOT__sram__v0 = 0;
    CData/*0:0*/ __VdlySet__tc_ram_i__DOT__sram__v0;
    __VdlySet__tc_ram_i__DOT__sram__v0 = 0;
    CData/*7:0*/ __VdlyVal__tc_ram_i__DOT__sram__v1;
    __VdlyVal__tc_ram_i__DOT__sram__v1 = 0;
    SData/*12:0*/ __VdlyDim0__tc_ram_i__DOT__sram__v1;
    __VdlyDim0__tc_ram_i__DOT__sram__v1 = 0;
    CData/*0:0*/ __VdlySet__tc_ram_i__DOT__sram__v1;
    __VdlySet__tc_ram_i__DOT__sram__v1 = 0;
    CData/*7:0*/ __VdlyVal__tc_ram_i__DOT__sram__v2;
    __VdlyVal__tc_ram_i__DOT__sram__v2 = 0;
    SData/*12:0*/ __VdlyDim0__tc_ram_i__DOT__sram__v2;
    __VdlyDim0__tc_ram_i__DOT__sram__v2 = 0;
    CData/*0:0*/ __VdlySet__tc_ram_i__DOT__sram__v2;
    __VdlySet__tc_ram_i__DOT__sram__v2 = 0;
    CData/*7:0*/ __VdlyVal__tc_ram_i__DOT__sram__v3;
    __VdlyVal__tc_ram_i__DOT__sram__v3 = 0;
    SData/*12:0*/ __VdlyDim0__tc_ram_i__DOT__sram__v3;
    __VdlyDim0__tc_ram_i__DOT__sram__v3 = 0;
    CData/*0:0*/ __VdlySet__tc_ram_i__DOT__sram__v3;
    __VdlySet__tc_ram_i__DOT__sram__v3 = 0;
    // Body
    __VdlySet__tc_ram_i__DOT__sram__v0 = 0U;
    __VdlySet__tc_ram_i__DOT__sram__v1 = 0U;
    __VdlySet__tc_ram_i__DOT__sram__v2 = 0U;
    __VdlySet__tc_ram_i__DOT__sram__v3 = 0U;
    if (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni) {
        vlSelfRef.__PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk5__DOT__i = 1U;
        vlSelfRef.__PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 1U;
        vlSelfRef.__PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk7__DOT__i = 1U;
        vlSelfRef.__PVT__tc_ram_i__DOT__rdata_q = (
                                                   ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__6__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.req_o) 
                                                    & (~ 
                                                       (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__6__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U] 
                                                        >> 4U)))
                                                    ? 
                                                   vlSelfRef.tc_ram_i__DOT__sram
                                                   [
                                                   (0x1fffU 
                                                    & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__6__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                                       >> 5U))]
                                                    : 
                                                   vlSelfRef.tc_ram_i__DOT__sram
                                                   [vlSelfRef.__PVT__tc_ram_i__DOT__r_addr_q]);
        if (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__6__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.req_o) {
            if ((0x10U & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__6__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U])) {
                vlSelfRef.__PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 4U;
                if ((1U & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__6__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U])) {
                    __VdlyVal__tc_ram_i__DOT__sram__v0 
                        = (0xffU & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__6__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[0U]);
                    __VdlyDim0__tc_ram_i__DOT__sram__v0 
                        = (0x1fffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__6__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                      >> 5U));
                    __VdlySet__tc_ram_i__DOT__sram__v0 = 1U;
                }
                if ((2U & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__6__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U])) {
                    __VdlyVal__tc_ram_i__DOT__sram__v1 
                        = (0xffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__6__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[0U] 
                                    >> 8U));
                    __VdlyDim0__tc_ram_i__DOT__sram__v1 
                        = (0x1fffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__6__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                      >> 5U));
                    __VdlySet__tc_ram_i__DOT__sram__v1 = 1U;
                }
                if ((4U & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__6__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U])) {
                    __VdlyVal__tc_ram_i__DOT__sram__v2 
                        = (0xffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__6__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[0U] 
                                    >> 0x10U));
                    __VdlyDim0__tc_ram_i__DOT__sram__v2 
                        = (0x1fffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__6__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                      >> 5U));
                    __VdlySet__tc_ram_i__DOT__sram__v2 = 1U;
                }
                if ((8U & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__6__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U])) {
                    __VdlyVal__tc_ram_i__DOT__sram__v3 
                        = (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__6__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[0U] 
                           >> 0x18U);
                    __VdlyDim0__tc_ram_i__DOT__sram__v3 
                        = (0x1fffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__6__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                      >> 5U));
                    __VdlySet__tc_ram_i__DOT__sram__v3 = 1U;
                }
            }
            if ((1U & (~ (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__6__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U] 
                          >> 4U)))) {
                vlSelfRef.tc_ram_i__DOT____Vlvbound_hdd9b40f9__0 
                    = (0x1fffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__6__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                  >> 5U));
                vlSelfRef.__PVT__tc_ram_i__DOT__r_addr_q 
                    = vlSelfRef.tc_ram_i__DOT____Vlvbound_hdd9b40f9__0;
            }
        }
    } else {
        vlSelfRef.__PVT__tc_ram_i__DOT__r_addr_q = 0U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni)))) {
        vlSelfRef.__PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk4__DOT__i = 1U;
    }
    if (__VdlySet__tc_ram_i__DOT__sram__v0) {
        vlSelfRef.tc_ram_i__DOT__sram[__VdlyDim0__tc_ram_i__DOT__sram__v0] 
            = ((0xffffff00U & vlSelfRef.tc_ram_i__DOT__sram
                [__VdlyDim0__tc_ram_i__DOT__sram__v0]) 
               | (IData)(__VdlyVal__tc_ram_i__DOT__sram__v0));
    }
    if (__VdlySet__tc_ram_i__DOT__sram__v1) {
        vlSelfRef.tc_ram_i__DOT__sram[__VdlyDim0__tc_ram_i__DOT__sram__v1] 
            = ((0xffff00ffU & vlSelfRef.tc_ram_i__DOT__sram
                [__VdlyDim0__tc_ram_i__DOT__sram__v1]) 
               | ((IData)(__VdlyVal__tc_ram_i__DOT__sram__v1) 
                  << 8U));
    }
    if (__VdlySet__tc_ram_i__DOT__sram__v2) {
        vlSelfRef.tc_ram_i__DOT__sram[__VdlyDim0__tc_ram_i__DOT__sram__v2] 
            = ((0xff00ffffU & vlSelfRef.tc_ram_i__DOT__sram
                [__VdlyDim0__tc_ram_i__DOT__sram__v2]) 
               | ((IData)(__VdlyVal__tc_ram_i__DOT__sram__v2) 
                  << 0x10U));
    }
    if (__VdlySet__tc_ram_i__DOT__sram__v3) {
        vlSelfRef.tc_ram_i__DOT__sram[__VdlyDim0__tc_ram_i__DOT__sram__v3] 
            = ((0xffffffU & vlSelfRef.tc_ram_i__DOT__sram
                [__VdlyDim0__tc_ram_i__DOT__sram__v3]) 
               | ((IData)(__VdlyVal__tc_ram_i__DOT__sram__v3) 
                  << 0x18U));
    }
}

VL_INLINE_OPT void Vtestharness_sram_wrapper__N2000___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram6_i__0(Vtestharness_sram_wrapper__N2000* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_sram_wrapper__N2000___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram6_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __VdlyVal__tc_ram_i__DOT__sram__v0;
    __VdlyVal__tc_ram_i__DOT__sram__v0 = 0;
    SData/*12:0*/ __VdlyDim0__tc_ram_i__DOT__sram__v0;
    __VdlyDim0__tc_ram_i__DOT__sram__v0 = 0;
    CData/*0:0*/ __VdlySet__tc_ram_i__DOT__sram__v0;
    __VdlySet__tc_ram_i__DOT__sram__v0 = 0;
    CData/*7:0*/ __VdlyVal__tc_ram_i__DOT__sram__v1;
    __VdlyVal__tc_ram_i__DOT__sram__v1 = 0;
    SData/*12:0*/ __VdlyDim0__tc_ram_i__DOT__sram__v1;
    __VdlyDim0__tc_ram_i__DOT__sram__v1 = 0;
    CData/*0:0*/ __VdlySet__tc_ram_i__DOT__sram__v1;
    __VdlySet__tc_ram_i__DOT__sram__v1 = 0;
    CData/*7:0*/ __VdlyVal__tc_ram_i__DOT__sram__v2;
    __VdlyVal__tc_ram_i__DOT__sram__v2 = 0;
    SData/*12:0*/ __VdlyDim0__tc_ram_i__DOT__sram__v2;
    __VdlyDim0__tc_ram_i__DOT__sram__v2 = 0;
    CData/*0:0*/ __VdlySet__tc_ram_i__DOT__sram__v2;
    __VdlySet__tc_ram_i__DOT__sram__v2 = 0;
    CData/*7:0*/ __VdlyVal__tc_ram_i__DOT__sram__v3;
    __VdlyVal__tc_ram_i__DOT__sram__v3 = 0;
    SData/*12:0*/ __VdlyDim0__tc_ram_i__DOT__sram__v3;
    __VdlyDim0__tc_ram_i__DOT__sram__v3 = 0;
    CData/*0:0*/ __VdlySet__tc_ram_i__DOT__sram__v3;
    __VdlySet__tc_ram_i__DOT__sram__v3 = 0;
    // Body
    __VdlySet__tc_ram_i__DOT__sram__v0 = 0U;
    __VdlySet__tc_ram_i__DOT__sram__v1 = 0U;
    __VdlySet__tc_ram_i__DOT__sram__v2 = 0U;
    __VdlySet__tc_ram_i__DOT__sram__v3 = 0U;
    if (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni) {
        vlSelfRef.__PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk5__DOT__i = 1U;
        vlSelfRef.__PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 1U;
        vlSelfRef.__PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk7__DOT__i = 1U;
        vlSelfRef.__PVT__tc_ram_i__DOT__rdata_q = (
                                                   ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__7__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.req_o) 
                                                    & (~ 
                                                       (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__7__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U] 
                                                        >> 4U)))
                                                    ? 
                                                   vlSelfRef.tc_ram_i__DOT__sram
                                                   [
                                                   (0x1fffU 
                                                    & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__7__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                                       >> 5U))]
                                                    : 
                                                   vlSelfRef.tc_ram_i__DOT__sram
                                                   [vlSelfRef.__PVT__tc_ram_i__DOT__r_addr_q]);
        if (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__7__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.req_o) {
            if ((0x10U & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__7__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U])) {
                vlSelfRef.__PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 4U;
                if ((1U & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__7__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U])) {
                    __VdlyVal__tc_ram_i__DOT__sram__v0 
                        = (0xffU & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__7__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[0U]);
                    __VdlyDim0__tc_ram_i__DOT__sram__v0 
                        = (0x1fffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__7__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                      >> 5U));
                    __VdlySet__tc_ram_i__DOT__sram__v0 = 1U;
                }
                if ((2U & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__7__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U])) {
                    __VdlyVal__tc_ram_i__DOT__sram__v1 
                        = (0xffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__7__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[0U] 
                                    >> 8U));
                    __VdlyDim0__tc_ram_i__DOT__sram__v1 
                        = (0x1fffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__7__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                      >> 5U));
                    __VdlySet__tc_ram_i__DOT__sram__v1 = 1U;
                }
                if ((4U & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__7__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U])) {
                    __VdlyVal__tc_ram_i__DOT__sram__v2 
                        = (0xffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__7__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[0U] 
                                    >> 0x10U));
                    __VdlyDim0__tc_ram_i__DOT__sram__v2 
                        = (0x1fffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__7__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                      >> 5U));
                    __VdlySet__tc_ram_i__DOT__sram__v2 = 1U;
                }
                if ((8U & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__7__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U])) {
                    __VdlyVal__tc_ram_i__DOT__sram__v3 
                        = (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__7__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[0U] 
                           >> 0x18U);
                    __VdlyDim0__tc_ram_i__DOT__sram__v3 
                        = (0x1fffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__7__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                      >> 5U));
                    __VdlySet__tc_ram_i__DOT__sram__v3 = 1U;
                }
            }
            if ((1U & (~ (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__7__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U] 
                          >> 4U)))) {
                vlSelfRef.tc_ram_i__DOT____Vlvbound_hdd9b40f9__0 
                    = (0x1fffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__7__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                  >> 5U));
                vlSelfRef.__PVT__tc_ram_i__DOT__r_addr_q 
                    = vlSelfRef.tc_ram_i__DOT____Vlvbound_hdd9b40f9__0;
            }
        }
    } else {
        vlSelfRef.__PVT__tc_ram_i__DOT__r_addr_q = 0U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni)))) {
        vlSelfRef.__PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk4__DOT__i = 1U;
    }
    if (__VdlySet__tc_ram_i__DOT__sram__v0) {
        vlSelfRef.tc_ram_i__DOT__sram[__VdlyDim0__tc_ram_i__DOT__sram__v0] 
            = ((0xffffff00U & vlSelfRef.tc_ram_i__DOT__sram
                [__VdlyDim0__tc_ram_i__DOT__sram__v0]) 
               | (IData)(__VdlyVal__tc_ram_i__DOT__sram__v0));
    }
    if (__VdlySet__tc_ram_i__DOT__sram__v1) {
        vlSelfRef.tc_ram_i__DOT__sram[__VdlyDim0__tc_ram_i__DOT__sram__v1] 
            = ((0xffff00ffU & vlSelfRef.tc_ram_i__DOT__sram
                [__VdlyDim0__tc_ram_i__DOT__sram__v1]) 
               | ((IData)(__VdlyVal__tc_ram_i__DOT__sram__v1) 
                  << 8U));
    }
    if (__VdlySet__tc_ram_i__DOT__sram__v2) {
        vlSelfRef.tc_ram_i__DOT__sram[__VdlyDim0__tc_ram_i__DOT__sram__v2] 
            = ((0xff00ffffU & vlSelfRef.tc_ram_i__DOT__sram
                [__VdlyDim0__tc_ram_i__DOT__sram__v2]) 
               | ((IData)(__VdlyVal__tc_ram_i__DOT__sram__v2) 
                  << 0x10U));
    }
    if (__VdlySet__tc_ram_i__DOT__sram__v3) {
        vlSelfRef.tc_ram_i__DOT__sram[__VdlyDim0__tc_ram_i__DOT__sram__v3] 
            = ((0xffffffU & vlSelfRef.tc_ram_i__DOT__sram
                [__VdlyDim0__tc_ram_i__DOT__sram__v3]) 
               | ((IData)(__VdlyVal__tc_ram_i__DOT__sram__v3) 
                  << 0x18U));
    }
}

VL_INLINE_OPT void Vtestharness_sram_wrapper__N2000___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram7_i__0(Vtestharness_sram_wrapper__N2000* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_sram_wrapper__N2000___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram7_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __VdlyVal__tc_ram_i__DOT__sram__v0;
    __VdlyVal__tc_ram_i__DOT__sram__v0 = 0;
    SData/*12:0*/ __VdlyDim0__tc_ram_i__DOT__sram__v0;
    __VdlyDim0__tc_ram_i__DOT__sram__v0 = 0;
    CData/*0:0*/ __VdlySet__tc_ram_i__DOT__sram__v0;
    __VdlySet__tc_ram_i__DOT__sram__v0 = 0;
    CData/*7:0*/ __VdlyVal__tc_ram_i__DOT__sram__v1;
    __VdlyVal__tc_ram_i__DOT__sram__v1 = 0;
    SData/*12:0*/ __VdlyDim0__tc_ram_i__DOT__sram__v1;
    __VdlyDim0__tc_ram_i__DOT__sram__v1 = 0;
    CData/*0:0*/ __VdlySet__tc_ram_i__DOT__sram__v1;
    __VdlySet__tc_ram_i__DOT__sram__v1 = 0;
    CData/*7:0*/ __VdlyVal__tc_ram_i__DOT__sram__v2;
    __VdlyVal__tc_ram_i__DOT__sram__v2 = 0;
    SData/*12:0*/ __VdlyDim0__tc_ram_i__DOT__sram__v2;
    __VdlyDim0__tc_ram_i__DOT__sram__v2 = 0;
    CData/*0:0*/ __VdlySet__tc_ram_i__DOT__sram__v2;
    __VdlySet__tc_ram_i__DOT__sram__v2 = 0;
    CData/*7:0*/ __VdlyVal__tc_ram_i__DOT__sram__v3;
    __VdlyVal__tc_ram_i__DOT__sram__v3 = 0;
    SData/*12:0*/ __VdlyDim0__tc_ram_i__DOT__sram__v3;
    __VdlyDim0__tc_ram_i__DOT__sram__v3 = 0;
    CData/*0:0*/ __VdlySet__tc_ram_i__DOT__sram__v3;
    __VdlySet__tc_ram_i__DOT__sram__v3 = 0;
    // Body
    __VdlySet__tc_ram_i__DOT__sram__v0 = 0U;
    __VdlySet__tc_ram_i__DOT__sram__v1 = 0U;
    __VdlySet__tc_ram_i__DOT__sram__v2 = 0U;
    __VdlySet__tc_ram_i__DOT__sram__v3 = 0U;
    if (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni) {
        vlSelfRef.__PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk5__DOT__i = 1U;
        vlSelfRef.__PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 1U;
        vlSelfRef.__PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk7__DOT__i = 1U;
        vlSelfRef.__PVT__tc_ram_i__DOT__rdata_q = (
                                                   ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__8__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.req_o) 
                                                    & (~ 
                                                       (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__8__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U] 
                                                        >> 4U)))
                                                    ? 
                                                   vlSelfRef.tc_ram_i__DOT__sram
                                                   [
                                                   (0x1fffU 
                                                    & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__8__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                                       >> 5U))]
                                                    : 
                                                   vlSelfRef.tc_ram_i__DOT__sram
                                                   [vlSelfRef.__PVT__tc_ram_i__DOT__r_addr_q]);
        if (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__8__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.req_o) {
            if ((0x10U & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__8__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U])) {
                vlSelfRef.__PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 4U;
                if ((1U & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__8__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U])) {
                    __VdlyVal__tc_ram_i__DOT__sram__v0 
                        = (0xffU & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__8__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[0U]);
                    __VdlyDim0__tc_ram_i__DOT__sram__v0 
                        = (0x1fffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__8__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                      >> 5U));
                    __VdlySet__tc_ram_i__DOT__sram__v0 = 1U;
                }
                if ((2U & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__8__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U])) {
                    __VdlyVal__tc_ram_i__DOT__sram__v1 
                        = (0xffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__8__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[0U] 
                                    >> 8U));
                    __VdlyDim0__tc_ram_i__DOT__sram__v1 
                        = (0x1fffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__8__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                      >> 5U));
                    __VdlySet__tc_ram_i__DOT__sram__v1 = 1U;
                }
                if ((4U & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__8__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U])) {
                    __VdlyVal__tc_ram_i__DOT__sram__v2 
                        = (0xffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__8__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[0U] 
                                    >> 0x10U));
                    __VdlyDim0__tc_ram_i__DOT__sram__v2 
                        = (0x1fffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__8__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                      >> 5U));
                    __VdlySet__tc_ram_i__DOT__sram__v2 = 1U;
                }
                if ((8U & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__8__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U])) {
                    __VdlyVal__tc_ram_i__DOT__sram__v3 
                        = (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__8__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[0U] 
                           >> 0x18U);
                    __VdlyDim0__tc_ram_i__DOT__sram__v3 
                        = (0x1fffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__8__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                      >> 5U));
                    __VdlySet__tc_ram_i__DOT__sram__v3 = 1U;
                }
            }
            if ((1U & (~ (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__8__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U] 
                          >> 4U)))) {
                vlSelfRef.tc_ram_i__DOT____Vlvbound_hdd9b40f9__0 
                    = (0x1fffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__8__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                  >> 5U));
                vlSelfRef.__PVT__tc_ram_i__DOT__r_addr_q 
                    = vlSelfRef.tc_ram_i__DOT____Vlvbound_hdd9b40f9__0;
            }
        }
    } else {
        vlSelfRef.__PVT__tc_ram_i__DOT__r_addr_q = 0U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni)))) {
        vlSelfRef.__PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk4__DOT__i = 1U;
    }
    if (__VdlySet__tc_ram_i__DOT__sram__v0) {
        vlSelfRef.tc_ram_i__DOT__sram[__VdlyDim0__tc_ram_i__DOT__sram__v0] 
            = ((0xffffff00U & vlSelfRef.tc_ram_i__DOT__sram
                [__VdlyDim0__tc_ram_i__DOT__sram__v0]) 
               | (IData)(__VdlyVal__tc_ram_i__DOT__sram__v0));
    }
    if (__VdlySet__tc_ram_i__DOT__sram__v1) {
        vlSelfRef.tc_ram_i__DOT__sram[__VdlyDim0__tc_ram_i__DOT__sram__v1] 
            = ((0xffff00ffU & vlSelfRef.tc_ram_i__DOT__sram
                [__VdlyDim0__tc_ram_i__DOT__sram__v1]) 
               | ((IData)(__VdlyVal__tc_ram_i__DOT__sram__v1) 
                  << 8U));
    }
    if (__VdlySet__tc_ram_i__DOT__sram__v2) {
        vlSelfRef.tc_ram_i__DOT__sram[__VdlyDim0__tc_ram_i__DOT__sram__v2] 
            = ((0xff00ffffU & vlSelfRef.tc_ram_i__DOT__sram
                [__VdlyDim0__tc_ram_i__DOT__sram__v2]) 
               | ((IData)(__VdlyVal__tc_ram_i__DOT__sram__v2) 
                  << 0x10U));
    }
    if (__VdlySet__tc_ram_i__DOT__sram__v3) {
        vlSelfRef.tc_ram_i__DOT__sram[__VdlyDim0__tc_ram_i__DOT__sram__v3] 
            = ((0xffffffU & vlSelfRef.tc_ram_i__DOT__sram
                [__VdlyDim0__tc_ram_i__DOT__sram__v3]) 
               | ((IData)(__VdlyVal__tc_ram_i__DOT__sram__v3) 
                  << 0x18U));
    }
}

VL_INLINE_OPT void Vtestharness_sram_wrapper__N2000___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram8_i__0(Vtestharness_sram_wrapper__N2000* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_sram_wrapper__N2000___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram8_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __VdlyVal__tc_ram_i__DOT__sram__v0;
    __VdlyVal__tc_ram_i__DOT__sram__v0 = 0;
    SData/*12:0*/ __VdlyDim0__tc_ram_i__DOT__sram__v0;
    __VdlyDim0__tc_ram_i__DOT__sram__v0 = 0;
    CData/*0:0*/ __VdlySet__tc_ram_i__DOT__sram__v0;
    __VdlySet__tc_ram_i__DOT__sram__v0 = 0;
    CData/*7:0*/ __VdlyVal__tc_ram_i__DOT__sram__v1;
    __VdlyVal__tc_ram_i__DOT__sram__v1 = 0;
    SData/*12:0*/ __VdlyDim0__tc_ram_i__DOT__sram__v1;
    __VdlyDim0__tc_ram_i__DOT__sram__v1 = 0;
    CData/*0:0*/ __VdlySet__tc_ram_i__DOT__sram__v1;
    __VdlySet__tc_ram_i__DOT__sram__v1 = 0;
    CData/*7:0*/ __VdlyVal__tc_ram_i__DOT__sram__v2;
    __VdlyVal__tc_ram_i__DOT__sram__v2 = 0;
    SData/*12:0*/ __VdlyDim0__tc_ram_i__DOT__sram__v2;
    __VdlyDim0__tc_ram_i__DOT__sram__v2 = 0;
    CData/*0:0*/ __VdlySet__tc_ram_i__DOT__sram__v2;
    __VdlySet__tc_ram_i__DOT__sram__v2 = 0;
    CData/*7:0*/ __VdlyVal__tc_ram_i__DOT__sram__v3;
    __VdlyVal__tc_ram_i__DOT__sram__v3 = 0;
    SData/*12:0*/ __VdlyDim0__tc_ram_i__DOT__sram__v3;
    __VdlyDim0__tc_ram_i__DOT__sram__v3 = 0;
    CData/*0:0*/ __VdlySet__tc_ram_i__DOT__sram__v3;
    __VdlySet__tc_ram_i__DOT__sram__v3 = 0;
    // Body
    __VdlySet__tc_ram_i__DOT__sram__v0 = 0U;
    __VdlySet__tc_ram_i__DOT__sram__v1 = 0U;
    __VdlySet__tc_ram_i__DOT__sram__v2 = 0U;
    __VdlySet__tc_ram_i__DOT__sram__v3 = 0U;
    if (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni) {
        vlSelfRef.__PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk5__DOT__i = 1U;
        vlSelfRef.__PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 1U;
        vlSelfRef.__PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk7__DOT__i = 1U;
        vlSelfRef.__PVT__tc_ram_i__DOT__rdata_q = (
                                                   ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__9__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.req_o) 
                                                    & (~ 
                                                       (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__9__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U] 
                                                        >> 4U)))
                                                    ? 
                                                   vlSelfRef.tc_ram_i__DOT__sram
                                                   [
                                                   (0x1fffU 
                                                    & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__9__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                                       >> 5U))]
                                                    : 
                                                   vlSelfRef.tc_ram_i__DOT__sram
                                                   [vlSelfRef.__PVT__tc_ram_i__DOT__r_addr_q]);
        if (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__9__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.req_o) {
            if ((0x10U & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__9__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U])) {
                vlSelfRef.__PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 4U;
                if ((1U & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__9__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U])) {
                    __VdlyVal__tc_ram_i__DOT__sram__v0 
                        = (0xffU & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__9__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[0U]);
                    __VdlyDim0__tc_ram_i__DOT__sram__v0 
                        = (0x1fffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__9__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                      >> 5U));
                    __VdlySet__tc_ram_i__DOT__sram__v0 = 1U;
                }
                if ((2U & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__9__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U])) {
                    __VdlyVal__tc_ram_i__DOT__sram__v1 
                        = (0xffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__9__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[0U] 
                                    >> 8U));
                    __VdlyDim0__tc_ram_i__DOT__sram__v1 
                        = (0x1fffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__9__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                      >> 5U));
                    __VdlySet__tc_ram_i__DOT__sram__v1 = 1U;
                }
                if ((4U & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__9__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U])) {
                    __VdlyVal__tc_ram_i__DOT__sram__v2 
                        = (0xffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__9__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[0U] 
                                    >> 0x10U));
                    __VdlyDim0__tc_ram_i__DOT__sram__v2 
                        = (0x1fffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__9__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                      >> 5U));
                    __VdlySet__tc_ram_i__DOT__sram__v2 = 1U;
                }
                if ((8U & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__9__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U])) {
                    __VdlyVal__tc_ram_i__DOT__sram__v3 
                        = (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__9__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[0U] 
                           >> 0x18U);
                    __VdlyDim0__tc_ram_i__DOT__sram__v3 
                        = (0x1fffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__9__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                      >> 5U));
                    __VdlySet__tc_ram_i__DOT__sram__v3 = 1U;
                }
            }
            if ((1U & (~ (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__9__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U] 
                          >> 4U)))) {
                vlSelfRef.tc_ram_i__DOT____Vlvbound_hdd9b40f9__0 
                    = (0x1fffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__9__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                  >> 5U));
                vlSelfRef.__PVT__tc_ram_i__DOT__r_addr_q 
                    = vlSelfRef.tc_ram_i__DOT____Vlvbound_hdd9b40f9__0;
            }
        }
    } else {
        vlSelfRef.__PVT__tc_ram_i__DOT__r_addr_q = 0U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni)))) {
        vlSelfRef.__PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk4__DOT__i = 1U;
    }
    if (__VdlySet__tc_ram_i__DOT__sram__v0) {
        vlSelfRef.tc_ram_i__DOT__sram[__VdlyDim0__tc_ram_i__DOT__sram__v0] 
            = ((0xffffff00U & vlSelfRef.tc_ram_i__DOT__sram
                [__VdlyDim0__tc_ram_i__DOT__sram__v0]) 
               | (IData)(__VdlyVal__tc_ram_i__DOT__sram__v0));
    }
    if (__VdlySet__tc_ram_i__DOT__sram__v1) {
        vlSelfRef.tc_ram_i__DOT__sram[__VdlyDim0__tc_ram_i__DOT__sram__v1] 
            = ((0xffff00ffU & vlSelfRef.tc_ram_i__DOT__sram
                [__VdlyDim0__tc_ram_i__DOT__sram__v1]) 
               | ((IData)(__VdlyVal__tc_ram_i__DOT__sram__v1) 
                  << 8U));
    }
    if (__VdlySet__tc_ram_i__DOT__sram__v2) {
        vlSelfRef.tc_ram_i__DOT__sram[__VdlyDim0__tc_ram_i__DOT__sram__v2] 
            = ((0xff00ffffU & vlSelfRef.tc_ram_i__DOT__sram
                [__VdlyDim0__tc_ram_i__DOT__sram__v2]) 
               | ((IData)(__VdlyVal__tc_ram_i__DOT__sram__v2) 
                  << 0x10U));
    }
    if (__VdlySet__tc_ram_i__DOT__sram__v3) {
        vlSelfRef.tc_ram_i__DOT__sram[__VdlyDim0__tc_ram_i__DOT__sram__v3] 
            = ((0xffffffU & vlSelfRef.tc_ram_i__DOT__sram
                [__VdlyDim0__tc_ram_i__DOT__sram__v3]) 
               | ((IData)(__VdlyVal__tc_ram_i__DOT__sram__v3) 
                  << 0x18U));
    }
}

VL_INLINE_OPT void Vtestharness_sram_wrapper__N2000___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram9_i__0(Vtestharness_sram_wrapper__N2000* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_sram_wrapper__N2000___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram9_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __VdlyVal__tc_ram_i__DOT__sram__v0;
    __VdlyVal__tc_ram_i__DOT__sram__v0 = 0;
    SData/*12:0*/ __VdlyDim0__tc_ram_i__DOT__sram__v0;
    __VdlyDim0__tc_ram_i__DOT__sram__v0 = 0;
    CData/*0:0*/ __VdlySet__tc_ram_i__DOT__sram__v0;
    __VdlySet__tc_ram_i__DOT__sram__v0 = 0;
    CData/*7:0*/ __VdlyVal__tc_ram_i__DOT__sram__v1;
    __VdlyVal__tc_ram_i__DOT__sram__v1 = 0;
    SData/*12:0*/ __VdlyDim0__tc_ram_i__DOT__sram__v1;
    __VdlyDim0__tc_ram_i__DOT__sram__v1 = 0;
    CData/*0:0*/ __VdlySet__tc_ram_i__DOT__sram__v1;
    __VdlySet__tc_ram_i__DOT__sram__v1 = 0;
    CData/*7:0*/ __VdlyVal__tc_ram_i__DOT__sram__v2;
    __VdlyVal__tc_ram_i__DOT__sram__v2 = 0;
    SData/*12:0*/ __VdlyDim0__tc_ram_i__DOT__sram__v2;
    __VdlyDim0__tc_ram_i__DOT__sram__v2 = 0;
    CData/*0:0*/ __VdlySet__tc_ram_i__DOT__sram__v2;
    __VdlySet__tc_ram_i__DOT__sram__v2 = 0;
    CData/*7:0*/ __VdlyVal__tc_ram_i__DOT__sram__v3;
    __VdlyVal__tc_ram_i__DOT__sram__v3 = 0;
    SData/*12:0*/ __VdlyDim0__tc_ram_i__DOT__sram__v3;
    __VdlyDim0__tc_ram_i__DOT__sram__v3 = 0;
    CData/*0:0*/ __VdlySet__tc_ram_i__DOT__sram__v3;
    __VdlySet__tc_ram_i__DOT__sram__v3 = 0;
    // Body
    __VdlySet__tc_ram_i__DOT__sram__v0 = 0U;
    __VdlySet__tc_ram_i__DOT__sram__v1 = 0U;
    __VdlySet__tc_ram_i__DOT__sram__v2 = 0U;
    __VdlySet__tc_ram_i__DOT__sram__v3 = 0U;
    if (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni) {
        vlSelfRef.__PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk5__DOT__i = 1U;
        vlSelfRef.__PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 1U;
        vlSelfRef.__PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk7__DOT__i = 1U;
        vlSelfRef.__PVT__tc_ram_i__DOT__rdata_q = (
                                                   ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__10__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.req_o) 
                                                    & (~ 
                                                       (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__10__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U] 
                                                        >> 4U)))
                                                    ? 
                                                   vlSelfRef.tc_ram_i__DOT__sram
                                                   [
                                                   (0x1fffU 
                                                    & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__10__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                                       >> 5U))]
                                                    : 
                                                   vlSelfRef.tc_ram_i__DOT__sram
                                                   [vlSelfRef.__PVT__tc_ram_i__DOT__r_addr_q]);
        if (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__10__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.req_o) {
            if ((0x10U & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__10__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U])) {
                vlSelfRef.__PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 4U;
                if ((1U & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__10__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U])) {
                    __VdlyVal__tc_ram_i__DOT__sram__v0 
                        = (0xffU & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__10__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[0U]);
                    __VdlyDim0__tc_ram_i__DOT__sram__v0 
                        = (0x1fffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__10__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                      >> 5U));
                    __VdlySet__tc_ram_i__DOT__sram__v0 = 1U;
                }
                if ((2U & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__10__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U])) {
                    __VdlyVal__tc_ram_i__DOT__sram__v1 
                        = (0xffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__10__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[0U] 
                                    >> 8U));
                    __VdlyDim0__tc_ram_i__DOT__sram__v1 
                        = (0x1fffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__10__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                      >> 5U));
                    __VdlySet__tc_ram_i__DOT__sram__v1 = 1U;
                }
                if ((4U & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__10__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U])) {
                    __VdlyVal__tc_ram_i__DOT__sram__v2 
                        = (0xffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__10__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[0U] 
                                    >> 0x10U));
                    __VdlyDim0__tc_ram_i__DOT__sram__v2 
                        = (0x1fffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__10__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                      >> 5U));
                    __VdlySet__tc_ram_i__DOT__sram__v2 = 1U;
                }
                if ((8U & vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__10__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U])) {
                    __VdlyVal__tc_ram_i__DOT__sram__v3 
                        = (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__10__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[0U] 
                           >> 0x18U);
                    __VdlyDim0__tc_ram_i__DOT__sram__v3 
                        = (0x1fffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__10__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                      >> 5U));
                    __VdlySet__tc_ram_i__DOT__sram__v3 = 1U;
                }
            }
            if ((1U & (~ (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__10__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[2U] 
                          >> 4U)))) {
                vlSelfRef.tc_ram_i__DOT____Vlvbound_hdd9b40f9__0 
                    = (0x1fffU & (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__10__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.data_o[1U] 
                                  >> 5U));
                vlSelfRef.__PVT__tc_ram_i__DOT__r_addr_q 
                    = vlSelfRef.tc_ram_i__DOT____Vlvbound_hdd9b40f9__0;
            }
        }
    } else {
        vlSelfRef.__PVT__tc_ram_i__DOT__r_addr_q = 0U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni)))) {
        vlSelfRef.__PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk4__DOT__i = 1U;
    }
    if (__VdlySet__tc_ram_i__DOT__sram__v0) {
        vlSelfRef.tc_ram_i__DOT__sram[__VdlyDim0__tc_ram_i__DOT__sram__v0] 
            = ((0xffffff00U & vlSelfRef.tc_ram_i__DOT__sram
                [__VdlyDim0__tc_ram_i__DOT__sram__v0]) 
               | (IData)(__VdlyVal__tc_ram_i__DOT__sram__v0));
    }
    if (__VdlySet__tc_ram_i__DOT__sram__v1) {
        vlSelfRef.tc_ram_i__DOT__sram[__VdlyDim0__tc_ram_i__DOT__sram__v1] 
            = ((0xffff00ffU & vlSelfRef.tc_ram_i__DOT__sram
                [__VdlyDim0__tc_ram_i__DOT__sram__v1]) 
               | ((IData)(__VdlyVal__tc_ram_i__DOT__sram__v1) 
                  << 8U));
    }
    if (__VdlySet__tc_ram_i__DOT__sram__v2) {
        vlSelfRef.tc_ram_i__DOT__sram[__VdlyDim0__tc_ram_i__DOT__sram__v2] 
            = ((0xff00ffffU & vlSelfRef.tc_ram_i__DOT__sram
                [__VdlyDim0__tc_ram_i__DOT__sram__v2]) 
               | ((IData)(__VdlyVal__tc_ram_i__DOT__sram__v2) 
                  << 0x10U));
    }
    if (__VdlySet__tc_ram_i__DOT__sram__v3) {
        vlSelfRef.tc_ram_i__DOT__sram[__VdlyDim0__tc_ram_i__DOT__sram__v3] 
            = ((0xffffffU & vlSelfRef.tc_ram_i__DOT__sram
                [__VdlyDim0__tc_ram_i__DOT__sram__v3]) 
               | ((IData)(__VdlyVal__tc_ram_i__DOT__sram__v3) 
                  << 0x18U));
    }
}
