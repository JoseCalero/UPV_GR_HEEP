-- Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
-- Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2023.2 (lin64) Build 4029153 Fri Oct 13 20:13:54 MDT 2023
-- Date        : Mon Jul  6 18:31:00 2026
-- Host        : MFPDSMBAA1 running 64-bit Ubuntu 22.04.5 LTS
-- Command     : write_vhdl -force -mode synth_stub
--               /home/mfpdsmbaa/LabCatreda/GR-HEEP/build/x-heep_systems_gr-heep_0/nexys-a7-100t-vivado/x-heep_systems_gr-heep_0.gen/sources_1/bd/xilinx_clk_wizard/ip/xilinx_clk_wizard_clk_wiz_0_0/xilinx_clk_wizard_clk_wiz_0_0_stub.vhdl
-- Design      : xilinx_clk_wizard_clk_wiz_0_0
-- Purpose     : Stub declaration of top-level module interface
-- Device      : xc7a100tcsg324-1
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity xilinx_clk_wizard_clk_wiz_0_0 is
  Port ( 
    clk_out1 : out STD_LOGIC;
    clk_in1 : in STD_LOGIC
  );

end xilinx_clk_wizard_clk_wiz_0_0;

architecture stub of xilinx_clk_wizard_clk_wiz_0_0 is
attribute syn_black_box : boolean;
attribute black_box_pad_pin : string;
attribute syn_black_box of stub : architecture is true;
attribute black_box_pad_pin of stub : architecture is "clk_out1,clk_in1";
begin
end;
