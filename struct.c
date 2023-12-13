#include <stdio.h>
struct user
{
    int heightf;
    int heighti;
    float whight;
};

void main()
{
    struct user a, b;

    printf("======== data of user a ===============\n");
    printf(" anter heightf of a  : ");
    scanf("%d", &a.heightf);
    printf(" anter highti of a : ");
    scanf("%d", &a.heighti);
    printf(" anter whight of a : ");
    scanf("%f", &a.whight);

    printf("\n========data of user b ==============\n");
    printf(" anter heightf of b : ");
    scanf("%d", &b.heightf);
    printf(" anter highri of b : ");
    scanf("%d", &b.heighti);
    printf(" anter whight of b : ");
    scanf("%f", &b.whight);

    printf("\n<<<<<<<< user a  bio >>>>>>>\n");
    printf(" hightf of a %d\n", a.heightf);
    printf(" highti of a %d\n", a.heighti);
    printf(" whight of a %f\n", a.whight);

    printf("\n<<<<<<<< user b bio >>>>>>>>\n");
    printf("hightf of b %d\n", b.heightf);
    printf("highti of b %d\n", b.heighti);
    printf("whight of b %f\n", b.whight);

    printf("\n\t======MENAT KARO BAHI =====\n");
}