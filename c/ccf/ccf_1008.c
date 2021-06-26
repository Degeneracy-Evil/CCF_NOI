# include <stdio.h>

int main(void)
{
    int m,j,i[4]={153,370,371,407};
    scanf("%d",&j);
    for ( m = 0; m < 4; ++m)
    {
        if (j == i[m])
        {
            printf("YES");
            return 0;
        }
        
    }
    printf("NO");

    return 0;
}