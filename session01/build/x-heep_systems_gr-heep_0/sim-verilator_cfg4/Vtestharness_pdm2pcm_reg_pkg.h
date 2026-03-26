// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestharness.h for the primary calling header

#ifndef VERILATED_VTESTHARNESS_PDM2PCM_REG_PKG_H_
#define VERILATED_VTESTHARNESS_PDM2PCM_REG_PKG_H_  // guard

#include "verilated.h"


class Vtestharness__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestharness_pdm2pcm_reg_pkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtestharness__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr VlUnpacked<CData/*3:0*/, 6> __PVT__PDM2PCM_PERMIT = {{
        0x03U, 0x01U, 0x01U, 0x01U, 0x01U, 0x01U
    }};

    // CONSTRUCTORS
    Vtestharness_pdm2pcm_reg_pkg(Vtestharness__Syms* symsp, const char* v__name);
    ~Vtestharness_pdm2pcm_reg_pkg();
    VL_UNCOPYABLE(Vtestharness_pdm2pcm_reg_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
