module ctr_unit #(
    parameter IN_WIDTH = 32
)(
    input logic eq,
    input logic [IN_WIDTH-1:0] instr,
    output logic RegWrite,
    output logic [2:0] ALUctrl,
    output logic ALUsrc,
    output logic [11:0] ImmSrc,
    output logic PCsrc
);

always_comb begin
    case (instr[6:2])
        5'b00100: begin // addi
            RegWrite = 1;
            ALUctrl = 3'b0;
            ALUsrc = 1;
            ImmSrc = instr[31:20];
            PCsrc = 0;
        end
        5'b11000: begin // bne
            RegWrite = 0;
            ALUctrl = 3'b1;
            ALUsrc = 0;
            ImmSrc = {instr[31],instr[7],instr[30:25],instr[11:8]};
            PCsrc = 1;
        end
    endcase
end 

endmodule
