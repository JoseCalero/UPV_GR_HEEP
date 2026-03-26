// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness__Syms.h"
#include "Vtestharness_if_xif__X3.h"

void Vtestharness_if_xif__X3___ctor_var_reset(Vtestharness_if_xif__X3* vlSelf);

Vtestharness_if_xif__X3::Vtestharness_if_xif__X3(Vtestharness__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtestharness_if_xif__X3___ctor_var_reset(this);
}

void Vtestharness_if_xif__X3::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtestharness_if_xif__X3::~Vtestharness_if_xif__X3() {
}
