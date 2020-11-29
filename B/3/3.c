#include "stdio.h"
main()
{
    int n = 0;
    printf("请输入一系列字符: \n");
    while (getchar() != '\n')
    {
        n++;
    }
    printf("输入的字符的个数为： %d", n);
    getch();
}