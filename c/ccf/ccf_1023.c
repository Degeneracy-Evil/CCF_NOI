# include <stdio.h>

int main(void)
{
    int num;
    scanf("%d", &num);
    int arr[num], i,j,iTemp;
    for (i = 0; i < num; ++i)
        scanf("%d", arr + i);

    for (i = 1; i < num; i++)
    {
        for (j = num - 1; j >= i; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                iTemp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = iTemp;
            }
		}
	}

    printf("%d", arr[num - 1] - arr[0]);

    return 0;
}