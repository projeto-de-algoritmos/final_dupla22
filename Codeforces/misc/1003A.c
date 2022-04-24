#include<stdio.h>
#include<stdlib.h>

#define SIZE 101
int cmp(const void *,const void *);

int main(void)
{
	int n, vector[SIZE] = {0};
	scanf("%d",&n);
	for(int x = 0; x < n; x++)
	{
		int tmp;
		scanf("%d",&tmp);
		vector[tmp]++;
	}
	
	qsort(vector,SIZE,sizeof(int),cmp);
	printf("%d\n",vector[0]);
	return 0;
}

int cmp(const void *a,const void *b)
{
	return (*(int *)b) - (*(int *)a); 
}

/*
https://codeforces.com/problemset/problem/1003/A
*/
