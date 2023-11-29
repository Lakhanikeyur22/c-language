#include <stdio.h>
void main()
{
    int number[15], k;
    k = 1;
    for (k = 0; k < 15; k++)
    {
        printf(" antre variable number %d ", k + 1);
        scanf("%d", &number[k]);
    }
    // printf(" antre variable number 1 ");
    // scanf("%d", &number[0]);
    // printf(" anter variable number 2 ");
    // scanf("%d", &number[1]);
    // printf(" antre variable number 3 ");
    // scanf("%d", &number[2]);
    // printf(" anter variable number 4 ");
    // scanf("%d", &number[3]);
    // number[0] = 25;
    // number[1] = 50;
    // number[2] = 20;
    // number[3] = 10;
    // number[4] = 5;
    // number[5] = 100;
    for (k = 0; k < 15; k++)
    {
        printf(" value number is %d\n", number[k]);
    }
    // printf(" value number is %d\n", number[0]);
    // printf(" value number is %d\n", number[1]);
    // printf(" value number is %d\n", number[2]);
    // printf(" value number is %d\n", number[3]);
    // printf(" value number is %d\n", number[4]);
    // printf(" value number is %d\n", number[5]);
}