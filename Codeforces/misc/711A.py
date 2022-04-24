#!/usr/bin/python3
l = []
flag = 0
n = int(input())
for a in range(n):
	s = input()
	if s.count("OO") and flag == 0:
		s = s.replace("OO","++",1)
		flag = 2
	l.append(s)
 
if flag:
	print("YES")
	for a in range(len(l)):
		print(l[a])
else:
	print("NO")
	
'''
https://codeforces.com/problemset/problem/711/A
'''
