// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14
#include <stdio.h>
void main()
{
    int i, k,j;
    k = 1;
    j=1;
    while (j <= 4)
    {
        i = 1;
        while (i <=j)
        {
            printf("%d", k);
            k++;
            i++;
        }
      j++;
        printf("\n");
    }

    //  i = 1;
    // while (i <= 5)
    // {
    //     printf("%d", i);
    //    i++;
    // }

    // printf("%d", i);
    // i++;
    // printf("%d", i);

    // printf("\n");

    // i++;
    // printf("%d", i);
    // i++;
    // printf("%d", i);
    // i++;
    // printf("%d", i);
}