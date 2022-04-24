#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int greedy(int);

int main(void)
{
	int n;
	scanf("%d",&n);
	printf("%d\n",greedy(n));
		
	return EXIT_SUCCESS;
}

int greedy(int number)
{
	int ret = 0;
	int acc = 0;
	int elements[] = {40320, 5040, 720, 120, 24, 6, 2, 1};
	
	for(int a = 0; a < 8;a++)
	{
		while((acc + elements[a]) <= number)
		{
			acc += elements[a];
			++ret;
		}
	}
	return ret;
}
/*
 * https://www.beecrowd.com.br/judge/en/problems/view/1936
 * */
