#include <stdio.h>

int main ()
{
  int i=1, j=7, o, g;
  for(o=0;o<5;o++)
  {
    for(g=0;g<3;g++)
    {
      printf("I=%d J=%d\n",i,j);
      j--;
    }
    j=7;
    i+=2;
  }
}
