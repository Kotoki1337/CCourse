#include "stdio.h"

int main(int argc, char const *argv[])
{
    /* code */
    int m, j, k;

    printf("请输入一个数：");
    scanf("%d", &m);

    k = m / 2;

    for (
        j = 2; j <= k; j++)
    {
        if (m % k == 0)
        {
            break;
        }
    }
    if (j >= k + 1)
    {
        printf("%d 是素数\n", m);
    }
    else
    {
        printf("%d 不是素数\n", m);
    }

    system("pause");
}
