/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNUSED */
/* verilator lint_off PINMISSING */
module ysyx_220053_Mem(
    input [2:0] MemOp,
    input [63:0] raddr, wdata,
    input MemWen,
    output reg [63:0] rdata
);
    wire [63:0] dataout;
    reg [7:0] wmask;
    
    always@(*) begin
        case(MemOp[1:0])
            2'b00: wmask = 8'b00001111;
            2'b01: wmask = 8'b00000001;
            2'b10: wmask = 8'b00000011;
            default: wmask = 8'b11111111;
        endcase
    end

    always @(*) begin
        pmem_read(raddr, dataout);
        if(MemWen == 1'b1) pmem_write(raddr, wdata, wmask);
    end
    reg [63:0] datad;
    reg [31:0] dataw;
    reg [15:0] datah;
    reg [7:0]  datab;
    integer i,tmp;
    
    always @(*) begin
        tmp = {{29{1'b0}},raddr[2:0]};
        case(MemOp[1:0])
            2'b00: begin
                    for (i = 0; i <= 31; i = i + 1) begin
                        dataw[i] = dataout[tmp + i];
                    end
                end
            2'b01: begin
                    for (i = 0; i <= 7; i = i + 1) begin
                        datab[i] = dataout[tmp + i];
                    end
                end
            2'b10: begin
                    for (i = 0; i <= 16; i = i + 1) begin
                        datah[i] = dataout[tmp + i];
                    end
                end
            default: datad = dataout;
        endcase
    end
    always@(*) begin
        case(MemOp)
            3'b000: rdata = {{32{dataout[63]}},dataw};
            3'b001: rdata = {{56{dataout[63]}},datab};
            3'b010: rdata = {{48{dataout[63]}},datah};
            3'b011: rdata = datad;
            3'b100: rdata = {{32{1'b0}},dataw};
            3'b101: rdata = {{56{1'b0}},datab};
            3'b110: rdata = {{48{1'b0}},datah};
            default: rdata = 0;
        endcase
    end
endmodule
