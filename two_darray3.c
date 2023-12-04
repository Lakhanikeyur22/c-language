// printf users given tringles area .
#include <stdio.h>
void main()
{
    int tringle, k, i;

    printf(" ANTER NUMBER OF TRINGLE : ");
    scanf("%d", &tringle);

    float base[tringle], height[tringle], area[tringle];
    for (i = 0; i < tringle; i++)
    {

        printf("\n ANTER VALUE TRINGLE %d \n", i + 1);

        printf(" anter value of base : ");
        scanf("%f", &base[i]);
        printf(" anter value of height :");
        scanf("%f", &height[i]);
    }

    for (i = 0; i < tringle; i++)
    {
        area[i] = height[i] * base[i] / 2;
        printf(" final area of tringle : %f\n", area[i]);
    }

    // printf("\n ANTER VALUE TRINGLE 1 \n");

    // printf(" anter value of base : ");
    // scanf("%f", &base[0]);
    // printf(" anter value of height :");
    // scanf("%f", &height[0]);

    // printf("\n ANTER VALUE TRINGLE 2 \n");

    // printf(" anter value of base : ");
    // scanf("%f", &base[1]);
    // printf(" anter value of height :");
    // scanf("%f", &height[1]);

    // printf("\n ANTER VALUE TRINGLE 3 \n");

    // printf(" anter value of base : ");
    // scanf("%f", &base[2]);
    // printf(" anter value of height :");
    // scanf("%f", &height[2]);

    // area[0] = height[0] * base[0] / 2;
    // printf(" final area of tringle : %f\n", area[0]);

    // area[1] = height[1] * base[1] / 2;
    // printf(" final area of tringle : %f\n", area[1]);

    // area[2] = height[2] * base[2] / 2;
    // printf(" final area of tringle : %f\n", area[2]);
}