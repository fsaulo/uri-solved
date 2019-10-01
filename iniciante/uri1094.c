#include <stdio.h>

int main()
{
  int qtd[3],i,n,d,k,total; char t,ch;
  double percnt;
  qtd[0]=0;qtd[1]=0;qtd[2]=0;
  // while(ch = getchar() != '\n' && ch != EOF);
  scanf("%d", &n);
  for(i=0;i<n;i++)
  {
    scanf("%d %c", &d,&t);
      if(t == 'C') qtd[0] += d;
      else if(t =='R') qtd[1] += d;
      else if(t == 'S') qtd[2] += d;
  }
  total = qtd[0]+qtd[1]+qtd[2];
  printf("Total: %d cobaias\n", total);
  printf("Total de coelhos: %d\n", qtd[0]);
  printf("Total de ratos: %d\n", qtd[1]);
  printf("Total de sapos: %d\n", qtd[2]);
  printf("Percentual de coelhos: %.2lf %%\n", percnt=((qtd[0]*100.0)/total));
  printf("Percentual de ratos: %.2lf %%\n", percnt=((qtd[1]*100.0)/total));
  printf("Percentual de sapos: %.2lf %%\n", percnt=((qtd[2]*100.0)/total));
  return 0;
}
