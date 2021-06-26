//请你对任意输入的一个三位数x，467-->467467.把这个数连续除以7、11、13，输出最后的商。
# include <stdio.h>

int main(void)
{
    int x;
    scanf("%d",&x);
    if (100 <= x && x <= 999)
    {
        printf("%d",x);
    }
    return 0;
}