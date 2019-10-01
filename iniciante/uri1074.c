#include <stdio.h>

int main()
{
  int n,u,i,s1,s2;
  char status[10][10]={"NULL","ODD","EVEN","POSITIVE","NEGATIVE"};
  scanf("%d", &n);
  for(i=0;i<n;i++)
  {
    scanf("%d", &u);
    if(u > 0 || u < 0)
    {
      if(u < 0){ s2 = 4; if(u%2 != 0) s1 = 1; else s1 = 2;}
      if(u > 0){ s2 = 3; if(u%2 != 0) s1 = 1; else s1 = 2;}
    }
    else {printf("%s\n", status[0]); continue;} 
    printf("%s %s\n", status[s1], status[s2]);

  }
  return 0;
}
