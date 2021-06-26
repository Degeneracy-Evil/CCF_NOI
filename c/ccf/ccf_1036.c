#include <stdio.h>

int main(void)
{
    int num;
    int i = num / 2;
    scanf("%d", &num);

    do
    {
        printf("shang:%d yu:%d\n", num / 2, num % 2);
        i = (num /= 2);
    } while (0 != i);

    return 0;
}