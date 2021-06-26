#include <stdio.h>

void add(int Medals[], int Temp[]);

int main(void)
{
    int day, i;
    int Medals[3] = {0}, Temp[3] = {0};
    scanf("%d", &day);
    getchar();

    for (i = 0; i < day; ++i)
    {
        scanf("%d %d %d", Temp, Temp + 1, Temp + 2);
        getchar();
        add(Medals, Temp);
    }
    printf("%d %d %d %d", *(Medals), *(Medals + 1), *(Medals + 2),  \
                          *(Medals) + *(Medals + 1) + *(Medals + 2));
    return 0;
}

void add(int Medals[], int Temp[])
{
    int i = 0;
    while (i < 3)
    {
        *(Medals + i) += *(Temp + i);
        ++i;
    }
}