/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNUSED */
/* verilator lint_off UNDRIVEN */

import "DPI-C" function bool c_trap (output bool done);

module ysyx_220053_IDU(
    input  [31:0] instr_i,
    output [6:0]  op,
    output [4:0]  rd,
    output [4:0]  rs1,
    output [4:0]  rs2,
    output [2:0]  func3,
    output [6:0]  func7,
    output [63:0] immI,
    output [63:0] immS,
    output [63:0] immJ,
    output [63:0] immB,
    output reg wen
);
    assign op = instr_i[6:0];
    assign rd = instr_i[11:7];
    assign func3 = instr_i[14:12];
    assign rs1 = instr_i[19:15];
    assign rs2 = instr_i[24:20];
    assign func7 = instr_i[31:25];
    
    //controler
    always @(*) begin
        case(op)
            7'b0010011:
                begin
                    //wen = 1;
                    case(func3)
                        3'b000: begin wen = 1; end
                        default: $display("no");
                    endcase
                end
             7'b1110011:
             	begin
             		case(immI)
             			1: begin c_trap(1); end
             			default: $display("no");
             		endcase
             	end
            default: $display("no");
        endcase
    end

    //I
    assign immI = { {52{instr_i[31]}}, instr_i[31:20] };

    //R

    //S
    
    //J
    
    //B

endmodule
