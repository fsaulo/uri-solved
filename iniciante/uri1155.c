# include <stdio.h>

int main()
{
    double sum = 0;
    int i;
    for (i = 1; i < 101; i++)
    {
        sum += (double) 1.0/i;
    }
    printf("%.2f\n", sum);
}
