#include <stdio.h>
int main()
{
  int n,d,f,i;
  scanf("%d", &n);
  for(i=0;i<n;i++)
  {
    scanf("%d%d", &d,&f);
    if(f != 0)
    {
      printf("%.1f\n", (double) d/f);
    }
    else printf("divisao impossivel\n");
  }
  return 0;
}
