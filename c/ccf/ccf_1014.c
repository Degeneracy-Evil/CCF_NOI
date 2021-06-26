# include <stdio.h>

int main(void)
{
    int score;
    scanf("%d", &score);
    switch (score)
    {
    case 90 ... 150:
        printf("Excellent");
        break;
    case 80 ... 89:
        printf("Good");
        break;
    case 60 ... 79:
        printf("Pass");
        break;
    case 0 ... 59 :
        printf("Fail");
    default:
        break;
    }

    return 0;
}