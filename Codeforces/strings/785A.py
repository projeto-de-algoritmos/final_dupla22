#!/usr/bin/python3

n = int(input())
res = 0;
while n:
	s = input()
	if s == "Icosahedron":
		res += 20
	if s == "Cube":
		res += 6 
	if s == "Octahedron":
		res += 8
	if s == "Dodecahedron":
		res += 12
	if s == "Tetrahedron":
		res += 4
	n -= 1 	

print(res)
'''
http://codeforces.com/problemset/problem/705/A
'''
