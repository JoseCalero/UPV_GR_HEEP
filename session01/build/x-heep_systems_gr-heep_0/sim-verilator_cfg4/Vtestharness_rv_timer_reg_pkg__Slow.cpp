// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness__Syms.h"
#include "Vtestharness_rv_timer_reg_pkg.h"

// Parameter definitions for Vtestharness_rv_timer_reg_pkg
constexpr VlUnpacked<CData/*3:0*/, 17> Vtestharness_rv_timer_reg_pkg::__PVT__RV_TIMER_PERMIT;


void Vtestharness_rv_timer_reg_pkg___ctor_var_reset(Vtestharness_rv_timer_reg_pkg* vlSelf);

Vtestharness_rv_timer_reg_pkg::Vtestharness_rv_timer_reg_pkg(Vtestharness__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtestharness_rv_timer_reg_pkg___ctor_var_reset(this);
}

void Vtestharness_rv_timer_reg_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtestharness_rv_timer_reg_pkg::~Vtestharness_rv_timer_reg_pkg() {
}
