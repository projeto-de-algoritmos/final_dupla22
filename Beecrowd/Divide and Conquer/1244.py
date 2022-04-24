def cmp(element):
	return len(element)
	
for a in range(int(input())):
	s = input().split()
	s.sort(key=cmp,reverse=True)
	for b in range(len(s) - 1):
		print(s[b],end=' ')
	print(s[-1])

'''
https://www.beecrowd.com.br/judge/en/problems/view/1244
'''
