#include "stdio.h"

int main(int argc, char const *argv[])
{
    int num, result, k;
    float y;

    printf("�������");
    scanf("%d", &num);
    
    k = num/1000;

    switch(k)
    {
        case 0:
            y = 0.9;
        case 1:
            y = 0.8;
        case 2:
            y = 0.8;
            break;
        case 3:
            y = 0.7;
        case 5:
            y = 0.6;
            break;
        default:
            y = 0.6;
    }

    result = num * y;

    printf("ԭ�ۣ�%d\n���%d\n", num, result);

    system("pause");
}
