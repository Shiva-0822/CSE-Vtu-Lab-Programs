`include "and.v"

module and_tb();

    reg a,b;
    wire out;

    and_gate G1 (a,b,out);
    initial
    begin

    $dumpfile("and_tb.vcd");
    $dumpvars(0, and_tb);

      a = 0; b = 0; #10;
      a = 0; b = 1; #10;
      a = 1; b = 0; #10;
      a = 1; b = 1; #10;
    end
    
endmodule