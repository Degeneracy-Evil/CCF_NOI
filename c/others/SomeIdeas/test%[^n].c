# include <stdio.h>
# include <stdlib.h>
int main(void)
{
    char *str = (char *)malloc(sizeof(char)*15);
    scanf("%[^\n]", str);
    printf("%s", str);
    free(str);
    return 0;
}