#include "stdio.h"

int main(int argc, char const *argv[])
{
    /* code */
    int m, j, k;

    printf("������һ������");
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
        printf("%d ������\n", m);
    }
    else
    {
        printf("%d ��������\n", m);
    }

    system("pause");
}
