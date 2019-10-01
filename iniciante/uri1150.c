# include <stdio.h>

int main()
{
    int x, z, i;
    int index = 0, sum = 0;
    scanf("%d %d", &x, &z);
    while (z <= x)
        scanf("%d", &z);
        if (z > x) {
            i = x;
            while (sum <= z)
            {
                sum += i;
                index++; i++;
            }
        }
    printf("%d\n", index);
}
