module top(
    input a,
    input b,
    output f
);
    assign f = a ^ b;
     initial begin
         $display("[%0t] Tracing to logs/vlt_dump.vcd...\n", $time);
         $dumpfile("logs/vlt_dump.vcd");
         $dumpvars();
      $display("[%0t] Model running...\n", $time);
   end
endmodule
