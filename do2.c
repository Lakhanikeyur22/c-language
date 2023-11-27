#include <stdio.h>
void main()
{
    int option;
    float height, base, area, pi = 3.14159, redius, lenght, width;
    do
    {
        printf("\n\n========= OPTION ==========\n");
        printf(" 1 find area if tringle \n");
        printf(" 2 find area of  circle \n");
        printf(" 3 find area  of clyinder \n");
        printf(" 4 find area of rectangle\n ");

        printf("\n>>ANTER YOUR OPTION>> ");
        scanf(" %d", &option);

        switch (option)
        {
        case 1:
            printf(" find area if tringle \n");
            printf("ANTER VALU EOF HIGHT==   ");
            scanf("%f", &height);
            printf("ANTER VALUE BASE==   ");
            scanf("%f", &base);

            area = height * base / 2;
            printf(" area is tringle => %f", area);

            break;
        case 2:
            printf("  find area of  circle \n");
            printf(" ANTER VALUE OF REDIUS==  ");
            scanf("%f", &redius);
            area = pi * redius * redius;
            printf(" area of circle is => %f", area);
            break;
        case 3:
            printf(" find area  of clyinder \n");
            printf(" ANTER VALUE OF REDIUS ==  ");
            scanf("%f", &redius);
            printf(" ANTER VALUE IF HEIGHT ==  ");
            scanf("%f", &height);
            area = (2 * pi * redius * height) + (2 * pi * redius * redius);
            printf(" area of clyinder is => %f", area);
            break;
        case 4:
            printf(" find area of rectangle\n ");
            printf(" ANTER VALUE OF LENGTH == ");
            scanf("%f", &lenght);
            printf(" ANTER VALUE OF WIDTH == ");
            scanf("%f", &width);
            area = lenght * width;
            printf(" area of rectangle is => %f", area);
            break;
        default:
        {
            printf(" YOYR ANTER INVALID INPUT \n");
            printf(" ANTER VALIDE INPUTE \n");
            printf(" ANTER 0 FOR EXIT ");
        }
        }
    } while (option != 0);
}