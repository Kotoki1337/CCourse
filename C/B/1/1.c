#include "stdio.h"

/*  ����������ֵ��ʹ��Ӵ�С�����������ʹ��if��䣩 */

int main(int argc, char const *argv[])
{
    int a, b, c, max, low, mid;

    printf("�������һ��������\n");
    scanf("%d", &a);
    printf("������ڶ���������\n");
    scanf("%d", &b);
    printf("�����������������\n");
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
    printf("�����Ϊ��%d, %d, %d", max, mid, low);

    system("pause");
}
