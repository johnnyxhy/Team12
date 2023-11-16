module riscv #(
    parameter WIDTH = 32
)(
    input logic clk,
    input logic rst,
    output logic [WIDTH-1:0] a0
);

logic [WIDTH-1:0] pc;
logic [WIDTH-1:0] next_pc;
logic [WIDTH-1:0] branch_pc;
logic [WIDTH-1:0] inc_pc;
logic [WIDTH-1:0] instr;
logic RegWrite;
logic [2:0] ALUctrl;
logic ALUsrc;
logic [11:0] ImmSrc;
logic PCsrc;
logic [WIDTH-1:0] immop;
logic [WIDTH-1:0] aluop1;
logic [WIDTH-1:0] aluop2;
logic [WIDTH-1:0] regop2;
logic [WIDTH-1:0] aluout;
logic eq;

instr_mem my_instr_mem (
    .a(pc),
    .rd(instr)
);

ctr_unit my_ctr_unit (
    .instr(instr),
    .eq(eq),
    .RegWrite(RegWrite),
    .ALUctrl(ALUctrl),
    .ALUsrc(ALUsrc),
    .ImmSrc(ImmSrc),
    .PCsrc(PCsrc)
);

sext my_sext(
    .instr(instr),
    .immsrc(ImmSrc),
    .imm_out(immop)
);

//mux for pc
//pc reg
//alu
//reg file

endmodule
