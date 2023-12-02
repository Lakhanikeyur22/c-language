// print two dimansion array for student mark with subject .
#include <stdio.h>
void main()
{
    int marks[2][4], totel=0,totel1=0;

    marks[0][0] = 35;
    marks[0][1] = 20;
    marks[0][2] = 30;
    marks[0][3] = 40;

    marks[1][0] = 50;
    marks[1][1] = 60;
    marks[1][2] = 70;
    marks[1][3] = 80;

    printf(" ANRER MARKES STUDENT 1 : \n");
    printf("sub 1 %d \n", marks[0][0]);
    printf("sub 2 %d \n", marks[0][1]);
    printf("sub 3 %d \n", marks[0][2]);
    printf("sub 4 %d \n", marks[0][3]);

    totel = totel + marks[0][0];
    totel = totel + marks[0][1];
    totel = totel + marks[0][2];
    totel = totel + marks[0][3];
printf(" totel marks of student 1 : %d\n",totel);


    printf(" ANTER MARKES STUDENT 2 : \n");
    printf("sub 1 %d \n", marks[1][0]);
    printf("sub 2 %d \n", marks[1][1]);
    printf("sub 3 %d \n", marks[1][2]);
    printf("sub 4 %d \n", marks[1][3]);

    totel1 = totel1 + marks[1][0];
    totel1 = totel1 + marks[1][1];
    totel1 = totel1 + marks[1][2];
    totel1 = totel1 + marks[1][3];
printf(" totel markes of student 2 : %d\n",totel1);
}