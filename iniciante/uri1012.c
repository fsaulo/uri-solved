#include <stdio.h>

int main(){
  double A, B, C, pi=3.14159, tri, circ, trap, quad, ret;
  scanf("%lf %lf %lf", &A, &B, &C);
  tri = (A*C)/2;
  circ = pi*C*C;
  trap = (A+B)*C/2.0;
  quad = B*B;
  ret = A*B;

  printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", tri, circ, trap, quad, ret);

}
