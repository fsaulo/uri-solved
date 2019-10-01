#include <stdio.h>

int main(){
  int N, sec, min, hor;
  scanf("%d", &N);
    hor = N/3600;
    min = (N-hor*3600)/60;
    sec = N-(hor*3600 + min*60);
  printf("%d:%d:%d\n", hor, min, sec);
  return 0;
}
