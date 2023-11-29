#include <stdio.h>
void main()
{
    int number1, number2, option;

    do
    {
        printf(" \n====anter option ====");
        printf("\n1 for addition \n");
        printf(" 2 for subtrection\n");
        printf(" 3 for multiplication\n");
        printf(" 4 for division\n");

        printf(" \nanter option ====  ");
        scanf("%d", &option);
    
        if (option == 1)
        {
            printf(" anter number 1:= ");
            scanf("%d", &number1);
            printf(" anter number 2:= ");
            scanf("%d", &number2);
            printf("\n.......addtion is %d ...... ", number1 + number2);
        }
        else if (option == 2)
        {
            printf(" anter number 1:= ");
            scanf("%d", &number1);
            printf(" anter number 2:= ");
            scanf("%d", &number2);
            printf(" \n.....subtrection is %d .....", number1 - number2);
        }
        else if (option == 3)
        {
            printf(" anter number 1:= ");
            scanf("%d", &number1);
            printf(" anter number 2:= ");
            scanf("%d", &number2);
            printf("\n......multiplication is %d ....... ", number1 * number2);
        }
        else if (option == 4)
        {
            printf(" anter number 1:= ");
            scanf("%d", &number1);
            printf(" anter number 2:= ");
            scanf("%d", &number2);
            printf("\n...... division is %d .......", number1 / number2);
        }
        else
        {
            printf("====== envelid input  ... anter 1 to 5 ==========\n");
        }
        printf (">>>>>continue your option press 0 <<<<<");
        scanf("%d",&option);
        

    } while (option == 0);
}