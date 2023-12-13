#include <stdio.h>
int sum(int value1, int value2)
{
    int ans = value1 + value2;
    return ans;
}
int sub(int value1, int value2)
{
    int sub = value1 - value2;
    return sub;
}
float div(float value1, float value2)
{
    float div = value1 / value2;
    return div;
}
int mul(int value1, int value2)
{
    int div = value1 * value2;
    return div;
}
float tringle(float value1, float value2)
{
    printf(" \nanter value of height 1 : ");
    scanf("%f", &value1);
    printf(" anter value of base 2 : ");
    scanf("%f", &value2);

    float answer = value1 * value2 / 2;
    return answer;
}

float circle(float value1)
{
    float pi = 3.14159;
    printf(" \nanter value of redius  : ");
    scanf("%f", &value1);
    float answer = pi * value1 * value1;
    return answer;
}
float rectangle(float value1, float value2)
{
    printf(" \nanter value of length : ");
    scanf("%f", &value1);
    printf(" anter value of width : ");
    scanf("%f", &value2);
    float answer = value1 * value2;
    return answer;
}
float clynder(float value1, float value2)
{
    float pi = 3.14159;
    printf("\nANTER VALUE OF REDIOUS  : ");
    scanf("%f", &value1);
    printf("AMTER VALUE OF HEIGHT  : ");
    scanf("%f", &value2);
    float answer = (2 * pi * value1 * value2) + (2 * pi * value1 * value1);
    return answer;
}
void main()
{
    int option, ans;
    float answer, value1, value2;
    char name;
    do
    {
        printf("\n ===========chose the option ============\n");
        printf(" press 1 to sum  : \n");
        printf(" press 2 to subtrection : \n");
        printf(" press 3 to division : \n");
        printf(" press 4 to multplication : \n");
        printf(" press 5 to tringle : \n");
        printf(" press 6 to circle : \n");
        printf(" press 7 to rectangle : \n");
        printf(" press 8 to clynder : \n");

        printf(" ANTER THE YOYR OPTION ::> ");
        scanf("%d", &option);

        if (option >= 1 && option <= 4)
        {
            printf(" \nanter value of number 1 : ");
            scanf("%f", &value1);
            printf(" anter value of number 2 : ");
            scanf("%f", &value2);
        }

        if (option == 1)
        {
            ans = sum(value1, value2);
            printf(" answer of sum is %d\n", ans);
        }
        else if (option == 2)
        {
            ans = sub(value1, value2);
            printf(" answer of subtrection is %d\n", ans);
        }
        else if (option == 3)
        {
            answer = div(value1, value2);
            printf(" answer of division is %.2f", answer);
        }
        else if (option == 4)
        {
            ans = mul(value1, value2);
            printf(" answer of multiplication is %d", ans);
        }
        else if (option == 5)
        {

            answer = tringle(value1, value2);
            printf(" area of tringle is %.2f", answer);
        }
        else if (option == 6)
        {

            answer = circle(value1);
            printf(" area of circle is %.2f", answer);
        }
        else if (option == 7)
        {

            answer = rectangle(value1, value2);
            printf(" answer of rectangle is %.2f", answer);
        }
        else if (option == 8)
        {

            answer = clynder(value1, value2);
            printf(" answer of clynder is %.2f", answer);
        }
        else
        {
            printf("\n========== envalid input =========\n");
        }
        printf(" \n<<<<<<<<<<<<<<<if you are stop then press y : >>>>>>>>>>>>>>>>>>>>>");
        scanf("%C", &name);
    } while (name != 'y');
}