module sext #(
    parameter WIDTH = 32,
    parameter IN_WIDTH = 12
)(
    input logic [WIDTH-1:0] instr,
    input logic [IN_WIDTH-1:0] immsrc,
    output logic [WIDTH-1:0] imm_out
);

assign imm_out = {{(WIDTH-IN_WIDTH){immsrc[IN_WIDTH-1]}}, {immsrc}};

endmodule
