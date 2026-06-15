#include <stdio.h>

int main()
{
    int row, column;

    printf("ENTER ROW:");
    scanf("%d", &row);
    printf("ENTER COLUMN:");
    scanf("%d", &column);

    printf("\n\n");

    int A[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("ENTER ELEMENTS:A[%d][%d]", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    int S[row], s[column];
    for (int i = 0; i < row; i++)
        S[i] = 0;
    for (int j = 0; j < column; j++)
        s[j] = 0;

    for (int i = 0; i < row; i++)

    {
        for (int j = 0; j < column; j++)
        {
            S[i] += A[i][j];
            s[j] += A[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        printf("ROW SUM IS:%d\n", S[i]);
    }
    for (int j = 0; j < column; j++)
    {
        printf("COLUMN SUM IS:%d\n", s[j]);
    }
}
