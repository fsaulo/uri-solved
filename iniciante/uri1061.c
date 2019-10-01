#include <stdio.h>
#include <string.h>

int main()
{
  int d1,d2, Z1, X1, Y1, Z2, X2, Y2, W=0, X, Y, Z, t;
  scanf("%*s %d",&d1);
  scanf("%d %*s %d %*s %d",&X1,&Y1,&Z1);

  scanf("%*s %d",&d2);
  scanf("%d %*s %d %*s %d",&X2,&Y2,&Z2);

  t = d2 - d1; t *= 24; t += X2 - X1; t *= 60; t += Y2 - Y1; t *= 60; t += Z2 - Z1;
  Z = t%60; t /= 60; Y = t%60; t /= 60; X = t%24; t /= 24; W = t;

  printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", W, X, Y, Z);
  return 0;
}
