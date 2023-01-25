# @author : Anirudh Sathish 

# CSES Problem link : https://cses.fi/problemset/task/1621/

""" You are given a list of n integers, and your task is 
to calculate the number of distinct values in the list """
number = int(input())

list_1 = []
for i in range(0,number):
    value = int(input())
    list_1.append(value)

values = set(list_1)
length = len(values)

print(length)