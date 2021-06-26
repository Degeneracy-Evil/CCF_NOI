/**
 * 溢出问题很严重,用long long int储存
*/
#include <stdio.h>

int main(void)
{
    long long int num;
    int count = 1;
    scanf("%lld", &num);

    while (1 != num)
    {
        if (1 == (num & 1))
            num = num * 3 + 1;
        else
            num = num >> 1;
        ++count;
    }
    printf("%d", count);

    return 0;
}