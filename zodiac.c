// find zodiac sine ( rashi ) anter thae birth date.
#include <stdio.h>
void main()
{
     int month, date;
     printf(" anter the date of month :-");
     scanf("%d", &month);
     printf(" anter the date : -");
     scanf("%d", &date);

     if (month == 1 && date >= 20 && date <= 31)
     {
          printf(" your zodiac sign is aquarius ");
     }
     else if (month == 2 && date <= 18 && date >= 1)
     {
          printf(" your zodiac sign is aquarius ");
     }

     else if (month == 2 && date >= 19 && date <= 29)
     {
          printf(" your zodiac sign is pisces ");
     }
     else if (month == 3 && date <= 20 & date >= 1)
     {
          printf(" your zodiac sign is pisces ");
     }

     else if (month == 3 && date >= 21 && date <= 31)
     {
          printf(" your zodiac sign is aries ");
     }
     else if (month == 4 && date <= 19 && date >= 1)
     {
          printf(" your zodiac sign is aries ");
     }

     else if (month == 4 && date >= 20 && date <= 31)
     {
          printf(" your zodiac sign is taurus ");
     }
     else if (month == 5 && date <= 20 && date >= 1)
     {
          printf(" your zodiac sign is taurus ");
     }

     else if (month == 5 && date >= 21 && date <= 31)
     {
          printf(" your zodiac sign is gemini ");
     }
     else if (month == 6 && date <= 20 && date >= 1)
     {
          printf(" your zodiac sign is gimini ");
     }

     else if (month == 6 && date >= 21 && date <= 31)
     {
          printf(" your zodiac sign is cancer ");
     }
     else if (month == 7 && date <= 22 && date >= 1)
     {
          printf(" your zodiac sign is cancer ");
     }

     else if (month == 7 && date >= 23 && date <= 31)
     {
          printf(" your zodiac sign is leo ");
     }
     else if (month == 8 && date <= 22 && date >= 1)
     {
          printf(" your zodiac sign is leo ");
     }

     else if (month == 8 && date >= 23 && date <= 31)
     {
          printf(" your zodiac sign is virgo ");
     }
     else if (month == 9 && date <= 22 && date >= 1)
     {
          printf(" your zodiac sign is virgo ");
     }

     else if (month == 9 && date >= 23 && date <= 31)
     {
          printf(" your zodiac sign is libra ");
     }
     else if (month == 10 && date <= 22 && date >= 1)
     {
          printf(" your zodiac sign is libra ");
     }

     else if (month == 10 && date >= 23 && date <= 31)
     {
          printf(" your zodiac sign is scorpio ");
     }
     else if (month == 11 && date <= 21 && date >= 1)
     {
          printf(" your zodiac sign is scorpio ");
     }

     else if (month == 11 && date >= 22 && date <= 31)
     {
          printf(" your zodiac sign is sagittarius ");
     }
     else if (month == 12 && date <= 21 && date >= 1)
     {
          printf(" your zodiac sign is sagittarius ");
     }

     else if (month == 12 && date >= 22 && date <= 31)
     {
          printf(" your zodiac sign is capricom ");
     }
     else if (month == 1 && date <= 19 && date >= 1)
     {
          printf(" your zodiac sign is capricom ");
     }
}