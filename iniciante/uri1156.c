#include <stdio.h>
#include <math.h>

int main()
{
    int i;
    double sum = 1;
    for (i = 1; i <= 38/2; i++)
        sum += (double) (2 * i + 1)/pow(2, i);
    printf("%.2f\n", sum);
}
