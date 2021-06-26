# include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    if (1 <= n && n <= 1000)
    {   
        if ((( n % 123 ) >= 97 ) && (( n % 123 ) <= 122 ))
            printf("%c", n % 123);
        else if ((( n % 91 ) >= 65) && (( n % 91) <= 90))
            printf("%c", n % 91);
        else
            printf("*");
    }
    return 0;
}