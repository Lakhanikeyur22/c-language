// printe number 1,5,12,22,35,51,70,92,117,145............3000.
#include <stdio.h>
void main()
{
    int number = 1, i = 1;
    printf("%d ", number);

    while (number <= 3000)

    {
        i = i + 3;           // 4
        number = number + i; // 5
        printf(" %d ", number);
    }
    //   i=i+3;//7
    //   number=number+i;//12
    //   printf(" %d ",number);

    //   i=i+3;//10
    //   number=number+i;//22
    //   printf("%d ",number);

    //   i=i+3;
    //   number=number+i;
    //   printf("%d ",number);
}