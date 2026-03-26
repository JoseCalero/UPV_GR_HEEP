// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness__Syms.h"
#include "Vtestharness_w25q128jw_controller_reg_pkg.h"

// Parameter definitions for Vtestharness_w25q128jw_controller_reg_pkg
constexpr VlUnpacked<CData/*3:0*/, 9> Vtestharness_w25q128jw_controller_reg_pkg::__PVT__W25Q128JW_CONTROLLER_PERMIT;


void Vtestharness_w25q128jw_controller_reg_pkg___ctor_var_reset(Vtestharness_w25q128jw_controller_reg_pkg* vlSelf);

Vtestharness_w25q128jw_controller_reg_pkg::Vtestharness_w25q128jw_controller_reg_pkg(Vtestharness__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtestharness_w25q128jw_controller_reg_pkg___ctor_var_reset(this);
}

void Vtestharness_w25q128jw_controller_reg_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtestharness_w25q128jw_controller_reg_pkg::~Vtestharness_w25q128jw_controller_reg_pkg() {
}
