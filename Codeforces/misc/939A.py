#!/usr/bin/python3

n = int(input())
total = 0

for a in range(1,n):
	if n % a == 0:
		total += 1

print(total)

'''
https://codeforces.com/problemset/problem/935/A
'''
