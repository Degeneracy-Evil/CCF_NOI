# include <stdio.h>

int main(void)
{
    int score[10];
    int i, j, iTemp;
    for (i = 0; i < 10; ++i)
        scanf("%d", score + i);

    for (i = 1; i < 10; i++)
	{
		for (j = 9; j >= i; j--)
		{
			if (score[j] < score[j - 1])
			{
				iTemp = score[j - 1];
				score[j - 1] = score[j];
				score[j] = iTemp;
			}
		}
	}
    printf("%.3f", (score[1] + score[2] + score[3] + \
                    score[4] + score[5] + score[6] + \
                    score[7] + score[8]) / 8.0);

    return 0;
}