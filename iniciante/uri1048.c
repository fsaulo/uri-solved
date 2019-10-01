#include <stdio.h>

int main()
{
  double sal;

  scanf("%lf", &sal);
  if(sal <= 400.00)
  {
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", sal*1.15, sal*0.15, 15);
  }
  if(sal > 400.00 && sal <= 800.00)
  {
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", sal*1.12, sal*0.12, 12);
  }
  if(sal > 800 && sal <= 1200.00)
  {
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", sal*1.10, sal*0.10, 10);
  }
  if(sal > 1200.00 && sal <= 2000.00)
  {
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", sal*1.07, sal*0.07, 7);
  }
  if(sal > 2000)
  {
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", sal*1.04, sal*0.04, 4);
  }
  return 0;
}
