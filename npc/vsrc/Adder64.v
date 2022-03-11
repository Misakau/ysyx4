/* verilator lint_off DECLFILENAME */
/* verilator lint_off PINMISSING */
/* verilator lint_off UNUSED */
module ysyx_220053_Adder64(
    output [63:0] result,
    output cout,
    input [63:0] x,y,
    input sub
);
    wire [31:0] res_l, res_h;
    wire c_l;
    ysyx_220053_Adder32 adder_low(res_l, c_l, x[31:0], y[31:0], sub);
    ysyx_220053_Adder32 adder_high(res_h, cout, x[63:32], y[63:32], c_l);
    assign result = {res_h, res_l};
endmodule

module ysyx_220053_FA(
    output f,cout,
    input x,y,cin
);
    assign f= x ^ y ^ cin;
    assign cout= (x & y) | (x & cin) | (y & cin);
endmodule

module ysyx_220053_CLU4(
    input [3:0] p,g,
    input c0,
    output [3:0] c
);
    wire c1,c2,c3,c4;
    assign c1=g[0] | (p[0] & c0);
    assign c2=g[1] | (p[1] & c1);
    assign c3=g[2] | (p[2] & c2);
    assign c4=g[3] | (p[3] & c3);
    assign c = {c4,c3,c2,c1};
endmodule

module ysyx_220053_CLA4(
    output [3:0] f,
    output cout,
    input [3:0] x,y,
    input cin
);
    wire [4:1] p,g;
    wire [4:1] c;
    assign p=x|y;
    assign g=x&y;
    ysyx_220053_CLU4 gen(
        .c0(cin),
        .p(p),
        .g(g),
        .c(c)
    );
    genvar i;
    ysyx_220053_FA adder(
        .x(x[0]),
        .y(y[0]),
        .cin(cin),
        .f(f[0])
    );
    generate
        for (i=1;i<=3;i=i+1) begin
            ysyx_220053_FA adder(
                .x(x[i]),
                .y(y[i]),
                .cin(c[i]),
                .f(f[i])
            );
        end
    endgenerate
    assign cout = c[4];
endmodule

module ysyx_220053_CLA8(
    output [7:0] f,
    output cout,
    input [7:0] x,y,
    input cin
);
    wire cin2;
    wire [3:0] p,g;
    assign p=x[3:0] | y[3:0];
    assign g=x[3:0] & y[3:0];
    assign cin2=g[3] | (p[3]&g[2]) | (p[3]&p[2]&g[1]) | (p[3]&p[2]&p[1]&g[0]) | (p[3]&p[2]&p[1]&p[0]&cin);
    ysyx_220053_CLA4 adder_low(
        .x(x[3:0]),
        .y(y[3:0]),
        .cin(cin),
        .f(f[3:0])
    );
    ysyx_220053_CLA4 adder_high(
        .x(x[7:4]),
        .y(y[7:4]),
        .cin(cin2),
        .f(f[7:4]),
        .cout(cout)
    );
endmodule


module ysyx_220053_Adder32(
    output [31:0] result,
    output cout,
    input [31:0] x,
    input [31:0] y,
    input sub
);

    //parameter t=32;
    wire [3:0] Gg,Pg;
    wire [7:0] p[3:0],g[3:0];
    wire [4:0] c;
    wire [3:0] cout_temp;
    genvar i;
    generate
        for (i=0;i<=3;i=i+1) begin
            assign p[i]=x[i*8+7:i*8] | y[i*8+7:i*8];
            assign g[i]=x[i*8+7:i*8] & y[i*8+7:i*8];
            assign Pg[i] = (p[i]==8'hff ? 1 : 0);
            assign Gg[i] = g[i][7] | (p[i][7] & g[i][6]) | (p[i][7] & p[i][6] & g[i][5]) | (p[i][7] & p[i][6] & p[i][5] & g[i][4]) 
            | (p[i][7] & p[i][6] & p[i][5] & p[i][4] & g[i][3]) | (p[i][7] & p[i][6] & p[i][5] & p[i][4] & p[i][3] & g[i][2]) | 
            (p[i][7] & p[i][6] & p[i][5] & p[i][4] & p[i][3] & p[i][2] & g[i][1]) | (p[i][7] & p[i][6] & p[i][5] & p[i][4] & p[i][3] & p[i][2] & p[i][1] & p[i][0] & g[i][0]);
        end
    endgenerate
    ysyx_220053_CLU4 gen(
        .p(Pg),
        .g(Gg),
        .c0(sub),
        .c(c[4:1])
    );
    assign c[0]=sub;
    wire [7:0] ff[3:0];
    generate
        for (i=0;i<=3;i=i+1) begin
            ysyx_220053_CLA8 adder8(
                .x(x[i*8+7:i*8]),
                .y(y[i*8+7:i*8]),
                .cin(c[i]),
                .cout(cout_temp[i]),
                .f(ff[i])
            );
        end
    endgenerate

    assign result = {ff[3], ff[2], ff[1], ff[0]};
    assign cout = cout_temp[3];
endmodule
