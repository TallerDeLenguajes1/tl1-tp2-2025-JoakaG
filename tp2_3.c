#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    #define N 5
    #define M 7
    int i, j;
    float mt[N][M];
    float *pmt = mt;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            *pmt = 1 + rand() % 100;
            printf("%lf ", *pmt);
            pmt++;
        }
        printf("\n");
    }
    return 0;
}
