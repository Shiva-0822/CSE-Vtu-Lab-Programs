module and_gate_tb;
    reg A, B;
    wire Y;

    and_gate uut (.A(A), .B(B), .Y(Y));

    initial begin
        $monitor("Time: %0t | A = %b | B = %b | Y = %b", $time, A, B, Y);
        A = 0; B = 0; #10;
        A = 0; B = 1; #10;
        A = 1; B = 0; #10;
        A = 1; B = 1; #10;
        $finish;
    end
endmodule

module or_gate_tb;
    reg A, B;
    wire Y;

    or_gate uut (.A(A), .B(B), .Y(Y));

    initial begin
        $monitor("Time: %0t | A = %b | B = %b | Y = %b", $time, A, B, Y);
        A = 0; B = 0; #10;
        A = 0; B = 1; #10;
        A = 1; B = 0; #10;
        A = 1; B = 1; #10;
        $finish;
    end
endmodule

module not_gate_tb;
    reg A;
    wire Y;

    not_gate uut (.A(A), .Y(Y));

    initial begin
        $monitor("Time: %0t | A = %b | Y = %b", $time, A, Y);
        A = 0; #10;
        A = 1; #10;
        $finish;
    end
endmodule

module nand_gate_tb;
    reg A, B;
    wire Y;

    nand_gate uut (.A(A), .B(B), .Y(Y));

    initial begin
        $monitor("Time: %0t | A = %b | B = %b | Y = %b", $time, A, B, Y);
        A = 0; B = 0; #10;
        A = 0; B = 1; #10;
        A = 1; B = 0; #10;
        A = 1; B = 1; #10;
        $finish;
    end
endmodule

module nor_gate_tb;
    reg A, B;
    wire Y;

    nor_gate uut (.A(A), .B(B), .Y(Y));

    initial begin
        $monitor("Time: %0t | A = %b | B = %b | Y = %b", $time, A, B, Y);
        A = 0; B = 0; #10;
        A = 0; B = 1; #10;
        A = 1; B = 0; #10;
        A = 1; B = 1; #10;
        $finish;
    end
endmodule

module xor_gate_tb;
    reg A, B;
    wire Y;

    xor_gate uut (.A(A), .B(B), .Y(Y));

    initial begin
        $monitor("Time: %0t | A = %b | B = %b | Y = %b", $time, A, B, Y);
        A = 0; B = 0; #10;
        A = 0; B = 1; #10;
        A = 1; B = 0; #10;
        A = 1; B = 1; #10;
        $finish;
    end
endmodule

module xnor_gate_tb;
    reg A, B;
    wire Y;

    xnor_gate uut (.A(A), .B(B), .Y(Y));

    initial begin
        $monitor("Time: %0t | A = %b | B = %b | Y = %b", $time, A, B, Y);
        A = 0; B = 0; #10;
        A = 0; B = 1; #10;
        A = 1; B = 0; #10;
        A = 1; B = 1; #10;
        $finish;
    end
endmodule
