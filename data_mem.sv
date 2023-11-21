module data_mem #(
    parameter WIDTH = 32,
    parameter ADDR_WIDTH = 32,
    parameter RAMZ = 256,
    parameter intFile = "data.mem"
)(
    input logic [ADDR_WIDTH-1:0] a,
    output logic [WIDTH-1:0] rd
);

logic [WIDTH-1:0] ram [0:RAMZ-1];
initial $readmemh(intFile,ram,0,RAMZ-1);
assign rd = ram[a];

endmodule
