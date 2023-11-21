module sext #(
    parameter WIDTH = 32
)(
    input logic [WIDTH-1:0] instr,
    input logic [1:0] immsrc,
    output logic [WIDTH-1:0] imm_out
);

always_comb begin
    case (immsrc)
        2'b00: imm_out = {{20{instr[31]}}, instr[31:20]} ;
        2'b10: imm_out = {{20{instr[31]}}, instr[7], instr[30:25], instr[11:8], 1'b0} ;
        default: imm_out = {{20{instr[31]}}, instr[31:20]} ;
    endcase
end

endmodule
