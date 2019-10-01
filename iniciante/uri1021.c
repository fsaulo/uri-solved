#include <stdio.h>

int main(){
  int i, count;
  double array[12]={100.00,50.00,20.00,10.00,5.00,2.00,1.00,0.50,0.25,0.10,0.05,0.01};
  double N;
  count = 0;
  scanf("%lf", &N);
  N=N+1e-9;
  printf("NOTAS:\n");
  for(i = 0; i < 12; i++){
    count = N/array[i];
    N = N - (array[i]*count);
    if(i>5)
      printf("%d moeda(s) de R$ %.2lf\n", count, array[i]);
    else
      printf("%d nota(s) de R$ %.2lf\n", count, array[i]);
    if (i == 5)
      printf("MOEDAS:\n");
  }
  return 0;
}
