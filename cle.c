// 3] write a programe to perform calculater and also use switch case in programe . + , - , * , / , squre , % .
#include <stdio.h>
void main()
{
    int option, num1, num2;
    do
    {
        printf("\n FOR SUM PRESS 1 \n");
        printf(" FOR SUBTRECTION PRESS 2 \n");
        printf(" FOR MULTIPLICATION PRESS 3 \n");
        printf(" FOR DIVISION PRESS 4 \n");
        printf(" FOR MODIUL PRESS 5 \n");
        printf(" FOR SQURE PRESS 6 \n");

        printf(" \nANTER YOUR OPTION : ");
        scanf("%d", &option);
        if (option >= 1 && option <= 5)

        {
            printf("ANTER VALUE OF NUMBER 1 : ");
            scanf("%d", &num1);

            printf("ANTER VALUE OF NUMBER 2 : ");
            scanf("%d", &num2);
        }
        switch (option)
        {
        case 1:
            printf("answer sum is %d ", num1 + num2);
            break;

        case 2:
            printf(" answer subtrection is %d", num1 - num2);
            break;

        case 3:
            printf(" answer multiplication is %d", num1 * num2);
            break;

        case 4:
            printf(" answer division is %d", num1 / num2);
            break;
        case 5:
            printf(" answer modiul is %d", num1 % num2);
            break;
        case 6:
            printf("ANTER VALUE OF NUMBER 1 : ");
            scanf("%d", &num1);
            printf(" answer squre is %d", num1 * num1);
            break;
        default:
        {
            printf(" \ninvelid input\n ");
        }
        }
        printf("\n\n if continue press 0 ");
        scanf("%d", &option);
    } while (option == 0);
}