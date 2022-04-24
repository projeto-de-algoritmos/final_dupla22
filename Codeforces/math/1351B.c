#include<stdio.h>
#include<stdlib.h>

int min(int *);
int max(int *);

int main(void)
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int a,b,c,d,va[2],vb[2];
		scanf("%d%d%d%d",&a,&b,&c,&d);
		va[0] = a;
		va[1] = b;
		vb[0] = c;
		vb[1] = d;
		printf("%s\n",((min(va) + min(vb)) == max(va) && max(va) == max(vb)) ? "YES":"NO");
	}
	return EXIT_SUCCESS;
}

int min(int *v)
{
	return (v[0] < v[1]) ? v[0] : v[1];
}
int max(int *v)
{
	return (v[0] > v[1]) ? v[0] : v[1];
}

/*
 * https://codeforces.com/contest/1351/problem/B
 * /
