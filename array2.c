// write a _Pragma to get value. number of variable given by user.
#include <stdio.h>
void main()
{
    int number['j'], k, j, ans;
    printf(" ANTER VALUE FROM USER ");
    scanf("%d", &j);
    for (k = 0; k < j; k++)
    {
        printf(" anter variable from user  %d ", k + 1);
        scanf("%d", &number[k]);
    }
    // number[0] = 15;
    // number[1] = 20;
    // number[2] = 25;
    // number[3] = 30;
    // number[4] = 35;
    for (k = 0; k < j; k++)
    {
        printf(" %d\n", number[k]);
    }
    //     printf(" value of number 1 %d\n", number[1]);
    //     printf(" value of number 1 %d\n", number[2]);
    //     printf(" value of number 1 %d\n", number[3]);
    //     printf(" value of number 1 %d\n", number[4]);
    for (k = 0; k < j; k++)
    {
        ans = number[k] * j;
    }
    printf("answer is %d", ans);
}