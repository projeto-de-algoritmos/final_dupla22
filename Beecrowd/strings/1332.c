#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int funcao(char *);

int main(void)
{	
	int n;
	scanf("%d",&n);
	while(n--)
	{
		char string[5];
		scanf("%s",string);
		printf("%d\n",funcao(string));
	}
	
	return EXIT_SUCCESS;
}

int funcao(char *string)
{
	char one[] = "one";
	int contador = 0;
	int tamanho = strlen(string); 
	int a = 0;
	if( tamanho == 3)
	{
		for(a = 0; a < tamanho;a++)
			if(string[a] == one[a])
					contador += 10;
			else
				contador -= 10;
		if(contador > 0)
			return 1;
		else 
			return 2;
	}
	return 3;
}
/*
 * https://www.beecrowd.com.br/judge/en/problems/view/1332
 * */
