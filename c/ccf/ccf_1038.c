#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, mid;
    int *p = (int *)malloc(sizeof(int) * 25);

    for (i = 0; i < 25; ++i)
        scanf("%d", p + i);

    for (i = mid = 0; i < 25; ++i)
        mid ^= p[i];
    printf("%d", mid);

    free(p);
    return 0;
}