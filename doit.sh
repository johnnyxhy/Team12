#!/bin/sh

#cleanup
rm -rf obj_dir
rm -f riscv.vcd

verilator -Wall --cc --trace riscv.sv --exe riscv_tb.cpp
verilator -Wall --cc --trace alu.sv --exe riscv_tb.cpp
verilator -Wall --cc --trace ctr_unit.sv --exe riscv_tb.cpp
verilator -Wall --cc --trace instr_mem.sv --exe riscv_tb.cpp
verilator -Wall --cc --trace mux2to1.sv --exe riscv_tb.cpp
verilator -Wall --cc --trace PCReg.sv --exe riscv_tb.cpp
verilator -Wall --cc --trace PCsrc.sv --exe riscv_tb.cpp
verilator -Wall --cc --trace regfile.sv --exe riscv_tb.cpp
verilator -Wall --cc --trace sext.sv --exe riscv_tb.cpp
verilator -Wall --cc --trace data_mem.sv --exe riscv_tb.cpp

make -j -C obj_dir/ -f Vriscv.mk Vriscv

obj_dir/Vriscv