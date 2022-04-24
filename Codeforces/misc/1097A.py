#!/usr/bin/python3

l = []
s = input()
cards = input()
flag = 0
for a in cards.split():
	l.append(a)
	
for a in range(len(l)):
	if l[a].count(s[0]):
		flag = 1
	if l[a].count(s[1]):
		flag = 1

print("YES") if flag == True else print("NO")

'''
https://codeforces.com/contest/1097/problem/A
'''
