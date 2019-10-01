#include <stdio.h>

int main(){
  int t, v;
  double l, d;

  scanf("%d %d", &t, &v);
  d = t*v;
  l = d/12;
  printf("%.3f\n", l);
  return 0;
}
