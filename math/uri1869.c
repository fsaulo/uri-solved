#include <stdio.h>
int main()
{
  unsigned long long int numb, mod,aux[1110],resul[1110];
  int count = 0,l,c=0,u; char letra[33];
    for(l=0;l<=21;l++) letra[l] = 'A'+l;

    while(scanf("%llu", &numb) != EOF)
    {
      if(numb == 0) {printf("0\n"); break;}
      do
      {
        if(numb>=32)
        {
          mod = numb%32; numb = (numb - mod)/32; aux[count] = mod;
          count++;
        }
      } while(numb>=32);
      aux[count] = numb;
      for(u=count; u>=0; u--)
      {
        resul[c] = aux[u];
        if(resul[c]<10) printf("%llu", resul[c]);
          else printf("%c", letra[resul[c]-10]);
        c++;
      }
      printf("\n");
      count = 0; c = 0;
    }
  return 0;
}
