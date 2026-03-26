// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestharness.h for the primary calling header

#ifndef VERILATED_VTESTHARNESS_SERIAL_LINK_SINGLE_CHANNEL_REG_PKG_H_
#define VERILATED_VTESTHARNESS_SERIAL_LINK_SINGLE_CHANNEL_REG_PKG_H_  // guard

#include "verilated.h"


class Vtestharness__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestharness_serial_link_single_channel_reg_pkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtestharness__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr VlUnpacked<CData/*3:0*/, 14> __PVT__SERIAL_LINK_SINGLE_CHANNEL_PERMIT = {{
        0x03U, 0x01U, 0x03U, 0x03U, 0x03U, 0x01U, 0x01U, 0x01U,
        0x03U, 0x01U, 0x03U, 0x0fU, 0x01U, 0x01U
    }};

    // CONSTRUCTORS
    Vtestharness_serial_link_single_channel_reg_pkg(Vtestharness__Syms* symsp, const char* v__name);
    ~Vtestharness_serial_link_single_channel_reg_pkg();
    VL_UNCOPYABLE(Vtestharness_serial_link_single_channel_reg_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
