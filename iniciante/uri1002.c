#include <stdio.h>

int main(){
  double R, A, pi;
  scanf("%lf", &R);
  pi = 3.14159;
  A = pi * R * R;
  printf("A=%0.4f\n", A);
  return 0;
}
