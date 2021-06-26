# include <stdio.h>

int main(void)
{
    char num;
    int count = 0;
    for (scanf("%c", &num); (num != '\n') && (num != '\r'); scanf("%c", &num))
        count+=(num-48);
    printf("%d", count);
    return 0;
}