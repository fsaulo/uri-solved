#include <stdio.h>

int main()
{
  double d,f,media;

  scanf("%lf", &d);
  while(d < 0.0 || d > 10.0)
  {
    printf("nota invalida\n");
    scanf("%lf", &d);
  }

  scanf("%lf", &f);
    while(f < 0.0 || f > 10.0)
    {
      printf("nota invalida\n");
      scanf("%lf", &f);
    }

  media = (d+f)/2;
  printf("media = %.2f\n", media);
  return 0;
}
