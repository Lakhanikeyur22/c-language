#include <stdio.h>
void main()
{
     int j,n, i;
     j=1;
    // printf (" value if j ; = ");
    // scanf("%d",&j);
     printf (" value if n ; = ");
     scanf("%d",&n);
while(j<=n)
  {
      i=1;

    while(i<=j)
   {
    if (i==1 || i==j || j==n)
    {
        printf("* ");
    }
    else                 // printf("%d%d ",i,j);
    {
        printf("  ");
    }
   
    i++;
   }
   j++;
    printf("\n");
  }

//    i=1;
//    while(i<=5)
//    {
//     printf("*");
//     i++;
//    }
//     printf("\n");

//     i=1;
//     while(i<=5)
//     {
//         printf("*");
//         i++;
//     }
}