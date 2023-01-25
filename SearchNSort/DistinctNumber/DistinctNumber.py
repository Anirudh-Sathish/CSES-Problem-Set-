# @author : Anirudh Sathish 

# CSES Problem link : https://cses.fi/problemset/task/1621/

""" You are given a list of n integers, and your task is 
to calculate the number of distinct values in the list """

# Currently not a fixed solution 

number = int(input())

list_1 = []
string1 = input()
for s in string1:
    num = int(s)
    list_1.append(num)

values = set(list_1)
length = len(values)

print(length)