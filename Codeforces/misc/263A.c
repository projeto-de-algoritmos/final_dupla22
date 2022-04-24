#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int matriz[5][5] = {0};
	int l,c;
	for(int linha = 0; linha < 5; linha++)
	{
		for(int coluna = 0; coluna < 5; coluna++)
		{
			scanf("%d",&matriz[linha][coluna]);
		}
	}
	for(int linha = 0; linha < 5; linha++)
	{
		for(int coluna = 0; coluna < 5; coluna++)
		{
			if(matriz[linha][coluna])
			{
				l = linha+1;
				c = coluna+1;
			}
		}
	}
	
	printf("%d\n",abs(l - 3) + abs(c-3));
	return EXIT_SUCCESS;
}

/*
 * https://codeforces.com/contest/263/problem/A
 * */
