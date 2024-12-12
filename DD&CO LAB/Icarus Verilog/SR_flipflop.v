module SR_flipflop(
    input S,
    input R,
    input CLK,
    output reg Q,
    output Q_bar
);

always @(posedge CLK)
begin
    if (S && !R)
        Q <= 1;
    else if (!S && R)
        Q <= 0;
    else if (S && R)
        Q <= 1'bx; // undefined state
    // if both S and R are 0, Q remains unchanged
end

assign Q_bar = ~Q;

endmodule
