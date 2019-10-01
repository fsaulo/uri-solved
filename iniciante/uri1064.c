#include <stdio.h>

int main()
{
  double u,t; int i,count=0;
  for(i=0;i<6;i++)
  {
    scanf("%lf", &u);
    if(u>=0)
    {
      count++; t += u;
    }
  }
  printf("%d valores positivos\n%.1f\n",count,t/count);
  return 0;
}
