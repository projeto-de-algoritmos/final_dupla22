#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(void)
{
	char a[101],b[101];
	scanf("%s%s",a,b);
	for(int i = 0; a[i];i++)
	{
		if(tolower(a[i]) < tolower(b[i]))
		{
			puts("-1");
			return EXIT_SUCCESS;
		}else if(tolower(a[i]) > tolower(b[i]))
		{
			puts("1");
			return EXIT_SUCCESS;
		}
	}
	puts("0");
	return EXIT_SUCCESS;
}
/*
 * https://codeforces.com/contest/112/problem/A
 * */
