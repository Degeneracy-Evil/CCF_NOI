/**
 * scanf不会接收空格以及回车,所以不能判断它们,line13
*/
# include <stdio.h>
# include <stdlib.h>

int main(void)
{
    char *str = (char *)malloc(sizeof(char) * 100);
    scanf("%s", str);
    int i;

    for (i = 0; *(str + i) != '\0'; ++i)
    {
        if ((*(str + i) >= 'A' && *(str + i) <= 'Z') || \
            (*(str + i) >= 'a' && *(str + i) <= 'z'))
        {
            if (*(str + i) == 'X' || *(str + i) == 'x' || \
                *(str + i) == 'Y' || *(str + i) == 'y' || \
                *(str + i) == 'Z' || *(str + i) == 'z')
            {
                *(str + i) -= 23;
                printf("%c", *(str + i));
                continue;
            }
            *(str + i) += 3;
        }
        printf("%c", *(str + i));
    }
    free(str);
    return 0;
}