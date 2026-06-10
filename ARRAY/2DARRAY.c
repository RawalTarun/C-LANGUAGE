#include <stdio.h>

int main()
{
    int row, column;

    printf("ENTER ROW:");
    scanf("%d", &row);
    printf("ENTER COLUMN:");
    scanf("%d", &column);

    // THREE ARRAY INPUT //
    int x[row][column], y[row][column], z[row][column], SUM[row][column];

    printf("\n\n 1st ARRAY INPUT\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)

        {
            printf("ENTER: x[%d][%d]", i, j);
            scanf("%d", &x[i][j]);
        }
        printf("\n");
    }
    printf("\n\n2nd ARRAY INPUT\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)

        {
            printf("ENTER:y[%d][%d]", i, j);
            scanf("%d", &y[i][j]);
        }
        printf("\n");
    }
    printf("\n\n3rd ARRAY INPUT\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("ENTER:z[%d][%d]", i, j);
            scanf("%d", &z[i][j]);
        }
        printf("\n");
    }
    printf("\n\n SUM OF ALL THREE ARRAY\n\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
            SUM[i][j] = x[i][j] + y[i][j] + z[i][j];
    }
    printf("\n\nSUM OUTPUT\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
            printf("%d ", SUM[i][j]);
        printf("\n");
    }
}
