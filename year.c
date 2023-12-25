//  1]write a programe to check given year is  miliniyam year or note .

#include <stdio.h>
void main()
{
    int year;
    printf(" ANTER THE YEAR : ");
    scanf("%d", &year);

    printf("year is  %d", year);

    if ((year % 1000) == 0)
    {
        printf("\n year is miliniyer \n");
    }
    else
    {
        printf("\n year is not miliniyer ");
    }
}