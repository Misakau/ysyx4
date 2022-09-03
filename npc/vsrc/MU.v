/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNUSED */
/* verilator lint_off PINMISSING */
module ysyx_220053_MU(
    input clk, rst,
    input [2:0] MemOp,
    input MemToReg,//1->load, 0-> not load or not valid
    input MemWen,//1->save, 0-> not save or not valid
    input CsrToReg,
    input [63:0] raddr,//load指令的读取地址，save指令的waddr，其他指令的ALURes
    input [63:0] wdata,
    input [63:0] csrres,
    output [63:0] rfdata,
    output m_busy,
    output [63:0]     d_rw_addr_o,
    output            d_rw_req_o,//
    output            d_rw_valid_o,
    output [127:0]    d_rw_w_data_o,
    input  [127:0]    d_data_read_i,//finish burst
    input             d_rw_ready_i
);
    wire vis_mem = MemToReg | MemWen;
    wire req_rw  = ~MemToReg;
    wire [63:0] mdata, regsin;
    ysyx_220053_Mem mem(.clk(~clk), .MemOp(MemOp), .raddr(raddr), .MemWen(MemWen),.req_rw(req_rw), .wdata(wdata), .rdata(mdata), .vis_mem(vis_mem)
        ,.m_busy(m_busy), .d_rw_addr_o(d_rw_addr_o), .d_rw_req_o(d_rw_req_o), .d_rw_valid_o(d_rw_valid_o), .d_rw_w_data_o(d_rw_w_data_o),
        .d_data_read_i(d_data_read_i), .d_rw_ready_i(d_rw_ready_i)
    );//M
    
    assign regsin = (MemToReg == 1'b0) ? raddr : mdata;//WB
    assign rfdata = (CsrToReg == 1'b0) ? regsin : csrres;//WB
endmodule
