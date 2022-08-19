module our;
wire [63:0] a;
wire [63:0] b;
wire [63:0] r;
assign a = 64'h8000000000000000;
assign b = 64'ha;
assign r = a % b;
initial begin $display("hello world"); $display(r); end
endmodule
