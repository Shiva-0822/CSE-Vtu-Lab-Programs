#Write a Python program to find the string similarity between two given strings.

str1 = input("Enter String 1 \n").lower()
str2 = input("Enter String 2 \n").lower()
# if len(str2) < len(str1):
#     short = len(str2)
#     long = len(str1)
# else:
#     short = len(str1)
#     long = len(str2)
string_1_length = len(str1)
string_2_length = len(str2)
short_string_length, long_string_length = min(string_1_length, string_2_length), max(string_1_length, string_2_length) 
match_count = 0
for i in range(short_string_length):
    if str1[i] == str2[i]:
        match_count += 1
print("Similarity between two said strings:")
print(match_count/long_string_length)