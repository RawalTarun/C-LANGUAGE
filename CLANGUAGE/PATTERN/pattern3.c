#include <stdio.h>

int main()
{
    int j, i;

    for (i = 1; i <= 5; i++)
    {
        for (j = i; j <= 5; j++)
            if (j % 2 != 0)
                printf("%c", j + 64);
            else if (i % 2 != 0)
                printf("%c", j + 96);
            else
                printf("%d", j);
        printf("\n");
    }
}