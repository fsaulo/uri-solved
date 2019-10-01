#include <stdio.h>

int main()
{
  int n,a,i,soma=0;
  scanf("%d %d",&a,&n);
  while(n<=0) scanf("%d", &n);
  for(i=a;i<n+a;i++)
  {
    soma += i;
  }
  printf("%d\n", soma);
  return 0;
}
