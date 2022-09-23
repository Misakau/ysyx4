/* verilator lint_off DECLFILENAME */
module ysyx_220053_Reg #(WIDTH = 1, RESET_VAL = 0) (
  input clk,
  input rst,
  input [WIDTH-1:0] din,
  output reg [WIDTH-1:0] dout,
  input wen
);
  always @(posedge clk) begin
    if (rst) dout <= RESET_VAL;
    else if (wen) dout <= din;
  end
endmodule

module ysyx_220053_MuxKeyInternal #(NR_KEY = 2, KEY_LEN = 1, DATA_LEN = 1, HAS_DEFAULT = 0) (
  output reg [DATA_LEN-1:0] out,
  input [KEY_LEN-1:0] key,
  input [DATA_LEN-1:0] default_out,
  input [NR_KEY*(KEY_LEN + DATA_LEN)-1:0] lut
);

  localparam PAIR_LEN = KEY_LEN + DATA_LEN;
  wire [PAIR_LEN-1:0] pair_list [NR_KEY-1:0];
  wire [KEY_LEN-1:0] key_list [NR_KEY-1:0];
  wire [DATA_LEN-1:0] data_list [NR_KEY-1:0];

  generate
    for (genvar n = 0; n < NR_KEY; n = n + 1) begin
      assign pair_list[n] = lut[PAIR_LEN*(n+1)-1 : PAIR_LEN*n];
      assign data_list[n] = pair_list[n][DATA_LEN-1:0];
      assign key_list[n]  = pair_list[n][PAIR_LEN-1:DATA_LEN];
    end
  endgenerate

  reg [DATA_LEN-1 : 0] lut_out;
  reg hit;
  integer i;
  always @(*) begin
    lut_out = 0;
    hit = 0;
    for (i = 0; i < NR_KEY; i = i + 1) begin
      lut_out = lut_out | ({DATA_LEN{key == key_list[i]}} & data_list[i]);
      hit = hit | (key == key_list[i]);
    end
    if (!HAS_DEFAULT) out = lut_out;
    else out = (hit ? lut_out : default_out);
  end
endmodule

// 不带默认值的选择器模板
module ysyx_220053_MuxKey #(NR_KEY = 2, KEY_LEN = 1, DATA_LEN = 1) (
  output [DATA_LEN-1:0] out,
  input [KEY_LEN-1:0] key,
  input [NR_KEY*(KEY_LEN + DATA_LEN)-1:0] lut
);
  ysyx_220053_MuxKeyInternal #(NR_KEY, KEY_LEN, DATA_LEN, 0) i0 (out, key, {DATA_LEN{1'b0}}, lut);
endmodule

// 带默认值的选择器模板
module ysyx_220053_MuxKeyWithDefault #(NR_KEY = 2, KEY_LEN = 1, DATA_LEN = 1) (
  output [DATA_LEN-1:0] out,
  input [KEY_LEN-1:0] key,
  input [DATA_LEN-1:0] default_out,
  input [NR_KEY*(KEY_LEN + DATA_LEN)-1:0] lut
);
  ysyx_220053_MuxKeyInternal #(NR_KEY, KEY_LEN, DATA_LEN, 1) i0 (out, key, default_out, lut);
endmodule
module ysyx_220053_mux21(a,b,s,y);
  input   a,b,s;
  output  y;

  // 通过MuxKey实现如下always代码
  // always @(*) begin
  //  case (s)
  //    1'b0: y = a;
  //    1'b1: y = b;
  //  endcase
  // end
  ysyx_220053_MuxKey #(2, 1, 1) i0 (y, s, {
    1'b0, a,
    1'b1, b
  });
endmodule

module ysyx_220053_mux41(a,s,y);
  input  [3:0] a;
  input  [1:0] s;
  output y;

  // 通过MuxKeyWithDefault实现如下always代码
  // always @(*) begin
  //  case (s)
  //    2'b00: y = a[0];
  //    2'b01: y = a[1];
  //    2'b10: y = a[2];
  //    2'b11: y = a[3];
  //    default: y = 1'b0;
  //  endcase
  // end
  ysyx_220053_MuxKeyWithDefault #(4, 2, 1) i0 (y, s, 1'b0, {
    2'b00, a[0],
    2'b01, a[1],
    2'b10, a[2],
    2'b11, a[3]
  });
endmodule

module ysyx_220053_RegisterFile #(ADDR_WIDTH = 1, DATA_WIDTH = 1) (
  input clk,

  input [ADDR_WIDTH-1:0] raaddr,
  input [ADDR_WIDTH-1:0] rbaddr,
  output [DATA_WIDTH-1:0] radata,
  output [DATA_WIDTH-1:0] rbdata,

  input [DATA_WIDTH-1:0] wdata,
  input [ADDR_WIDTH-1:0] waddr,
  input wen
);
  reg [DATA_WIDTH-1:0] rf [(1 << ADDR_WIDTH)-1:0];
  assign  radata = (raaddr == 0) ? 0 : rf[raaddr];
  assign  rbdata = (rbaddr == 0) ? 0 : rf[rbaddr];
  always @(posedge clk) begin
    if (wen) rf[waddr] <= wdata;
  end
  import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);
  initial set_gpr_ptr(rf);  // rf为通用寄存器的二维数组变量
/*  always @(*)begin
    $display("wen = %d,raaddr=%d, radata=%x, rbddr=%d, rbdata=%x, wdata= %x, waddr = %x", wen,raaddr, radata,rbaddr, rbdata, wdata, waddr);
    $display("0#: %x",rf[0]);
    $display("1#: %x",rf[1]);
    $display("2#: %x",rf[2]);
    $display("3#: %x",rf[3]);
  end
*/
endmodule

module ysyx_220053_CSRFile (
  input clk,

  input [11:0] raaddr,
  input [11:0] rbaddr,
  output[63:0] radata,
  output[63:0] rbdata,

  input [63:0] wdata,
  input [11:0] waddr,
  input wen
);
  reg [63:0] rf [4095:0];
  assign  radata = (raaddr == 0) ? 0 : rf[raaddr];
  assign  rbdata = (rbaddr == 0) ? 0 : rf[rbaddr];
  always @(posedge clk) begin
    if (wen) rf[waddr] <= wdata;
  end
  import "DPI-C" function void set_csr_ptr(input logic [63:0] a []);
  initial set_csr_ptr(rf);  // rf为通用寄存器的二维数组变量
/*  always @(*)begin
    $display("wen = %d,raaddr=%d, radata=%x, rbddr=%d, rbdata=%x, wdata= %x, waddr = %x", wen,raaddr, radata,rbaddr, rbdata, wdata, waddr);
    $display("0#: %x",rf[0]);
    $display("1#: %x",rf[1]);
    $display("2#: %x",rf[2]);
    $display("3#: %x",rf[3]);
  end
*/
endmodule