#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int cmp(char *,int);

int main(void)
{
	char str[101];
	scanf("%s",str);
	//printf(".");
	for(int a = 0; str[a];a++)
	{
		str[a] = tolower(str[a]);
		if(cmp(str,a))
		{
			if(cmp(str,a+1))
				continue;
		}
		else
			printf(".%c",str[a]);
	}
	puts("");
	return EXIT_SUCCESS;
}
int cmp(char *str,int a)
{
	if(str[a] == 'a' || str[a] == 'e' || str[a] == 'i' || str[a] == 'o' || str[a] == 'u' || str[a] == 'y')
		return 1;
	return 0;
}

/*
 * https://codeforces.com/contest/118/problem/A
 * */
