// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing declarations
#include "verilated_fst_c.h"


void Vtestharness___024root__traceDeclTypesSub0(VerilatedFst* tracep) {
    {
        const char* __VenumItemNames[]
        = {"PutFullData", "PutPartialData", "Get"};
        const char* __VenumItemValues[]
        = {"0", "1", "100"};
        tracep->declDTypeEnum(1, "tlul_pkg::tl_a_op_e", 3, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"InstrType", "DataType"};
        const char* __VenumItemValues[]
        = {"1", "10"};
        tracep->declDTypeEnum(2, "tlul_pkg::tl_type_e", 2, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"AccessAck", "AccessAckData"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(3, "tlul_pkg::tl_d_op_e", 2, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"DMA_READY", "DMA_STARTING", "DMA_RUNNING"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(4, "dma.__typeimpmod1", 3, 32, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"DMA_DATA_TYPE_WORD", "DMA_DATA_TYPE_HALF_WORD", 
                                "DMA_DATA_TYPE_BYTE", 
                                "DMA_DATA_TYPE_BYTE_"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(5, "dma_pkg::dma_data_type_t", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"PAD_IDLE", "TOP_PAD_EXEC", "LEFT_PAD_EXEC", 
                                "RIGHT_PAD_EXEC", "BOTTOM_PAD_EXEC", 
                                "TOP_PAD_DONE", "LEFT_PAD_DONE", 
                                "RIGHT_PAD_DONE", "BOTTOM_PAD_DONE"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000"};
        tracep->declDTypeEnum(6, "dma_processing_unit.__typeimpmod1", 9, 32, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"DMA_READ_UNIT_IDLE", "DMA_READ_UNIT_ON"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(7, "dma_read_addr_unit.__typeimpmod1", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"DMA_READ_UNIT_IDLE", "DMA_READ_UNIT_ON"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(8, "dma_read_unit.__typeimpmod1", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"OBI_DATA_REQ", "OBI_WAIT_GNT"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(9, "dma_pkg::dma_obi_state_type_t", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"WAIT_FOR_OUTSTANDING_IDLE", "WAIT_FOR_OUTSTANDING_WAIT", 
                                "WAIT_FOR_OUTSTANDING_COUNTER"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(10, "dma_pkg::dma_wait_for_state_type_t", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"DMA_WRITE_UNIT_IDLE", "DMA_WRITE_UNIT_ON"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(11, "dma_write_unit.__typeimpmod1", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"CONSUMER_REQUEST", "CONSUMER_WAIT_FOR_GNT"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(12, "obi_fifo.consumer_obi_req_fsm_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"PRODUCER_REQUEST", "PRODUCER_WAIT_FOR_VALID"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(13, "obi_fifo.producer_obi_req_fsm_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"RESET", "IDLE", "WAIT_SWITCH_OFF_COUNTER", 
                                "SWITCH_OFF", "WAIT_SWITCH_ON_COUNTER", 
                                "WAIT_ACK", "SWITCH_ON"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110"};
        tracep->declDTypeEnum(14, "power_manager_counter_sequence.sequence_fsm_state", 7, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"RESET", "IDLE", "WAIT_SWITCH_OFF_COUNTER", 
                                "SWITCH_OFF", "WAIT_SWITCH_ON_COUNTER", 
                                "WAIT_ACK", "SWITCH_ON"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110"};
        tracep->declDTypeEnum(15, "power_manager_counter_sequence.sequence_fsm_state", 7, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"RESET", "IDLE", "WAIT_SWITCH_ON", "WAIT_ACK", 
                                "SWITCH_ON"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100"};
        tracep->declDTypeEnum(16, "power_manager_sequence.sequence_fsm_state", 5, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "COUNT", "EXPIRE"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(17, "reg_to_counter.cnt_fsm_state", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "READ", "WRITE", "GIVE_VALID"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(18, "obi_to_picorv32.__typeimpmod1", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"TOP_IDLE", "TOP_READ", "TOP_FWAIT", "TOP_ERASE", 
                                "TOP_MODIFY", "TOP_WRITE", 
                                "TOP_DMA_INIT"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110"};
        tracep->declDTypeEnum(19, "w25q128jw_controller.top_state_e", 7, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"READ_IDLE", "READ_SET_DMA", "READ_SPI_CHECK_TX_FIFO", 
                                "READ_SPI_FILL_TX_FIFO", 
                                "READ_SPI_WAIT_READY_1", 
                                "READ_SPI_SEND_CMD_1", 
                                "READ_SPI_WAIT_READY_2", 
                                "READ_SPI_SEND_CMD_2", 
                                "READ_SPI_SEND_CMD_1_QUAD", 
                                "READ_SPI_QUAD_WAIT_READY_1", 
                                "READ_SPI_SEND_CMD_2_QUAD", 
                                "READ_SPI_QUAD_WAIT_READY_2", 
                                "READ_SPI_SEND_CMD_3_QUAD", 
                                "READ_SPI_QUAD_WAIT_READY_3", 
                                "READ_SPI_SEND_CMD_4_QUAD", 
                                "READ_SPI_QUAD_WAIT_READY_4", 
                                "READ_SPI_SEND_CMD_DUMMY_QUAD", 
                                "READ_SPI_QUAD_WAIT_READY_DUMMY", 
                                "READ_SPI_SEND_CMD_5_QUAD", 
                                "READ_TRANS"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000", "1001", 
                                "1010", "1011", "1100", 
                                "1101", "1110", "1111", 
                                "10000", "10001", "10010", 
                                "10011"};
        tracep->declDTypeEnum(20, "w25q128jw_controller.read_state_e", 20, 5, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ERASE_IDLE", "ERASE_WE_CHECK_TX_FIFO", 
                                "ERASE_WE_FILL_TX_FIFO", 
                                "ERASE_WE_WAIT_READY", 
                                "ERASE_WE_SEND_CMD", 
                                "ERASE_SE_CHECK_TX_FIFO", 
                                "ERASE_SE_FILL_TX_FIFO", 
                                "ERASE_SE_WAIT_READY", 
                                "ERASE_SE_SEND_CMD"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000"};
        tracep->declDTypeEnum(21, "w25q128jw_controller.erase_state_e", 9, 4, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"FWAIT_IDLE", "FWAIT_SET_RXWM_R", "FWAIT_SET_RXWM_W", 
                                "FWAIT_SPI_CHECK_TX_FIFO", 
                                "FWAIT_SPI_FILL_TX_FIFO", 
                                "FWAIT_SPI_WAIT_READY_1", 
                                "FWAIT_SPI_SEND_CMD_1", 
                                "FWAIT_SPI_WAIT_READY_2", 
                                "FWAIT_SPI_SEND_CMD_2", 
                                "FWAIT_WAIT_RXWM", 
                                "FWAIT_READ_FLASH_STATUS"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000", "1001", 
                                "1010"};
        tracep->declDTypeEnum(22, "w25q128jw_controller.fwait_state_e", 11, 4, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"MODIFY_IDLE", "MODIFY_DMA_REGS", "MODIFY_TRANS"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(23, "w25q128jw_controller.modify_state_e", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"WRITE_IDLE", "WRITE_WE_CHECK_TX_FIFO", 
                                "WRITE_WE_FILL_TX_FIFO", 
                                "WRITE_WE_WAIT_READY", 
                                "WRITE_WE_SEND_CMD", 
                                "WRITE_PP_CHECK_TX_FIFO", 
                                "WRITE_PP_FILL_TX_FIFO", 
                                "WRITE_PP_WAIT_READY", 
                                "WRITE_PP_SEND_CMD", 
                                "WRITE_DMA_CHECK_READY", 
                                "WRITE_DMA_REGS", "WRITE_TRANS", 
                                "WRITE_PP_WAIT_READY_2", 
                                "WRITE_PP_SEND_CMD_2"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000", "1001", 
                                "1010", "1011", "1100", 
                                "1101"};
        tracep->declDTypeEnum(24, "w25q128jw_controller.write_state_e", 14, 4, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"DMA_INIT_IDLE", "DMA_INIT_REGISTERS", "DMA_INIT_REDIRECT"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(25, "w25q128jw_controller.dma_init_state_e", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"RETURN_READ", "RETURN_MODIFY", "RETURN_WRITE"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(26, "w25q128jw_controller.dma_init_return_e", 3, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ALU_ADD", "ALU_SUB", "ALU_ADDU", "ALU_SUBU", 
                                "ALU_ADDR", "ALU_SUBR", 
                                "ALU_ADDUR", "ALU_SUBUR", 
                                "ALU_XOR", "ALU_OR", 
                                "ALU_AND", "ALU_SRA", 
                                "ALU_SRL", "ALU_ROR", 
                                "ALU_SLL", "ALU_BEXT", 
                                "ALU_BEXTU", "ALU_BINS", 
                                "ALU_BCLR", "ALU_BSET", 
                                "ALU_BREV", "ALU_FF1", 
                                "ALU_FL1", "ALU_CNT", 
                                "ALU_CLB", "ALU_EXTS", 
                                "ALU_EXT", "ALU_LTS", 
                                "ALU_LTU", "ALU_LES", 
                                "ALU_LEU", "ALU_GTS", 
                                "ALU_GTU", "ALU_GES", 
                                "ALU_GEU", "ALU_EQ", 
                                "ALU_NE", "ALU_SLTS", 
                                "ALU_SLTU", "ALU_SLETS", 
                                "ALU_SLETU", "ALU_ABS", 
                                "ALU_CLIP", "ALU_CLIPU", 
                                "ALU_INS", "ALU_MIN", 
                                "ALU_MINU", "ALU_MAX", 
                                "ALU_MAXU", "ALU_DIVU", 
                                "ALU_DIV", "ALU_REMU", 
                                "ALU_REM", "ALU_SHUF", 
                                "ALU_SHUF2", "ALU_PCKLO", 
                                "ALU_PCKHI"};
        const char* __VenumItemValues[]
        = {"11000", "11001", "11010", "11011", "11100", 
                                "11101", "11110", "11111", 
                                "101111", "101110", 
                                "10101", "100100", 
                                "100101", "100110", 
                                "100111", "101000", 
                                "101001", "101010", 
                                "101011", "101100", 
                                "1001001", "110110", 
                                "110111", "110100", 
                                "110101", "111110", 
                                "111111", "0", "1", 
                                "100", "101", "1000", 
                                "1001", "1010", "1011", 
                                "1100", "1101", "10", 
                                "11", "110", "111", 
                                "10100", "10110", "10111", 
                                "101101", "10000", 
                                "10001", "10010", "10011", 
                                "110000", "110001", 
                                "110010", "110011", 
                                "111010", "111011", 
                                "111000", "111001"};
        tracep->declDTypeEnum(27, "cv32e40p_pkg::alu_opcode_e", 57, 7, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"MUL_MAC32", "MUL_MSU32", "MUL_I", "MUL_IR", 
                                "MUL_DOT8", "MUL_DOT16", 
                                "MUL_H"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110"};
        tracep->declDTypeEnum(28, "cv32e40p_pkg::mul_opcode_e", 7, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"CSR_OP_READ", "CSR_OP_WRITE", "CSR_OP_SET", 
                                "CSR_OP_CLEAR"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(29, "cv32e40p_pkg::csr_opcode_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"CSR_USTATUS", "CSR_FFLAGS", "CSR_FRM", 
                                "CSR_FCSR", "CSR_UTVEC", 
                                "CSR_UEPC", "CSR_UCAUSE", 
                                "CSR_LPSTART0", "CSR_LPEND0", 
                                "CSR_LPCOUNT0", "CSR_LPSTART1", 
                                "CSR_LPEND1", "CSR_LPCOUNT1", 
                                "CSR_UHARTID", "CSR_PRIVLV", 
                                "CSR_ZFINX", "CSR_MSTATUS", 
                                "CSR_MISA", "CSR_MIE", 
                                "CSR_MTVEC", "CSR_MCOUNTEREN", 
                                "CSR_MCOUNTINHIBIT", 
                                "CSR_MHPMEVENT3", "CSR_MHPMEVENT4", 
                                "CSR_MHPMEVENT5", "CSR_MHPMEVENT6", 
                                "CSR_MHPMEVENT7", "CSR_MHPMEVENT8", 
                                "CSR_MHPMEVENT9", "CSR_MHPMEVENT10", 
                                "CSR_MHPMEVENT11", 
                                "CSR_MHPMEVENT12", 
                                "CSR_MHPMEVENT13", 
                                "CSR_MHPMEVENT14", 
                                "CSR_MHPMEVENT15", 
                                "CSR_MHPMEVENT16", 
                                "CSR_MHPMEVENT17", 
                                "CSR_MHPMEVENT18", 
                                "CSR_MHPMEVENT19", 
                                "CSR_MHPMEVENT20", 
                                "CSR_MHPMEVENT21", 
                                "CSR_MHPMEVENT22", 
                                "CSR_MHPMEVENT23", 
                                "CSR_MHPMEVENT24", 
                                "CSR_MHPMEVENT25", 
                                "CSR_MHPMEVENT26", 
                                "CSR_MHPMEVENT27", 
                                "CSR_MHPMEVENT28", 
                                "CSR_MHPMEVENT29", 
                                "CSR_MHPMEVENT30", 
                                "CSR_MHPMEVENT31", 
                                "CSR_MSCRATCH", "CSR_MEPC", 
                                "CSR_MCAUSE", "CSR_MTVAL", 
                                "CSR_MIP", "CSR_PMPCFG0", 
                                "CSR_PMPCFG1", "CSR_PMPCFG2", 
                                "CSR_PMPCFG3", "CSR_PMPADDR0", 
                                "CSR_PMPADDR1", "CSR_PMPADDR2", 
                                "CSR_PMPADDR3", "CSR_PMPADDR4", 
                                "CSR_PMPADDR5", "CSR_PMPADDR6", 
                                "CSR_PMPADDR7", "CSR_PMPADDR8", 
                                "CSR_PMPADDR9", "CSR_PMPADDR10", 
                                "CSR_PMPADDR11", "CSR_PMPADDR12", 
                                "CSR_PMPADDR13", "CSR_PMPADDR14", 
                                "CSR_PMPADDR15", "CSR_TSELECT", 
                                "CSR_TDATA1", "CSR_TDATA2", 
                                "CSR_TDATA3", "CSR_TINFO", 
                                "CSR_MCONTEXT", "CSR_SCONTEXT", 
                                "CSR_DCSR", "CSR_DPC", 
                                "CSR_DSCRATCH0", "CSR_DSCRATCH1", 
                                "CSR_MCYCLE", "CSR_MINSTRET", 
                                "CSR_MHPMCOUNTER3", 
                                "CSR_MHPMCOUNTER4", 
                                "CSR_MHPMCOUNTER5", 
                                "CSR_MHPMCOUNTER6", 
                                "CSR_MHPMCOUNTER7", 
                                "CSR_MHPMCOUNTER8", 
                                "CSR_MHPMCOUNTER9", 
                                "CSR_MHPMCOUNTER10", 
                                "CSR_MHPMCOUNTER11", 
                                "CSR_MHPMCOUNTER12", 
                                "CSR_MHPMCOUNTER13", 
                                "CSR_MHPMCOUNTER14", 
                                "CSR_MHPMCOUNTER15", 
                                "CSR_MHPMCOUNTER16", 
                                "CSR_MHPMCOUNTER17", 
                                "CSR_MHPMCOUNTER18", 
                                "CSR_MHPMCOUNTER19", 
                                "CSR_MHPMCOUNTER20", 
                                "CSR_MHPMCOUNTER21", 
                                "CSR_MHPMCOUNTER22", 
                                "CSR_MHPMCOUNTER23", 
                                "CSR_MHPMCOUNTER24", 
                                "CSR_MHPMCOUNTER25", 
                                "CSR_MHPMCOUNTER26", 
                                "CSR_MHPMCOUNTER27", 
                                "CSR_MHPMCOUNTER28", 
                                "CSR_MHPMCOUNTER29", 
                                "CSR_MHPMCOUNTER30", 
                                "CSR_MHPMCOUNTER31", 
                                "CSR_MCYCLEH", "CSR_MINSTRETH", 
                                "CSR_MHPMCOUNTER3H", 
                                "CSR_MHPMCOUNTER4H", 
                                "CSR_MHPMCOUNTER5H", 
                                "CSR_MHPMCOUNTER6H", 
                                "CSR_MHPMCOUNTER7H", 
                                "CSR_MHPMCOUNTER8H", 
                                "CSR_MHPMCOUNTER9H", 
                                "CSR_MHPMCOUNTER10H", 
                                "CSR_MHPMCOUNTER11H", 
                                "CSR_MHPMCOUNTER12H", 
                                "CSR_MHPMCOUNTER13H", 
                                "CSR_MHPMCOUNTER14H", 
                                "CSR_MHPMCOUNTER15H", 
                                "CSR_MHPMCOUNTER16H", 
                                "CSR_MHPMCOUNTER17H", 
                                "CSR_MHPMCOUNTER18H", 
                                "CSR_MHPMCOUNTER19H", 
                                "CSR_MHPMCOUNTER20H", 
                                "CSR_MHPMCOUNTER21H", 
                                "CSR_MHPMCOUNTER22H", 
                                "CSR_MHPMCOUNTER23H", 
                                "CSR_MHPMCOUNTER24H", 
                                "CSR_MHPMCOUNTER25H", 
                                "CSR_MHPMCOUNTER26H", 
                                "CSR_MHPMCOUNTER27H", 
                                "CSR_MHPMCOUNTER28H", 
                                "CSR_MHPMCOUNTER29H", 
                                "CSR_MHPMCOUNTER30H", 
                                "CSR_MHPMCOUNTER31H", 
                                "CSR_CYCLE", "CSR_INSTRET", 
                                "CSR_HPMCOUNTER3", 
                                "CSR_HPMCOUNTER4", 
                                "CSR_HPMCOUNTER5", 
                                "CSR_HPMCOUNTER6", 
                                "CSR_HPMCOUNTER7", 
                                "CSR_HPMCOUNTER8", 
                                "CSR_HPMCOUNTER9", 
                                "CSR_HPMCOUNTER10", 
                                "CSR_HPMCOUNTER11", 
                                "CSR_HPMCOUNTER12", 
                                "CSR_HPMCOUNTER13", 
                                "CSR_HPMCOUNTER14", 
                                "CSR_HPMCOUNTER15", 
                                "CSR_HPMCOUNTER16", 
                                "CSR_HPMCOUNTER17", 
                                "CSR_HPMCOUNTER18", 
                                "CSR_HPMCOUNTER19", 
                                "CSR_HPMCOUNTER20", 
                                "CSR_HPMCOUNTER21", 
                                "CSR_HPMCOUNTER22", 
                                "CSR_HPMCOUNTER23", 
                                "CSR_HPMCOUNTER24", 
                                "CSR_HPMCOUNTER25", 
                                "CSR_HPMCOUNTER26", 
                                "CSR_HPMCOUNTER27", 
                                "CSR_HPMCOUNTER28", 
                                "CSR_HPMCOUNTER29", 
                                "CSR_HPMCOUNTER30", 
                                "CSR_HPMCOUNTER31", 
                                "CSR_CYCLEH", "CSR_INSTRETH", 
                                "CSR_HPMCOUNTER3H", 
                                "CSR_HPMCOUNTER4H", 
                                "CSR_HPMCOUNTER5H", 
                                "CSR_HPMCOUNTER6H", 
                                "CSR_HPMCOUNTER7H", 
                                "CSR_HPMCOUNTER8H", 
                                "CSR_HPMCOUNTER9H", 
                                "CSR_HPMCOUNTER10H", 
                                "CSR_HPMCOUNTER11H", 
                                "CSR_HPMCOUNTER12H", 
                                "CSR_HPMCOUNTER13H", 
                                "CSR_HPMCOUNTER14H", 
                                "CSR_HPMCOUNTER15H", 
                                "CSR_HPMCOUNTER16H", 
                                "CSR_HPMCOUNTER17H", 
                                "CSR_HPMCOUNTER18H", 
                                "CSR_HPMCOUNTER19H", 
                                "CSR_HPMCOUNTER20H", 
                                "CSR_HPMCOUNTER21H", 
                                "CSR_HPMCOUNTER22H", 
                                "CSR_HPMCOUNTER23H", 
                                "CSR_HPMCOUNTER24H", 
                                "CSR_HPMCOUNTER25H", 
                                "CSR_HPMCOUNTER26H", 
                                "CSR_HPMCOUNTER27H", 
                                "CSR_HPMCOUNTER28H", 
                                "CSR_HPMCOUNTER29H", 
                                "CSR_HPMCOUNTER30H", 
                                "CSR_HPMCOUNTER31H", 
                                "CSR_MVENDORID", "CSR_MARCHID", 
                                "CSR_MIMPID", "CSR_MHARTID"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "101", "1000001", 
                                "1000010", "110011000000", 
                                "110011000001", "110011000010", 
                                "110011000100", "110011000101", 
                                "110011000110", "110011010000", 
                                "110011010001", "110011010010", 
                                "1100000000", "1100000001", 
                                "1100000100", "1100000101", 
                                "1100000110", "1100100000", 
                                "1100100011", "1100100100", 
                                "1100100101", "1100100110", 
                                "1100100111", "1100101000", 
                                "1100101001", "1100101010", 
                                "1100101011", "1100101100", 
                                "1100101101", "1100101110", 
                                "1100101111", "1100110000", 
                                "1100110001", "1100110010", 
                                "1100110011", "1100110100", 
                                "1100110101", "1100110110", 
                                "1100110111", "1100111000", 
                                "1100111001", "1100111010", 
                                "1100111011", "1100111100", 
                                "1100111101", "1100111110", 
                                "1100111111", "1101000000", 
                                "1101000001", "1101000010", 
                                "1101000011", "1101000100", 
                                "1110100000", "1110100001", 
                                "1110100010", "1110100011", 
                                "1110110000", "1110110001", 
                                "1110110010", "1110110011", 
                                "1110110100", "1110110101", 
                                "1110110110", "1110110111", 
                                "1110111000", "1110111001", 
                                "1110111010", "1110111011", 
                                "1110111100", "1110111101", 
                                "1110111110", "1110111111", 
                                "11110100000", "11110100001", 
                                "11110100010", "11110100011", 
                                "11110100100", "11110101000", 
                                "11110101010", "11110110000", 
                                "11110110001", "11110110010", 
                                "11110110011", "101100000000", 
                                "101100000010", "101100000011", 
                                "101100000100", "101100000101", 
                                "101100000110", "101100000111", 
                                "101100001000", "101100001001", 
                                "101100001010", "101100001011", 
                                "101100001100", "101100001101", 
                                "101100001110", "101100001111", 
                                "101100010000", "101100010001", 
                                "101100010010", "101100010011", 
                                "101100010100", "101100010101", 
                                "101100010110", "101100010111", 
                                "101100011000", "101100011001", 
                                "101100011010", "101100011011", 
                                "101100011100", "101100011101", 
                                "101100011110", "101100011111", 
                                "101110000000", "101110000010", 
                                "101110000011", "101110000100", 
                                "101110000101", "101110000110", 
                                "101110000111", "101110001000", 
                                "101110001001", "101110001010", 
                                "101110001011", "101110001100", 
                                "101110001101", "101110001110", 
                                "101110001111", "101110010000", 
                                "101110010001", "101110010010", 
                                "101110010011", "101110010100", 
                                "101110010101", "101110010110", 
                                "101110010111", "101110011000", 
                                "101110011001", "101110011010", 
                                "101110011011", "101110011100", 
                                "101110011101", "101110011110", 
                                "101110011111", "110000000000", 
                                "110000000010", "110000000011", 
                                "110000000100", "110000000101", 
                                "110000000110", "110000000111", 
                                "110000001000", "110000001001", 
                                "110000001010", "110000001011", 
                                "110000001100", "110000001101", 
                                "110000001110", "110000001111", 
                                "110000010000", "110000010001", 
                                "110000010010", "110000010011", 
                                "110000010100", "110000010101", 
                                "110000010110", "110000010111", 
                                "110000011000", "110000011001", 
                                "110000011010", "110000011011", 
                                "110000011100", "110000011101", 
                                "110000011110", "110000011111", 
                                "110010000000", "110010000010", 
                                "110010000011", "110010000100", 
                                "110010000101", "110010000110", 
                                "110010000111", "110010001000", 
                                "110010001001", "110010001010", 
                                "110010001011", "110010001100", 
                                "110010001101", "110010001110", 
                                "110010001111", "110010010000", 
                                "110010010001", "110010010010", 
                                "110010010011", "110010010100", 
                                "110010010101", "110010010110", 
                                "110010010111", "110010011000", 
                                "110010011001", "110010011010", 
                                "110010011011", "110010011100", 
                                "110010011101", "110010011110", 
                                "110010011111", "111100010001", 
                                "111100010010", "111100010011", 
                                "111100010100"};
        tracep->declDTypeEnum(30, "cv32e40p_pkg::csr_num_e", 215, 12, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"PRIV_LVL_M", "PRIV_LVL_H", "PRIV_LVL_S", 
                                "PRIV_LVL_U"};
        const char* __VenumItemValues[]
        = {"11", "10", "1", "0"};
        tracep->declDTypeEnum(31, "cv32e40p_pkg::PrivLvl_t", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"FS_OFF", "FS_INITIAL", "FS_CLEAN", "FS_DIRTY"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(32, "cv32e40p_pkg::FS_t", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "DIVIDE", "FINISH"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(33, "cv32e40p_alu_div.__typeimpmod1", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE_MULT", "STEP0", "STEP1", "STEP2", 
                                "FINISH"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100"};
        tracep->declDTypeEnum(34, "cv32e40p_pkg::mult_state_e", 5, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"RESET", "BOOT_SET", "SLEEP", "WAIT_SLEEP", 
                                "FIRST_FETCH", "DECODE", 
                                "IRQ_FLUSH_ELW", "ELW_EXE", 
                                "FLUSH_EX", "FLUSH_WB", 
                                "XRET_JUMP", "DBG_TAKEN_ID", 
                                "DBG_TAKEN_IF", "DBG_FLUSH", 
                                "DBG_WAIT_BRANCH", 
                                "DECODE_HWLOOP"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000", "1001", 
                                "1010", "1011", "1100", 
                                "1101", "1110", "1111"};
        tracep->declDTypeEnum(35, "cv32e40p_pkg::ctrl_state_e", 16, 5, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"HAVERESET", "RUNNING", "HALTED"};
        const char* __VenumItemValues[]
        = {"1", "10", "100"};
        tracep->declDTypeEnum(36, "cv32e40p_pkg::debug_state_e", 3, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ADDMUL", "DIVSQRT", "NONCOMP", "CONV"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(37, "cv32e40p_decoder.__typeimpmod1", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ALIGNED32", "MISALIGNED32", "MISALIGNED16", 
                                "BRANCH_MISALIGNED", 
                                "WAIT_VALID_BRANCH"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100"};
        tracep->declDTypeEnum(38, "cv32e40p_aligner.__typeimpmod1", 5, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"TRANSPARENT", "REGISTERED"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(39, "cv32e40p_obi_interface.__typeimpmod1", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "BRANCH_WAIT"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(40, "cv32e40p_pkg::prefetch_state_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"TRANSPARENT", "REGISTERED"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(41, "cv32e40p_obi_interface.__typeimpmod1", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"DTM_NOP", "DTM_READ", "DTM_WRITE"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(42, "dm::dtm_op_e", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"AccessRegister", "QuickAccess", "AccessMemory"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(43, "dm::cmd_e", 3, 8, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"CmdErrNone", "CmdErrBusy", "CmdErrNotSupported", 
                                "CmdErrorException", 
                                "CmdErrorHaltResume", 
                                "CmdErrorBus", "CmdErrorOther"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "111"};
        tracep->declDTypeEnum(44, "dm::cmderr_e", 7, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"Data0", "Data1", "Data2", "Data3", "Data4", 
                                "Data5", "Data6", "Data7", 
                                "Data8", "Data9", "Data10", 
                                "Data11", "DMControl", 
                                "DMStatus", "Hartinfo", 
                                "HaltSum1", "HAWindowSel", 
                                "HAWindow", "AbstractCS", 
                                "Command", "AbstractAuto", 
                                "DevTreeAddr0", "DevTreeAddr1", 
                                "DevTreeAddr2", "DevTreeAddr3", 
                                "NextDM", "ProgBuf0", 
                                "ProgBuf1", "ProgBuf2", 
                                "ProgBuf3", "ProgBuf4", 
                                "ProgBuf5", "ProgBuf6", 
                                "ProgBuf7", "ProgBuf8", 
                                "ProgBuf9", "ProgBuf10", 
                                "ProgBuf11", "ProgBuf12", 
                                "ProgBuf13", "ProgBuf14", 
                                "ProgBuf15", "AuthData", 
                                "HaltSum2", "HaltSum3", 
                                "SBAddress3", "SBCS", 
                                "SBAddress0", "SBAddress1", 
                                "SBAddress2", "SBData0", 
                                "SBData1", "SBData2", 
                                "SBData3", "HaltSum0"};
        const char* __VenumItemValues[]
        = {"100", "101", "110", "111", "1000", "1001", 
                                "1010", "1011", "1100", 
                                "1101", "1110", "1111", 
                                "10000", "10001", "10010", 
                                "10011", "10100", "10101", 
                                "10110", "10111", "11000", 
                                "11001", "11010", "11011", 
                                "11100", "11101", "100000", 
                                "100001", "100010", 
                                "100011", "100100", 
                                "100101", "100110", 
                                "100111", "101000", 
                                "101001", "101010", 
                                "101011", "101100", 
                                "101101", "101110", 
                                "101111", "110000", 
                                "110100", "110101", 
                                "110111", "111000", 
                                "111001", "111010", 
                                "111011", "111100", 
                                "111101", "111110", 
                                "111111", "1000000"};
        tracep->declDTypeEnum(45, "dm::dm_csr_e", 55, 8, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"Idle", "Go", "Resume", "CmdExecuting"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(46, "dm_mem.state_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"Idle", "Read", "Write", "WaitRead", "WaitWrite"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100"};
        tracep->declDTypeEnum(47, "dm::sba_state_e", 5, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"DMINoError", "DMIReservedError", "DMIOPFailed", 
                                "DMIBusy"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(48, "dmi_jtag.dmi_error_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"Idle", "Read", "WaitReadValid", "Write", 
                                "WaitWriteValid"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100"};
        tracep->declDTypeEnum(49, "dmi_jtag.state_e", 5, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"CLEAR_PHASE_IDLE", "CLEAR_PHASE_ISOLATE", 
                                "CLEAR_PHASE_CLEAR", 
                                "CLEAR_PHASE_POST_CLEAR"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(50, "cdc_reset_ctrlr_pkg::clear_seq_phase_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "ISOLATE", "WAIT_ISOLATE_PHASE_ACK", 
                                "WAIT_ISOLATE_ACK", 
                                "CLEAR", "WAIT_CLEAR_PHASE_ACK", 
                                "WAIT_CLEAR_ACK", "POST_CLEAR", 
                                "FINISHED"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000"};
        tracep->declDTypeEnum(51, "cdc_reset_ctrlr_half.initiator_state_e", 9, 4, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "WAIT_DOWNSTREAM_ACK", "WAIT_REQ_DEASSERT"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(52, "cdc_4phase_dst.state_e", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "WAIT_ACK_ASSERT", "WAIT_ACK_DEASSERT"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(53, "cdc_4phase_src.state_e", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"TestLogicReset", "RunTestIdle", "SelectDrScan", 
                                "CaptureDr", "ShiftDr", 
                                "Exit1Dr", "PauseDr", 
                                "Exit2Dr", "UpdateDr", 
                                "SelectIrScan", "CaptureIr", 
                                "ShiftIr", "Exit1Ir", 
                                "PauseIr", "Exit2Ir", 
                                "UpdateIr"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000", "1001", 
                                "1010", "1011", "1100", 
                                "1101", "1110", "1111"};
        tracep->declDTypeEnum(54, "dmi_jtag_tap.tap_state_e", 16, 4, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"BYPASS0", "IDCODE", "DTMCSR", "DMIACCESS", 
                                "BYPASS1"};
        const char* __VenumItemValues[]
        = {"0", "1", "10000", "10001", "11111"};
        tracep->declDTypeEnum(55, "dmi_jtag_tap.ir_reg_e", 5, 5, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "OBIADDR", "OBIRESP", "DATA"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(56, "spi_slave_obi_plug.__typeimpmod1", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"CMD", "ADDR", "DATA_TX", "DATA_RX", "DUMMY"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100"};
        tracep->declDTypeEnum(57, "spi_slave_controller.__typeimpmod1", 5, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"OUTSTANDING_REQ", "OUTSTANDING_WAITFOR_VALID"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(58, "xbar_varlat_n_to_one.outstanding_req_fsm_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"tSetupStart", "tHoldStart", "tClockLow", 
                                "tSetupBit", "tClockPulse", 
                                "tHoldBit", "tClockStart", 
                                "tClockStop", "tSetupStop", 
                                "tHoldStop", "tNoDelay"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000", "1001", 
                                "1010"};
        tracep->declDTypeEnum(59, "i2c_fsm.tcount_sel_e", 11, 4, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"Idle", "PopFmtFifo", "SetupStart", "HoldStart", 
                                "SetupStop", "HoldStop", 
                                "ClockLow", "SetupBit", 
                                "ClockPulse", "HoldBit", 
                                "ClockLowAck", "SetupDevAck", 
                                "ClockPulseAck", "HoldDevAck", 
                                "ReadClockLow", "ReadSetupBit", 
                                "ReadClockPulse", "ReadHoldBit", 
                                "HostClockLowAck", 
                                "HostSetupBitAck", 
                                "HostClockPulseAck", 
                                "HostHoldBitAck", "Active", 
                                "ClockStart", "ClockStop", 
                                "AddrRead", "AddrAckWait", 
                                "AddrAckSetup", "AddrAckPulse", 
                                "AddrAckHold", "TransmitWait", 
                                "TransmitSetup", "TransmitPulse", 
                                "TransmitHold", "TransmitAck", 
                                "AcquireByte", "AcquireAckWait", 
                                "AcquireAckSetup", 
                                "AcquireAckPulse", 
                                "AcquireAckHold", "PopTxFifo", 
                                "AcquireSrP", "StretchTxEmpty", 
                                "StretchAcqFull", "StretchAddr", 
                                "StretchAcquire", "StretchTransmit"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000", "1001", 
                                "1010", "1011", "1100", 
                                "1101", "1110", "1111", 
                                "10000", "10001", "10010", 
                                "10011", "10100", "10101", 
                                "10110", "10111", "11000", 
                                "11001", "11010", "11011", 
                                "11100", "11101", "11110", 
                                "11111", "100000", 
                                "100001", "100010", 
                                "100011", "100100", 
                                "100101", "100110", 
                                "100111", "101000", 
                                "101001", "101010", 
                                "101011", "101100", 
                                "101101", "101110"};
        tracep->declDTypeEnum(60, "i2c_fsm.state_e", 47, 6, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "LOAD_DIV", "WAIT_END_PERIOD"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(61, "clk_int_div.clk_gate_state_e", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"BRK_CHK", "BRK_WAIT"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(62, "uart_core.break_st_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"NtoM", "onetoM"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(63, "core_v_mini_mcu_pkg::bus_type_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"PRIV_LVL_M", "PRIV_LVL_H", "PRIV_LVL_S", 
                                "PRIV_LVL_U"};
        const char* __VenumItemValues[]
        = {"11", "10", "1", "0"};
        tracep->declDTypeEnum(64, "cv32e40x_pkg::privlvl_t", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ALU_ADD", "ALU_SUB", "ALU_XOR", "ALU_OR", 
                                "ALU_AND", "ALU_B_XNOR", 
                                "ALU_B_ORN", "ALU_B_ANDN", 
                                "ALU_EQ", "ALU_NE", 
                                "ALU_SLT", "ALU_SLTU", 
                                "ALU_LT", "ALU_GE", 
                                "ALU_LTU", "ALU_GEU", 
                                "ALU_B_MIN", "ALU_B_MINU", 
                                "ALU_B_MAX", "ALU_B_MAXU", 
                                "ALU_SLL", "ALU_B_ROL", 
                                "ALU_B_ROR", "ALU_B_BCLR", 
                                "ALU_B_BSET", "ALU_B_BINV", 
                                "ALU_SRL", "ALU_SRA", 
                                "ALU_B_BEXT", "ALU_B_SH1ADD", 
                                "ALU_B_SH2ADD", "ALU_B_SH3ADD", 
                                "ALU_B_CLZ", "ALU_B_CTZ", 
                                "ALU_B_CPOP", "ALU_B_SEXT_B", 
                                "ALU_B_SEXT_H", "ALU_B_ZEXT_H", 
                                "ALU_B_REV8", "ALU_B_ORC_B", 
                                "ALU_B_CLMUL", "ALU_B_CLMULH", 
                                "ALU_B_CLMULR"};
        const char* __VenumItemValues[]
        = {"0", "1000", "100", "110", "111", "101100", 
                                "101110", "101111", 
                                "10000", "10001", "11010", 
                                "10011", "11100", "11101", 
                                "10110", "10111", "111100", 
                                "110101", "111110", 
                                "110111", "1", "100001", 
                                "100101", "101001", 
                                "110001", "111001", 
                                "101", "1101", "111101", 
                                "100010", "100100", 
                                "100110", "100000", 
                                "101000", "100011", 
                                "10010", "10100", "10101", 
                                "110100", "110010", 
                                "100111", "101011", 
                                "101010"};
        tracep->declDTypeEnum(65, "cv32e40x_pkg::alu_opcode_e", 43, 6, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"OP_A_REGA_OR_FWD", "OP_A_CURRPC", "OP_A_IMM", 
                                "OP_A_NONE"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(66, "cv32e40x_pkg::alu_op_a_mux_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"OP_B_REGB_OR_FWD", "OP_B_IMM", "OP_B_NONE"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(67, "cv32e40x_pkg::alu_op_b_mux_e", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"OP_C_REGB_OR_FWD", "OP_C_BCH", "OP_C_NONE"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(68, "cv32e40x_pkg::op_c_mux_e", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IMMA_Z", "IMMA_ZERO"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(69, "cv32e40x_pkg::imm_a_mux_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IMMB_I", "IMMB_S", "IMMB_U", "IMMB_PCINCR", 
                                "IMMB_CIW", "IMMB_CL"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101"};
        tracep->declDTypeEnum(70, "cv32e40x_pkg::imm_b_mux_e", 6, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"CT_TBLJMP", "CT_JAL", "CT_JALR", "CT_BCH"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(71, "cv32e40x_pkg::bch_jmp_mux_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"MUL_M32", "MUL_H"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(72, "cv32e40x_pkg::mul_opcode_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"DIV_DIVU", "DIV_DIV", "DIV_REMU", "DIV_REM"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(73, "cv32e40x_pkg::div_opcode_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"CSR_OP_READ", "CSR_OP_WRITE", "CSR_OP_SET", 
                                "CSR_OP_CLEAR"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(74, "cv32e40x_pkg::csr_opcode_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"MPU_OK", "MPU_RE_FAULT", "MPU_WR_FAULT"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(75, "cv32e40x_pkg::mpu_status_e", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ALIGN_OK", "ALIGN_RE_ERR", "ALIGN_WR_ERR"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(76, "cv32e40x_pkg::align_status_e", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"RESET", "IDLE", "WAIT_SWITCH_ON", "WAIT_ACK", 
                                "SWITCH_ON"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100"};
        tracep->declDTypeEnum(77, "power_manager_sequence.sequence_fsm_state", 5, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"Idle", "AlertHsPhase1", "AlertHsPhase2", 
                                "PingHsPhase1", "PingHsPhase2", 
                                "SigInt", "Pause0", 
                                "Pause1"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111"};
        tracep->declDTypeEnum(78, "prim_alert_sender.state_e", 8, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IsStd", "IsSkewed", "SigInt"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(79, "prim_diff_decode.state_e", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"Idle", "WaitLead", "InternalClkLow", "InternalClkHigh", 
                                "WaitTrail", "WaitIdle", 
                                "CSBSwitch", "IdleCSBActive"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111"};
        tracep->declDTypeEnum(80, "spi_host_fsm.spi_host_st_e", 8, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"cv32e40p", "cv32e20", "cv32e40x", "cv32e40px"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(81, "core_v_mini_mcu_pkg::cpu_type_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"DISABLED", "PARALLEL", "MERGED"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(82, "fpnew_pkg::unit_type_t", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"BEFORE", "AFTER", "INSIDE", "DISTRIBUTED"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(83, "fpnew_pkg::pipe_config_t", 4, 2, __VenumItemNames, __VenumItemValues);
    }
}

void Vtestharness___024root__trace_decl_types(VerilatedFst* tracep) {
    Vtestharness___024root__traceDeclTypesSub0(tracep);
}
