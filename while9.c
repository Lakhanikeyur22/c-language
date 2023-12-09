// print the tebale. using while.

#include <stdio.h>
void main()
{
    int i, j = 1, mul;

    printf(" enter value of table :- ");
    scanf(" %d",&i);

    printf(" enter valur mul :- ");
    scanf(" %d",&mul);

    while (j <= mul)
    {

        printf(" %d x %d =%d \n", i, j, (i * j));
        j = j + 1;
    }
}
