#include <stdio.h>
/*
  Pares entre Cinco Números URI 1065
                                     */
int main()
{
  int i, count=0, array[5];
  for(i=0; i<5; i++)
  {
    scanf("%d", &array[i]);
    if (array[i]%2 == 0)
      count++;
  }
  printf("%d valores pares\n", count);
  return 0;
}
