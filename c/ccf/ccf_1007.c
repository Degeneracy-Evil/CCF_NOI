# include <stdio.h>

int main(void)
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    int k = 0;
    while ( a > k * b)
    {
        ++k;
    }
    printf("%.2lf", a - (k - 1) * b);
    return 0;
}