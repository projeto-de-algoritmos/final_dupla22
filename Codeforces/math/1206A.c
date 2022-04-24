#include <stdio.h>
#include <stdlib.h>

int cmp(const void *,const void *);

int main(void)
 {
  int a,b;
  int va[201] = {0};
  int vb[201] = {0};

  scanf("%d",&a);
  for(int c = 0; c < a; c++)
    scanf("%d",&va[c]);
  scanf("%d",&b);
  for(int c = 0; c < b; c++)
    scanf("%d",&vb[c]);
  qsort(va,a,sizeof(int),cmp);
  qsort(vb,b,sizeof(int),cmp);

  int flag = 0;
  for(int c = 0; c < a;c++)
  {
    if(flag)
    break;
      for(int d = 0; d < b;d++)
      {
        int soma = (va[c] + vb[d]);
        int *ra = (int*)bsearch(&soma,va,a,sizeof(int),cmp);
        int *rb = (int*)bsearch(&soma,vb,b,sizeof(int),cmp);
        if(!ra || !rb)
        {
          printf("%d %d\n",va[c],vb[d]);
          flag++;
          break;
        }
      }
  }
  return 0;
}

int cmp(const void *a,const void *b)
{
  return *(int*)b - *(int*)a;
}
