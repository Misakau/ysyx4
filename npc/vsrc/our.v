module our;
wire [63:0] a;
wire [63:0] b;
wire [127:0] r;
assign a = -1;
assign b = 10;
assign r = $signed($signed({{64{a[63]}},a}) * {{64{1'b0}},b});
initial begin $display("hello world"); $display(r); end
endmodule
