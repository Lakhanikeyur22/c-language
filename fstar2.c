#include <stdio.h>
void main()
{
    int i, j, k, h;
    printf(" enyer value of h := ");
    scanf("%d", &h);

    k = h;
    for (j = 1; j <= h; j++)
    {
        for (i = 1; i <= k; i++)
        {
            printf(" ");
        }
        k--;
        for (i = 1; i <= j; i++)
        {
            if (i == 1 || j == h || i == j)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }
    // for(i=1 ; i<=5 ; i++)
    // {
    //      printf("*");
    // }
    // printf("\n");
}