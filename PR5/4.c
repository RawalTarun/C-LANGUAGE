#include <stdio.h>

int main()
{
    // ROW & COLUMN SIZE//
    int row, column;

    printf("ENTER ROW:");
    scanf("%d", &row);
    printf("ENTER COLUMN:");
    scanf("%d", &column);

    printf("\n\n");
    // ROW & COLUMN ELEMENTS INPUT//
    int A[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("ENTER ELEMENTS:A[%d][%d]", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    // SELECTED ROW SUM//
    int r, c, sum = 0;

    printf("ENTER ROW NUMBER: ");
    scanf("%d", &r);

    if (r >= 0 && r < row)
    {

        for (int j = 0; j < column; j++)
        {
            sum += A[r][j];
        }

        printf("SUM OF ROW %d = %d", r, sum);
        printf("\n\n");
    }
    else
        printf("THIS IS INVALID CHOICE!!\n\n");

    // SELECTED COLUMN SUM//
    sum = 0;

    printf("ENTER COLUMN NUMBER: ");
    scanf("%d", &c);

    if (c >= 0 && c < column)
    {

        for (int i = 0; i < row; i++)
        {
            sum += A[i][c];
        }

        printf("SUM OF COLUMN %d = %d", c, sum);
    }
    else
        printf("THIS IS INVALID CHOICE!!");
}