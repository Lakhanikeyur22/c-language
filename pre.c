/*  12345    
    1234     
    123
    12
    1
*/
#include <stdio.h>
void main()
{
    int i, j, k;
   k=1;
   i=5;
   while(k<=5)
   {
    j = 1;
    while (j <= i)
    {
        printf("%d", j);
        j++;
    }
    k++;
    i--;
    printf("\n");
   }
    // i = 1;
    // j = 1;
    // while (j <= 5)
    // {
    //     printf("%d", i);
    //     i++;
    //     j++;
    // }

    //     printf("%d", i);
    //     i++;
    //     printf("%d", i);
    //     i++;
    //     printf("%d", i);
    //     i++;
    //     printf("%d", i);
    //     i++;
    //     printf("%d", i);

    //     printf("\n");

    //     i = 1;
    //     printf("%d", i);
    //     i++;
    //     printf("%d", i);
    //     i++;
    //     printf("%d", i);
    //     i++;
    //     printf("%d", i);
    //     i++;
    //     printf("%d",i);
}