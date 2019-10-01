#include <stdio.h>

int main()
{
  int N, i, a,count=0,e,casa,x; long int  V, t[9];
  int val[]={6,2,5,5,4,5,6,3,7,6};
  long int pos[]={1000000000,100000000,1000000,100000,10000,1000,100,10,1};
  scanf("%d", &N);
  if(N>=0 && N<=1000)
  for(i=0;i<N;i++)
  {
    scanf("%ld", &V);
    for(a=0; a<9; a++)
    {
      t[a] = V/pos[a];
      V = V%pos[a];
    }
    for(e=0; e<9; e++)
    {
      if(t[e] > 0)
      {
        casa = e;
        e = 9;
      }
    }
    for(x=casa; x<9; x++)
    {
      count = count + val[t[x]];
    }
    printf("%d leds\n", count);
    count=0;
  }

  return 0;
}
