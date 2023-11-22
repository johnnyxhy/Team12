# Team12 - Lab 4 Reduced RISC-V CPU
Group members:
- Johnny Xiao (Repo Master)
- Lucas Ng
- Bokang Wu
- Duan Yu

## Work Allocation
1. Program Counter and related adders: **Bokang Wu**
2. The Register File, ALU and the related MUX: **Duan Yu**
3. The Control Unit, the Sign-extension Unit and the instruction memory: **Lucas Ng**
4. The testbench and verification of the design working via gtkWave and Vbuddy (where appropriate): **Johnny Xiao**

## Evidence of CPU Working (Using GTKWave)

### Initialisation and Counting
![counting](/images/counting.jpg)
We can see from the GTKWave that the CPU is initialising correctly, requiring 7 clock cycles for the first increments. Subsequent increments required 3 clock cycles which was expected.

### Reset
![rst](/images/rst.jpg)
The testbench simulated a rst input for 4 clock cycles. The waveform shows that the reset was performed correctly, resetting the entire CPU which would start the count from zero again

### Reaching Max Count
![max](/images/max.jpg)
When the counter reached 255, the counter resets back to zero successfully. These waveforms show that the CPU is working as intended

## Optional ``lw`` Instruction
![sine](/images/sine.jpg)
The ``lw`` instruction was implemented. The instruction was tested on Vbuddy and the sine wave was successfully generated.
