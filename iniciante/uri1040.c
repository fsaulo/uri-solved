#include <stdio.h>

int main()
{
  double n1, n2, n3, n4, med, ex, med2;
  scanf("%lf%lf%lf%lf", &n1,&n2,&n3,&n4);
  med = (2*n1 + 3*n2 + 4*n3 + n4)/10;
  if (med >= 7)
  {
    printf("Media: %.1f\n", med);
    printf("Aluno aprovado.\n");
  }
  if(med < 5)
  {
    printf("Media: %.1f\n", med);
    printf("Aluno reprovado.\n");
  }
  if(med < 7 && med >= 5)
  {
    printf("Media: %.1f\n", med);
    printf("Aluno em exame.\n");
    scanf("%lf", &ex);
    printf("Nota do exame: %.1f\n", ex);
    med2 = (med+ex)/2;
    if (med2 >= 5) {
      printf("Aluno aprovado\n");
      printf("Media final %.1f\n", med2);
    }
    else
    {
      printf("Aluno reprovado\n");
      printf("Media final %.1f\n", med2);
    }
  }
  return 0;
}
