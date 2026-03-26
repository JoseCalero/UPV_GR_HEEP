// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestharness.h for the primary calling header

#ifndef VERILATED_VTESTHARNESS_IF_XIF__X3_H_
#define VERILATED_VTESTHARNESS_IF_XIF__X3_H_  // guard

#include "verilated.h"


class Vtestharness__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestharness_if_xif__X3 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__compressed_ready;
    CData/*0:0*/ issue_ready;
    CData/*0:0*/ __PVT__mem_valid;
    CData/*0:0*/ result_valid;
    SData/*8:0*/ issue_resp;
    QData/*32:0*/ __PVT__compressed_resp;
    VlWide<5>/*143:0*/ issue_req;
    VlWide<3>/*81:0*/ __PVT__mem_req;
    QData/*59:0*/ result;

    // INTERNAL VARIABLES
    Vtestharness__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestharness_if_xif__X3(Vtestharness__Syms* symsp, const char* v__name);
    ~Vtestharness_if_xif__X3();
    VL_UNCOPYABLE(Vtestharness_if_xif__X3);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vtestharness_if_xif__X3* obj);

#endif  // guard
