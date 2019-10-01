/* URI BASIC 1036
   BHASKARA       */

#include <stdio.h>
#include <math.h>

int main(){
  double A, B, C, rz1, rz2, delta;

  scanf("%lf %lf %lf", &A, &B, &C);
  delta = B*B - 4*A*C;
  if (delta<0 || (A == 0)) {
    printf("Impossivel calcular\n");
  }
  else {
    rz1 = (-B+sqrt(delta))/(2*A);
    rz2 = (-B-sqrt(delta))/(2*A);
    printf("R1 = %.2lf\nR2 = %.2lf\n", rz1, rz2);
  }
  return 0;
}
