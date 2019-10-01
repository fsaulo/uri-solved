#include <stdio.h>

int main()
{
  int d,i,o,p,count[4];
  for(o=0;o<4;o++) count[o]=0;//0-par 1-impar 2-positivo 3-negativo
  for(i=0;i<5;i++)
  {
    scanf("%d", &d);
    if(d%2 == 0) count[0]++;
    else if(d%2 != 0) count[1]++;
    if(d>0) count[2]++;
    else if(d<0)count[3]++;
  }
  printf("%d valor(es) par(es)\n", count[0]);
  printf("%d valor(es) impar(es)\n", count[1]);
  printf("%d valor(es) positivo(s)\n", count[2]);
  printf("%d valor(es) negativo(s)\n", count[3]);
  return 0;
}
