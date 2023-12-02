// printf simple number in table.
#include <stdio.h>
void main()
{
    int number[3][3], sum = 0, i, j;
    for (j = 0; j < 3; j++)
    {
        printf(" \n====== anter value of number== %d=======\n ", j + 1);
        for (i = 0; i < 3; i++)
        {
            printf(" anter value the no  %d : ", i + 1);
            scanf("  %d", &number[j][i]);
        }
    }

    for (j = 0; j < 3; j++)
    {
        printf("\n value of number %d \n ", j + 1);
        for (i = 0; i < 3; i++)
        {
            printf("value of 1 : %d\n", number[j][i]);
        }
    }
    
    for (j = 0; j < 3; j++)
    {
        for (i = 0; i < 3; i++)
        {
            sum = sum + number[j][i];
        }
    }
    printf(" answer sum is===== %d =====", sum);
    // for (i = 0; i < 3; i++)
    // {
    //     printf(" anter value the no 1- %d : ", i + 1);
    //     scanf("  %d", &number[0][i]);
    // }
    // for (i = 0; i < 3; i++)
    // {
    //     printf(" anter value the no 2- %d : ", i + 1);
    //     scanf("  %d", &number[1][i]);
    // }
    // for (i = 0; i < 3; i++)
    // {
    //     printf(" anter value the no 3- %d : ", i + 1);
    //     scanf("  %d", &number[2][i]);
    // }
    // step 1 :   number[0][0] = 10;
    //  number[0][1] = 20;
    // number[0][2] = 30;

    /// step 1 : number[1][0] = 30;
    // number[1][1] = 20;
    // number[1][2] = 10;

    /// step 1 :  number[2][0] = 40;
    // number[2][1] = 50;
    // number[2][2] = 60;

    // step 2 : printf(" anter value the no 1- 1 : ");
    //  scanf("  %d", &number[0][0]);
    //  printf(" anter value the no 1- 2 : ");
    // scanf(" %d", &number[0][1]);
    // printf(" anter value the no 1- 3 : ");
    // scanf(" %d", &number[0][2]);

    // step 2 : printf(" anter value the no 2- 1 : ");
    //  scanf("  %d", &number[1][0]);
    //  printf(" anter value the no 2- 2 : ");
    //  scanf(" %d", &number[1][1]);
    //  printf(" anter value the no 2- 3 : ");
    //  scanf(" %d", &number[1][2]);

    // step 2 : printf(" anter value the no 3- 1 : ");
    //  scanf("  %d", &number[2][0]);
    //  printf(" anter value the no 3- 2 : ");
    //  scanf(" %d", &number[2][1]);
    //  printf(" anter value the no 3- 3 : ");
    //  scanf(" %d", &number[2][2]);

    // printf("\n value of number 1 \n \n");
    // for (i = 0; i < 3; i++)
    // {
    //     printf("value of 1 : %d\n", number[0][i]);
    // }
    // printf("\n value of number 2 \n \n");
    // for (i = 0; i < 3; i++)
    // {
    //     printf("value of 1 : %d\n", number[1][i]);
    // }
    // printf("\n value of number 3 \n \n");
    // for (i = 0; i < 3; i++)
    // {
    //     printf("value of 1 : %d\n", number[2][i]);
    // }
    // step 1 : printf("value of 1 : %d\n", number[0][0]);
    // printf("value of 2 : %d\n", number[0][1]);
    // printf("value of 3 : %d\n", number[0][2]);

    // step 1 : printf("value of 1 : %d\n", number[1][0]);
    //  printf("value of 2 : %d\n", number[1][1]);
    //  printf("value of 3 : %d\n", number[1][2]);

    // step 1 : printf("value of 1 : %d\n", number[2][0]);
    //  printf("value of 2 : %d\n", number[2][1]);
    //  printf("value of 3 : %d\n", number[2][2]);

    // for (i = 0; i < 3; i++)
    // {
    //     sum = sum + number[0][i];
    // }
    // for (i = 0; i < 3; i++)
    // {
    //     sum = sum + number[1][i];
    // }
    // for (i = 0; i < 3; i++)
    // {
    //     sum = sum + number[2][i];
    // }

    // step 1 : sum = sum + number[0][0];
    //  sum = sum + number[0][1];
    //  sum = sum + number[0][2];

    // step 1 : sum = sum + number[1][0];
    //  sum = sum + number[1][1];
    //  sum = sum + number[1][2];

    // step 1 : sum = sum + number[2][0];
    //  sum = sum + number[2][1];
    //  sum = sum + number[2][2];
}