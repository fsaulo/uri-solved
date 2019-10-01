#include <stdio.h>

int main()
{
  int i;
  const int x=100;
  for(i=1;i<=x;i++)
  {
    if(i%2 == 0)
    printf("%d\n", i);
  }
  return 0;
}
