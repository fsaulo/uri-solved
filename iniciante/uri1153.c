#include <stdio.h>
/*
  Fatorial Simples URI 1153
                            */
int main()
{
  int N, i, fat=0, count=0;
  scanf("%d", &N);
  if(N>0 && N<13)
  {
    fat = N;
    for(i=1; i<N; i++)
    {
      count = fat*(N-i);
      fat = count;
    }
    printf("%d\n", fat);
  }
  return 0;
}
