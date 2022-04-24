#include<stdio.h>
#include<stdlib.h>

int cmp(const void *,const void *);

int main(void)
{
	int quantidade;
	while(scanf("%d",&quantidade) != EOF)
	{
		int a,b;
		int *le = (int *)calloc(quantidade,sizeof(int));
		int *ld = (int *)calloc(quantidade,sizeof(int));
		int pares = 0;
		int numero,e,d;
		e = d = 0;
		while(quantidade--)
		{
			char lado;
			scanf("%*c%d %c",&numero,&lado);
			if(lado == 'E')
				le[e++] = numero;
			else
				ld[d++] = numero;
		}
		qsort(le,e,sizeof(int),cmp);
		qsort(ld,d,sizeof(int),cmp);
		for(a = 0; a < e;a++)
		{
			if(le[a] == 0)
				continue;
			for(b = 0; b < d;b++)
			{
				if(ld[b] == 0)
					continue;
				if(le[a] == ld[b])
				{
					le[a] = ld[b] = 0;
					pares++;
				}
			}
		}
		free(le);
		free(ld);
		printf("%d\n",pares);
	}
	return EXIT_SUCCESS;
}

int cmp(const void *a,const void *b)
{
	return *(int *)a - *(int *)b; 
}
/*
 * https://www.beecrowd.com.br/judge/en/problems/view/1245
 * */
