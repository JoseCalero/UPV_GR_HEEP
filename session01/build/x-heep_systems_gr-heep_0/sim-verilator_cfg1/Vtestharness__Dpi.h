// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VTESTHARNESS__DPI_H_
#define VERILATED_VTESTHARNESS__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI EXPORTS
    // DPI export at ../../../tb/tb_util.svh:348:6
    extern void load_flash_hex(const char* firmware_file);
    // DPI export at ../../../hw/vendor/x-heep/hw/vendor/openhwgroup_cv32e20/rtl/cve2_if_stage.sv:189:28
    extern int simutil_get_scramble_key(svBitVecVal* val);
    // DPI export at ../../../hw/vendor/x-heep/hw/vendor/openhwgroup_cv32e20/rtl/cve2_if_stage.sv:192:28
    extern int simutil_get_scramble_nonce(svBitVecVal* nonce);
    // DPI export at ../../../tb/tb_util.svh:27:6
    extern void tb_getMemSize(int* mem_size);
    // DPI export at ../../../tb/tb_util.svh:38:6
    extern void tb_loadHEX(const char* file);
    // DPI export at ../../../tb/tb_util.svh:32:6
    extern void tb_readHEX(const char* file, svLogicVecVal* stimuli);
    // DPI export at ../../../tb/tb_util.svh:338:6
    extern void tb_set_exit_loop();
    // DPI export at ../../../tb/tb_util.svh:157:6
    extern void tb_writetoSram0(int addr, const svLogicVecVal* val3, const svLogicVecVal* val2, const svLogicVecVal* val1, const svLogicVecVal* val0);
    // DPI export at ../../../tb/tb_util.svh:175:6
    extern void tb_writetoSram1(int addr, const svLogicVecVal* val3, const svLogicVecVal* val2, const svLogicVecVal* val1, const svLogicVecVal* val0);
    // DPI export at ../../../tb/tb_util.svh:193:6
    extern void tb_writetoSram2(int addr, const svLogicVecVal* val3, const svLogicVecVal* val2, const svLogicVecVal* val1, const svLogicVecVal* val0);
    // DPI export at ../../../tb/tb_util.svh:211:6
    extern void tb_writetoSram3(int addr, const svLogicVecVal* val3, const svLogicVecVal* val2, const svLogicVecVal* val1, const svLogicVecVal* val0);
    // DPI export at ../../../tb/tb_util.svh:229:6
    extern void tb_writetoSram4(int addr, const svLogicVecVal* val3, const svLogicVecVal* val2, const svLogicVecVal* val1, const svLogicVecVal* val0);
    // DPI export at ../../../tb/tb_util.svh:247:6
    extern void tb_writetoSram5(int addr, const svLogicVecVal* val3, const svLogicVecVal* val2, const svLogicVecVal* val1, const svLogicVecVal* val0);
    // DPI export at ../../../tb/tb_util.svh:265:6
    extern void tb_writetoSram6(int addr, const svLogicVecVal* val3, const svLogicVecVal* val2, const svLogicVecVal* val1, const svLogicVecVal* val0);
    // DPI export at ../../../tb/tb_util.svh:283:6
    extern void tb_writetoSram7(int addr, const svLogicVecVal* val3, const svLogicVecVal* val2, const svLogicVecVal* val1, const svLogicVecVal* val0);
    // DPI export at ../../../tb/tb_util.svh:301:6
    extern void tb_writetoSram8(int addr, const svLogicVecVal* val3, const svLogicVecVal* val2, const svLogicVecVal* val1, const svLogicVecVal* val0);
    // DPI export at ../../../tb/tb_util.svh:319:6
    extern void tb_writetoSram9(int addr, const svLogicVecVal* val3, const svLogicVecVal* val2, const svLogicVecVal* val1, const svLogicVecVal* val0);

    // DPI IMPORTS
    // DPI import at ../../../hw/vendor/x-heep/hw/vendor/pulp_platform_pulpissimo/rtl/tb/SimJTAG.sv:10:29
    extern int jtag_tick(int port, svBit* jtag_TCK, svBit* jtag_TMS, svBit* jtag_TDI, svBit* jtag_TRSTn, svBit jtag_TDO);
    // DPI import at ../../../hw/vendor/x-heep/hw/vendor/lowrisc_opentitan/hw/dv/dpi/uartdpi/uartdpi.sv:32:9
    extern int uartdpi_can_read(void* ctx);
    // DPI import at ../../../hw/vendor/x-heep/hw/vendor/lowrisc_opentitan/hw/dv/dpi/uartdpi/uartdpi.sv:26:10
    extern void uartdpi_close(void* ctx);
    // DPI import at ../../../hw/vendor/x-heep/hw/vendor/lowrisc_opentitan/hw/dv/dpi/uartdpi/uartdpi.sv:23:13
    extern void* uartdpi_create(const char* name, const char* log_file_path);
    // DPI import at ../../../hw/vendor/x-heep/hw/vendor/lowrisc_opentitan/hw/dv/dpi/uartdpi/uartdpi.sv:29:10
    extern char uartdpi_read(void* ctx);
    // DPI import at ../../../hw/vendor/x-heep/hw/vendor/lowrisc_opentitan/hw/dv/dpi/uartdpi/uartdpi.sv:35:10
    extern void uartdpi_write(void* ctx, int data);

#ifdef __cplusplus
}
#endif

#endif  // guard
