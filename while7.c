// *
// **
// ***
// ****
// *****
#include <stdio.h>
void main()
{

    int j = 1;

    while (j <= 5)
    {

        int i;
        i = 1;
        while (i <= j)

        {
            printf("*");
            i++;
        }
        printf("\n");
        j++;
    }
}
