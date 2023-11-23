#include <stdio.h>
void main()
{
    int incom, year_incom, tex;
    printf("workers monthly incomis :- ");
    scanf("%d", &incom);
    if (incom >= 50000)
    {
        printf("--- you are alogibal to pay tex ---\n\n");

        year_incom = incom * 12;
        printf(" yearly income is :-- %d\n", year_incom);

        tex = (year_incom * 5) / 100;
        printf("  income tex is 5 PERSENT  :--- %d\n", tex);

        year_incom = year_incom - tex;
        printf(" yearly final income is :--%d\n ", year_incom);
    }
    printf("PROGRAM IS AND ");
}