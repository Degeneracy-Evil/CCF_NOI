# include <stdio.h>

void menu();

int main(void)
{
    menu();
    int choose;
    scanf("%d", &choose);
    switch (choose)
    {
    case 0:
        break;
    case 1:
        printf("price=3.0");
        break;
    case 2:
        printf("price=2.5");
        break;
    case 3:
        printf("price=4.1");
        break;
    case 4:
        printf("price=10.2");
        break;
    default:
        printf("price=0");
        break;
    }

    return 0;
}

void menu()
{
    printf("[1] apples\n");
    printf("[2] pears\n");
    printf("[3] oranges\n");
    printf("[4] grapes\n");
    printf("[0] Exit\n");
}