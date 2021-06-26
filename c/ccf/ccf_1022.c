# include <stdio.h>

int main(void)
{
    int num,total=0, i;
    scanf("%d", &num);
    int age[num];
    for (i = 0; i < num; ++i)
    {
        scanf("%d", &age[i]);
        total += age[i];
    }
    printf("%.2f", (float)total / num);

    return 0;
}