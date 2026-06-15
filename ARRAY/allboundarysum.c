#include <stdio.h>

int main()
{ // ROW & COLUMN SIZE INPUT//
    int row, column;

    printf("ENTER ROW:");
    scanf("%d", &row);
    printf("ENTER COLUMN:");
    scanf("%d", &column);

    printf("\n\n");

    // ELEMENTS INPUT//
    int A[row][column], SUM = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("ENTER ELEMENTS:A[%d][%d]", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    // ELEMENTS OUTPUT//
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
            printf("%d", A[i][j]);

        printf("\n");
    }
    // SUM OF ALL BOUNDARY MATRIX//
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)

            if (i == 0 || j == 0 || i == row - 1 || j == column - 1)
            {
                SUM += A[i][j];
            }
    }
    printf("\n");
    printf("SUM IS:%d", SUM);
}