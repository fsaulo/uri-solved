#include <stdio.h>

int main()
{
  int a;
  char typo[12][15]={"January", "February","March","April","May","June","July","August","September","October","November","December"};
    scanf("%d", &a);
    printf("%s\n", typo[a-1]);

  return 0;
}
