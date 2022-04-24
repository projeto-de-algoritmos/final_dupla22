#!/usr/bin/python3
linha = input()
l = []
for a in linha.split():
	if a.isdigit():
		l.append(int(a))
l.sort(reverse=1)
a = l[0]
b = l[1]
c = l[2]
d = l[3]
l = []
x1 = abs(a-d)
x2 = abs(a-c)
x3 = abs(a-b)
print(x1,x2,x3)

'''
http://codeforces.com/problemset/problem/1154/A
'''
