#include <stdio.h>

int main() {
    int x = 1;
    while (x > 0)
    {
        scanf("%d", &x);
        int i = 0;
        for (i = 1; i <= x; i++)
        {
            printf("%d", i);
            if (i < x) printf(" ");
                else printf("\n");
        }
    }
}
