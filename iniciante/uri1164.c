#include <stdio.h>

int check(int num){
  int i, soma;
  soma = 0;
  for (i = 1; i<num; i++) {
    if (num%i == 0)
      soma = soma + i;
    if (soma == num)
      return 1;
    else
      return 0;
  }
}

int main(){
  int X, N, i;
  scanf("%d", &N);
  for (i = 0; i<N; i++) {
    scanf("%d", &X);
    if (check(X) == 1)
    printf("%d eh perfeito\n", X);
    else
    printf("%d nao eh perfeito\n", X);
  }
  return 0;
}
