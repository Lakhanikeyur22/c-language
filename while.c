// write a program to print even number till 1000 time .

#include <stdio.h>
void main()
{
    int number = 2;

    while (number < 1000)
    {
        printf(" %d ", number);
        number = number + 2;
    }
}