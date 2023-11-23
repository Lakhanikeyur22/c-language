#include <stdio.h>
void main()
{
    int units, unit_prise1 = 3, unit_prise2 = 5, unit_prise3 = 7, unit_prise4 = 10, unit_prise5 = 13;

    printf("  ANRER ELECTRYCITY BILL UNIT  : --");
    scanf("%d", &units);
    printf("YOUR MONTHLY ELECTRYCITY UNIT IS  %d\n\n", units);

    if (units < 100)
    {
        unit_prise1 = units * unit_prise1;
        printf(" your bil payment is %d \n", unit_prise1);
    }
    else if (units >= 100 && units < 200)
    {
        unit_prise2 = units * unit_prise2;
        printf(" your bil payment if %d ", unit_prise2);
    }
    else if (units >= 200 && units < 300)
    {
        unit_prise3 = units * unit_prise3;
        printf(" your bil payment if %d ", unit_prise3);
    }
    else if (units >= 300 && units < 400)
    {
        unit_prise4 = units * unit_prise4;
        printf(" your bil payment is %d ", unit_prise4);
    }
    else if (units >= 400)
    {
        unit_prise5 = units * unit_prise5;
        printf(" your bil payment is %d ", unit_prise5);
    }
    printf("\n HAVE A GREAT DAY ");
}