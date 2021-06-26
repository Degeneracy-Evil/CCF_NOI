/**
 * 最好改成链表处理
 * 
 * 众数有多个,使用循环,桶排序
 * 中位数看奇偶
 * 
 * 判断浮点数的方法是:将数字强制转化成int型,再与原数字比较
*/
#include <stdio.h>
#include <stdlib.h>
#include "data.h"

int main(void)
{

    while (1)
    {
        system("cls");
        Start();
        switch (MID)
        {
        case 1:
            MySqrt1(); //保留根号
            break;
        case 2:
            Decomfr(); //分解质因数
            break;
        case 3:
            Equation_1_2(); //一元二次方程
            break;
        case 4:
            Function_1(); //一次函数解析式
            break;
        case 5:
            Data_process(); //数据处理
            break;
        case 6:
            Shuffle(); //洗牌算法
            break;
        default:
            return 0;
        }
    }
}