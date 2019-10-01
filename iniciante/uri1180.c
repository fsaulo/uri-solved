#include <stdio.h>

int main()
{
  int i, a, t, p, N;

  scanf("%d", &N);
  int X[N];

  for(i=0; i<N; i++)
  {
    scanf("%d", &X[i]);
    if(N == 1)
    {
      printf("Menor valor: %d\nPosicao: %d\n", X[0], 0);
      return 0;
    }
  }
  t = X[0];

  for(a=1; a<N; a++)
  {
    while (t > X[a])
    {
      t = X[a];
      p = a;
    }
  }
    printf("Menor valor: %d\nPosicao: %d\n", t, p);
  return 0;
}
