// write a _Pragma to get value. number of variable given by user.
#include <stdio.h>
void main()
{
    int number['j'], k, j, ans = 0;
    printf(" ANTER VALUE FROM USER ");
    scanf("%d", &j);
    for (k = 0; k < j; k++)
    {
        printf(" anter variable from user  %d ", k + 1);
        scanf("%d", &number[k]);
    }

    for (k = 0; k < j; k++)
    {
        printf(" %d\n", number[k]);
         ans = number[k] + ans;
    }

    printf("answer is %d", ans);
}
