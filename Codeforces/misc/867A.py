#!/usr/bin/python3

n = int(input())
string = input()
s = string.count("SF")
f = string.count("FS")
r = "YES" if s > f else "NO" 
print(r)

'''
https://codeforces.com/problemset/problem/867/A
'''
