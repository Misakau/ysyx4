/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNUSED */
/* verilator lint_off UNDRIVEN */

import "DPI-C" function void c_trap(input bit done);

module ysyx_220053_IDU(
    input  [31:0] instr_i,
    output [6:0]  op,
    output [4:0]  rd,
    output [4:0]  rs1,
    output [4:0]  rs2,
    output [2:0]  func3,
    output [6:0]  func7,
    output [63:0] imm,
    output reg wen
);
    assign op = instr_i[6:0];
    assign rd = instr_i[11:7];
    assign func3 = instr_i[14:12];
    assign rs1 = instr_i[19:15];
    assign rs2 = instr_i[24:20];
    assign func7 = instr_i[31:25];
    wire [2:0] ExtOp;
    wire [63:0] my_imm;
    ysyx_220053_InstrToImm insttoimm(instr_i, ExtOp, imm);
    //controler
    ysyx_220053_controler control(instr_i, op, func3, ExtOp, wen);

    

endmodule

module ysyx_220053_controler(
    input [31:0] instr_i,
    input [6:0] op,
    input [2:0] func3,
    output reg [2:0] ExtOp,
    output reg wen
);
    always @(*) begin
        case(op)
            7'b0010011:
                begin
                    //wen = 1;
                    case(func3)
                        3'b000: begin ExtOp = 0; wen = 1; end
                        default: $display("no");
                    endcase
                end
             7'b1110011:
             	begin
             		case(instr_i[31:20])
             			1: begin ExtOp = 0; wen = 0; c_trap(1); end
             			default: $display("no");
             		endcase
             	end
            default: $display("no");
        endcase
    end

endmodule
