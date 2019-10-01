#include <bits/stdc++.h>
using namespace std;
int main()
{
  int d,f;
  while(scanf("%d %d", &d,&f)!=EOF)
  {
    if(d<f) printf("Crescente\n");
    else if(d>f) printf("Decrescente\n");
    else break;
  }
  return 0;
}
