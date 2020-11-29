#include "stdio.h"

int main(int argc, char const *argv[])
{
    int num, i = 1;

    do
    {
        num += i * i;
        i++;
    } while (i < 50);

    printf("1^ + 2^ + 3^ + ··· + 50^ 的结果为：%d\n", num);

    system("pause");
}
