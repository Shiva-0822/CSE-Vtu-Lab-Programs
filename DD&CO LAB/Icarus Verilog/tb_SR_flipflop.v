module tb_SR_flipflop;
    reg S, R, CLK;
    wire Q, Q_bar;

    // Instantiate the SR flip-flop
    SR_flipflop uut (
        .S(S),
        .R(R),
        .CLK(CLK),
        .Q(Q),
        .Q_bar(Q_bar)
    );

    // Clock generation
    always #5 CLK = ~CLK;

    initial begin
        // Initialize inputs
        S = 0; R = 0; CLK = 0;

        // Apply test vectors
        #10 S = 1; R = 0; // Set
        #10 S = 0; R = 1; // Reset
        #10 S = 1; R = 1; // Undefined state
        #10 S = 0; R = 0; // No change

        // End simulation
        #10 $finish;
    end

    initial begin
        // Monitor signals
        $monitor("Time=%0t | S=%b | R=%b | CLK=%b | Q=%b | Q_bar=%b", $time, S, R, CLK, Q, Q_bar);
    end

    // Generate VCD file
    initial begin
        $dumpfile("sr_flipflop.vcd");
        $dumpvars(0, tb_SR_flipflop);
    end
endmodule
