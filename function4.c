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

float tringle(float n1, float n2)
{
    float tringle = n1 * n2 / 2;
    return tringle;
}

float clyinder(float n1, float n2)
{
    float pi = 3.14159;
    float clyinder = (2 * pi * n1 * n2) + (2 * pi * n1 * n1);
    return clyinder;
}

float circle(float redius)
{
    float pi = 3.14159;
    float area = pi * redius * redius;
    return area;
}

float rectingle(float n1, float n2)
{
    float area = n1 * n2;
    return area;
}

void main()
{
    float n1, n2, boro;
    int option;
    char con;
    do
    {
        printf(" \n\nPRESS 1 FOR SUM \n");
        printf(" PRESS 2 OFR SUBTRECTION \n");
        printf(" PRESS 3 OFR MULTIPLICATION \n");
        printf(" PRESS 4 OFR DIVISION \n");
        printf(" PRESS 5 OFR TRINGLE \n");
        printf(" PRESS 6 OFR CLYNDER \n");
        printf(" PRESS 7 OFR CIRCLE \n");
        printf(" PRESS 8 OFR RECTANGLE \n");
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
            // subtrection(n1, n2);
            printf(" SUBTRECTION IS == %.2f \n", subtrection(n1, n2));
            break;

        case 3:

            printf("ANTER VALUE OF NUMBER 1 : ");
            scanf("%f", &n1);
            printf("AMTER VALUE OF NUMBER 2 : ");
            scanf("%f", &n2);
            // multipli(n1, n2);
            printf(" MULTIPLICTION IS == %.2f \n", multipli(n1, n2));
            break;

        case 4:

            printf("ANTER VALUE OF NUMBER 1 : ");
            scanf("%f", &n1);
            printf("AMTER VALUE OF NUMBER 2 : ");
            scanf("%f", &n2);
            // division(n1, n2);
            printf(" DIVISION IS == %.2f \n", division(n1, n2));
            break;

        case 5:
            printf("ANTER VALUE OF HEIGHT  : ");
            scanf("%f", &n1);
            printf("AMTER VALUE OF BASE  : ");
            scanf("%f", &n2);

            printf("AREA OF TRINGLE IS == %.2f\n", tringle(n1, n2));
            break;

        case 6:
            printf("ANTER VALUE OF REDIOUS  : ");
            scanf("%f", &n1);
            printf("AMTER VALUE OF HEIGHT  : ");
            scanf("%f", &n2);
            printf(" AREA OF CLYNDER IS %.2f\n", clyinder(n1, n2));
            break;

        case 7:
            printf(" ANTER VALUE OF REDIOUS : ");
            scanf("%f", &n1);
            printf(" AREA OF CIRCLE IS == %.2f\n", circle(n1));
            break;

        case 8:
            printf(" ANTER VALUE OF LENGTH :  ");
            scanf("%f", &n1);
            printf("ANTER VALUE OF WIDTH : ");
            scanf("%f", &n2);
            printf(" AREA OF RECTANGLE IS %.2f\n", rectingle(n1, n2));
            break;

        default:
        {
            printf(" \n======ENVELID INPUT=====\n ");
        }
        }

        scanf("%c", &con);
    } while (con != 'y');
}
