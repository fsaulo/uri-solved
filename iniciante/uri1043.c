#include <stdio.h>
#include <math.h>

int abs(int x){
  if (x >= 0)
  return x;
  else
  return -x;
}
int main(){
  double A, B, C, per, are;
  scanf("%lf %lf %lf", &A, &B, &C);
  if ((abs(A-B) < C) && (C < abs(A+B)) || (abs(B-C) < A) && (A < abs(B+C)) || (abs(A-C) < B && (B < abs(A+C)))) {
    per = A+B+C;
    printf("Perimetro = %.1f\n", per);
  }
  else {
    are = ((A+B)*C)/2;
    printf("Area = %.1f\n", are);
  }
  return 0;
}
