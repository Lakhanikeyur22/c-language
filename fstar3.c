#include <stdio.h>
void main()
{
    int i, j, k, number;
    printf(" enter line of number := ");
    scanf("%d", &number);
    for (j = 1, k = number; j <= number; j++, k--)
    {
        for (i = 1; i <= j; i++)
        {
            printf(" ");
        }
        for (i = 1; i <= k; i++)
        {
            if (i == 1 || j == 1 || i == k)
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
}