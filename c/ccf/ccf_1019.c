# include <stdio.h>

void f(float x);

int main(void)
{
    float x;
    scanf("%f", &x);
    f(x);

    return 0;
}

void f(float x)
{
    if ( 0 <= x && x < 5 )
        printf("%.3f", x + 2.5);
    else if ( 5 <= x && x < 10 )
        printf("%.3f", -(3 * x * x - 18 * x + 23) / 2);
    else if (10 <= x && x < 20)
        printf("%.3f", (x - 3) / 2);
}