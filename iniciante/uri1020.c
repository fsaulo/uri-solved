#include <stdio.h>

int main(){
  int d, ano, mes;

  scanf("%d", &d);
    ano = d/365;
    mes = (d-ano*365)/30;
    d = d - (ano*365 + mes*30);

  printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, d);

  return 0;
}
