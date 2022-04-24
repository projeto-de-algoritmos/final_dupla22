#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	int n;
	scanf("%d",&n);
	if(n%2 == 0)
		printf("%s\n",(n%2 == 0 && n > 2) ? "YES" : "NO");
	else
		printf("NO\n");
	return EXIT_SUCCESS;
}

/*
 * https://codeforces.com/contest/4/problem/A
 * */
