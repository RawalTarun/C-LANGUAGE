#include <stdio.h>

void main()
{
    // SIZE OF ELEMENTS//
    int size;
    printf("ENTER ELEMENTS SIZE:");
    scanf("%d", &size);

    printf("\n\n");

    // ADDITION & AVARAGE //
    int t[size], sum = 0;
    for (int i = 0; i < size; i++)
    {
        printf("ENTER ELEMENTS:t[%d]", i);
        scanf("%d", &t[i]);

        sum += t[i];
    }
    printf("SUM IS:%d\n", sum);
    printf("AVG IS:%d\n", sum / size);

    // MAXIMUN & MINIMUN ELEMENTS FIND//
    int max = t[0], min = t[0];
    for (int i = 0; i < size; i++)
    {
        if (t[i] > max)

            max = t[i];

        if (t[i] < min)

            min = t[i];
    }

    printf("MAX IS :%d\n", max);
    printf("MIN IS:%d\n", min);

    // REVERSE ALL ELEMENTS//
    for (int i = size - 1; i >= 0; i--)

        printf("%d ", t[i]);

    // EVEN AND ODD ELEMENTS FIND//
    printf("\n\nEVEN ELEMENTS=> ");

    for (int i = 0; i < size; i++)

        if (t[i] % 2 == 0)
            printf("%d ", t[i]);

    printf("\n\nODD ELEMENTS=> ");
    for (int i = 0; i < size; i++)
        if (t[i] % 2 != 0)

            printf("%d ", t[i]);

    printf("\n\n");

    // POSITIVE & NEGATIVE ELEMENTS//
    printf("\n\nPOSITIVE ELEMENTS=> ");
    for (int i = 0; i < size; i++)
        if (t[i] >= 0)
            printf("%d ", t[i]);
    printf("\n\nNEGATIVE ELEMENTS=> ");
    for (int i = 0; i < size; i++)
        if (t[i] <= 0)
            printf("%d ", t[i]);
    printf("\n\n");
    // SEARCH ELEMENTS//
    int search;
    printf("SEARCH ELEMENTS:");
    scanf("%d", &search);

    for (int i = 0; i < size; i++)
    {

        if (t[i] == search)

            printf("%d", i);
    }

    printf("\n\n");
    int max2 = 0;
    for (int i = 0; i < size; i++)
    {
        if (max2 > max)
            max2 = t[i];
        printf("%d", max2);
    }
}
