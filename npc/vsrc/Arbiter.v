/* verilator lint_off DECLFILENAME */
/* verilator lint_off PINMISSING */
/* verilator lint_off UNUSED */

module ysyx_220053_arbiter(
    input clk,
    input rst,
//icache <-> arbiter

    input  [63:0]      i_rw_addr_i,
    input              i_rw_req_i,//
    input              i_rw_valid_i,
    output [127:0]     i_data_read_o,//finish burst
    output reg         i_rw_ready_o,//data_read_i in ram

//dcache <-> arbiter

    input  [63:0]      d_rw_addr_i,
    input              d_rw_req_i,//
    input              d_rw_valid_i,
    input  [127:0]     d_rw_w_data_i,
    output [127:0]     d_data_read_o,//finish burst
    output reg         d_rw_ready_o,//ready to give data or fetch data

//arbiter<->memory
    output reg [63:0]   rw_addr_o,
    output reg          rw_req_o,//
    output reg          rw_valid_o,
    output [127:0]      rw_w_data_o,
    input  [127:0]      data_read_i,//finish burst
    input               rw_ready_i//data_read_i in ram
);  
    wire cache_valid =  d_rw_valid_i || i_rw_valid_i;
    parameter IDLE = 1'b0, BUSY = 1'b1;
    reg cur_status, next_status;
    always @(posedge clk) begin
        if(rst) cur_status <= IDLE;
        else cur_status <= next_status;
    end

    always @(*) begin
        case (cur_status)
            IDLE: begin
                if(cache_valid) next_status = BUSY;
                else next_status = IDLE;
            end
            BUSY: begin
                if(!rw_ready_i) next_status = BUSY;
                else next_status = IDLE;
            end
            default: next_status = IDLE;
        endcase
    end

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

    assign i_data_read_o = data_read_i;
    assign d_data_read_o = data_read_i;
    assign rw_w_data_o   = d_rw_w_data_i;

endmodule