#include <stdio.h>

int main(){
  double R, pi=3.14159, vol;
  scanf("%lf", &R);
  vol = (4.0/3.0)*pi*R*R*R;
  printf("VOLUME = %.3f\n", vol);
  return 0;
}
