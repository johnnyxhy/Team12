#include "Vriscv.h"
#include "Valu.h"
#include "Vctr_unit.h"
#include "Vinstr_mem.h"
#include "Vmux2to1.h"
#include "VPCReg.h"
#include "Vregfile.h"
#include "Vsext.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vbuddy.cpp"

int main(int argc, char **argv, char **env){
    int i;
    int clk;

    Verilated::commandArgs(argc, argv);
    // init top verilog instance
    Vriscv* top = new Vriscv;
    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp,99);
    tfp->open ("riscv.vcd");

    // init Vbuddy
    if (vbdOpen()!=1) return(-1);
    vbdHeader("Lab4: RRISC-V");

    // initialize simulation inputs
    top->clk = 1;
    top->rst = 0;

    // run simulation for many clock cycles
    for(i=0; i<2000; i++){
        //dump variables into VCD file and toggle clock
        for(clk = 0; clk<2; clk++){
            tfp->dump(2*i+clk);
            top->clk = !top->clk;
            top->eval (); 
        }

   // Displaying numerical value of a0
    /*vbdHex(4, (int(top->a0) >> 16) & 0xF);
    vbdHex(3, (int(top->a0) >> 8) & 0xF);
    vbdHex(2, (int(top->a0) >> 4) & 0xF);
    vbdHex(1, int(top->a0) & 0xF);*/

    //test reset
    if (i>300 && i<305){
        top->rst = 1;
    } else {
        top->rst = 0;
    }

    // For lw sine wave testing
    vbdPlot(int(top->a0),0,255);

    if(Verilated::gotFinish() || (vbdGetkey()=='q')) 
        exit(0);

    }

    vbdClose();
    tfp->close();
    exit(0);
}