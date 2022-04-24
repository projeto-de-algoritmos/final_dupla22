#include<stdio.h>
#include<stdlib.h>

int *greedy(int,int *);

int main()
{
	int n,quantidade;
	scanf("%d",&n);
	int *resultado = greedy(n,&quantidade);
	printf("%d\n",quantidade);
	for(int a = 0; a < quantidade;a++)
		printf("%d %s",resultado[a],a+1 == quantidade ? "\n" : " ");
	free(resultado);
	return EXIT_SUCCESS;
}
int *greedy(int valor,int *quantidade)
{
	int candidatos[] = {9,3,2,1};
	int *selecionados = (int *)calloc(1000,sizeof(int));
	int p = 0,s = 0;
	while(s != valor)
	{
		int aux;
		for(int a = 0; a < 4;a++)
			if(s + candidatos[a] <= valor)
				aux = candidatos[a];
		s += aux;
		selecionados[p++] = aux;
	}
	*quantidade = p;
	return selecionados;
}
/*
 * https://codeforces.com/contest/1104/problem/A
 * */
