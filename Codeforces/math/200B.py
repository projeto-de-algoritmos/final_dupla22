#!/usr/bin/python3

n = int(input())
s = input().split()
c = 0
for a in range(len(s)):
	c += int(s[a])

print(c/n)

'''
https://codeforces.com/problemset/problem/200/B
'''
