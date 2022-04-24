#!/usr/bin/python3

linha = input()
l = []
for a in linha.split():
	if a.isdigit():
		l.append(int(a))
bear = l[0]
limak = l[1]

a = 0;

while bear < limak:
	bear = bear * 3
	limak = limak * 2
	a += 1
if bear == limak:
	a += 1
print(a)

'''
http://codeforces.com/problemset/problem/791/A
'''
