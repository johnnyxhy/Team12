module sext #(
    parameter WIDTH = 32,
    parameter IN_WIDTH = 12
)(
    input logic [WIDTH-1:0] instr,
    input logic [IN_WIDTH-1:0] immsrc,
    output logic [WIDTH-1:0] imm_out
);

always_comb begin
    case (instr[6:2])
        5'b00100: imm_out = {{(WIDTH-IN_WIDTH){immsrc[IN_WIDTH-1]}}, {immsrc}} ;
        5'b11000: imm_out = {{(WIDTH-IN_WIDTH-1){immsrc[IN_WIDTH]}},{immsrc},{1'b0}} ;
    endcase
end

endmodule
