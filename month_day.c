// how many day in month .write a program.
#include <stdio.h>
void main()
{
    int month;
    printf(" antre the number of month ");
    scanf("%d", &month);

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        printf("  - 31 day");
    }
    else if (month == 2)
    {
        printf(" february - 28 or 29 day ");
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        printf(" march 30 day ");
    }
    else
    {
        printf(" invelid input ");
    }
}