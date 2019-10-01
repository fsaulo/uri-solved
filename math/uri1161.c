#include <stdio.h>
unsigned long long int fat(unsigned long long int p)
{
  if (p==0)
    return 1;
  if (p >= 1)
    return (p*fat(p-1));
}

int main()
{
  int h,j;
  while(scanf("%d %d", &h,&j) != EOF)
  {
    printf("%llu\n", fat(h)+fat(j));
  }
  return 0;
}
