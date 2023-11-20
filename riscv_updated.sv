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
logic [WIDTH-1:0] rs1;
logic [WIDTH-1:0] rs2;
logic [WIDTH-1:0] rd;

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

//mux for alu 
mux2to1 my_mux2to1(
    .d0(regop2),
    .d1(immop),
    .out(aluop2)
);

//register file
regfile my_regfile(
    .clk(clk),
    .ad1(rs1),
    .ad2(rs2),
    .ad3(rd), 
    .we3(RegWrite),
    .wd3(aluout),
    .rd1(aluop1),
    .rd2(regop2),
    .a0(a0)
);
//alu
alu my_alu(
    .aluop1(aluop1),
    .aluop2(aluop2),
    .aluout(aluout),
    .eq(eq)
);

PCReg my_PCReg(
    .PC(pc),
    .next_PC(next_pc),
)

PCsrc my_PCsrc(
    .branch_PC(branch_pc),
    .inc_PC(inc_pc),
    .out(next_pc)
)


endmodule
