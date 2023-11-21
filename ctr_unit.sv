module ctr_unit #(
    parameter IN_WIDTH = 32
)(
    input logic eq,
    input logic [IN_WIDTH-1:0] instr,
    output logic RegWrite,
    output logic [2:0] ALUctrl,
    output logic ALUsrc,
    output logic [1:0] ImmSrc,
    output logic PCsrc,
    output logic data_src
);

always_comb begin
    case (instr[6:2])
        5'b00100: begin // addi
            RegWrite = 1;
            ALUctrl = 3'b0;
            ALUsrc = 1;
            ImmSrc = 2'b00;
            PCsrc = 0;
            data_src = 0;
        end
        5'b11000: begin // bne
            RegWrite = 0;
            ALUctrl = 3'b1;
            ALUsrc = 0;
            ImmSrc = 2'b10;
            if (eq) PCsrc = 0; 
            else PCsrc = 1;
            data_src = 0;
        end
        5'b00000 : begin // lw
            RegWrite = 1;
            ALUctrl = 3'b0;
            ALUsrc = 1;
            ImmSrc = 2'b00;
            PCsrc = 0;
            data_src = 1;
        end
    endcase
end 

endmodule
