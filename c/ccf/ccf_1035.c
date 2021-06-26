#include <stdio.h>

int main(void)
{
    int num;
    scanf("%d", &num);
    num % 9 ? printf("%d", num % 9) : printf("9");

    return 0;
}