#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		long long unsigned int a,b,c;
		scanf("%llu%llu%llu",&a,&b,&c);
		printf("%llu\n",(a+b+c)/2);
	}
	
	return EXIT_SUCCESS;
}

/*
https://codeforces.com/problemset/problem/1196/A
*/
