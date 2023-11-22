module regfile #(
    parameter Data_width=32,Addr_width=5
) (
    input clk, 
    input [Addr_width-1:0] ad1,ad2,ad3,
    input we3,
    input [Data_width-1:0] wd3,
    output [Data_width-1:0] rd1,rd2,
    output [Data_width-1:0] a0 
);
    //Declare 32 registers each 32 bits wide
    logic [Data_width-1:0] register_array [2**Addr_width-1:0];

    //asychronous READ ports
    assign rd1=register_array[ad1];
    assign rd2=register_array[ad2];
    assign a0=register_array[{{Addr_width-4{1'b0}},4'b1010}]; //a0 is at position 10 

    //synchronous WRITE ports 
    always_ff @(posedge clk)begin
        if(we3) begin 
            register_array[ad3]<=wd3; 
        end 
    end 
endmodule
