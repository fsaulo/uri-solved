#include <stdio.h>
int main()
{
  int d,f,t,i,sum=0;

  while(1)
  {
    scanf("%d %d", &d,&f);
    if(d<=0 || f<=0) break;
      else if(d>f) {t=d; d=f; f=t;}

    for(i=d;i<=f;i++)
    {
      printf("%d ", i); sum+=i;
    }
    printf("Sum=%d\n", sum); sum=0;
  }
  return 0;
}
