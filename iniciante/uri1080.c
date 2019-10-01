#include <stdio.h>

int main()
{
  int i,n[102],p,temp,g,place;
  for(i=1;i<101;i++)
  scanf("%d", &n[i]);
  g = n[0];
  for(p=1;p<101;p++)
  {
    if(g <= n[p])
    {
      temp = n[p];
      n[p] = g;
      g = temp; place=p;

    }
  }
  printf("%d\n%d\n", g, place);
  return 0;
}
