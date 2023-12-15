/*  1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5    */
#include <stdio.h>
void main()
{
    int i, j, k;
    k = 1;
    i = 5;

    while (k <= 5)
    {
        j = 1;
        while (j <= i)
        {
            printf("-");
            j++;
        }
        j = 1;
        while (j <= k)
        {
            printf("%d ", j);
            j++;
        }
        k++;
        i--;
        printf("\n");
    }
    // j = 5;
    // while (j >= 1)
    // {
    //     printf("-");
    //     j--;
    // }
    // j = 5;
    // while (j >= 1)
    // {
    //     printf("%d ", i);
    //     j--;
    // }

    // printf("\n");
    // j = 5;
    // while (j >= 1)
    // {
    //     printf("-");
    //     j--;
    // }
    // j=5;
    // while(j>=1)
    // {
    //      printf("%d ", i);
    //      j--;
    // }
    // printf("\n");

    // j=5;
    // while(j>=1)
    // {
    //     printf("-");
    //     j--;
    // }
    // j=5;
    // while(j>=1)
    // {
    //      printf("%d ", i);
    //      j--;
    // }
    // printf("\n");
}