#include <stdio.h>
#include <string.h>

int main ()
{
  int i, array[8]={61,71,11,21,32,19,27,31}, x;
  scanf("%d", &x);
    if(x != array[0] && x != array[1] && x != array[2] && x != array[3] && x != array[4] && x != array[5] && x != array[6] && x != array[7])
      printf("DDD nao cadastrado\n");
    if (x == 61)
      printf("Brasilia\n");
      else if (x == 71)
        printf("Salvador\n");
      else if (x == 11)
        printf("Sao Paulo\n");
      else if (x == 21)
        printf("Rio de Janeiro\n");
      else if (x == 32)
        printf("Juiz de Fora\n");
      else if (x == 19)
        printf("Campinas\n");
      else if (x == 27)
        printf("Vitoria\n");
      else if (x == 31)
        printf("Belo Horizonte\n");
    return 0;
}
