#include <stdio.h>

void main1(void)
{
    int otv[5] = { 0, 0, 0, 0, 0 };

    int a[5][5] = { {0,1,2235,3,4},{0,100,2,3,4},{0,1,200,3,4},{12,1,2,3,4},{0,1,2,3,40} };

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            otv[i] = otv[i] + a[i][j];
        }
    }
    int i = 0;
    while (i < 5) printf(" %d", otv[i++]);
}