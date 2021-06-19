#include "stdio.h"

int main(int argc, char const *argv[])
{
    int a, b, c, max, low;
    printf("请输入三个数：\n");
    scanf("%d,%d,%d",  &a, &b, &c);
    if(a>b)
    {
        max = a;
        low = b;
    }
    else
    {
        max = b;
        low = a;
    }
    if (c>max)
    {
        max = c;
    }
    else
    {
        if (c<low)
        {
            low = c;
        }
    }
    printf("最大的数是%d，最小的数是%d", max, low);
    getch();
}
