#include <stdio.h>
void main()
{
    int j, i, k, d;
    printf(" enter value d : = ");
    scanf("%d", &d);
    k = d;
    j = 1;
    while (j <= d)
    {
        i = 1;
        while (i <= j)
        {
            printf("-");
            i++;
        }
        i = 1;
        while (i <= k)
        {
            printf("%d ", i);
            i++;
        }
        j++;
        k--;
        printf("\n");
    }
}