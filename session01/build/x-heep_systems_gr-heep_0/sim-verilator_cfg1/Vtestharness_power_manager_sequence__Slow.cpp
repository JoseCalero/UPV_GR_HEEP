// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness__Syms.h"
#include "Vtestharness_power_manager_sequence.h"

void Vtestharness_power_manager_sequence___ctor_var_reset(Vtestharness_power_manager_sequence* vlSelf);

Vtestharness_power_manager_sequence::Vtestharness_power_manager_sequence(Vtestharness__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtestharness_power_manager_sequence___ctor_var_reset(this);
}

void Vtestharness_power_manager_sequence::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtestharness_power_manager_sequence::~Vtestharness_power_manager_sequence() {
}
