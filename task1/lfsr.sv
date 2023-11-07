module lfsr #(
    parameter   DATA_WIDTH = 7
)(
    input logic rst,
    input logic en,
    input logic clk,

    output logic [DATA_WIDTH - 1: 0] data_out
);

logic [DATA_WIDTH - 1: 0] sreg;

always_ff @( posedge clk ) begin
    if (rst) sreg <= {0,0,0,1};
    else if (en) begin
        sreg[0] <= sreg[2] ^ sreg[6];
        sreg[DATA_WIDTH - 1: 1] <=  sreg[DATA_WIDTH - 1: 0];
    end
    assign data_out = sreg;
end

endmodule
