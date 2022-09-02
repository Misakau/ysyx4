/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNUSED */

module ysyx_220053_IFU(
    input clk,
    input rst,
    input dnpc_valid, block,
    input [63:0] dnpc,
    output reg [63:0] pc,
    output [31:0] instr_o,
    output if_busy,
    
    output [63:0] i_rw_addr_o,
    output i_rw_req_o,
    output i_rw_valid_o,
    input  [127:0] i_data_read_i,
    input  i_rw_ready_i,
    input  id_en_i
);  
    wire cache_idle;
    reg [31:0] instr_read_r;
    //wire [63:0] now_pc, rdata, snpc;
    //assign pc = (block == 1'b1 | dnpc_valid == 1'b0) ? now_pc : valid_dnpc;
    //assign snpc = now_pc + 4;
    //always@(*) begin  pmem_read(pc, rdata, 4); end
    always@(*) begin get_instr(instr_o); end
    assign instr_o = instr_read_r;//(pc[2] == 0) ? rdata[31:0] : rdata[63:32];
   // wire [63:0] valid_dnpc = (dnpc_valid == 1'b0) ? snpc : dnpc;
    wire pcen = ~block & dnpc_valid;

    always @(posedge clk)begin
        if(rst) begin
            pc <= 64'h80000000;
        end
        else if(pcen) begin
            pc <= dnpc;
        end
    end
    //ysyx_220053_Reg #(64, 64'h80000000) PC(.clk(clk), .rst(rst), valid_dnpc, pc, pcen);
    //未取到：取指令
    //取到了：不取
    wire i_cpu_ready;
    wire cpu_req_valid;
    reg old_instr, cache_doing;
    wire [63:0] cpu_data_read;
    always @(posedge clk) begin
        if (rst || id_en_i) begin
            old_instr <= 1'b0;
        end
        else if(i_cpu_ready && !id_en_i) begin
            old_instr <= 1'b1;
        end
    end
    /*
    always @(posedge clk) begin
        if(rst) begin
            cpu_req_valid <= 1'b1;
        end
        else if(dnpc_valid && !old_instr) cpu_req_valid <= 1'b1;
        else cpu_req_valid <= 1'b0;
    end
*/
    reg start;
    always @(posedge clk)begin
        if(rst) begin
            start <= 1'b1;
        end
        else start <= 1'b0;
    end
    always @(posedge clk) begin
        if(rst) begin
            cache_doing <= 1'b0;
            instr_read_r <= 0;
        end
        else if(i_cpu_ready) begin
            cache_doing <= 1'b0;
            instr_read_r <= (pc[2]) ? cpu_data_read[63:32] : cpu_data_read[31:0];
        end
        else if(cpu_req_valid && cache_idle) begin
            cache_doing <= 1'b1;
        end
    end
    assign cpu_req_valid = (start | dnpc_valid) && !cache_doing && !i_cpu_ready && !old_instr;
    assign if_busy = (dnpc_valid && !i_cpu_ready && !old_instr);
/*
    always @(posedge clk) begin
        if(rst) begin
            inst_valid_o <= 1'b0;
            instr_read_r <= 0;
        end
        else if(i_cpu_ready)begin
            inst_valid_o <= 1'b1;
            instr_read_r <= (pc[2]) ? cpu_data_read[63:32] : cpu_data_read[31:0];
        end
        else if(~id_en_i) inst_valid_o <= inst_valid_o;
        else inst_valid_o <= 1'b0;
    end
*/
    ysyx_220053_icache icache(
         clk,rst,
        //cpu<->cache
         pc,1'b0,cpu_req_valid,cpu_data_read,i_cpu_ready,cache_idle,
         //cache<->memory
         i_rw_addr_o, i_rw_req_o,i_rw_valid_o,i_data_read_i,i_rw_ready_i
    );
    //assign rdata = cpu_data_read_r;
endmodule
