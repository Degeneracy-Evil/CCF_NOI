# include <stdio.h>

int main(void)
{
    char *str[] = {
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday",
        "Sunday",
    };
    int num;
    scanf("%d", &num);
    printf("%s", str[num - 1]);

    return 0;
}