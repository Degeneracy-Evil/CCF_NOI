#include <stdio.h>

int main(void)
{
    int dividend, divisor, remainder = 1;

    scanf("%d %d", &dividend, &divisor);
    remainder = dividend % divisor;

    while (0 != remainder)
    {
        dividend = divisor;
        divisor = remainder;
        remainder = dividend % divisor;
    }
    if (divisor > 1)
        printf("No");
    else
        printf("Yes");

    return 0;
}