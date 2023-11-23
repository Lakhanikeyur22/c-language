 /*  1
    2 2
   3 3 3
  4 4 4 4
 5 5 5 5 5
 */ 

#include<stdio.h>
void main()
{
    int i,k,d;
    d=5;
  k=1;
  while(k<=5)
  {
       i=1;
    while(i<=d)
  {
      printf("-");
      i++;
  }
  i=1;
  while(i<=k)
  {
    printf("%d ",k);
    i++;
  }
  printf("\n");
k++;
 d--;
  } 
 
  //   i=1;
  //   while(i<=5)
  // {
  //     printf("-");
  //     i++;
  // }
  // i=1;
  // j=1;
  // while(i<=5)
  // {
  //   printf("%d ",j);
  //   i++;
  // }
  // printf("\n");

  // i=1;
  // while(i<=5)
  // {
  //   printf("-");
  //   i++;
  // }
  // i=1;
  // j++;
  // while(i<=5)
  // {
  //   printf("%d ",j);
  //   i++;
  // }
  // printf("\n");

  // i=1;
  // while(i<=5)
  // {
  //   printf("-");
  //   i++;
  // }
  // j++;
  // i=1;
  // while(i<=5)
  // {
  //   printf("%d ",j);
  //   i++;
  // }
  // printf("\n");
}