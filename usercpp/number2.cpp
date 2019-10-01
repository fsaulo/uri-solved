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
    int x, dig[30], p,q;
    int numb[5]={1000,100,10,1};

    string name[30] = {
        "zero", "one", "two", "three", "four", "five", "six",
        "seven", "eight","nine", "ten", "eleven", "twelve",
        "thirteen", "fourteen","fifteen", "sixteen", "seventeen",
        "eighteen","nineteen", "twenty"
    };

    string hund[10] = {"thousand","hundred", "thousand", "hundred"};
    string dec[10] = {"twenty", "thirty","forty","fifty","sixty","seventy","eighty","ninety"};

    scanf("%d", &x);
    printf("%d - ", x);
    p = x;
    q = p;
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
        if(p>20)
        {
            if(i == 0 && dig[i] > 1)
            {
                cout << name[dig[i]]; printf(" "); cout << hund[i];
                dig[i] = i;
            }

            else if(i == 0 && dig[i] == 1)
            {
                cout << name[dig[i]]; printf(" "); cout << hund[i+2];
                dig[i] = i;
            }

            if(i == 1 && dig[i] > 1)
            {printf(" ");
            cout << name[dig[i]]; printf(" "); cout << hund[i];
            dig[i] = i-1;
        }
        else if(i == 1 && dig[i] == 1)
        {
            cout << name[dig[i]]; printf(" "); cout << hund[i+2];
            dig[i] = i-1;
        }

        if(i == 2 && dig[i] == 1)
        {printf(" ");
        cout << name[dig[i]*10]; printf(" ");
        dig[i] = i-1;
    }

    if(i == 2 && dig[i] > 1)
    {printf(" ");
    cout << dec[dig[i]-2]; printf(" ");
    dig[i] = i-2;
}

if(i == 3 && dig[i] >= 1)
cout << name[dig[i]];
dig[3] = 0;
}
}

return 0;
}
