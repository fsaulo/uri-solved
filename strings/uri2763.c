#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char cpf[15], *ch;
    int i;
    scanf("%s", cpf);
    for (i = 0; i < strlen(cpf); i++)
    {
        if (cpf[i] == '.' || cpf[i] == '-')
            printf("\n");
        else {
            int digit = (int) cpf[i] - '0';
            printf("%d", digit);
        }
    }
    printf("\n");
}
