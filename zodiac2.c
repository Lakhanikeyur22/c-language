#include <stdio.h>
void main()
{
    int month, date;

    printf(" enter value of month -- ");
    scanf("%d", &month);
    printf(" anter value of date -- ");
    scanf("%d", &date);

    if ((month == 3 && date >= 21 && date <= 31 || month == 4 && date >= 1 && date <= 19))
    {
        printf(" your zodiac sign is aries ");
    }

    else if ((month == 4 && date >= 20 && date <= 31 || month == 5 && date >= 1 && date <= 20))
    {
        printf(" your zodiac sign is taurus ");
    }

    else if ((month == 5 && date >= 21 && date <= 31 || month == 6 && date >= 1 && date >= 20))
    {
        printf(" your zodiac sign is gemini ");
    }

    else if ((month == 6 && date >= 21 && date <= 31 || month == 7 && date >= 1 && month <= 22))
    {
        printf(" your zodiac sign is cancer ");
    }
    // aa program exzample mate che" zodiac & zodiac 2 "banne rite type kari shakay.
}