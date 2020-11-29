#include "stdio.h"

int main(int argc, char const *argv[])
{
    int num = 0;
    int i = 101;

    while(i<=200)
    {
        num += i;
        i += 2;
    }

    printf("100-200之间的奇数和为：%d\n", num);

    system("pause");
}
