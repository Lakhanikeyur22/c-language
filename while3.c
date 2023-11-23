// print number 2,1,3,4,7,11,18,29,47,76,123..............
#include <stdio.h>
void main()
{
    int number = 2, i = 1;
    printf(" %d ", number);
    printf(" %d ", i);

    while (number <= 1351)

    {
        number = number + i; // 3
        printf(" %d ", number);

        i = number + i; // 4
        printf(" %d ", i);

        number = number + i; // 7
        printf(" %d ", number);
    }
}