#include <stdio.h>
int abs(int x){
  if (x >= 0)
  return x;
  else
  return -x;
}
int main() {
  /* code */
  int a, b, c, upper;
  scanf("%d %d %d", &a, &b, &c);
  upper = (a+b+abs(a-b))/2;
  upper = (upper+c+abs(upper-c))/2;

  printf("%d eh o maior\n", upper);
  return 0;
}
