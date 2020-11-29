#include "stdio.h"

/*  输入三个数值，使其从大到小排列输出。（使用if语句） */

int main(int argc, char const *argv[])
{
    int a, b, c, max, low, mid;

    printf("请输入第一个整数：\n");
    scanf("%d", &a);
    printf("请输入第二个整数：\n");
    scanf("%d", &b);
    printf("请输入第三个整数：\n");
    scanf("%d", &c);

    if (a > b)
    {
        max = a;
        low = b;
    }
    else
    {
        max = b;
        low = a;
    }
    if (c > max)
    {
        mid = max;
        max = c;
    }
    else
    {
        if (c < low)
        {
            mid = low;
            low = c;
        }
        else
        {
            mid = c;
        }
    }
    printf("排序后为：%d, %d, %d", max, mid, low);

    system("pause");
}
