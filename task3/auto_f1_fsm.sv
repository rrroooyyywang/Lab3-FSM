module auto_f1_fsm(
    input logic [15: 0] N,
    input logic en,
    input logic rst,
    input logic clk,

    output logic [7: 0] data_out
);

logic tick;

clktick clktick_(
    .N (N),
    .en (en),
    .rst (rst),
    .clk (clk),
    .tick (tick)
);

f1_fsm f1_fsm_(
    .rst (rst),
    .en (tick),
    .clk (clk),
    .data_out (data_out)
);

endmodule
