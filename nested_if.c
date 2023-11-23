#include <stdio.h>
void main()
{
  int number1, number2, number3;

  printf(" enter value of number 1  :");
  scanf("%d", &number1);
  printf(" enter value of number 2  : ");
  scanf("%d", &number2);
  printf(" enter value of number 3  : ");
  scanf("%d", &number3);

  if (number1 > number2)
  {
    if (number1 > number3)
    {
      printf(" number 1 is big for 2 and 3 ");
    }
    else
    {
      printf(" number 3 is big for 1 and 2");
    }
  }
  else
  {

    if (number2 > number3)
    {
      printf(" number 2 is big for 1 and 3 ");
    }
    else
    {
      printf(" number 3 is big for 1 and 2");
    }
  }
}