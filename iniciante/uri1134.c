#include <stdio.h>

int main()
{
  int type[3],d,p=0;
  type[0]=0; type[1]=0; type[2]=0;
  while(!p)
  {
    scanf("%d", &d);
    if(d==4) break;
    else if(d<1 || d>5) continue;
    else if(d >= 1 || d <= 3)
    {
      if(d == 1) type[0]++;
      else if(d == 2) type[1]++;
      else if(d == 3) type[2]++;
    }
  }
  printf("MUITO OBRIGADO\n");
  printf("Alcool: %d\nGasolina: %d\nDiesel: %d\n", type[0],type[1],type[2]);
  return 0;
}
