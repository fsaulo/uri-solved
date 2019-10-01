#include <stdio.h>

int main()
{
  int id, qtd;
  double pay;
  float lista[]={4.00,4.50,5.00,2.00,1.50};
  scanf("%d%d", &id, &qtd);
  id--;
  printf("Total: R$ %.2f\n", qtd*lista[id]);
  return 0;
}
