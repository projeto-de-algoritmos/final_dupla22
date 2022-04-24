n = int(input())
for a in range(n):
	l = input()
	if l.endswith("po"):
		print("FILIPINO")
	elif l.endswith("desu") or l.endswith("masu"):
		print("JAPANESE")
	else:
		print("KOREAN")

'''
https://codeforces.com/contest/1281/problem/A
'''
