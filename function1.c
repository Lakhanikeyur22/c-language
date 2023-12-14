#include <stdio.h>
void sym(int number, char symbol)
{
    for (int i = 0; i <= number; i++)
    {
        printf("%c", symbol);
    }
    printf("\n");
}
void main()
{
    char symbol;
    int number;

    printf(" anter value symbole : ");
    scanf("%c", &symbol);

    printf(" anter number of value : ");
    scanf("%d", &number);

    printf(" lakhani keyur \n");
    sym(number, symbol);
}