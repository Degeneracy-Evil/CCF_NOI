#include <stdio.h>

int main(void)
{
    int h, i, j;
    scanf("%d", &h);

    for (i = 0; i < h; ++i)
    {
        for (j = 1; j < (h - i); ++j)
            printf(" ");
        for (j = 0; j < (2 * i + 1); ++j)
            printf("*");
        printf("\n");
    }

    return 0;
}