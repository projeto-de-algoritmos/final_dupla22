#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	int n;
	int tmp = 0;
	char string[60] = {0};
	scanf("%d",&n);
	scanf("%s",string);
	for(int a = 0; a < n;a++)
	{
		tmp += a;
		if(tmp >= n)
			break;
		printf("%c",string[tmp]);
	}
	printf("\n");
	return EXIT_SUCCESS;
}
/*
 * https://codeforces.com/problemset/problem/1095/A
 * */
