#!/usr/bin/python3

n = int(input())
layer1 = "I hate"
split = "that"
layer2 = "I love"
t = layer1
if n > 1:
	
	contador = n
	while 1:
		if n%2 == 0:
			t += ' that ' + layer2
			contador -= 2
			if contador > 0:
				t += ' that ' + layer1	
				continue
			else:
				break
		else:
			#t += ' that ' + layer1
			contador -= 2
			if contador > 0:
				t += ' that ' + layer2
				t += ' that ' + layer1
				continue
			else:
				break
			
print(t + " it")					
'''
http://codeforces.com/problemset/problem/705/A
'''
