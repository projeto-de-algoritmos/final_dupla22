#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		char str[101];
		scanf("%s",str);
		if(strlen(str) > 10)
		{
			printf("%c%lu%c\n",str[0],strlen(str)-2,str[strlen(str)-1]);
			
		}else
			puts(str);
	}
	return EXIT_SUCCESS;
}


/*
 * https://codeforces.com/contest/71/problem/A
 * */
