// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness_gpio__Tz2_TBz3.h"

VL_INLINE_OPT void Vtestharness_gpio__Tz2_TBz3___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i__0(Vtestharness_gpio__Tz2_TBz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_gpio__Tz2_TBz3___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gpio_in_sync_o = (((((((IData)(vlSelfRef.__PVT__gen_gpios__BRA__31__KET____DOT__i_sync_gpio_input__DOT__serial_q) 
                                            << 0x1fU) 
                                           | ((IData)(vlSelfRef.__PVT__gen_gpios__BRA__30__KET____DOT__i_sync_gpio_input__DOT__serial_q) 
                                              << 0x1eU)) 
                                          | (((IData)(vlSelfRef.__PVT__gen_gpios__BRA__29__KET____DOT__i_sync_gpio_input__DOT__serial_q) 
                                              << 0x1dU) 
                                             | ((IData)(vlSelfRef.__PVT__gen_gpios__BRA__28__KET____DOT__i_sync_gpio_input__DOT__serial_q) 
                                                << 0x1cU))) 
                                         | ((((IData)(vlSelfRef.__PVT__gen_gpios__BRA__27__KET____DOT__i_sync_gpio_input__DOT__serial_q) 
                                              << 0x1bU) 
                                             | ((IData)(vlSelfRef.__PVT__gen_gpios__BRA__26__KET____DOT__i_sync_gpio_input__DOT__serial_q) 
                                                << 0x1aU)) 
                                            | (((IData)(vlSelfRef.__PVT__gen_gpios__BRA__25__KET____DOT__i_sync_gpio_input__DOT__serial_q) 
                                                << 0x19U) 
                                               | ((IData)(vlSelfRef.__PVT__gen_gpios__BRA__24__KET____DOT__i_sync_gpio_input__DOT__serial_q) 
                                                  << 0x18U)))) 
                                        | (((((IData)(vlSelfRef.__PVT__gen_gpios__BRA__23__KET____DOT__i_sync_gpio_input__DOT__serial_q) 
                                              << 0x17U) 
                                             | ((IData)(vlSelfRef.__PVT__gen_gpios__BRA__22__KET____DOT__i_sync_gpio_input__DOT__serial_q) 
                                                << 0x16U)) 
                                            | (((IData)(vlSelfRef.__PVT__gen_gpios__BRA__21__KET____DOT__i_sync_gpio_input__DOT__serial_q) 
                                                << 0x15U) 
                                               | ((IData)(vlSelfRef.__PVT__gen_gpios__BRA__20__KET____DOT__i_sync_gpio_input__DOT__serial_q) 
                                                  << 0x14U))) 
                                           | ((((IData)(vlSelfRef.__PVT__gen_gpios__BRA__19__KET____DOT__i_sync_gpio_input__DOT__serial_q) 
                                                << 0x13U) 
                                               | ((IData)(vlSelfRef.__PVT__gen_gpios__BRA__18__KET____DOT__i_sync_gpio_input__DOT__serial_q) 
                                                  << 0x12U)) 
                                              | (((IData)(vlSelfRef.__PVT__gen_gpios__BRA__17__KET____DOT__i_sync_gpio_input__DOT__serial_q) 
                                                  << 0x11U) 
                                                 | ((IData)(vlSelfRef.__PVT__gen_gpios__BRA__16__KET____DOT__i_sync_gpio_input__DOT__serial_q) 
                                                    << 0x10U))))) 
                                       | ((((((IData)(vlSelfRef.__PVT__gen_gpios__BRA__15__KET____DOT__i_sync_gpio_input__DOT__serial_q) 
                                              << 0xfU) 
                                             | ((IData)(vlSelfRef.__PVT__gen_gpios__BRA__14__KET____DOT__i_sync_gpio_input__DOT__serial_q) 
                                                << 0xeU)) 
                                            | (((IData)(vlSelfRef.__PVT__gen_gpios__BRA__13__KET____DOT__i_sync_gpio_input__DOT__serial_q) 
                                                << 0xdU) 
                                               | ((IData)(vlSelfRef.__PVT__gen_gpios__BRA__12__KET____DOT__i_sync_gpio_input__DOT__serial_q) 
                                                  << 0xcU))) 
                                           | ((((IData)(vlSelfRef.__PVT__gen_gpios__BRA__11__KET____DOT__i_sync_gpio_input__DOT__serial_q) 
                                                << 0xbU) 
                                               | ((IData)(vlSelfRef.__PVT__gen_gpios__BRA__10__KET____DOT__i_sync_gpio_input__DOT__serial_q) 
                                                  << 0xaU)) 
                                              | (((IData)(vlSelfRef.__PVT__gen_gpios__BRA__9__KET____DOT__i_sync_gpio_input__DOT__serial_q) 
                                                  << 9U) 
                                                 | ((IData)(vlSelfRef.__PVT__gen_gpios__BRA__8__KET____DOT__i_sync_gpio_input__DOT__serial_q) 
                                                    << 8U)))) 
                                          | (((((IData)(vlSelfRef.__PVT__gen_gpios__BRA__7__KET____DOT__i_sync_gpio_input__DOT__serial_q) 
                                                << 7U) 
                                               | ((IData)(vlSelfRef.__PVT__gen_gpios__BRA__6__KET____DOT__i_sync_gpio_input__DOT__serial_q) 
                                                  << 6U)) 
                                              | (((IData)(vlSelfRef.__PVT__gen_gpios__BRA__5__KET____DOT__i_sync_gpio_input__DOT__serial_q) 
                                                  << 5U) 
                                                 | ((IData)(vlSelfRef.__PVT__gen_gpios__BRA__4__KET____DOT__i_sync_gpio_input__DOT__serial_q) 
                                                    << 4U))) 
                                             | ((((IData)(vlSelfRef.__PVT__gen_gpios__BRA__3__KET____DOT__i_sync_gpio_input__DOT__serial_q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.__PVT__gen_gpios__BRA__2__KET____DOT__i_sync_gpio_input__DOT__serial_q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.__PVT__gen_gpios__BRA__1__KET____DOT__i_sync_gpio_input__DOT__serial_q) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.__PVT__gen_gpios__BRA__0__KET____DOT__i_sync_gpio_input__DOT__serial_q))))));
    vlSelfRef.__PVT__s_hw2reg[0xbU] = vlSelfRef.__PVT__gpio_in_sync_o;
}

VL_INLINE_OPT void Vtestharness_gpio__Tz2_TBz3___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i__2(Vtestharness_gpio__Tz2_TBz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_gpio__Tz2_TBz3___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i__2\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vdly__gen_gpios__BRA__0__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q;
    __Vdly__gen_gpios__BRA__0__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q = 0;
    // Body
    __Vdly__gen_gpios__BRA__0__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q 
        = vlSelfRef.__PVT__gen_gpios__BRA__0__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q;
    __Vdly__gen_gpios__BRA__0__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q 
        = ((IData)(vlSelfRef.rst_ni) ? (2U & ((IData)(vlSelfRef.__PVT__gen_gpios__BRA__0__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q) 
                                              << 1U))
            : 0U);
    vlSelfRef.__PVT__gen_gpios__BRA__0__KET____DOT__i_sync_gpio_input__DOT__serial_q 
        = ((IData)(vlSelfRef.rst_ni) && (1U & ((IData)(vlSelfRef.__PVT__gen_gpios__BRA__0__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q) 
                                               >> 1U)));
    vlSelfRef.__PVT__gen_gpios__BRA__0__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q 
        = __Vdly__gen_gpios__BRA__0__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q;
}

VL_INLINE_OPT void Vtestharness_gpio__Tz2_TBz3___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i__3(Vtestharness_gpio__Tz2_TBz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_gpio__Tz2_TBz3___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i__3\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vdly__gen_gpios__BRA__1__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q;
    __Vdly__gen_gpios__BRA__1__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q = 0;
    // Body
    __Vdly__gen_gpios__BRA__1__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q 
        = vlSelfRef.__PVT__gen_gpios__BRA__1__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q;
    __Vdly__gen_gpios__BRA__1__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q 
        = ((IData)(vlSelfRef.rst_ni) ? (2U & ((IData)(vlSelfRef.__PVT__gen_gpios__BRA__1__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q) 
                                              << 1U))
            : 0U);
    vlSelfRef.__PVT__gen_gpios__BRA__1__KET____DOT__i_sync_gpio_input__DOT__serial_q 
        = ((IData)(vlSelfRef.rst_ni) && (1U & ((IData)(vlSelfRef.__PVT__gen_gpios__BRA__1__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q) 
                                               >> 1U)));
    vlSelfRef.__PVT__gen_gpios__BRA__1__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q 
        = __Vdly__gen_gpios__BRA__1__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q;
}

VL_INLINE_OPT void Vtestharness_gpio__Tz2_TBz3___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i__4(Vtestharness_gpio__Tz2_TBz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_gpio__Tz2_TBz3___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i__4\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vdly__gen_gpios__BRA__2__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q;
    __Vdly__gen_gpios__BRA__2__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q = 0;
    // Body
    __Vdly__gen_gpios__BRA__2__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q 
        = vlSelfRef.__PVT__gen_gpios__BRA__2__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q;
    __Vdly__gen_gpios__BRA__2__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q 
        = ((IData)(vlSelfRef.rst_ni) ? (2U & ((IData)(vlSelfRef.__PVT__gen_gpios__BRA__2__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q) 
                                              << 1U))
            : 0U);
    vlSelfRef.__PVT__gen_gpios__BRA__2__KET____DOT__i_sync_gpio_input__DOT__serial_q 
        = ((IData)(vlSelfRef.rst_ni) && (1U & ((IData)(vlSelfRef.__PVT__gen_gpios__BRA__2__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q) 
                                               >> 1U)));
    vlSelfRef.__PVT__gen_gpios__BRA__2__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q 
        = __Vdly__gen_gpios__BRA__2__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q;
}

VL_INLINE_OPT void Vtestharness_gpio__Tz2_TBz3___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i__5(Vtestharness_gpio__Tz2_TBz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_gpio__Tz2_TBz3___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i__5\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vdly__gen_gpios__BRA__3__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q;
    __Vdly__gen_gpios__BRA__3__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q = 0;
    // Body
    __Vdly__gen_gpios__BRA__3__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q 
        = vlSelfRef.__PVT__gen_gpios__BRA__3__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q;
    __Vdly__gen_gpios__BRA__3__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q 
        = ((IData)(vlSelfRef.rst_ni) ? (2U & ((IData)(vlSelfRef.__PVT__gen_gpios__BRA__3__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q) 
                                              << 1U))
            : 0U);
    vlSelfRef.__PVT__gen_gpios__BRA__3__KET____DOT__i_sync_gpio_input__DOT__serial_q 
        = ((IData)(vlSelfRef.rst_ni) && (1U & ((IData)(vlSelfRef.__PVT__gen_gpios__BRA__3__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q) 
                                               >> 1U)));
    vlSelfRef.__PVT__gen_gpios__BRA__3__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q 
        = __Vdly__gen_gpios__BRA__3__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q;
}

VL_INLINE_OPT void Vtestharness_gpio__Tz2_TBz3___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i__6(Vtestharness_gpio__Tz2_TBz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_gpio__Tz2_TBz3___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i__6\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vdly__gen_gpios__BRA__4__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q;
    __Vdly__gen_gpios__BRA__4__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q = 0;
    // Body
    __Vdly__gen_gpios__BRA__4__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q 
        = vlSelfRef.__PVT__gen_gpios__BRA__4__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q;
    __Vdly__gen_gpios__BRA__4__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q 
        = ((IData)(vlSelfRef.rst_ni) ? (2U & ((IData)(vlSelfRef.__PVT__gen_gpios__BRA__4__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q) 
                                              << 1U))
            : 0U);
    vlSelfRef.__PVT__gen_gpios__BRA__4__KET____DOT__i_sync_gpio_input__DOT__serial_q 
        = ((IData)(vlSelfRef.rst_ni) && (1U & ((IData)(vlSelfRef.__PVT__gen_gpios__BRA__4__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q) 
                                               >> 1U)));
    vlSelfRef.__PVT__gen_gpios__BRA__4__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q 
        = __Vdly__gen_gpios__BRA__4__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q;
}

VL_INLINE_OPT void Vtestharness_gpio__Tz2_TBz3___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i__7(Vtestharness_gpio__Tz2_TBz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_gpio__Tz2_TBz3___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i__7\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vdly__gen_gpios__BRA__5__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q;
    __Vdly__gen_gpios__BRA__5__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q = 0;
    // Body
    __Vdly__gen_gpios__BRA__5__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q 
        = vlSelfRef.__PVT__gen_gpios__BRA__5__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q;
    __Vdly__gen_gpios__BRA__5__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q 
        = ((IData)(vlSelfRef.rst_ni) ? (2U & ((IData)(vlSelfRef.__PVT__gen_gpios__BRA__5__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q) 
                                              << 1U))
            : 0U);
    vlSelfRef.__PVT__gen_gpios__BRA__5__KET____DOT__i_sync_gpio_input__DOT__serial_q 
        = ((IData)(vlSelfRef.rst_ni) && (1U & ((IData)(vlSelfRef.__PVT__gen_gpios__BRA__5__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q) 
                                               >> 1U)));
    vlSelfRef.__PVT__gen_gpios__BRA__5__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q 
        = __Vdly__gen_gpios__BRA__5__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q;
}

VL_INLINE_OPT void Vtestharness_gpio__Tz2_TBz3___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i__8(Vtestharness_gpio__Tz2_TBz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_gpio__Tz2_TBz3___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i__8\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vdly__gen_gpios__BRA__6__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q;
    __Vdly__gen_gpios__BRA__6__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q = 0;
    // Body
    __Vdly__gen_gpios__BRA__6__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q 
        = vlSelfRef.__PVT__gen_gpios__BRA__6__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q;
    __Vdly__gen_gpios__BRA__6__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q 
        = ((IData)(vlSelfRef.rst_ni) ? (2U & ((IData)(vlSelfRef.__PVT__gen_gpios__BRA__6__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q) 
                                              << 1U))
            : 0U);
    vlSelfRef.__PVT__gen_gpios__BRA__6__KET____DOT__i_sync_gpio_input__DOT__serial_q 
        = ((IData)(vlSelfRef.rst_ni) && (1U & ((IData)(vlSelfRef.__PVT__gen_gpios__BRA__6__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q) 
                                               >> 1U)));
    vlSelfRef.__PVT__gen_gpios__BRA__6__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q 
        = __Vdly__gen_gpios__BRA__6__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q;
}

VL_INLINE_OPT void Vtestharness_gpio__Tz2_TBz3___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i__9(Vtestharness_gpio__Tz2_TBz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_gpio__Tz2_TBz3___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i__9\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vdly__gen_gpios__BRA__7__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q;
    __Vdly__gen_gpios__BRA__7__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q = 0;
    // Body
    __Vdly__gen_gpios__BRA__7__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q 
        = vlSelfRef.__PVT__gen_gpios__BRA__7__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q;
    __Vdly__gen_gpios__BRA__7__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q 
        = ((IData)(vlSelfRef.rst_ni) ? (2U & ((IData)(vlSelfRef.__PVT__gen_gpios__BRA__7__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q) 
                                              << 1U))
            : 0U);
    vlSelfRef.__PVT__gen_gpios__BRA__7__KET____DOT__i_sync_gpio_input__DOT__serial_q 
        = ((IData)(vlSelfRef.rst_ni) && (1U & ((IData)(vlSelfRef.__PVT__gen_gpios__BRA__7__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q) 
                                               >> 1U)));
    vlSelfRef.__PVT__gen_gpios__BRA__7__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q 
        = __Vdly__gen_gpios__BRA__7__KET____DOT__i_sync_gpio_input__DOT__i_sync__DOT__reg_q;
}

VL_INLINE_OPT void Vtestharness_gpio__Tz2_TBz3___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i__0(Vtestharness_gpio__Tz2_TBz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_gpio__Tz2_TBz3___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.clk_i)))) {
        vlSelfRef.__PVT__gen_gpios__BRA__0__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en 
            = ((IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_en_gpio_en_0__q) 
               & (0U == (IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_mode_0_mode_0__q)));
        vlSelfRef.__PVT__gen_gpios__BRA__1__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en 
            = ((IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_en_gpio_en_1__q) 
               & (0U == (IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_mode_0_mode_1__q)));
        vlSelfRef.__PVT__gen_gpios__BRA__2__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en 
            = ((IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_en_gpio_en_2__q) 
               & (0U == (IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_mode_0_mode_2__q)));
        vlSelfRef.__PVT__gen_gpios__BRA__3__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en 
            = ((IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_en_gpio_en_3__q) 
               & (0U == (IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_mode_0_mode_3__q)));
        vlSelfRef.__PVT__gen_gpios__BRA__4__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en 
            = ((IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_en_gpio_en_4__q) 
               & (0U == (IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_mode_0_mode_4__q)));
        vlSelfRef.__PVT__gen_gpios__BRA__5__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en 
            = ((IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_en_gpio_en_5__q) 
               & (0U == (IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_mode_0_mode_5__q)));
        vlSelfRef.__PVT__gen_gpios__BRA__6__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en 
            = ((IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_en_gpio_en_6__q) 
               & (0U == (IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_mode_0_mode_6__q)));
        vlSelfRef.__PVT__gen_gpios__BRA__7__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en 
            = ((IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_en_gpio_en_7__q) 
               & (0U == (IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_mode_0_mode_7__q)));
        vlSelfRef.__PVT__gen_gpios__BRA__8__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en 
            = ((IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_en_gpio_en_8__q) 
               & (0U == (IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_mode_0_mode_8__q)));
        vlSelfRef.__PVT__gen_gpios__BRA__9__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en 
            = ((IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_en_gpio_en_9__q) 
               & (0U == (IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_mode_0_mode_9__q)));
        vlSelfRef.__PVT__gen_gpios__BRA__10__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en 
            = ((IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_en_gpio_en_10__q) 
               & (0U == (IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_mode_0_mode_10__q)));
        vlSelfRef.__PVT__gen_gpios__BRA__11__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en 
            = ((IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_en_gpio_en_11__q) 
               & (0U == (IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_mode_0_mode_11__q)));
        vlSelfRef.__PVT__gen_gpios__BRA__12__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en 
            = ((IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_en_gpio_en_12__q) 
               & (0U == (IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_mode_0_mode_12__q)));
        vlSelfRef.__PVT__gen_gpios__BRA__13__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en 
            = ((IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_en_gpio_en_13__q) 
               & (0U == (IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_mode_0_mode_13__q)));
        vlSelfRef.__PVT__gen_gpios__BRA__14__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en 
            = ((IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_en_gpio_en_14__q) 
               & (0U == (IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_mode_0_mode_14__q)));
        vlSelfRef.__PVT__gen_gpios__BRA__16__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en 
            = ((IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_en_gpio_en_16__q) 
               & (0U == (IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_mode_1_mode_16__q)));
        vlSelfRef.__PVT__gen_gpios__BRA__18__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en 
            = ((IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_en_gpio_en_18__q) 
               & (0U == (IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_mode_1_mode_18__q)));
        vlSelfRef.__PVT__gen_gpios__BRA__19__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en 
            = ((IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_en_gpio_en_19__q) 
               & (0U == (IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_mode_1_mode_19__q)));
        vlSelfRef.__PVT__gen_gpios__BRA__20__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en 
            = ((IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_en_gpio_en_20__q) 
               & (0U == (IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_mode_1_mode_20__q)));
        vlSelfRef.__PVT__gen_gpios__BRA__21__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en 
            = ((IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_en_gpio_en_21__q) 
               & (0U == (IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_mode_1_mode_21__q)));
        vlSelfRef.__PVT__gen_gpios__BRA__22__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en 
            = ((IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_en_gpio_en_22__q) 
               & (0U == (IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_mode_1_mode_22__q)));
        vlSelfRef.__PVT__gen_gpios__BRA__23__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en 
            = ((IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_en_gpio_en_23__q) 
               & (0U == (IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_mode_1_mode_23__q)));
        vlSelfRef.__PVT__gen_gpios__BRA__24__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en 
            = ((IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_en_gpio_en_24__q) 
               & (0U == (IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_mode_1_mode_24__q)));
        vlSelfRef.__PVT__gen_gpios__BRA__25__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en 
            = ((IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_en_gpio_en_25__q) 
               & (0U == (IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_mode_1_mode_25__q)));
        vlSelfRef.__PVT__gen_gpios__BRA__15__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en 
            = ((IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_en_gpio_en_15__q) 
               & (0U == (IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_mode_0_mode_15__q)));
        vlSelfRef.__PVT__gen_gpios__BRA__26__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en 
            = ((IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_en_gpio_en_26__q) 
               & (0U == (IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_mode_1_mode_26__q)));
        vlSelfRef.__PVT__gen_gpios__BRA__27__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en 
            = ((IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_en_gpio_en_27__q) 
               & (0U == (IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_mode_1_mode_27__q)));
        vlSelfRef.__PVT__gen_gpios__BRA__28__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en 
            = ((IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_en_gpio_en_28__q) 
               & (0U == (IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_mode_1_mode_28__q)));
        vlSelfRef.__PVT__gen_gpios__BRA__29__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en 
            = ((IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_en_gpio_en_29__q) 
               & (0U == (IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_mode_1_mode_29__q)));
        vlSelfRef.__PVT__gen_gpios__BRA__31__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en 
            = ((IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_en_gpio_en_31__q) 
               & (0U == (IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_mode_1_mode_31__q)));
        vlSelfRef.__PVT__gen_gpios__BRA__17__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en 
            = ((IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_en_gpio_en_17__q) 
               & (0U == (IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_mode_1_mode_17__q)));
        vlSelfRef.__PVT__gen_gpios__BRA__30__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en 
            = ((IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_en_gpio_en_30__q) 
               & (0U == (IData)(vlSelfRef.i_reg_file__DOT____Vcellout__u_gpio_mode_1_mode_30__q)));
    }
    vlSelfRef.__PVT__gen_gpios__BRA__0__KET____DOT__i_sync_gpio_input__DOT__clk 
        = ((IData)(vlSelfRef.clk_i) & (IData)(vlSelfRef.__PVT__gen_gpios__BRA__0__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en));
    vlSelfRef.__PVT__gen_gpios__BRA__1__KET____DOT__i_sync_gpio_input__DOT__clk 
        = ((IData)(vlSelfRef.clk_i) & (IData)(vlSelfRef.__PVT__gen_gpios__BRA__1__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en));
    vlSelfRef.__PVT__gen_gpios__BRA__2__KET____DOT__i_sync_gpio_input__DOT__clk 
        = ((IData)(vlSelfRef.clk_i) & (IData)(vlSelfRef.__PVT__gen_gpios__BRA__2__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en));
    vlSelfRef.__PVT__gen_gpios__BRA__3__KET____DOT__i_sync_gpio_input__DOT__clk 
        = ((IData)(vlSelfRef.clk_i) & (IData)(vlSelfRef.__PVT__gen_gpios__BRA__3__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en));
    vlSelfRef.__PVT__gen_gpios__BRA__4__KET____DOT__i_sync_gpio_input__DOT__clk 
        = ((IData)(vlSelfRef.clk_i) & (IData)(vlSelfRef.__PVT__gen_gpios__BRA__4__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en));
    vlSelfRef.__PVT__gen_gpios__BRA__5__KET____DOT__i_sync_gpio_input__DOT__clk 
        = ((IData)(vlSelfRef.clk_i) & (IData)(vlSelfRef.__PVT__gen_gpios__BRA__5__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en));
    vlSelfRef.__PVT__gen_gpios__BRA__6__KET____DOT__i_sync_gpio_input__DOT__clk 
        = ((IData)(vlSelfRef.clk_i) & (IData)(vlSelfRef.__PVT__gen_gpios__BRA__6__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en));
    vlSelfRef.__PVT__gen_gpios__BRA__7__KET____DOT__i_sync_gpio_input__DOT__clk 
        = ((IData)(vlSelfRef.clk_i) & (IData)(vlSelfRef.__PVT__gen_gpios__BRA__7__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en));
    vlSelfRef.__PVT__gen_gpios__BRA__8__KET____DOT__i_sync_gpio_input__DOT__clk 
        = ((IData)(vlSelfRef.clk_i) & (IData)(vlSelfRef.__PVT__gen_gpios__BRA__8__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en));
    vlSelfRef.__PVT__gen_gpios__BRA__9__KET____DOT__i_sync_gpio_input__DOT__clk 
        = ((IData)(vlSelfRef.clk_i) & (IData)(vlSelfRef.__PVT__gen_gpios__BRA__9__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en));
    vlSelfRef.__PVT__gen_gpios__BRA__10__KET____DOT__i_sync_gpio_input__DOT__clk 
        = ((IData)(vlSelfRef.clk_i) & (IData)(vlSelfRef.__PVT__gen_gpios__BRA__10__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en));
    vlSelfRef.__PVT__gen_gpios__BRA__11__KET____DOT__i_sync_gpio_input__DOT__clk 
        = ((IData)(vlSelfRef.clk_i) & (IData)(vlSelfRef.__PVT__gen_gpios__BRA__11__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en));
    vlSelfRef.__PVT__gen_gpios__BRA__12__KET____DOT__i_sync_gpio_input__DOT__clk 
        = ((IData)(vlSelfRef.clk_i) & (IData)(vlSelfRef.__PVT__gen_gpios__BRA__12__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en));
    vlSelfRef.__PVT__gen_gpios__BRA__13__KET____DOT__i_sync_gpio_input__DOT__clk 
        = ((IData)(vlSelfRef.clk_i) & (IData)(vlSelfRef.__PVT__gen_gpios__BRA__13__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en));
    vlSelfRef.__PVT__gen_gpios__BRA__14__KET____DOT__i_sync_gpio_input__DOT__clk 
        = ((IData)(vlSelfRef.clk_i) & (IData)(vlSelfRef.__PVT__gen_gpios__BRA__14__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en));
    vlSelfRef.__PVT__gen_gpios__BRA__16__KET____DOT__i_sync_gpio_input__DOT__clk 
        = ((IData)(vlSelfRef.clk_i) & (IData)(vlSelfRef.__PVT__gen_gpios__BRA__16__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en));
    vlSelfRef.__PVT__gen_gpios__BRA__18__KET____DOT__i_sync_gpio_input__DOT__clk 
        = ((IData)(vlSelfRef.clk_i) & (IData)(vlSelfRef.__PVT__gen_gpios__BRA__18__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en));
    vlSelfRef.__PVT__gen_gpios__BRA__19__KET____DOT__i_sync_gpio_input__DOT__clk 
        = ((IData)(vlSelfRef.clk_i) & (IData)(vlSelfRef.__PVT__gen_gpios__BRA__19__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en));
    vlSelfRef.__PVT__gen_gpios__BRA__20__KET____DOT__i_sync_gpio_input__DOT__clk 
        = ((IData)(vlSelfRef.clk_i) & (IData)(vlSelfRef.__PVT__gen_gpios__BRA__20__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en));
    vlSelfRef.__PVT__gen_gpios__BRA__21__KET____DOT__i_sync_gpio_input__DOT__clk 
        = ((IData)(vlSelfRef.clk_i) & (IData)(vlSelfRef.__PVT__gen_gpios__BRA__21__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en));
    vlSelfRef.__PVT__gen_gpios__BRA__22__KET____DOT__i_sync_gpio_input__DOT__clk 
        = ((IData)(vlSelfRef.clk_i) & (IData)(vlSelfRef.__PVT__gen_gpios__BRA__22__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en));
    vlSelfRef.__PVT__gen_gpios__BRA__23__KET____DOT__i_sync_gpio_input__DOT__clk 
        = ((IData)(vlSelfRef.clk_i) & (IData)(vlSelfRef.__PVT__gen_gpios__BRA__23__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en));
    vlSelfRef.__PVT__gen_gpios__BRA__24__KET____DOT__i_sync_gpio_input__DOT__clk 
        = ((IData)(vlSelfRef.clk_i) & (IData)(vlSelfRef.__PVT__gen_gpios__BRA__24__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en));
    vlSelfRef.__PVT__gen_gpios__BRA__25__KET____DOT__i_sync_gpio_input__DOT__clk 
        = ((IData)(vlSelfRef.clk_i) & (IData)(vlSelfRef.__PVT__gen_gpios__BRA__25__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en));
    vlSelfRef.__PVT__gen_gpios__BRA__15__KET____DOT__i_sync_gpio_input__DOT__clk 
        = ((IData)(vlSelfRef.clk_i) & (IData)(vlSelfRef.__PVT__gen_gpios__BRA__15__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en));
    vlSelfRef.__PVT__gen_gpios__BRA__26__KET____DOT__i_sync_gpio_input__DOT__clk 
        = ((IData)(vlSelfRef.clk_i) & (IData)(vlSelfRef.__PVT__gen_gpios__BRA__26__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en));
    vlSelfRef.__PVT__gen_gpios__BRA__27__KET____DOT__i_sync_gpio_input__DOT__clk 
        = ((IData)(vlSelfRef.clk_i) & (IData)(vlSelfRef.__PVT__gen_gpios__BRA__27__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en));
    vlSelfRef.__PVT__gen_gpios__BRA__28__KET____DOT__i_sync_gpio_input__DOT__clk 
        = ((IData)(vlSelfRef.clk_i) & (IData)(vlSelfRef.__PVT__gen_gpios__BRA__28__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en));
    vlSelfRef.__PVT__gen_gpios__BRA__29__KET____DOT__i_sync_gpio_input__DOT__clk 
        = ((IData)(vlSelfRef.clk_i) & (IData)(vlSelfRef.__PVT__gen_gpios__BRA__29__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en));
    vlSelfRef.__PVT__gen_gpios__BRA__31__KET____DOT__i_sync_gpio_input__DOT__clk 
        = ((IData)(vlSelfRef.clk_i) & (IData)(vlSelfRef.__PVT__gen_gpios__BRA__31__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en));
    vlSelfRef.__PVT__gen_gpios__BRA__17__KET____DOT__i_sync_gpio_input__DOT__clk 
        = ((IData)(vlSelfRef.clk_i) & (IData)(vlSelfRef.__PVT__gen_gpios__BRA__17__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en));
    vlSelfRef.__PVT__gen_gpios__BRA__30__KET____DOT__i_sync_gpio_input__DOT__clk 
        = ((IData)(vlSelfRef.clk_i) & (IData)(vlSelfRef.__PVT__gen_gpios__BRA__30__KET____DOT__i_sync_gpio_input__DOT__i_clk_gate__DOT__clk_en));
}
