#include <stdio.h>

int main(){
  int pc1, pc2, npc1, npc2;
  float val1, val2, t;

  scanf("%d %d %f %d %d %f", &pc1, &npc1, &val1, &pc2, &npc2, &val2);
      t = (val1*npc1) + (val2*npc2);
  printf("VALOR A PAGAR: R$ %.2f\n", t);
  return 0;
}
