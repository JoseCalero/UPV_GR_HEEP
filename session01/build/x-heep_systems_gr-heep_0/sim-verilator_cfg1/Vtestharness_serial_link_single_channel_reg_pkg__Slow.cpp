// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness__Syms.h"
#include "Vtestharness_serial_link_single_channel_reg_pkg.h"

// Parameter definitions for Vtestharness_serial_link_single_channel_reg_pkg
constexpr VlUnpacked<CData/*3:0*/, 14> Vtestharness_serial_link_single_channel_reg_pkg::__PVT__SERIAL_LINK_SINGLE_CHANNEL_PERMIT;


void Vtestharness_serial_link_single_channel_reg_pkg___ctor_var_reset(Vtestharness_serial_link_single_channel_reg_pkg* vlSelf);

Vtestharness_serial_link_single_channel_reg_pkg::Vtestharness_serial_link_single_channel_reg_pkg(Vtestharness__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtestharness_serial_link_single_channel_reg_pkg___ctor_var_reset(this);
}

void Vtestharness_serial_link_single_channel_reg_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtestharness_serial_link_single_channel_reg_pkg::~Vtestharness_serial_link_single_channel_reg_pkg() {
}
