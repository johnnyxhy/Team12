module mux2to1 #(
    parameter Data_width=32
) (
    input [Data_width-1:0] d0, //first port
    input [Data_width-1:0] d1, //second port 
    input sel, 
    output [Data_width-1:0] out
);
    assign out = sel ? d1:d0;
endmodule
