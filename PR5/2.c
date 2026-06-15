#include <stdio.h>

int main()
{ // SET ROW & COLUMN SIZE//
    int row, column;

    printf("ENTER ROW NUMBER:");
    scanf("%d", &row);

    printf("ENTER COLUMN NUMBER:");
    scanf("%d", &column);

    printf("\n\n");
    // USER ELEMENTS INPUT//
    int x[row][column], HIGHEST = x[0][0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("ENTER ELEMENTS:x[%d][%d]", i, j);
            scanf("%d", &x[i][j]);
        }
    }
    // FIND HIGHEST NUMBER//
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (HIGHEST < x[i][j])

                HIGHEST = x[i][j];
        }
    }
    printf("HIGHEST NUMBER IS:%d", HIGHEST);
}