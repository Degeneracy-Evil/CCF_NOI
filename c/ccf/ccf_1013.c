//按等边、直角、一般三角形分类，依次输出对应的三角形类型“Equilateral”、“Right”、“General”
# include <stdio.h>
# include <math.h>

int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if ((( a + b ) <= c ) ||
        (( a + c ) <= b ) ||
        (( b + c ) <= a )   )
        printf("NO");
    else
    {
        if (( a == b ) && ( b == c ))
            printf("Equilateral");
        else if ((( a * a ) + ( b * b ) == ( c * c )) ||
                 (( a * a ) + ( c * c ) == ( b * b )) ||
                 (( b * b ) + ( c * c ) == ( a * a ))   )
            printf("Right");
        else
            printf("General");
    }

    return 0;
}