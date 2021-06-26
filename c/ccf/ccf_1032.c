#include <stdio.h>

int main(void)
{
    int h, i, j;
    scanf("%d", &h);
    int mid;

    for (i = 0; i < h; ++i)
    {
        for (j = 1; j < (h - i); ++j)
            printf(" ");
        for (j = mid = 0; j < (2 * i + 1); ++j)
            printf("%d", ++mid);
        printf("\n");
    }

    for (i = h - 2; i >= 0; --i)
    {
        for (j = 1; j < h - i; ++j)
            printf(" ");
        for (j = mid = 0; j < 2 * i + 1; ++j)
            printf("%d", ++mid);
        printf("\n");
    }

    return 0;
}