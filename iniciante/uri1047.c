#include <stdio.h>

int main() {
  /* code */
int hr1, min1, hr2, min2, hrt1, hrt2, mint, tempt, hrt;

  scanf("%d %d %d %d", &hr1, &min1, &hr2, &min2);

  hr1 = hr1*60;
  hrt1 = min1 + hr1;

  hr2 = hr2*60;
  hrt2 = min2 + hr2;

  if(hrt1 < hrt2) {
    tempt = hrt2 - hrt1;
    hrt = tempt/60;
    mint = tempt - hrt*60;
  }

  if(hrt1 >= hrt2) {
    tempt = hrt2 - hrt1;
    tempt += 1440;
    hrt = tempt/60;
    mint = tempt - hrt*60;
  }

  printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hrt, mint);

  return 0;
}
