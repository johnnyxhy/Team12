module riscv #(
    parameter WIDTH = 32
)(
    input logic clk,
    input logic rst,
    output logic [WIDTH-1:0] a0
);

logic [WIDTH-1:0] pc;
logic [WIDTH-1:0] next_pc;
logic [WIDTH-1:0] instr;
logic RegWrite;
logic [2:0] ALUctrl;
logic ALUsrc;
logic [1:0] ImmSrc;
logic PCsrc;
logic data_src;
logic [WIDTH-1:0] data_in; 
logic [WIDTH-1:0] data_out; 
logic [WIDTH-1:0] immop;
logic [WIDTH-1:0] aluop1;
logic [WIDTH-1:0] aluop2;
logic [WIDTH-1:0] regop2;
logic [WIDTH-1:0] aluout;
logic [WIDTH-1:0] branch_pc;
logic [WIDTH-1:0] inc_pc;
logic eq;
logic [4:0] rs1;
logic [4:0] rs2;
logic [4:0] rd;

//Assignments
assign rs1 = instr[19:15];
assign rs2 = instr[24:20];
assign rd = instr[11:7];

assign branch_pc = pc + immop;
assign inc_pc = pc + {{WIDTH-3{1'b0}},3'b100};

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
    .PCsrc(PCsrc),
    .data_src(data_src)
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
    .out(aluop2),
    .sel(ALUsrc)
);

//register file
regfile my_regfile(
    .clk(clk),
    .ad1(rs1),
    .ad2(rs2),
    .ad3(rd), 
    .we3(RegWrite),
    .wd3(data_in),
    .rd1(aluop1),
    .rd2(regop2),
    .a0(a0)
);
//alu
alu my_alu(
    .aluop1(aluop1),
    .aluop2(aluop2),
    .aluout(aluout),
    .eq(eq),
    .aluctrl(ALUctrl)
);

PCReg my_PCReg(
    .clk(clk),
    .rst(rst),
    .PC(pc),
    .next_PC(next_pc)
);
    
    mux2to1 my_mux2to12(
    .d1(branch_pc),
    .d0(inc_pc),
    .out(next_pc),
    .sel(PCsrc)
);

assign data_in = data_src ? data_out : aluout;

data_mem my_data_mem(
    .a(aluout),
    .rd(data_out)
);


endmodule
