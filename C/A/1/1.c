#include "stdio.h"

int main(int argc, char const *argv[])
{
    int a, b, c, max, low;
    printf("��������������\n");
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
    printf("��������%d����С������%d", max, low);
    getch();
}
