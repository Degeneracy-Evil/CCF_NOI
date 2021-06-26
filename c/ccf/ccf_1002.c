//输入三角形三边长a,b,c（保证能构成三角形），输出三角形面积
# include <stdio.h>
# include <math.h>
int main(void)
{
    float l1, l2, l3, middle, S;
    scanf("%f %f %f", &l1, &l2, &l3);
    if ((1 <= l1 && l1 <= 10000 ) && 
        (1 <= l2 && l2 <= 10000 ) && 
        (1 <= l3 && l3 <= 10000 )    )
    {
        middle = (l1 + l2 + l3) / 2;
        S = sqrt(middle * (middle - l1) * (middle - l2) * (middle - l3));
        printf("%.4f", S);
    }
    return 0;
}