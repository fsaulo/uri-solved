#include <bits/stdc++.h>
using namespace std;

int main()
{
  char pal[80][80], *word, ch; int i, n, a, p=0, loop=1, chars[80];
  int comp, s=0, h, c, pos, g, flag=1;
  while(loop)
  {
    scanf("%d", &n); g=n;
    if(!n) break;
    if(!flag) printf("\n");
    for(i=0;i<n;i++)
    {
      while ((ch = getchar() != '\n') && ch != EOF);
      scanf("%s", pal[i]);
      chars[i] = strlen(pal[i]);
    }
    comp = chars[0];
    for(c=0;c<n;c++)
    {
      if(comp <= chars[c])
      {
        comp = chars[c];
        pos = comp;
      }
    }
    for(h=0;h<n;h++)
    {
      if(strlen(pal[h]) < pos)
      {
        s = pos - strlen(pal[h]);
        for(c=0;c<s;c++)
          printf(" ");
      }
      printf("%s\n", pal[h]);
    }
    pos=0; flag=0;
  }
  return 0;
}
