#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

int abs(int x)
{
  if(x<0) return -x;
    else if(x>=0) return x;
}

int main ()
{
  int x, p, k, q, dig[30], espec[5];
  int numb[5]={1000,100,10,1},c[5];

  string name[30] = {
                    "zero", "one", "two", "three", "four", "five", "six",
                    "seven", "eight","nine", "ten", "eleven", "twelve",
                    "thirteen", "fourteen","fifteen", "sixteen", "seventeen",
                    "eighteen","nineteen", "twenty","thirty","forty","fifty",
                    "sixty","seventy","eighty","ninety"
                    };

  string hund[10] = {"thousand", "hundred"};

  string dec[10] =  {"null","null","twenty", "thirty","forty","fifty",
                     "sixty", "seventy","eighty","ninety"
                    };

  scanf("%d", &x);
  printf("%d - ", x);
  p = x;
  q = x;
    if (p<0)
      printf("negative ");

  x=abs(x);
  p=abs(p);
  q=abs(q);

  if (p > 99999) {printf("can't read it yet, mate.\n"); return 0;}
      else if (p>=0 && p<=20)
        {cout << name[p];printf("\n"); return 0;}

  for(int i=0; i<4; i++)
  {
    dig[i] = x/numb[i];
    x = x%numb[i];

      dig[i] = q/numb[i];
      espec[i] = q%numb[i];
      q=q%numb[i];

    if(p>20)
    {
      if(i == 0 && dig[i] >= 1 && dig[i] <= 20)
      {
        cout << name[dig[i]]; printf(" "); cout << hund[0];
        dig[0] = 0; printf(" ");
      }

          else if(i == 0 && dig[i] > 20 && dig[i] < 100)
          {
            k = dig[i]/10;
            dig[i] = dig[i]%10;
            cout << dec[k];
            if (dig[i] != 0) {printf(" ");cout << name[dig[i]];}printf(" "); cout << hund[0];printf(" ");
            dig[0] = 0;
          }

      if(i == 1 && dig[i] >= 1)
      {
        cout << name[dig[i]]; printf(" "); cout << hund[1];
        dig[1] = 0; printf(" ");
      }

      if(i == 2 && dig[i] >= 1)
      {
        if (espec[1]<11 || espec[1]>=20) {cout << dec[dig[i]]; dig[2] = 0;}
          else if (espec[1] >= 11 || espec[1] <= 20){cout << name[espec[1]]; dig[3]=0;} printf(" ");
      }
      if(dig[3] == 0)
        {printf("\n");return 0;}
          else if(i == 3 && dig[i] >= 1)
          {
            cout << name[dig[i]];
            dig[3] = 0;
          }
      }
    }
    printf("\n");
  return 0;
}
