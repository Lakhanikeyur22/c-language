// print number 1,4,9,16,25,36,49,64,81,100..........10000 using square formula .
#include <stdio.h>
void main()
{
    int number = 1;
    int squre = 0;

    printf(" %d ", number);
    while (squre <= 10000)
    {
        number = number + 1;     // 2
        squre = number * number; // 4
        printf(" %d ", squre);
    }
    // number=number+1;//
    // squre=number*number;//9
    // printf(" %d ",squre);

    // number=number+1;
    // squre=number*number;
    // printf(" %d ",squre);
}