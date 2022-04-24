#!/usr/bin/python3
s = input().split()
h = int(s[1])
n = int(s[0])
s = input().split()
total = 0
for a in range(len(s)):
	if int(s[a]) > h:
		total += 2
	else:
		total += 1
print(total)

'''
https://codeforces.com/contest/677/problem/A
'''
