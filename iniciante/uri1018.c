#include <stdio.h>

int main(){
  int N, count, mod, i;
  count = 0;
  mod = 0;
  int array[]={100,50,20,10,5,2,1};
  scanf("%d", &N);
  printf("%d\n", N);

  for(i=0; i<7; i++){
    count = N/array[i];
    mod = N%array[i];
    N = mod;
    printf("%d nota(s) de R$ %d,00\n", count, array[i]);
  }
  return 0;
}
