"""
Write a Python program to compute following operations on
String:
a) To display word with the longest length
b) To determines the frequency of occurrence of particular character in the string
c) To check whether given string is palindrome or not
d) To display index of first appearance of the substring
e) To count the occurrences of each word in a given string
"""

my_str = input("Enter the string: ")

def get_key(dic,val):
    for key,value in dic.items():
        if val == value:
            return key
    return key

str_dict = {}

def longest_length(my_str):
    for i in my_str.split():
        str_dict[i] = len(i)

    lis = str_dict.values()
    maximum = max(lis)
    print("The word with longest length is: ",get_key(str_dict,maximum))

def palindrome(my_str):
    if my_str == my_str[::-1]:
        print("The given string is Palindrome")

    else:
        print("Not a Palindrome")

longest_length(my_str)
palindrome(my_str)

def max_occurance(my_str, char):
    count = 0
    if char in  my_str:
        for i in my_str:
            if char == i:
                count+=1

    else:
        print("Character not present")

    return count

character = input("Enter the character: ")
a = max_occurance(my_str, character)
print(a)

def find_substr(my_str,substr):
    
    if substr in my_str:
        a = my_str.find(substr)
    else:
        print("Substring not present")

    return a
sub = input("Enter The substring: ")
b = find_substr(my_str,sub)
print(b)

def word_count(my_str):
    dic = {}
    for i in my_str.split():
        if i in dic:
            dic[i] += 1
        else:
            dic[i] = 1

    for key,value in dic.items():
        print("Word: "+key+ " has " +str(value)+ " occurances")

word_count(my_str)
