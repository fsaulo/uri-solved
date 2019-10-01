#include <stdio.h>
#include <string.h>

int main()
{
  int t,u,n,y,r; char name[1110];
  scanf("%d", &t);
  r=0;y=0;
  for(u=0;u<t;u++)//define u
  {
    scanf("%d", &n);
    while(scanf("%s", name) != EOF)
    {
      r++;
      if(r==n) break;
    }
  }
}
