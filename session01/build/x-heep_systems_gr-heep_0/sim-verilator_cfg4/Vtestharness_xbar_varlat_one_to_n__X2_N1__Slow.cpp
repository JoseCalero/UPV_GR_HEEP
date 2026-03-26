// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness__Syms.h"
#include "Vtestharness_xbar_varlat_one_to_n__X2_N1.h"

void Vtestharness_xbar_varlat_one_to_n__X2_N1___ctor_var_reset(Vtestharness_xbar_varlat_one_to_n__X2_N1* vlSelf);

Vtestharness_xbar_varlat_one_to_n__X2_N1::Vtestharness_xbar_varlat_one_to_n__X2_N1(Vtestharness__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtestharness_xbar_varlat_one_to_n__X2_N1___ctor_var_reset(this);
}

void Vtestharness_xbar_varlat_one_to_n__X2_N1::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtestharness_xbar_varlat_one_to_n__X2_N1::~Vtestharness_xbar_varlat_one_to_n__X2_N1() {
}
