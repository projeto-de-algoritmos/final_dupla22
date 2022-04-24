#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a,p,r = 0;
	scanf("%d",&a);
	while(a--)
	{
		int b;
		scanf("%d",&b);
		if(b != p)
			r++;
		p = b;
	}
	printf("%d\n",r);
	return 0;
}

/*
 * https://codeforces.com/contest/344/problem/A
 * */
