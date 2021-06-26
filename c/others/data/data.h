#include <math.h>
#include "sort.h"

int MID; //控制data.c中switch的跳转

typedef struct
{
    int Multiple; //倍数
    int Nosr;     //被开方数
    int input;    //输入的数
} SQUARE;

void Start();                             //开始界面
float Average(int length, float *p);      //平均数
float Mode(int length, float *p);         //众数
float Variance(int length, float *p);     //方差
float Stand_deviat(int length, float *p); //标准差
float Range(int length, float *p);        //极差
float Median(int length, float *p);       //中位数
float *Sort(int length, float *p);        //排序
float *Shuffle();                         //洗牌算法
void MySqrt1();                           //保留根号
void Decomfr(void);                       //分解质因数
void Equation_1_2(void);                  //一元二次方程
void Function_1(void);                    //一次函数解析式
void Data_process(void);                  //数据处理

float Average(int length, float *p) //平均数
{
    float Aver = 0.0f;
    for (int i = 0; i < length; ++i)
        Aver += p[i];
    return Aver / length;
}

float Mode(int length, float *p) //众数
{
    int c[length], j;
    Sort(length, p);

    for (int i = 0; i < length; ++i)
        c[i] = 0;

    for (int i = 0; i < length;)
        for (c[i] = 1, j = i; p[i] == p[j]; ++i)
            if (p[i] == p[i + 1])
                ++c[j];

    int max = c[0], k = 0;
    for (int i = 0; i < length; ++i)
        if (max < c[i])
            (max = c[i]) && (k = i);

    return p[k];
}

float Variance(int length, float *p) //方差
{
    float Var = 0.0f;
    float mid = Average(length, p);
    for (int i = 0; i < length; ++i)
        Var += pow((mid - p[i]), 2);
    return Var / length;
}

float Stand_deviat(int length, float *p) //标准差
{
    return sqrt(Variance(length, p));
}

float Range(int length, float *p) //极差
{
    Sort(length, p);
    return p[length - 1] - p[0];
}

float Median(int length, float *p) //中位数
{
    Sort(length, p);
    return 1 == (length & 1) ? p[((length + 1) >> 1) - 1] : (p[(length >> 1) - 1] + p[length >> 1]) / 2; //顺序:奇,偶
}

float *Shuffle() //洗牌算法
{
    int length;
    printf("Please input length:");
    scanf("%d", &length);
    float *p = (float *)malloc(sizeof(float) * length);

    printf("input data:\n");
    for (int i = 0; i < length; ++i)
        scanf("%f", p + i);
    getchar();
    printf("\n");

    for (int i = length - 1; 0 <= i; --i)
        Swap(p + i, p + (rand() % (i + 1)));
    for (int i = 0; i < length; ++i)
        printf("%g ", p[i]);
    printf("\n");
    system("pause");
    return p;
}

void MySqrt1() //保留根号
{
    SQUARE *square = (SQUARE *)malloc(sizeof(SQUARE));
    printf("0 means exit!\n\n");
    do
    {
        printf("Please input:");
        scanf("%d", &square->input);
        getchar();
        for (int n = square->input >> 1; 0 < n; --n) //n为m/2,because sqrt(m) <= m/2,优化time
            if (0 == (square->input) % (n * n))
            {
                square->Multiple = n;
                square->Nosr = square->input / (n * n);
                break;
            }
        if (1 == square->Multiple)
            printf("√%d=√%d\n", square->input, square->Nosr);
        else if (1 == square->Nosr)
            printf("√%d=%d\n", square->input, square->Multiple);
        else
            printf("√%d=%d√%d\n", square->input, square->Multiple, square->Nosr);
    } while (0 != square->input);
    free(square);
}

void Decomfr(void) //分解质因数
{
    int n, i;
    printf("0 means exit!\n\n");
    printf("Please input:");
    while (scanf("%d", &n) != EOF && n != 0)
    {
        printf("%d=", n);
        for (i = 2; i <= sqrt(n); i++)
            while (n != i)
            {
                if (0 == n % i)
                {
                    printf("%d*", i);
                    n /= i;
                }
                if (n % i)
                    break;
            }

        printf("%d\n", n);
        printf("Please input:");
    }
}

void Equation_1_2(void) //一元二次方程
{
    char ch;
    float a, b, c;
    double delta, x1, x2;
    printf("Example:\n1,-2,1\n\n");
    do
    {
        printf("please enter:\n");
        scanf("%f,%f,%f", &a, &b, &c);
        getchar();

        delta = b * b - 4 * a * c;
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

        printf("a=%.3f,b=%.3f,c=%.3f\n", a, b, c);
        printf("delta=%.3lf\n", delta);

        if (delta > 0)
            printf("x1=%.3lf\nx2=%.3lf\n", x1, x2);
        else if (delta == 0)
            printf("x1=x2=%.3lf\n", x1);
        else
            printf("Don't have result!\n");

        printf("Do you want to continue(If yes, enter y or Y):");
        scanf("%c", &ch);

    } while ('y' == ch || 'Y' == ch);

    printf("Bey!\n");
    system("pause");
}

void Function_1(void) //一次函数解析式
{
    char ch;
    float x1, x2, y1, y2, b, k;
    printf("The input format is:(x1,y1)(x2,y2)\n");
    printf("PS:Parentheses need to be in English\n\n");

    do
    {

        printf("please enter:\n");
        scanf("(%f,%f)(%f,%f)", &x1, &y1, &x2, &y2);
        getchar();

        b = (x1 * y2 - x2 * y1) / (x1 - x2);
        k = (y1 - y2) / (x1 - x2);

        if (b > 0)
            printf("y=%gx+%g\n", k, b);
        else if (b == 0)
            printf("y=%gx\n", k);
        else
            printf("y=%gx%g\n", k, b);

        printf("Whether to continue(Y/N):\n");
        scanf("%c", &ch);
        getchar();

    } while ('y' == ch || 'Y' == ch);

    printf("Bey!\n");
    system("pause");
}

void Data_process(void) //数据处理
{
    int length;
    float *parr;

    printf("0 means exit!\n\n");
    do
    {
        printf("Please input length:");
        scanf("%d", &length);
        parr = (float *)malloc(sizeof(float) * length);

        printf("input data:\n");
        for (int i = 0; i < length; ++i)
            scanf("%f", parr + i);
        getchar();
        printf("\n");

        printf("平均数为:%g\n", Average(length, parr));
        printf("中位数为:%g\n", Median(length, parr));
        printf("众数为:%g\n", Mode(length, parr));
        printf("方差为:%g\n", Variance(length, parr));
        printf("标准差为:%g\n", Stand_deviat(length, parr));
        printf("极差为:%g\n", Range(length, parr));
        printf("排序后为:\n");
        Sort(length, parr);
        for (int i = 0; i < length; ++i)
            printf("%g ", parr[i]);

        printf("\n\n");
        free(parr);
    } while (0 != length);
}

void Start()
{
    printf("\n\n\n\n\n");
    printf("\t\t\t\t\t+---------------------------------------+\n");
    printf("\t\t\t\t\t|                                       |\n");
    printf("\t\t\t\t\t|              数据处理                 |\n");
    printf("\t\t\t\t\t|              1.保留根号               |\n");
    printf("\t\t\t\t\t|              2.分解质因数             |\n");
    printf("\t\t\t\t\t|              3.一元二次方程           |\n");
    printf("\t\t\t\t\t|              4.一次函数解析式         |\n");
    printf("\t\t\t\t\t|              5.多数据处理             |\n");
    printf("\t\t\t\t\t|              6.打乱数据               |\n");
    printf("\t\t\t\t\t|              0.退出                   |\n");
    printf("\t\t\t\t\t|                                       |\n");
    printf("\t\t\t\t\t+---------------------------------------+\n");
    printf("\n\n");
    printf("\t\t请输入选择:");
    scanf("%d", &MID);
    getchar();
    system("cls");
}