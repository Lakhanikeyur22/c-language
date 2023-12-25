// 2] write a programe to add 10 element by user in array and sum or multipliy all. .
#include <stdio.h>
void main()
{
    int number[10], sum = 0, mul = 1, i;

    for (i = 0; i < 10; i++)
    {
        printf(" value of numbre %d : ", i + 1);
        scanf("%d", &number[i]);
    }

    for (i = 0; i < 10; i++)
    {
        printf(" number %d = %d\n", i + 1, number[i]);
        sum = sum + number[i];
        mul = mul * number[i];
    }
    printf("TOTEL IS %d\n", sum);

    printf(" multiply is %d", mul);
}