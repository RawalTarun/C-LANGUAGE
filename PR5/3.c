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
            printf("ENTER YOUR ELEMENTS:A[%d][%d]", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
            printf("%d", A[j][i]);

        printf("\n");
    }
}