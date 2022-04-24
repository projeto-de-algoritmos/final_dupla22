#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int n,s = 0;
	scanf("%d",&n);
	while(n--)
	{
		char str[151];
		scanf("%s",str);
		s += (str[1] == '+') ? 1 : -1;
	}
	printf("%d\n",s);
	return EXIT_SUCCESS;
}

/*
 * https://codeforces.com/contest/282/problem/A
 * */
