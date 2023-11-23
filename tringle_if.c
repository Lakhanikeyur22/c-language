#include <stdio.h>
void main()
{
   float height, base, tringle1, tringle2, tringle3;
   printf(" enter VALUE OF HIEIGHT  :- ");
   scanf("%f", &height);
   printf(" enter VALUE IF BASE  :- ");
   scanf("%f", &base);

   tringle1 = height * base / 2;

   float height2, base2;
   printf(" enter VALUE OF HEIGHT 2 : - ");
   scanf("%f", &height2);
   printf(" enter VALUE OF BASE 2  : - ");
   scanf("%f", &base2);

   tringle2 = (height2 * base2) / 2;

   float height3, base3;
   printf(" enter VALUE IF HEIGHT 3 :- ");
   scanf("%f", &height3);
   printf(" enter VALUE IF BASE 3 : - ");
   scanf("%f", &base3);

   tringle3 = height3 * base3 / 2;
   printf(" \n AREA OF TRINGLE 1 IS : -- %f\n", tringle1);
   printf(" AREA OF TRINGLE 2 IS : -- %f\n", tringle2);
   printf(" AREA OF TRINGLE 3 IS : -- %f\n", tringle3);

   if (tringle1 < tringle2)
   {
      if (tringle1 < tringle3)
      {
         printf(" TRINGLE 1 is SMOLL then 2 and 3 ");
      }
      else
      {
         printf(" TRINGLE 3 is SMOLL then 1 and 2 ");
      }
   }
   else
   {
      if (tringle2 < tringle1)
      {
         if (tringle2 < tringle3)
         {
            printf(" TRINGLE 2 is SMOLL then 1 and 3");
         }
         else
         {
            printf(" TRINGLE 3 is SMOLL then 1 and 2 ");
         }
      }
      else
      {
         printf(" all are same ");
      }
   }
}
