#include <stdio.h>

void main()
{
    int i, j, s;

    for (i = 1; i <= 5; i++)
    {
        for (s = 5; s > i; s--)
            printf(" ");
        for (j = i; j >= 1; j--)

            printf("%c", 64 + j);

        printf("\n");
    }
}