#include <stdio.h>

int main() {
  double sal, s, imp, a, b;
  scanf("%lf", &sal);

  if(sal > 0 && sal <= 2000.00){
    printf("Isento\n");
  }
  if(sal > 2000.00 && sal <= 3000.00){
    s = sal-2000.00;
    imp = s*0.08;
    printf("R$ %.2f\n", imp);
  }
  if (sal > 3000.00 && sal <= 4500.00) {
    s = sal-2000.00;
    a = s-1000.00;
    imp = a*0.18 + 1000.00*0.08;
    printf("R$ %.2f\n", imp);
  }
  if (sal > 4500.00){
    s = sal-2000.00;
    a = s-1000.00;
    b = a-1500.00;
    imp = b*0.28 + 1500.00*0.18 + 1000.00*0.08;
    printf("R$ %.2f\n", imp);
  }
  return 0;
  }
