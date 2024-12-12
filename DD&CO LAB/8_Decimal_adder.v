module decimal_adder(a,b,carry_in,sum,carry); 
input [3:0] a,b; 
input carry_in; 
output [3:0] sum; 
output carry; 
reg [4:0] sum_temp; 
reg [3:0] sum; 
reg carry; 
always @(a,b,carry_in) 
begin 
sum_temp = a+b+carry_in; //add all the inputs 
if(sum_temp> 9) begin 
sum_temp = sum_temp+6; //add 6, if result is more than 9. 
carry = 1; //set the carry output 
sum = sum_temp[3:0]; 
end 
else begin 
carry = 0; 
sum = sum_temp[3:0]; 
end 
end 
endmodule