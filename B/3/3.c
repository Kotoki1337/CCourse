#include "stdio.h"
main()
{
    int n = 0;
    printf("������һϵ���ַ�: \n");
    while (getchar() != '\n')
    {
        n++;
    }
    printf("������ַ��ĸ���Ϊ�� %d", n);
    getch();
}