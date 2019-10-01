#include <stdio.h>

int main() {
  /* code */
int hr1, hr2, t;

  scanf("%d %d", &hr1, &hr2);
  if (hr1 >= hr2){
    t = (hr2 - hr1) + 24;
  }
  else {
    t = hr2 - hr1;
  }
  printf("O JOGO DUROU %d HORA(S)\n", t);

  return 0;
}
