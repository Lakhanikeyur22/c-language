// print student name ,rollno , phone , email ,hight ,whight ,user given studnt.
/* "char" value ma "%c" lakha vathi  veriable "1(one)" print thay che,
    pan ama "%c ne badale %s kariye to ghana vareabale use kari shakay che ,
    " %s" "string " no use array ma j kari shakay che */
#include <stdio.h>
struct bio
{
    char name[25], email[35], phone[10];
    int roll_no;
    float height, whight;
};

void main()
{
    int i, number;

    printf(" ANTER THE NUMBER OF STUDENT : ");
    scanf("%d", &number);
    struct bio student[number];

    for (i = 0; i < number; i++)
    {
        printf(" ANTER DETIL OF STUDENT %d\n", i + 1);
        printf(" anter student  name  : ");
        scanf("%s", &student[i].name);
        printf(" anter student roll_no : ");
        scanf("%d", &student[i].roll_no);
        printf(" anter student height : ");
        scanf("%f", &student[i].height);
        printf(" anter student whight : ");
        scanf("%f", &student[i].whight);
        printf(" anter student phone : ");
        scanf("%s", student[i].phone);
        printf(" anter student email : ");
        scanf("%s", &student[i].email);
    }

    for (i = 0; i < number; i++)
    {

        printf("\n <<<<<<<<<<< DETAIL OF STUDENT %d >>>>>>>> \n", i + 1);
        printf("name of student== %s\n", student[i].name);
        printf(" roll_no of student== %d\n", student[i].roll_no);
        printf(" height of student== %.2f\n", student[i].height);
        printf(" whight of student== %.2f\n", student[i].whight);
        printf(" email of student== %s\n", student[i].email);
        printf(" phone of student== %s\n", student[i].phone);
    }
    //     printf(" ANTER DETIL OF STUDENT 2 \n");
    //     printf(" anter student  name  : ");
    //     scanf("%s", &student[1].name);
    //     printf(" anter student roll_no : ");
    //     scanf("%d", &student[1].roll_no);
    //     printf(" anter student height : ");
    //     scanf("%f", &student[1].height);
    //     printf(" anter student whight : ");
    //     scanf("%f", &student[1].whight);
    //     printf(" anter student phone : ");
    //     scanf("%s", student[1].phone);
    //     printf(" anter student email : ");
    //     scanf("%s", &student[1].email);

    //     printf("\n <<<<<<<<<<< DETAIL OF STUDENT 2 >>>>>>>> \n");
    //     printf("name of student== %s\n", student[1].name);
    //     printf(" roll_no of student== %d\n", student[1].roll_no);
    //     printf(" height of student== %.2f\n", student[1].height);
    //     printf(" whight of student== %.2f\n", student[1].whight);
    //     printf(" phone of student== %s\n", student[1].phone);
    //     printf(" email of student== %s\n", student[1].email);
}