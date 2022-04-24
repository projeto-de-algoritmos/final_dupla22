#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int quantidade;
	scanf("%d",&quantidade);
	int **matriz = (int**)calloc(quantidade,sizeof(int*));
	for(int linha = 0;linha < quantidade;linha++)
		matriz[linha] = (int*)calloc(quantidade,sizeof(int));
	
	for(int linha = 0; linha < quantidade;linha++)
	{
		for(int coluna = 0; coluna < quantidade;coluna++)
		{
			if(linha == 0 || coluna == 0)
				matriz[linha][coluna] = 1;
			else
				matriz[linha][coluna] = matriz[linha-1][coluna] + matriz[linha][coluna-1];
		}
	}
	printf("%d\n",matriz[quantidade-1][quantidade-1]);
	for(int linha = 0;linha < quantidade;linha++)
		free(matriz[linha]);
	free(matriz);
	return EXIT_SUCCESS;
}

/*
 * https://codeforces.com/problemset/problem/509/A
 * */
