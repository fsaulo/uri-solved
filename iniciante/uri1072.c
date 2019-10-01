#include <stdio.h>

int main()
{
  int n,x,i,cin=0,cout=0;
  scanf("%d", &n);
  for(i=0;i<n;i++)
  {
    scanf("%d", &x);
    if(x>=10 && x<= 20) cin++;
      else cout++;
  }
  printf("%d in\n%d out\n", cin,cout);
  return 0;
}
