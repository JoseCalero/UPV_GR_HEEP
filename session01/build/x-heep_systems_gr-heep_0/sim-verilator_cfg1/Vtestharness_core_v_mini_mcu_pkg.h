// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestharness.h for the primary calling header

#ifndef VERILATED_VTESTHARNESS_CORE_V_MINI_MCU_PKG_H_
#define VERILATED_VTESTHARNESS_CORE_V_MINI_MCU_PKG_H_  // guard

#include "verilated.h"


class Vtestharness__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestharness_core_v_mini_mcu_pkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtestharness__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr VlUnpacked<IData/*31:0*/, 1> __PVT__DMA_XBAR_MASTERS = {{
        0x00000001U
    }};

    // CONSTRUCTORS
    Vtestharness_core_v_mini_mcu_pkg(Vtestharness__Syms* symsp, const char* v__name);
    ~Vtestharness_core_v_mini_mcu_pkg();
    VL_UNCOPYABLE(Vtestharness_core_v_mini_mcu_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
