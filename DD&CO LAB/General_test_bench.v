module <module_name>_tb;

    // Declare registers and wires
    reg <input1>;
    reg <input2>;
    // Add more inputs as required
    wire <output1>;
    // Add more outputs as required

    // Instantiate the module under test (UUT)
    <module_name> uut (
        .<input1>(<input1>),
        .<input2>(<input2>),
        // Connect all inputs and outputs
        .<output1>(<output1>)
        // Connect all outputs
    );

    initial begin
        // Initialize inputs
        <input1> = 0;
        <input2> = 0;
        // Initialize all other inputs
        
        // Apply test cases
        #10 <input1> = 1; <input2> = 0;
        #10 <input1> = 0; <input2> = 1;
        #10 <input1> = 1; <input2> = 1;
        // Add more test cases as required

        // Finish simulation
        #100 $finish;
    end

    initial begin
        // Display the outputs during simulation
        $monitor("Time: %0t | <input1> = %b | <input2> = %b | <output1> = %b", $time, <input1>, <input2>, <output1>);
        // Add more variables to monitor if needed
    end

endmodule
