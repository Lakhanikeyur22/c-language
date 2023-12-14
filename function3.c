#include <stdio.h>
int printsum(int num1, int num2, int num3)
{
    printf("antre number 1 : ");
    scanf("%d", &num1);
    printf("anter number 2 : ");
    scanf("%d", &num2);
    printf("anter number 3 : ");
    scanf("%d", &num3);
    int totel = num1 + num2 + num3;
    return totel;
}
void main()
{
    int num1, num2, num3, temp, i;

    do
    {

        temp = printsum(num1, num2, num3);
        printf(" totel is %d\n\n", temp);

        printf(" if you continu press 0 :");
        scanf("%d", &i);

    } while (i == 0);
}