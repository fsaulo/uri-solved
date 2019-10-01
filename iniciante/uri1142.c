#include <stdio.h>
int main()
{
  int g,l,i,count=1;
  scanf("%d", &g);
  for(i=0;i<g;i++)
  {
    for(l=0;l<4;l++)
    {
      printf("%d ",count);
      count++;
      if(l==2) {printf("PUM\n"); count ++;}
    }
  }
  return (0);
}
