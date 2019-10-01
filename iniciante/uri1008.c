#include <stdio.h>

int main() {
  /* code */
  int id, wrkh;
  float salt, salh;

  scanf("%d %d %f", &id, &wrkh, &salh);
  salt = salh*wrkh;
  printf("NUMBER = %d\n", id);
  printf("SALARY = U$ %.2f\n", salt);
  return 0;

}
