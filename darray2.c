// print two dimansion array for student mark with subject .
#include <stdio.h>
void main()
{
    int marks['a']['b'], a, b, i, j, totel[5], k;
    float avrage[5], max;

    printf(" anter number of student : ");
    scanf("%d", &a);
    printf(" anter number of subject : ");
    scanf("%d", &b);
    for (j = 0; j < a; j++)
    {
        printf(" ==== ANRE SUB MARKS OF STUDENT %d === \n", j + 1);
        for (i = 0; i < b; i++)
        {
            printf(" ANTER MARKS sub %d ", i + 1);
            scanf(" %d", &marks[j][i]);
        }
    }

    for (j = 0; j < a; j++)
    {
        totel[j] = 0;
        printf(" \n MARKES of STUDENT %d : \n", j + 1);
        for (i = 0; i < b; i++)
        {
            printf("SUBJECT  %d %d \n", i + 1, marks[j][i]);
            totel[j] = totel[j] + marks[j][i];
        }
        printf("totel marks of student %d %d \n", j + 1, totel[j]);
        avrage[j] = totel[j] / b;
        printf(" avrage is student %d %2.f \n", j + 1, avrage[j]);
    }
    k = 0;
    max = 0;
    for (i = 0; i < a; i++)
    {
        if (max < avrage[i])
        {
            max = avrage[i];
            k = i;
        }
    }
    printf(" \nmaximum marks student is %d %2.f\n", k + 1, max);

    // }
    // if (max <= avrage[0])
    // {
    //     max = avrage[0];
    // }
    // if (max <= avrage[1])
    // {
    //     max = avrage[1];
    // }
    // if (max <= avrage[2])
    // {
    //     max = avrage[2];
    // }
    //   printf(" maximum marks student is  %2.f", max);

    // for (i = 0; i < 4; i++)
    // {
    //     avrage[0] = totel[0] / 4;
    //     printf(" avrage is student 1 %f ", avrage[0]);
    // }
    // avrage[0] = totel[0] / 4;
    // printf(" avrage is student 1 %f ", avrage[0]);
    // avrage[1] = totel[1] / 4;
    // printf(" avrage is student 2 %f ", avrage[1]);
    // avrage[2] = totel[2] / 4;
    // printf(" avrage is student 3 %f ", avrage[2]);

    // for (i = 0; i < 3; i++)
    // {
    //     totel[i] = 0;
    //     totel[i] = totel[i] + marks[0][i];
    // }
    // totel[0] = 0;
    // totel[0] = totel[0] + marks[0][0];
    // totel[0] = totel[0] + marks[0][1];
    // totel[0] = totel[0] + marks[0][2];
    // totel[0] = totel[0] + marks[0][3];

    // printf("totel marks of student 1 %d \n", totel[i]);

    // totel[1] = 0;
    // totel[1] = totel[1] + marks[1][0];
    // totel[1] = totel[1] + marks[1][1];
    // totel[1] = totel[1] + marks[1][2];
    // totel[1] = totel[1] + marks[1][3];

    // printf("totel marks of student 2 %d \n", totel[1]);

    // totel[2] = 0;
    // totel[2] = totel[2] + marks[2][0];
    // totel[2] = totel[2] + marks[2][1];
    // totel[2] = totel[2] + marks[2][2];
    // totel[2] = totel[2] + marks[2][3];

    // printf("totel marks of student 3 %d \n", totel[2]);

    // printf(" ANRER MARKES STUDENT 1 : \n");
    // for (i = 0; i < 4; i++)
    // {
    //     printf("sub %d %d \n", i + 1, marks[0][i]);
    // }
    // printf(" ANTER MARKES STUDENT 2 : \n");

    // for (i = 0; i < 4; i++)
    // {
    //     printf("sub %d %d \n", i + 1, marks[1][i]);
    // }

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

    // printf("sub 1 %d \n", marks[1][0]);
    // printf("sub 2 %d \n", marks[1][1]);
    // printf("sub 3 %d \n", marks[1][2]);
    // printf("sub 4 %d \n", marks[1][3]);
}