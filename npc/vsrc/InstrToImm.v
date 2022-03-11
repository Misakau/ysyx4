/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNUSED */
module ysyx_220053_InstrToImm(
	input [31:0] instr,
    input [2:0] ExtOp,
    output reg [63:0] imm,
);
	always @(*) begin
		case(ExtOp)
			0: begin // I-type
				imm = {{52{instr[31]}}, instr[31:20]};                               		
			end
			1: begin // U-type
				imm = {{32{instr[31]}},instr[31:12], 12'b0};
			end
			2: begin // S-type
				imm = {{52{instr[31]}}, instr[31:25], instr[11:7]};                  
			end
			3: begin // B-type
				imm = {{52{instr[31]}}, instr[7], instr[30:25], instr[11:8],1'b0};   
			end
			4: begin // J-type
				imm = {{44{instr[31]}}, instr[19:12], instr[20], instr[30:21],1'b0}; 
			end
			5: begin // R-type
				imm = 0;
			end
		endcase
	end
endmodule
