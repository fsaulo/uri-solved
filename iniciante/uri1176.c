#include <stdio.h>
/*
  Fibonacci em Vetor URI 1176
                              */
int main()
{
  const int y = 63;
  unsigned long long int fib[y], a=0, b=1, c=0;
  int N, i;
  int d, T;

  for(d=2;d<y;d++)
  {
    if(d%2==1)
    {
        // printf("%llu %d\n", c, d-2);
        fib[d-2] = c;
        c=a+b;
        a=c;
    }
    else if(d%2==0)
    {
        // printf("%llu %d\n", c, d-2);
        fib[d-2] = c;
        c=a+b;
        b=c;
    }
  }
  scanf("%d", &T);
  for(i=0;i<T;i++)
  {
    scanf("%d", &N);

    printf("Fib(%d) = %llu\n", N, fib[N]);
  }
  return 0;
}
