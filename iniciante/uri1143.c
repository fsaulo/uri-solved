#include <stdio.h>
int main()
{
  int n,o,p,q,r,s;
  q=1;
  scanf("%d", &n);
  for(o=0;o<n;o++)
  {
      r=q*q;
      printf("%d %d ",q,r);
      s=r*q;
      printf("%d\n", s);
      q++;
  }
  return 0;
}
