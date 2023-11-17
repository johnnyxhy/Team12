module alu #(
    parameter Data_width=32
) (
    input [Data_width-1:0] aluop1,aluop2,
    input [2:0] aluctrl, 
    output reg [Data_width-1:0] aluout,// it should be a 'reg' type to be assigned with value inside always_comb
    output reg eq //same as above
);  
    always_comb begin 
        case(aluctrl)
        3'b0: aluout=aluop1+aluop2; 
        3'b1: eq=(aluop1==aluop2); 
        default : begin
            aluout={Data_width{1'b0}};
            eq=1'b0; 
        end 
        endcase
    end 
endmodule
