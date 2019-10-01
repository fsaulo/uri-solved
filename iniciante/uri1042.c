#include <stdio.h>

int main(){
  int a, b, c, a1, b1, c1, t, i;
  scanf("%d%d%d", &a, &b, &c);
  a1 = a; b1 = b; c1 = c;

    if(a1 > b1)
    {
      t = a1;
      a1 = b1;
      b1 = t;
    }
    if(a1 > c1)
    {
      t = a1;
      a1 = c1;
      c1 = t;
    }
    if (b1 > c1)
    {
      t = b1;
      b1 = c1;
      c1 = t;
    }
    printf("%d\n%d\n%d\n", a1, b1, c1);
    printf("\n%d\n%d\n%d\n", a, b, c);

  return 0;
}
