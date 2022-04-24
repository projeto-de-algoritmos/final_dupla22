#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int a,b;
		scanf("%d%d",&a,&b);
		printf("%d\n",a+b);
	}
	return EXIT_SUCCESS;
}

/*
 * https://codeforces.com/contest/1351/problem/A
 * */
