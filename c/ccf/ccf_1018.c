# include <stdio.h>

int main(void)
{
    float cost;
    scanf("%f", &cost);
    if ( 0.5 == cost )
        printf("3");
    else
        printf("%.0f", (cost - 0.5) * 5 + 3);

    return 0;
}