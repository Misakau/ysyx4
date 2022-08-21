/* verilator lint_off DECLFILENAME */
/* verilator lint_off PINMISSING */
/* verilator lint_off UNUSED */

`define ysyx_220053_XLEN 64
`define ysyx_220053_XXLEN 128

module ysyx_220053_divu(
    input clk,
    input rst,
    input [`ysyx_220053_XLEN - 1:0] dividend,
    input [`ysyx_220053_XLEN - 1:0] divisor,
    input div_valid,
    input div_signed,
    input flush,
    output div_ready,
    output out_valid,
    output [`ysyx_220053_XLEN - 1:0] quotient,
    output [`ysyx_220053_XLEN - 1:0] remainder
);
    reg running_r;
    reg ready_r, valid_r;
    reg [6:0] cnt;
    reg [`ysyx_220053_XXLEN - 1:0] udividend_r;
    reg [`ysyx_220053_XLEN - 1:0] udivisor_r, quotient_r, remainder_r;
    reg dividend_s, divisor_s;
    wire [`ysyx_220053_XLEN - 1:0] dividend_abs, divisor_abs;
    wire [`ysyx_220053_XLEN - 1 : 0] sub;
    wire sub_s;

//abs
    wire dividend_abs = ~dividend + `ysyx_220053_XLEN'b1;
    wire divisor_abs  = ~divisor  + `ysyx_220053_XLEN'b1;

//status
    wire ready_to_doing = ready_r && div_valid;
    wire doing_to_done  =  calculate_done;
    wire done_to_ready  = valid_r;
    wire calculate_done = running_r &&  cnt == 7'h40;
    always @(posedge clk) begin
        if (rst || flush  || done_to_ready) begin
            ready_r <= 1'b1;
        end
        else if (ready_to_doing) begin
            ready_r <= 1'b0;
        end 
    end

    always @(posedge clk) begin
        if (rst || flush || doing_to_done ) begin
            running_r <= 1'b0;
        end
        else if (ready_to_doing) begin
            running_r <= 1'b1;
        end 
    end

    always @(posedge clk) begin
        if (rst || flush || done_to_ready ) begin
            valid_r <= 1'b0;
        end
        else if (doing_to_done) begin
            valid_r <= 1'b1;
        end 
    end

//sign
    always @(posedge clk)begin
        if (rst || flush) begin
            dividend_s <= 1'b0;
            divisor_s  <= 1'b0;
        end
        else if(ready_to_doing) begin
            dividend_s <= div_signed & dividend[`ysyx_220053_XLEN - 1];
            divisor_s  <= div_signed & divisor[`ysyx_220053_XLEN - 1];
        end
    end

//cnt
    always @(posedge clk) begin
        if(rst || flush || done_to_ready) begin
            cnt <= 7'b0;
        end
        else if(running_r) begin
            cnt <= cnt + 1'b1;
        end
    end

//calculate
    always @(posedge clk) begin
        if(ready_to_doing) begin
            udividend_r <= div_signed & dividend[`ysyx_220053_XLEN - 1] ? {`ysyx_220053_XLEN'b0, dividend_abs} : {`ysyx_220053_XLEN'b0, dividend};
            udivisor_r  <= div_signed & divisor[`ysyx_220053_XLEN - 1]  ? divisor_abs : divisor;
        end
        else if(running_r) begin
            udividend_r <= sub_s ? {udividend_r[`ysyx_220053_XXLEN - 2 : 0],1'b0} : {sub[`ysyx_220053_XLEN - 2:0], udividend_r[`ysyx_220053_XLEN - 2 : 0], 1'b0};
        end
    end 

    adder_XLEN1 suber(.src1(udividend_r[`ysyx_220053_XXLEN - 1: `ysyx_220053_XLEN - 1]),
                      .src2({1'b1,~udivisor_r}),
                      .cin(1'b1),
                      .cout(sub_s),
                      .result(sub)
                      );

    always @(posedge clk) begin
        if(rst || flush || ready_to_doing) begin
            remainder_r <= `ysyx_220053_XLEN'b0;
            quotient_r  <= `ysyx_220053_XLEN'b0;
        end
        else if(calculate_done) begin
            remainder_r <= udividend_r[`ysyx_220053_XXLEN - 1: `ysyx_220053_XLEN]; 
            quotient_r  <= quotient_r;
        end
        else if(running_r) begin
            quotient_r <= {quotient_r[`ysyx_220053_XLEN - 2 : 0], ~sub_s};
        end 
    end
//correct
    assign quotient = dividend_s ^ divisor_s ? ~quotient_r + `ysyx_220053_XLEN'b1 : quotient_r;
    assign remainder = dividend_s ? ~remainder_r + `ysyx_220053_XLEN'b1 : remainder_r;
    assign div_ready = ready_r;
    assign out_valid = valid_r;
endmodule

module adder_XLEN1 (
    input [`ysyx_220053_XLEN:0] src1,
    input [`ysyx_220053_XLEN:0] src2,
    input cin,
    output cout,
    output [`ysyx_220053_XLEN - 1:0] result
);
assign {cout, result} = src1 + src2 + {`ysyx_220053_XLEN'b0,cin};
endmodule
