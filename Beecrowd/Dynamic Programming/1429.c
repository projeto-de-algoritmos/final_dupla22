#include<stdio.h>
#include<stdlib.h>
#include<string.h>

long int factorial(int);
void solve(char *);

int main(void)
{
	char string[101];
	
	while(1)
	{
		scanf("%s",string);
		if(strcmp(string,"0") == 0)
			break;
		solve(string);
	}
		
	return EXIT_SUCCESS;
}


long int factorial(int n)
{
    return n == 0 ? 1 : n * factorial(n-1);
}
void solve(char *string)
{
	int tamanho,posicao;
	tamanho = posicao = strlen(string);
	long long int resultado = 0;
	
	for(int a = 0;a < tamanho;a++)
	{
		resultado += (string[a] - '0') * factorial(posicao--);
	}
	printf("%lld\n",resultado);
}
