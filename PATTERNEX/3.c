#include <stdio.h>

int main()
{
    int i, s, j;

    for (i = 5; i >= 1; i--)
    {
        for (s = 1; s < i; s++)
            printf(" ");

        for (j = 5; j >= i; j--)
            printf("%d", j);

        printf("\n");
    }
}
    /*(OUTPUT WITH SPACE)
    5
   54
  543
 5432
54321
    */