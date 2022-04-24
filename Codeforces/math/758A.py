#!/usr/bin/python3
n = int(input())
s = input().split()
l = []
c = 0

for a in range(len(s)):
	l.append(int(s[a]))

l.sort()
limite = len(l)-1
for a in range(limite):
	c += abs(l[limite] - l[a])
	
print(c)
'''
https://codeforces.com/problemset/problem/758/A
'''
