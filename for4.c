/*  1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5    */
#include <stdio.h>
void main()
{  int j,i;
i=1;
j=1;
    for(i=1; i<=5; i++)
    {
        printf("-");
    }
    for( i=1;i<=5;i++)
    {
        printf("%d ",j);
    }
    printf("\n");

    for(i=1;i<=5;i++)
    printf("-");
}