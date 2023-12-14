// write a program to creat a clecluleter.
#include <stdio.h>
void main()
{
    int number1, number2, option;
    // float option2;
    printf(" \nenter 1 for addition + ");
    printf(" \nenter 2 for subtraction - ");
    printf(" \nenter 3 for multiplication * ");
    printf(" \nenter 4 for division / ");
    printf(" \nenter 5 for modulus  ");
    printf(" \nenter 6 for maximum > ");
    printf(" \nenter 7 for minimum <  \n");

    printf(" enter value of option ");
    scanf("%d", &option);
    printf(" anter the value of number 1 - ");
    scanf("%d", &number1);
    printf(" anter the value of number 2 - ");
    scanf("%d", &number2);
    // printf (" enter value of option2 ");
    // scanf("%f",&option2);

    if (option == 1)
    {
        printf(" the answer is %d ", number1 + number2);
    }
    else if (option == 2)
    {
        printf("the answer is %d ", number1 - number2);
    }
    else if (option == 3)
    {
        printf("the answer is %d ", number1 * number2);
    }
    else if (option == 4)
    {
        printf("the answer is %d ", number1 / number2); // erre in iths line
    }
    else if (option == 5)
    {
        printf("the answer is %d ", number1 % number2);
    }
    else if (option == 6)
    {
        if (number1 > number2)
        {
            printf(" number 1 is greter ");
        }
        else
        {
            printf(" number 2 is  greter ");
        }
    }
    else if (option == 7)
    {
        if (number1 < number2)
        {
            printf(" number 2 is greter ");
        }
        else
        {
            printf(" number 1 is greter ");
        }
    }
}