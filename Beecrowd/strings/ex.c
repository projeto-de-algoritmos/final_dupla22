#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	char *string = (char *)calloc(10,sizeof(char));
	scanf("%s",string);
	int posicao;
	int len = strlen(string);
	int a = 0;
	for(; a < len;a++)
		if(string[a] == '.')
		{
			posicao = a;
			break;
		}
		
	for(a = posicao+1; a < len;a++)
	{
		if(a == posicao+1 && string[a] == '0')
			continue;
		printf("%c",string[a]);
	}
	printf(".");
	for(a = 0; a < posicao;a++)
	{
		if(a == 0 && string[a] == '0')
			continue;
		printf("%c",string[a]);
	}
	puts("");
	free(string);
	return 0;
}
/*
 * https://www.beecrowd.com.br/judge/en/problems/view/2762
 * */
