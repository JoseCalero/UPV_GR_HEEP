// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness__Syms.h"
#include "Vtestharness_gpio__Tz2_TBz3.h"

void Vtestharness_gpio__Tz2_TBz3___ctor_var_reset(Vtestharness_gpio__Tz2_TBz3* vlSelf);

Vtestharness_gpio__Tz2_TBz3::Vtestharness_gpio__Tz2_TBz3(Vtestharness__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtestharness_gpio__Tz2_TBz3___ctor_var_reset(this);
}

void Vtestharness_gpio__Tz2_TBz3::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtestharness_gpio__Tz2_TBz3::~Vtestharness_gpio__Tz2_TBz3() {
}
