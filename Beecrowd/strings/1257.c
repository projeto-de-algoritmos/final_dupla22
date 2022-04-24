#include<stdio.h>
#include<stdlib.h>

int valor(char *,int);

int main(void)
{
	unsigned int a;
	scanf("%u",&a);
	
	while(a--)
	{
		unsigned int b, sigma = 0;
		scanf("%u",&b);
		while(b--)
		{
			char str[501];
			scanf("%s",str);
			sigma += valor(str,b);
		}
		
		printf("%d\n",sigma);
	}
	
	return EXIT_SUCCESS;
}
int valor(char *str,int e_entrada)
{
	int total = 0,p_alfabeto,a;
	
	for(a = 0; str[a];a++)
	{
		p_alfabeto = str[a] - 65; 
		total += (p_alfabeto + e_entrada + a) ;
	}
	
	return total;
}
/*
 * https://www.beecrowd.com.br/judge/en/problems/view/1257
 * */
