// write a program print numbber 1,4,,9,16,25,36........10000.

#include <stdio.h>
void main()
{
  int number = 1;
  int temp = 1;

  printf(" %d ", number);
  while (number <= 10000)
  {
    temp = temp + 2;        // 3
    number = number + temp; // 4
    printf(" %d ", number);
  }
  // temp=temp+2;//5
  // number=number+temp;//9
  // printf(" %d ",number);

  // temp=temp+2;//7
  // number=number+temp;//16
  // printf(" %d ",number);

  // temp=temp+2;
  // number=number+temp;
  // printf(" %d ", number);
}
