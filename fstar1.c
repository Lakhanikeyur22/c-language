#include <stdio.h>
void main()
{
    int i, j,k;
     printf( " enter value if k := ");
     scanf("%d",&k);

    for (j = 1; j <= k; j++)
    {
        for (i = 1; i <= j; i++)
        {
            if( i==1 || j==k ||  i==j )
            {
                printf("* ");
            }
            else{
                printf("  ");
            }
            //  printf("%d%d",i,j);
            // printf("*");
        }
        printf("\n");
    }

    // for (i=1; i<=5 ; i++)
    // {
    //     printf("*");
    // }
    // printf("\n");
    // for (i=1; i<=5 ; i++)
    // {
    //     printf("*");
    // }
}