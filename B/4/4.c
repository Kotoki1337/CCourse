#include "stdio.h"
#include "math.h"
main()
{
    int m, j, k;
    scanf("%d", &m);
    k = sqrt(m);
    for (j = 2; j <= k; j++)
        if (m % j == 0)
            break;
    if (j >= k + 1)
        printf("%d ������\n", m);
    else
        printf("%d ��������\n", m);
    getch();
}