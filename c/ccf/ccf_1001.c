//由华氏温度F与摄氏温度C的转换公式为：F＝C×9/5＋32。保留四位小数
# include <stdio.h>

int main(void)
{
	float F,C;
	scanf("%f",&F);
	C = ( F - 32 ) * 5 / 9;
	printf("%.4f", C);
	
	return 0;
}