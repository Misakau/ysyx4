/* verilator lint_off DECLFILENAME */
/* verilator lint_off PINMISSING */
/* verilator lint_off UNUSED */
`define ysyx_220053_COMPUTER_WIDTH 64
//32
`define ysyx_220053_WIDTH 66
//34
// `ysyx_220053_COMPUTER_WIDTH+2

module ysyx_220053_booth_sel(
  input [2:0] src,
  output [3:0] sel

);
    ///y+1,y,y-1///
    wire y_add,y,y_sub;
    wire sel_negative,sel_double_negative,sel_positive,sel_double_positive;

    assign {y_add,y,y_sub} = src;

    assign sel_negative =  y_add & (y & ~y_sub | ~y & y_sub);
    assign sel_positive = ~y_add & (y & ~y_sub | ~y & y_sub);
    assign sel_double_negative =  y_add & ~y & ~y_sub;
    assign sel_double_positive = ~y_add &  y &  y_sub;

    assign sel={sel_negative,sel_positive,sel_double_negative,sel_double_positive};
endmodule

module ysyx_220053_booth_result_sel(
  input [3:0] sel,
  input [1:0] src,
  output      p 
);
    ////x,x-1////
    wire x,x_sub;
    wire sel_negative,sel_double_negative,sel_positive,sel_double_positive;
    assign {sel_negative,sel_positive,sel_double_negative,sel_double_positive}=sel;
    assign {x,x_sub} =src;
    assign p = ~(~(sel_negative & ~x) & ~(sel_double_negative & ~x_sub) 
            & ~(sel_positive & x ) & ~(sel_double_positive &  x_sub));

endmodule

module ysyx_220053_booth_partial(
  input [2*`ysyx_220053_WIDTH-1:0]  x_src,
  input [2:0] y_src,
  output [2*`ysyx_220053_WIDTH-1:0]   p_result,
  output  cout
);

    ///y+1,y,y-1///
    wire y_add,y,y_sub;

    assign {y_add,y,y_sub} = y_src;
    wire [3:0] sel;
    wire sel_negative,sel_double_negative,sel_positive,sel_double_positive;
    assign {sel_negative,sel_positive,sel_double_negative,sel_double_positive}=sel;
    assign cout=sel_negative || sel_double_negative;
    ysyx_220053_booth_sel booth_sel(
        .src    (y_src),
        .sel    (sel)
    );

    ysyx_220053_booth_result_sel partial0(.sel (sel), .src ({x_src[0],1'b0}), .p (p_result[0]));
    genvar x;
    generate 
        for ( x = 1; x < `ysyx_220053_WIDTH * 2; x = x + 1) begin
            ysyx_220053_booth_result_sel partial(.sel (sel), .src (x_src[x:x-1]), .p (p_result[x]));
        end 
    endgenerate
endmodule

module ysyx_220053_mulu (
  input  clk,
  input  rst,
  input  [`ysyx_220053_COMPUTER_WIDTH:0] multiplicand,//33bits * 33bits
  input  [`ysyx_220053_COMPUTER_WIDTH:0] multiplier,
  input         mul_valid,
  output reg    mul_ready,
  output reg    out_valid,
  output [`ysyx_220053_COMPUTER_WIDTH*2-1:0] result
);
//`ysyx_220053_WIDTH = 34
//68bits
//32+1+1+1bits
//两位booth要补补够倍数
    reg [`ysyx_220053_WIDTH*2-1:0] tem_result, multiplicand_r;//68
    reg [`ysyx_220053_WIDTH:0] multiplier_r;//34+1
    reg running_r;
    wire calculate_done, ready_to_doing, doing_to_done, done_to_ready;
    wire [`ysyx_220053_WIDTH*2-1:0] p_result;
    reg [6:0] cnt;
//state transition
    always @(posedge clk) begin
        if(rst || done_to_ready) begin
            cnt <= 7'b0;
        end
        else if(running_r) begin
            cnt <= cnt + 1'b1;
        end
    end

    assign ready_to_doing = mul_valid && mul_ready;
    assign doing_to_done  = calculate_done;
    assign done_to_ready  = out_valid;
    always @(posedge clk) begin
        if (rst) begin
            mul_ready <= 1'b1;
        end
        else if (ready_to_doing) begin
            mul_ready <= 1'b0;
        end
        else if (done_to_ready) begin
            mul_ready <= 1'b1;
        end    
    end

    always @(posedge clk) begin
        if (rst) begin
            out_valid <=1'b0;
        end   
        else if (done_to_ready)  begin
            out_valid <=1'b0;
        end
        else if (doing_to_done ) begin
            out_valid <= 1'b1;
        end
    end

    always @(posedge clk) begin
        if (rst ) begin
            running_r <= 1'b0;
        end
        else if (ready_to_doing) begin
            running_r <= 1'b1;
        end
        else if (doing_to_done) begin
            running_r <= 1'b0;
        end    
    end

    //iterate
    //update multiplicand_r
    always @(posedge clk) begin
        if (ready_to_doing) begin
            multiplicand_r <= {{`ysyx_220053_WIDTH{multiplicand[`ysyx_220053_COMPUTER_WIDTH]}},multiplicand[`ysyx_220053_COMPUTER_WIDTH],multiplicand};
            //68  
        end
        //shift left  << 2
        else if (running_r) begin
            multiplicand_r <= {multiplicand_r[`ysyx_220053_WIDTH*2-3:0],2'b0};//65:0->66
        end
    end
    //update multiplier_r
    always @(posedge clk) begin
        // lowest bit is 0
        if (ready_to_doing) begin
            multiplier_r <= {multiplier[`ysyx_220053_COMPUTER_WIDTH],multiplier,1'b0};//34+1
        end
        //shift right >> 2
        else if (running_r) begin 
            multiplier_r <= {2'b0,multiplier_r[`ysyx_220053_WIDTH:2]};
        end
    end

    assign calculate_done = running_r && (cnt == 7'h10 ||multiplier_r[`ysyx_220053_WIDTH:0] == {{`ysyx_220053_WIDTH{1'b0}},1'b0});//34 == 34
   
    wire partial_cout;
    ysyx_220053_booth_partial  booth_partial   (
        .x_src  (multiplicand_r),
        .y_src   (multiplier_r[2:0]),
        .p_result (p_result),
        .cout      (partial_cout)
    );
//33 32 31
//7 6 5 4 3 2 1 0 -1
    // `ysyx_220053_WIDTH*2-bit adder
    wire [`ysyx_220053_WIDTH*2-1:0] adder_a;
    wire [`ysyx_220053_WIDTH*2-1:0] adder_b;
    wire               adder_cin;
    wire [`ysyx_220053_WIDTH*2-1:0] adder_result;
    wire        adder_cout;

    assign adder_a   = p_result;
    assign adder_b   = tem_result;
    assign adder_cin = partial_cout;
    assign {adder_cout, adder_result} = adder_a + adder_b + {{`ysyx_220053_WIDTH*2-1{1'b0}},adder_cin};

    // Temporary Results or Final Results
    always @(posedge clk) begin
        if (ready_to_doing) begin
            tem_result <= {`ysyx_220053_WIDTH*2{1'b0}};
        end
        else if (running_r) begin
        tem_result <= adder_result;
        end
    end
    assign result = tem_result[127:0];

endmodule
