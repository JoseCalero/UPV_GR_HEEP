// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness_if_xif__X3.h"

std::string VL_TO_STRING(const Vtestharness_if_xif__X3* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_if_xif__X3::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}
