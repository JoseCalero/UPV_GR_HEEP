// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness__Syms.h"
#include "Vtestharness___024root.h"

void Vtestharness___024root___ctor_var_reset(Vtestharness___024root* vlSelf);

Vtestharness___024root::Vtestharness___024root(Vtestharness__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtestharness___024root___ctor_var_reset(this);
}

void Vtestharness___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtestharness___024root::~Vtestharness___024root() {
}
