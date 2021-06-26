#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    a %= 10;

    switch (a)
    {
    case 1:
        printf("1");
        break;
    case 2:
        b %= 4;
        switch (b)
        {
        case 0:
            printf("6");
            break;
        case 1:
            printf("2");
            break;
        case 2:
            printf("4");
            break;
        case 3:
            printf("8");
            break;
        default:
            break;
        }
        break;
    case 3:
        b %= 4;
        switch (b)
        {
        case 0:
            printf("1");
            break;
        case 1:
            printf("3");
            break;
        case 2:
            printf("9");
            break;
        case 3:
            printf("7");
            break;
        default:
            break;
        }
        break;
    case 4:
        b %= 2;
        switch (b)
        {
        case 0:
            printf("6");
            break;
        case 1:
            printf("4");
            break;
        default:
            break;
        }
        break;
    case 5:
        printf("5");
        break;
    case 6:
        printf("6");
        break;
    case 7:
        b %= 4;
        switch (b)
        {
        case 0:
            printf("1");
            break;
        case 1:
            printf("7");
            break;
        case 2:
            printf("9");
            break;
        case 3:
            printf("3");
            break;
        default:
            break;
        }
        break;
    case 8:
        b %= 4;
        switch (b)
        {
        case 0:
            printf("6");
            break;
        case 1:
            printf("8");
            break;
        case 2:
            printf("4");
            break;
        case 3:
            printf("2");
            break;
        default:
            break;
        }
        break;
    case 9:
        b %= 2;
        switch (b)
        {
        case 0:
            printf("1");
            break;
        case 1:
            printf("9");
            break;
        default:
            break;
        }
        break;
    default:
        printf("0");
        break;
    }

    return 0;
}
