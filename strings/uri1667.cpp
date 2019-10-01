#include <bits/stdc++.h>

using namespace std;

int main()
{
    char word[85]; const char *pTag1 = "<br>", *pTag2 = "<hr>";
    int sizel=0, a;

    while(scanf("%s", word) != EOF)
    {
        if(!strcmp(word, pTag1))
        {
            printf("\n");
            sizel = 0;
        }
        else if(!strcmp(word, pTag2))
        {
            if(sizel) cout << "\n";
                for(a = 0; a < 80; a++)
                    cout << "-";
            cout << "\n";
            sizel = 0;
        }
        else
        {
            int wrdsize = (unsigned) strlen(word);
            if(sizel+wrdsize >= 80)
            {
                printf("\n%s", word);
                sizel = wrdsize;
            }
            else
            {
                if (sizel) {printf(" "); sizel++;}
                    printf("%s", word);
                sizel += wrdsize;
            }
        }
    }

    printf("\n");
    return (0);
}
