#include<stdio.h>
#include<stdlib.h>

int main(void) {
  char string[101] = {0};
  int n,sigma = 0;
  scanf("%d%s",&n,string);
  for(int contador = 0; string[contador];contador++)
    if(string[contador] == 'x' && string[contador+1] == 'x' && string[contador+2] == 'x')
      sigma++;
  printf("%d\n",sigma);
  return 0;
}


/*
 * https://codeforces.com/contest/978/problem/B
 * */
