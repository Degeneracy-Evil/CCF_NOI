# include <stdio.h>

void f(int year);

int main(void)
{
    int year, month;
    scanf("%d %d", &year, &month);
    switch (month)
    {
    case 2:
        f(year);
        break;
    case 1:
        printf("31");
        break;
    case 3:
        printf("31");
        break;
    case 5:
        printf("31");
        break;
    case 7:
        printf("31");
        break;
    case 8:
        printf("31");
        break;
    case 10:
        printf("31");
        break;
    case 12:
        printf("31");
        break;
    case 4:
        printf("30");
        break;
    case 6:
        printf("30");
        break;
    case 9:
        printf("30");
        break;
    case 11:
        printf("30");
        break;
    default:
        break;
    }

    return 0;
}

void f(int year)
{
    if (( 0 == year % 400 ) || (( 0 != year % 100 ) && ( 0 == year % 4 )))
        printf("29");
    else
        printf("28");
}