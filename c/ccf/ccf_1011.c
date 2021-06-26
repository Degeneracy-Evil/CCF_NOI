# include <stdio.h>

int main(void)
{
    float x, y;
    scanf("%f %f", &x, &y);
    if (( x <= 1 && -1 <= x ) &&
        ( y <= 1 && -1 <= y )   )
        printf("Yes");
    else
        printf("No");

    return 0;
}