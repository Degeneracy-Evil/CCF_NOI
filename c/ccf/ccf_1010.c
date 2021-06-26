# include <stdio.h>

int main(void)
{
    int weight;
    scanf("%d", &weight);
    switch (weight)
    {
    case 0 ... 10:
        printf("%.2f", weight * 0.8 + 0.2);
        break;
    case 11 ... 20:
        printf("%.2f", (weight - 10) * 0.75 + 8.2);
        break;
    case 21 ... 30:
        printf("%.2f", (weight - 20) * 0.7 + 15.7);
        break;
    default:
        printf("Fail");
        break;
    }

    return 0;
}