#include <bits/stdc++.h>
using namespace std;

int main()
{
  char wrd1[1001], wrd2[1001], ch;
  int n, tam,tam2,ai,bi=0,i,l;
  scanf("%d", &n);
  for(i=0; i<n; i++)
  {
      bi=0;
      while((ch = getchar() != '\n') && ch != EOF);
      scanf("%s %s",wrd1,wrd2);
      tam = strlen(wrd1);
      for(l = strlen(wrd2); l>=0; l--)
      {
        if(wrd1[tam] == wrd2[l]) {bi++; tam--;}
        else break;
      }
      if(bi == strlen(wrd2)+1) printf("encaixa\n");
        else printf("nao encaixa\n");
  }

  return 0;
}
