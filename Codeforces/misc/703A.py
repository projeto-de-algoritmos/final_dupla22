#!/usr/bin/python3
n = int(input())
m=0
c=0
for a in range(n):
	s = input().split()
	if min(int(s[0]),int(s[1])) == int(s[0]):
		c+=1
	if min(int(s[0]),int(s[1])) == int(s[1]):
		m+=1
	
		
if m > c:
	print("Mishka")
if m < c:
	print("Chris")
if m == c:
	print("Friendship is magic!^^")

'''
https://codeforces.com/problemset/problem/703/A
'''
