// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

// AXILiteS
// 0x00 : Control signals
//        bit 0  - ap_start (Read/Write/COH)
//        bit 1  - ap_done (Read/COR)
//        bit 2  - ap_idle (Read)
//        bit 3  - ap_ready (Read)
//        bit 7  - auto_restart (Read/Write)
//        others - reserved
// 0x04 : Global Interrupt Enable Register
//        bit 0  - Global Interrupt Enable (Read/Write)
//        others - reserved
// 0x08 : IP Interrupt Enable Register (Read/Write)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x0c : IP Interrupt Status Register (Read/TOW)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x10 : Data signal of val_size
//        bit 31~0 - val_size[31:0] (Read/Write)
// 0x14 : reserved
// 0x18 : Data signal of output_size
//        bit 31~0 - output_size[31:0] (Read/Write)
// 0x1c : reserved
// 0x20 : Data signal of vect_mem
//        bit 31~0 - vect_mem[31:0] (Read/Write)
// 0x24 : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XSPMV_MULT_AXIS_AXILITES_ADDR_AP_CTRL          0x00
#define XSPMV_MULT_AXIS_AXILITES_ADDR_GIE              0x04
#define XSPMV_MULT_AXIS_AXILITES_ADDR_IER              0x08
#define XSPMV_MULT_AXIS_AXILITES_ADDR_ISR              0x0c
#define XSPMV_MULT_AXIS_AXILITES_ADDR_VAL_SIZE_DATA    0x10
#define XSPMV_MULT_AXIS_AXILITES_BITS_VAL_SIZE_DATA    32
#define XSPMV_MULT_AXIS_AXILITES_ADDR_OUTPUT_SIZE_DATA 0x18
#define XSPMV_MULT_AXIS_AXILITES_BITS_OUTPUT_SIZE_DATA 32
#define XSPMV_MULT_AXIS_AXILITES_ADDR_VECT_MEM_DATA    0x20
#define XSPMV_MULT_AXIS_AXILITES_BITS_VECT_MEM_DATA    32
