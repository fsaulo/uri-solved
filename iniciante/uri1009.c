#include <stdio.h>

int main(){
    /* code */
  char name[100];
  double sal, salb, vend;

  scanf("%s %lf %lf", &name, &sal, &vend);
  salb = sal + (vend*0.15);

  printf("TOTAL = R$ %.2f\n", salb);
  return 0;

}
