#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n=0;
  while(n != 2002)
  {
    scanf("%d", &n);
    if(n == 2002){printf("Acesso Permitido\n"); break;}
    else {printf("Senha Invalida\n"); continue;}
  }
  return 0;
}
