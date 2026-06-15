#include <stdio.h>

int main()
{ // ROW &COLUMN SIZE INPUT//
    int row, column;
    printf("ENTER ROW:");
    scanf("%d", &row);
    printf("ENTER COLUMN:");
    scanf("%d", &column);

    printf("\n\n");

    // ELEMENTS INPUT//
    int a[row][column], sum = 0;

    for (int i = 0; i < row; i++)

    {
        for (int j = 0; j < column; j++)
        {
            printf("ENTER ELEMENTS:a[%d][%d]", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    // ELEMENTS OUTPUT//
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
            printf("%d", a[i][j]);

        printf("\n");
    }
    // SUM OF ANTI DIAGONAL ARRAY//
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)

            if (i + j == row - 1)
            {
                sum += a[i][j];
            }
    }
    printf("\n");
    printf("SUM IS:%d", sum);
}