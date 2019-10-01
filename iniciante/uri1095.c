#include <stdio.h>

int main()
{
  int j=0,i=1,u=60;
  while(u>=0)
  {
    printf("I=%d J=%d\n", i, u); u -= 5; i += 3;
  }
  return 0;
}
