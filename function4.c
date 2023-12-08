#include <stdio.h>
float totel(float n1, float n2)
{
    float sum = n1 + n2;
    return sum;
}

float subtrection(float n1, float n2)
{
    int sub = n1 - n2;
    return sub;
}

float multipli(float n1, float n2)
{
    float multipli = n1 * n2;
    return multipli;
}

float division(float n1, float n2)
{
    float division = n1 / n2;
    return division;
}

void main()
{
    float n1, n2, boro;
    int option;
    char con;
    do
    {
        printf(" \nPRESS 1 FOR SUM \n");
        printf(" PRESS 2 OFR SUBTRECTION \n");
        printf(" PRESS 3 OFR MULTIPLICATION \n");
        printf(" PRESS 4 OFR DIVISION \n");
        printf(" \n if you are stop then perss y  \n");

        printf("\n ANTER THE CELCUATION OPTION : ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:

            printf("ANTER VALUE OF NUMBER 1 : ");
            scanf("%f", &n1);
            printf("AMTER VALUE OF NUMBER 2 : ");
            scanf("%f", &n2);
            boro = totel(n1, n2);
            printf(" SUM IS == %.2f \n", boro);
            break;

        case 2:

            printf("ANTER VALUE OF NUMBER 1 : ");
            scanf("%f", &n1);
            printf("AMTER VALUE OF NUMBER 2 : ");
            scanf("%f", &n2);
            subtrection(n1, n2);
            printf(" SUBTRECTION IS == %.2f \n", subtrection(n1, n2));
            break;

        case 3:

            printf("ANTER VALUE OF NUMBER 1 : ");
            scanf("%f", &n1);
            printf("AMTER VALUE OF NUMBER 2 : ");
            scanf("%f", &n2);
            multipli(n1, n2);
            printf(" MULTIPLICTION IS == %.2f \n", multipli(n1, n2));
            break;

        case 4:

            printf("ANTER VALUE OF NUMBER 1 : ");
            scanf("%f", &n1);
            printf("AMTER VALUE OF NUMBER 2 : ");
            scanf("%f", &n2);
            division(n1, n2);
            printf(" DIVISION IS == %.2f \n", division(n1, n2));
            break;

        default:
        {
            printf(" \n======ENVELID INPUT=====\n ");
        }
        }

        scanf("%c", &con);
    } while (con != 'y');
}

