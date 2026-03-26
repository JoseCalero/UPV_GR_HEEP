// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness__Syms.h"
#include "Vtestharness_rv_timer.h"

void Vtestharness_rv_timer___ctor_var_reset(Vtestharness_rv_timer* vlSelf);

Vtestharness_rv_timer::Vtestharness_rv_timer(Vtestharness__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtestharness_rv_timer___ctor_var_reset(this);
}

void Vtestharness_rv_timer::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtestharness_rv_timer::~Vtestharness_rv_timer() {
}
