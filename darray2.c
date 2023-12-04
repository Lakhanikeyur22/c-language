// print two dimansion array for student mark with subject .
#include <stdio.h>
void main()
{
    int marks[2][4], totel = 0, totel1 = 0, i, j;

    for (j = 0; j < 2; j++)
    {
        printf(" ==== ANRE SUB MARKS OF STUDENT %d === \n", j + 1);
        for (i = 0; i < 4; i++)
        {
            printf(" ANTER MARKS sub %d :", i + 1);
            scanf(" %d", &marks[j][i]);
        }
    }

    printf(" ANRER MARKES STUDENT 1 : \n");
    for (i = 0; i < 4; i++)
    {
        printf("sub 1 %d \n", marks[0][i]);
    }
    printf(" ANTER MARKES STUDENT 2 : \n");
    for (i = 0; i < 4; i++)
    {
        printf("sub 1 %d \n", marks[1][i]);
    }
    
    for (i = 0; i < 4; i++)
    {
        totel = totel + marks[0][i];
    }

    for (i = 0; i < 4; i++)
    {
        totel1 = totel1 + marks[1][i];
    }
  
    printf(" totel marks of student 1 : %d\n", totel);
    printf(" totel markes of student 2 : %d\n", totel1);

    if (totel > totel1)
    {
        printf(" student 1 mark is heighst ");
    }

    else
    {
        if (totel < totel1)
        {
            printf(" student 2 mark is height ");
        }
        else
        {
            printf(" both students marks is same ");
        }
    }
    // step 1 : marks[0][0] = 50;
    //  marks[0][1] = 60;
    //  marks[0][2] = 70;
    //  marks[0][3] = 80;

    // marks[1][0] = 50;
    // marks[1][1] = 60;
    // marks[1][2] = 70;
    // marks[1][3] = 80;

    // step 2 :printf(" ANTER MARKS sub 1 :");
    //  scanf(" %d", &marks[0][0]);
    //  printf(" ANTER MARKS sub 2 :");
    //  scanf(" %d", &marks[0][1]);
    //  printf(" ANTER MARKS sub 3 :");
    //  scanf(" %d", &marks[0][2]);
    //  printf(" ANTER MARKS sub 4 :");
    //  scanf(" %d", &marks[0][3]);

    // printf(" ==== ANRE SUB MARKS OF STUDENT 2 === \n");
    // printf(" ANTER MARKS sub 1 :");
    // scanf(" %d", &marks[1][0]);
    // printf(" ANTER MARKS sub 2 :");
    // scanf(" %d", &marks[1][1]);
    // printf(" ANTER MARKS sub 3 :");
    // scanf(" %d", &marks[1][2]);
    // printf(" ANTER MARKS sub 4 :");
    // scanf(" %d", &marks[1][3]);

    // step 3 : printf(" ==== ANRE SUB MARKS OF STUDENT 1 === \n");
    //  for (i = 0; i < 4; i++)
    //  {
    //      printf(" ANTER MARKS sub %d :", i + 1);
    //      scanf(" %d", &marks[0][i]);
    //  }
    //  printf(" ==== ANRE SUB MARKS OF STUDENT 2 === \n");
    //  for (i = 0; i < 4; i++)
    //  {
    //      printf(" ANTER MARKS sub %d :", i + 1);
    //      scanf(" %d", &marks[1][i]);
    //  }
    // printf("sub 1 %d \n", marks[0][0]);
    // printf("sub 2 %d \n", marks[0][1]);
    // printf("sub 3 %d \n", marks[0][2]);
    // printf("sub 4 %d \n", marks[0][3]);
    // totel = totel + marks[0][0];
    // totel = totel + marks[0][1];
    // totel = totel + marks[0][2];
    // totel = totel + marks[0][3];

    // printf("sub 1 %d \n", marks[1][0]);
    // printf("sub 2 %d \n", marks[1][1]);
    // printf("sub 3 %d \n", marks[1][2]);
    // printf("sub 4 %d \n", marks[1][3]);

    // totel1 = totel1 + marks[1][0];
    // totel1 = totel1 + marks[1][1];
    // totel1 = totel1 + marks[1][2];
    // totel1 = totel1 + marks[1][3];
}