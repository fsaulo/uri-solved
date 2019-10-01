#include <stdio.h>
int main()
{
  int n,o;
  double m,i;
  i=0; n=0;
  while(1)
  {
    scanf("%d", &o);
    if(o<0) break;
    n += o; i++;
  }
  m = n/i;
  printf("%.2f\n",(double) m);
  return 0;
}
