#include <stdio.h>
#include <math.h>
void main()

{
    float foot, inch, meter = 0.3048, height;
    printf(" convart foot & inch in meter >\n\n");
    printf("enter number of foot >");
    scanf("%f", &foot);
    printf("enter number of inch >");
    scanf("%f", &inch);

    foot = foot * meter;
    inch = (inch * meter) / 12;
    printf("\n foot in meter ==%.2f\n", foot);
    printf("inch in meter  ==%.2f\n ", inch);

    height = foot + inch;
    printf(" final height >> %.2f meter\n\n", height);

    // find the BMI in body ;
    float weight, bmi;
    printf(" ----find the BMI OF BODY---- \n\n");
    printf("enter the weight of body---");
    scanf("%f", &weight);

    bmi = weight / (height * height);
    printf(" result bmi in body is---%.2f", bmi);
}