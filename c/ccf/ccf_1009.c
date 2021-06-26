# include <stdio.h>

int main(void)
{
    int boy, girl, total;
    scanf("%d %d", &boy, &girl);
    total = boy + girl;
    if (total < 10 && 0 <= total)
        printf("water");
    else if (boy > girl)
        printf("tree");
    else
    {
        printf("tea");
    }
    
    

    return 0;
}