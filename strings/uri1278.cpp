#include <bits/stdc++.h>
using namespace std;

void JustifierII(char str[][800], int big, int i, int tamanho[])
{
  int t, diff,a,k,o; char space[800];
  for(t=0;t<i;t++)
  {
    if(tamanho[t] <= big)
    {
      diff = big - tamanho[t];
      for(a=0;a<diff;a++)
        printf(".");
    }

    for(k=0;k<strlen(str[t]);k++)
    {

      if(str[t][k] >= 'a' && str[t][k] <= 'z' || str[t][k] >= 'A' && str[t][k] <= 'Z') printf("%c", str[t][k]);
      else if(str[t][k] == ' ' && str[t][k-1] != ' ' && str[t][k-1] != '\0' && str[t][k+1] != '\0') printf("%c", str[t][k]);
    }
    printf("\n");
  }
  return;
}
int main()
{
  int loop = 1, d, i; char ch, word[800][800], *k,u;
  int counter[800],a,x,maior, y,flag=1,j,o, poc[800];int r = 0,h=0;
  while(loop)
  {
    scanf("%d", &d);if(!d) break; if(!flag) printf("\n");
    for(i=0;i<d;i++)
    {
      while((ch = getchar()) != '\n' && ch != EOF);
      scanf("%[^\n]", word[i]);
      for (j=0;j<strlen(word[i]);j++)
      {
        if(word[i][j] >= 'a' && word[i][j] <= 'z' || word[i][j] >= 'A' && word[i][j] <= 'Z') counter[i] += 1;
        else if(word[i][j] == ' ' && word[i][j] == ' ' && word[i][j-1] != ' ' && word[i][j-1] != '\0' && word[i][j+1] != '\0') counter[i]++;

          for(x=j;x<strlen(word[i]);x++)
          {
            if(word[i][j] == ' ' && word[i][x] == ' ') h++;
            else h=0;
          }
          if(h == (strlen(word[i]) - j)) counter[i]--; //printf("%d %d %lu\n", h,j,(strlen(word[i]) - j));}
      }
      // printf("%d\n", counter[i]);
    }

    maior = counter[0];
    for(u=0;u<i;u++)
      if(maior<counter[u]) maior = counter[u];
    JustifierII(word,maior,i,counter);
    for(o=0;o<800;o++) counter[o]=0; h=0;
    flag = 0;
  }
  return 0;
}
