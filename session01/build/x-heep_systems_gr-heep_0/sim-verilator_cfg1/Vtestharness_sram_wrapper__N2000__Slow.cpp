// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness__Syms.h"
#include "Vtestharness_sram_wrapper__N2000.h"

void Vtestharness_sram_wrapper__N2000___ctor_var_reset(Vtestharness_sram_wrapper__N2000* vlSelf);

Vtestharness_sram_wrapper__N2000::Vtestharness_sram_wrapper__N2000(Vtestharness__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtestharness_sram_wrapper__N2000___ctor_var_reset(this);
}

void Vtestharness_sram_wrapper__N2000::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtestharness_sram_wrapper__N2000::~Vtestharness_sram_wrapper__N2000() {
}
