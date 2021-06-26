//Y=X*((100+R)/100)^P
# include <stdio.h>
# include <math.h>
int main(void)
{
    int X,R,P;
    scanf("%d %d %d", &R, &X, &P);
    if (( 1 <= X && X <= 10000 )
        && 1 <= P && R <= 100 )
    {
        printf("%.2lf", X * pow((double)(1 + (R / 100.0)), (double)P));
    }
    return 0;
}