// print  500,499,498,497,496,495................etc.
#include <stdio.h>
void main()
{

    for (int number = 500; number >= 0; number = number - 1)
    {
        printf(" %d ", number);
    }
}