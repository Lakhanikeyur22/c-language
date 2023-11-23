#include <stdio.h>
void main()
{
    int day;
    printf(" anter a number of day ");
    scanf("%d", &day);

    if (day == 1)
    {
        printf(" sunday ");
    }
    else if (day == 2)
    {
        printf(" monday ");
    }
    else if (day == 3)
    {
        printf(" tuseday");
    }
    else if (day == 4)
    {
        printf(" wenesday");
    }
    else if (day == 5)
    {
        printf("thersday ");
    }
    else if (day == 6)
    {
        printf(" fryday");
    }
    else if (day == 7)
    {
        printf(" setersday");
    }
    else
    {
        printf(" invelid input ");
    }
}