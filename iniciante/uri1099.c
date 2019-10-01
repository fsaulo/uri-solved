#include <stdio.h>
int main()
{
  int n,o,p,q,i,t,sum=0;
  scanf("%d", &n);
  for(o=0;o<n;o++)
  {
    scanf("%d %d", &p,&q);
    if(p>q){t=p; p=q; q=t;}
    for(i=p+1;i<q;i++)
    {
      if(i%2!=0) sum += i;
    }
    printf("%d\n", sum); sum=0;
  }
  return 0;
}
