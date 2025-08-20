#include <stdio.h>

#define M 3
int main()
{
    /* code */
    int A[M][M] = {{1, 3, 3}, {1, 6, 9}, {1, 3, -2}};
    int B[M][M] = {{1, 2, 13}, {3, 4, -3}, {0, -1, 1}};
    int C[M][M];

    for (int r = 0; r < M; r++)
    {

        for (int c = 0; c < M; c++)
        {
            C[r][c] = 0;
            for (int i = 0; i < M; i++)
            {

                C[r][c] += A[r][i] * B[i][c];
            }
        }
    }

    for (int r = 0; r < M; r++)
    {
        printf("| ");
        for (int c = 0; c < M; c++)
        {
            printf("%3i ", A[r][c]);
        }
        if (r == 0)
        {
            printf("| X | ");
        }
        else
        {
            printf("|   | ");
        }
        for (int c = 0; c < M; c++)
        {
            printf("%3i ", B[r][c]);
        }

        if (r == 0)
        {
            printf("| = | ");
        }
        else
        {
            printf("|   | ");
        }
        for (int c = 0; c < M; c++)
        {
            printf("%3i ", C[r][c]);
        }
        printf("| \n");
    }

    return 0;
}
