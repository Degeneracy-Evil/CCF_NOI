# include <stdio.h>

int main(void)
{
    int I;
    scanf("%d", &I);
    switch (I)
    {
    case 0 ... 100000:
        printf("%.3f", I / 10.0);
        break;
    case 100001 ... 199999:
        printf("%.3f", 2500 + I * 3 / 40.0);
        break;
    case 200000 ... 399999:
        printf("%.3f", 7500 + I / 20.0);
        break;
    case 400000 ... 599999:
        printf("%.3f", 15500 + I * 3 / 100.0);
        break;
    case 600000 ... 1000000:
        printf("%.3f", 24500 + I * 3 / 200.0);
        break;
    default:
        break;
    }
    if ( I >= 1000000 )
        printf("%.3f", I / 100.0 + 29500);

    return 0;
}