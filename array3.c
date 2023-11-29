// calclulet the score creacket team, get run from user for every player.
#include <stdio.h>
void main()
{
    int player[11], i, totel;
    // player2, player3, player4, player5, player6, player7, player8, player9, player10, player11, totel;
    for (i = 0; i < 11; i++)
    {
        printf("anetr the score player %d ", i + 1);
        scanf("%d", &player[i]);
    }
    for (i = 0; i < 11; i++)
    {
        printf(" run of player %d >> %d\n", i + 1, player[i]);
    }
    for (i = 0; i < 11; i++)
    {
        totel = player[i] * 11;
    }
    printf(" totel team score is %d", totel);
    // printf("anetr the score player 1 ");
    // scanf("%d", &player[1]);
    // printf("anetr the score player 2 ");
    // scanf("%d", &player[2]);
    // printf("anetr the score player 3 ");
    // scanf("%d", &player[3]);
    // printf("anetr the score player 4 ");
    // scanf("%d", &player[4]);
    // printf("anetr the score player 5 ");
    // scanf("%d", &player[5]);
    // printf("anetr the score player 6 ");
    // scanf("%d", &player[6]);
    // printf("anetr the score player 7 ");
    // scanf("%d", &player[7]);
    // printf("anetr the score player 8 ");
    // scanf("%d", &player[8]);
    // printf("anetr the score player 9 ");
    // scanf("%d", &player[9]);
    // printf("anetr the score player 10 ");
    // scanf("%d", &player[10]);
    // printf("anetr the score player 11 ");
    // scanf("%d", &player[11]);

    // printf(" run of player 1 %d\n", player[1]);
    // printf(" run of player 2 %d\n", player[2]);
    // printf(" run of player 3 %d\n", player[3]);
    // printf(" run of player 4 %d\n", player[4]);
    // printf(" run of player 5 %d\n", player[5]);
    // printf(" run of player 6 %d\n", player[6]);
    // printf(" run of player 7 %d\n", player[7]);
    // printf(" run of player 8 %d\n", player[8]);
    // printf(" run of player 9 %d\n", player[9]);
    // printf(" run of player 10 %d\n", player[10]);
    // printf(" run of player 11 %d\n", player[11]);

    //         totel = player[1] + player[2] + player[3] + player[4] + player[5] + player[6] + player[7] + player[8] + player[9] + player[10] + player[11];
    // printf(" totel score of team is %d ", totel);
}