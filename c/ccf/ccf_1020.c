/**
 * 最好的方式是将所以输入的数字当作四位数处理
 * 例如:    5--0005    39--0039    523--0523
*/
# include <stdio.h>

int main(void)
{
    int num;
    scanf("%d", &num);
    switch (num)
    {
    case 1 ... 9:
        printf("1\n");
        goto one;
        break;
    case 10 ... 99:
        printf("2\n");
        goto two;
        break;
    case 100 ... 999:
        printf("3\n");
        goto three;
        break;
    case 1000 ... 9999:
        printf("4\n");
        goto four;
        break;
    default:
        break;
    }

four:
    printf("%d\n", num / 1000);
three:
    printf("%d\n", num / 100 - num / 1000 * 10);
two:
    printf("%d\n", num / 10 - num / 100 * 10);
one:
    printf("%d", num - num / 10 * 10);
    return 0;
}