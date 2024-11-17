#Develop a python program to convert binary to decimal, octal to hexadecimal using functions.

def bin2Dec(val):
    return int(val, 2)
    
def oct2Hex(val):
    return hex(int(val, 8))

try:
    num1 = input("Enter a binary number: ")    
    print(bin2Dec(num1))
except ValueError:
    print("Invalid literal in input with base 2")
    
try:
    num2 = input("Enter an octal number: ")
    print(oct2Hex(num2))
except ValueError:
    print("Invalid literal in input with base 8")