#include <stdio.h>
/*
  Soma de Impares Consecutivos I URI 1071
                                          */
int main()
{
  int X, Y, i, temp, count=0;

  scanf("%d%d", &X, &Y);
  if(X<Y)
  {
    for (i=X; i<Y; i++)
    {
      if(i%2 != 0)
      {
        count = count + i;
      }
    }
    printf("%d\n", count);
  }
  if(X>Y)
  {
    for (i=X-1; i>Y; i--)
    {
      if(i%2 != 0)
      {
        count = count + i;
      }
    }
    printf("%d\n", count);
  }
  if (X == Y)
    printf("%d\n", 0);

  return 0;
}
