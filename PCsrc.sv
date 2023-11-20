module PCsrc #(
    parameter Data_width=32
) (
    input [Data_width-1:0] branch_PC, //first port
    input [Data_width-1:0] inc_PC, //second port 
    input sel, 
    output [Data_width-1:0] out
);
    assign out = sel ? branch_PC:inc_PC;
endmodule
