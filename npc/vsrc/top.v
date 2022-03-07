module top(
  input a,
  input b,
  output f
);
    our s;
    example ex(a,b,f);
    initial begin
        $dumpfile("logs/vlt_dump.vcd");
        $dumpvars();
    end
endmodule
