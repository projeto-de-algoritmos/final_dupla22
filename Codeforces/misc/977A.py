#!/usr/bin/python3


linha = input()
s=[]
for a in linha.split():
	if a.isdigit():
		s.append(int(a))
numero = s[0]
operacoes = s[1]

for a in range(operacoes):
	if numero % 10 == 0:
		numero = numero/10
	else:
		numero -= 1
print(int(numero))

'''
https://codeforces.com/contest/977/problem/A
'''
