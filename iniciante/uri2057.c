#include <stdio.h>

int main()
{
    int S, T, F;
    int time;
    scanf("%d %d %d", &S, &T, &F);
    time = S + T + F;
    if (time >= 24) time -= 24;
    else if (time < 0) time += 24;
    printf("%d\n", time);
}
