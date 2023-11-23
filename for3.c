
/*   1
    2 2
   3 3 3
  4 4 4 4
 5 5 5 5 5
 */
#include <stdio.h>
void main()
{
    int i, j,k;
    k=5;
    j = 1;
  for (j = 1; j <= 5; j++)
    {
        for (int i = 1; i <= k; i++)
        {
            printf("-");
        }
        for (i = 1; i <= j; i++)
        {
            printf("%d ", j);
        }
        printf("\n");
        k--;
    }
  // for (int i = 1; i <= 5; i++)
    // {
    //     printf("-");
    // }
    // for (i = 1; i <= 5; i++)
    // {
    //     printf("%d ", j);
    // }
    // printf("\n");

    // for (i = 1; i <= 5; i++)
    // {
    //     printf("-");
    // }
    // j++;
    // for (i = 1; i <= 5; i++)
    // {
    //     printf("%d ", j);
    // }
    // printf("\n");

    // for (i = 1; i <= 5; i++)
    // {
    //     printf("-");
    // }
    // j++;
    // for (i = 1; i <= 5; i++)
    // {
    //     printf("%d ", j);
    // }
    // printf("\n");
}