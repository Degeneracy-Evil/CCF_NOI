#include <math.h>
#include <stdio.h>

int main(void)
{
    int num, i, count = 0;
    scanf("%d", &num);
    for (i = 1; i <= sqrt(num); ++i)
        if (i == sqrt(num))
            ++count;
        else if (0 == num % i)
        {
            ++count;
            ++count;
        }

    printf("%d", count);
    return 0;
}