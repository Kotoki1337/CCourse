#include "stdio.h"
main()
{
    float sum = 1.0;
    int i = 2;
    do
    {
        sum = sum + 1.0 / i;
        i = i + 2;
    } while (i < 50);
    printf("sum = %f\n", sum);
    getch();
}