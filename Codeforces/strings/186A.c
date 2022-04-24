#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 1000000

int cmp(const void *, const void *);

int main(void)
{
	char a[SIZE],b[SIZE];
	short int flag = 0;
	scanf("%s%s",a,b);
	for(int contador = 0; a[contador]; contador++)
		if(a[contador] != b[contador])
			flag++;
	
	qsort(a,strlen(b),sizeof(char),cmp);
	qsort(b,strlen(b),sizeof(char),cmp);
	
	(strcmp(a,b) == 0 && flag == 2)?puts("YES") : puts("NO");
	return EXIT_SUCCESS;
}
int cmp(const void *a, const void *b)
{
	return *(char *)a - *(char *)b;
}

/*
 * https://codeforces.com/contest/186/problem/A
 * */
