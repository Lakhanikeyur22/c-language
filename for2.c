/*
_____*
____* *
___* * *
__* * * *
_* * * * *
*/

#include <stdio.h>
void main()
{int j,i,k;
j=5;
i=1;
k=1;
  for(int i=1;i<=5;i++)
  {
    for (int i = 1; i <= j; i++)
      printf("-");
    for (int i = 1; i <= k; i++)
      printf("* ");

    printf("\n");
  j--;
  k++;
  }
  //  for(int i=1;i<=5;i++)
  // printf("-");
  // for(int i=1;i<=5;i++)
  // printf("* ");

  // printf("\n");
  //  for(int i=1;i<=5;i++)
  // printf("-");
  // for(int i=1;i<=5;i++)
  // printf("* ");
}