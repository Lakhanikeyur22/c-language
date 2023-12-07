#include <stdio.h>
void printteable(int num)
{
   for (int i = 1; i <= 10; i++)
   {
      printf(" %d x%d=%d\n", num, i, (num * i));
   }
}
void main()
{
   int num, i;

   do
   {
      printf(" anter value of number : ");
      scanf("%d", &num);

      printteable(num);

      printf(" if you are continue anter 0 ");
      scanf("%d", &i);
   } while (i == 0);
}