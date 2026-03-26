// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness_sram_wrapper__N2000.h"

VL_ATTR_COLD void Vtestharness_sram_wrapper__N2000___eval_initial__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i(Vtestharness_sram_wrapper__N2000* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_sram_wrapper__N2000___eval_initial__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tc_ram_i__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i = 0U;
    while ((0x2000U > vlSelfRef.__PVT__tc_ram_i__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.__PVT__tc_ram_i__DOT__init_val[(0x1fffU 
                                                  & vlSelfRef.__PVT__tc_ram_i__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i)] 
            = vlSelfRef.tc_ram_i__DOT____Vxrand___0;
        vlSelfRef.__PVT__tc_ram_i__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.__PVT__tc_ram_i__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i);
    }
}

VL_ATTR_COLD void Vtestharness_sram_wrapper__N2000___ctor_var_reset(Vtestharness_sram_wrapper__N2000* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_sram_wrapper__N2000___ctor_var_reset\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3161515032326629241ull);
    vlSelf->req_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16841108072821397437ull);
    vlSelf->we_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 580956079526588133ull);
    vlSelf->addr_i = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 5910257723895866083ull);
    vlSelf->wdata_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5130823727116858121ull);
    vlSelf->be_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11504187847728164574ull);
    vlSelf->pwrgate_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15142901442193889661ull);
    vlSelf->pwrgate_ack_no = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17288392420359291226ull);
    vlSelf->set_retentive_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6219995083494778398ull);
    vlSelf->rdata_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8843381805826685208ull);
    vlSelf->tc_ram_i__DOT____Vxrand___0 = VL_SCOPED_RAND_RESET_ASSIGN_I(32, __VscopeHash, 1439513035702293039ull);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->tc_ram_i__DOT__sram[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15822345002879712139ull);
    }
    vlSelf->__PVT__tc_ram_i__DOT__r_addr_q = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 10801403874521659610ull);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->__PVT__tc_ram_i__DOT__init_val[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12113185216504760142ull);
    }
    vlSelf->__PVT__tc_ram_i__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17345483564578999393ull);
    vlSelf->__PVT__tc_ram_i__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->__PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk5__DOT__i = 0;
    vlSelf->__PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0;
    vlSelf->__PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk7__DOT__i = 0;
    vlSelf->__PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0;
    vlSelf->__PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->tc_ram_i__DOT____Vlvbound_hdd9b40f9__0 = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 9813059310425639444ull);
}
