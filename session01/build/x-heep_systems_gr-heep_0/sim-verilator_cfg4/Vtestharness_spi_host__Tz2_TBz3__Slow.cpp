// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness__Syms.h"
#include "Vtestharness_spi_host__Tz2_TBz3.h"

void Vtestharness_spi_host__Tz2_TBz3___ctor_var_reset(Vtestharness_spi_host__Tz2_TBz3* vlSelf);

Vtestharness_spi_host__Tz2_TBz3::Vtestharness_spi_host__Tz2_TBz3(Vtestharness__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtestharness_spi_host__Tz2_TBz3___ctor_var_reset(this);
}

void Vtestharness_spi_host__Tz2_TBz3::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtestharness_spi_host__Tz2_TBz3::~Vtestharness_spi_host__Tz2_TBz3() {
}
