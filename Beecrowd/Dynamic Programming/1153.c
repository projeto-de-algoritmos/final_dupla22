#include<stdio.h>
#include<stdlib.h>

long int factorial(int);

int main(void)
{
	int n;
	scanf("%d",&n);
	printf("%ld\n",factorial(n));
	return EXIT_SUCCESS;
}


long int factorial(int n)
{
    return n == 0 ? 1 : n * factorial(n-1);
}
