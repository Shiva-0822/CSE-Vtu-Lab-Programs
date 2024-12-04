#1.a) Write a python program to find the best
#of two test average marks out of three test’s marks accepted from the user.

m1 = int(input("Enter marks for test1 : "))
m2 = int(input("Enter marks for test2 : "))
m3 = int(input("Enter marks for test3 : "))
if m1 <= m2 and m1 <= m3:
    avgMarks = (m2 + m3) / 2
elif m2 <= m1 and m2 <= m3:
    avgMarks = (m1 + m3) / 2
elif m3 <= m1 and m2 <= m2:
    avgMarks = (m1 + m2) / 2
print("Average of best two test marks out of three test’s marks is", avgMarks)