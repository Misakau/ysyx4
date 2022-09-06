/* verilator lint_off DECLFILENAME */
/* verilator lint_off PINMISSING */
/* verilator lint_off UNUSED */

module ysyx_220053_arbiter(
    input clk,
    input rst,
//icache <-> arbiter
    input              i_acq,
    input  [63:0]      i_rw_addr_i,
    input              i_rw_req_i,//
    input              i_rw_valid_i,
    output [127:0]     i_data_read_o,//finish burst
    output reg         i_rw_ready_o,//data_read_i in ram
    input [7:0]        i_rw_size_o,
    input              i_rw_dev_o,
//dcache <-> arbiter
    input              d_acq,
    input  [63:0]      d_rw_addr_i,
    input              d_rw_req_i,//
    input              d_rw_valid_i,
    input  [127:0]     d_rw_w_data_i,
    output [127:0]     d_data_read_o,//finish burst
    output reg         d_rw_ready_o,//ready to give data or fetch data
    input [7:0]        d_rw_size_o,
    input              d_rw_dev_o,
//arbiter<->memory
    output reg [63:0]   rw_addr_o,
    output reg          rw_req_o,//
    output reg          rw_valid_o,
    output [127:0]      rw_w_data_o,
    input  [127:0]      data_read_i,//finish burst
    input               rw_ready_i,//data_read_i in ram
    output reg [7:0]    rw_size_o,
    output reg          rw_dev_o
);  
    //wire cache_valid =  d_rw_valid_i || i_rw_valid_i;
    parameter [1:0] IDLE = 2'b00, ICACHE = 2'b01, DCACHE = 2'b10;
    reg [1:0] cur_status, next_status;
    always @(posedge clk) begin
        if(rst) cur_status <= IDLE;
        else cur_status <= next_status;
    end

    always @(*) begin
        case (cur_status)
            IDLE: begin
                if(d_acq) next_status = DCACHE;
                else if(i_acq) next_status = ICACHE;
                else next_status = IDLE;
            end
            DCACHE: begin
                if(d_acq) next_status = DCACHE;
                else next_status = IDLE;
            end
            ICACHE: begin
                if(i_acq) next_status = ICACHE;
                else next_status = IDLE;
            end
            default: next_status = IDLE;
        endcase
    end

    always @(*) begin
        case (cur_status)
            DCACHE: begin
                rw_addr_o   = d_rw_addr_i;
                rw_req_o    = d_rw_req_i;
                rw_valid_o  = d_rw_valid_i;
                i_rw_ready_o = 1'b0;
                d_rw_ready_o = rw_ready_i;
                rw_size_o   = d_rw_size_o;
                rw_dev_o = d_rw_dev_o;
            end
            ICACHE: begin
                rw_addr_o    = i_rw_addr_i;
                rw_req_o     = i_rw_req_i;
                rw_valid_o   = i_rw_valid_i;
                i_rw_ready_o = rw_ready_i;
                d_rw_ready_o = 1'b0;
                rw_size_o   = i_rw_size_o;
                rw_dev_o = i_rw_dev_o;
            end
            default: begin
                rw_addr_o   = 0;
                rw_req_o    = 0;
                rw_valid_o  = 0;
                i_rw_ready_o = 1'b0;
                d_rw_ready_o = 1'b0;
                rw_size_o   = 0;
                rw_dev_o = 0;
            end
        endcase
    end
/*
    always @(posedge clk)begin
        if(rst) begin
            rw_addr_o   <= 0;
            rw_req_o    <= 0;
            rw_valid_o  <= 0;
        end
        else if(cur_status == IDLE) begin
            if(d_rw_valid_i) begin
                rw_addr_o   <= d_rw_addr_i;
                rw_req_o    <= d_rw_req_i;
                rw_valid_o  <= d_rw_valid_i;
            end
            else if(i_rw_valid_i) begin
                rw_addr_o   <= i_rw_addr_i;
                rw_req_o    <= i_rw_req_i;
                rw_valid_o  <= i_rw_valid_i;
            end
        end
        else if(cur_status == BUSY && rw_ready_i) begin
            rw_valid_o <= 1'b0;
        end
    end

    always @(*)begin
        if(d_rw_valid_i) begin
            i_rw_ready_o = 1'b0;
            d_rw_ready_o = rw_ready_i;
        end
        else if(i_rw_valid_i) begin
            i_rw_ready_o = rw_ready_i;
            d_rw_ready_o = 1'b0;
        end
        else begin
            i_rw_ready_o = 1'b0;
            d_rw_ready_o = 1'b0;
        end
    end
*/
    assign i_data_read_o = data_read_i;
    assign d_data_read_o = data_read_i;
    assign rw_w_data_o   = d_rw_w_data_i;

endmodule
