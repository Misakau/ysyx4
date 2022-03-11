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
    output reg [63:0] imm,
    output reg wen
);
    assign op = instr_i[6:0];
    assign rd = instr_i[11:7];
    assign func3 = instr_i[14:12];
    assign rs1 = instr_i[19:15];
    assign rs2 = instr_i[24:20];
    assign func7 = instr_i[31:25];
    reg [2:0] ExtOp;

    always @(*) begin
		case(ExtOp)
			0: begin // I-type
				imm = {{52{instr_i[31]}}, instr_i[31:20]};                               		
			end
			1: begin // U-type
				imm = {{32{instr_i[31]}},instr_i[31:12], 12'b0};
			end
			2: begin // S-type
				imm = {{52{instr_i[31]}}, instr_i[31:25], instr_i[11:7]};                  
			end
			3: begin // B-type
				imm = {{52{instr_i[31]}}, instr_i[7], instr_i[30:25], instr_i[11:8],1'b0};   
			end
			4: begin // J-type
				imm = {{44{instr_i[31]}}, instr_i[19:12], instr_i[20], instr_i[30:21],1'b0}; 
			end
			5: begin // R-type
				imm = 0;
			end
		endcase
	end

    //controler
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
             		case(my)
             			1: begin ExtOp = 0; wen = 0; c_trap(1); end
             			default: $display("no");
             		endcase
             	end
            default: $display("no");
        endcase
    end

    

endmodule
