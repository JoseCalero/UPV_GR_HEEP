// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness__Syms.h"
#include "Vtestharness_spi_device_reg_pkg.h"

// Parameter definitions for Vtestharness_spi_device_reg_pkg
constexpr VlUnpacked<CData/*3:0*/, 22> Vtestharness_spi_device_reg_pkg::__PVT__SPI_DEVICE_PERMIT;


void Vtestharness_spi_device_reg_pkg___ctor_var_reset(Vtestharness_spi_device_reg_pkg* vlSelf);

Vtestharness_spi_device_reg_pkg::Vtestharness_spi_device_reg_pkg(Vtestharness__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtestharness_spi_device_reg_pkg___ctor_var_reset(this);
}

void Vtestharness_spi_device_reg_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtestharness_spi_device_reg_pkg::~Vtestharness_spi_device_reg_pkg() {
}
