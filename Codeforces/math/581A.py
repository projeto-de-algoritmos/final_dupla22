#!/usr/bin/python3

s = input().split()

a = int(s[0])
b = int(s[1])
r1 = 0
r2 = 0
if a >= b :
	r1 = b
	r2 = abs(a-b)//2
else:
	r1 = a
	r2 = abs(b-a)//2
	
print(r1,r2) 
'''
https://codeforces.com/problemset/problem/581/A
'''
