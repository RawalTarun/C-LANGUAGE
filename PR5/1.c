#include <stdio.h>

int main()
{
    int size;

    printf("ENTER YOUR ARRAY SIZE:");
    scanf("%d", &size);

    printf("\n\n");

    int N[size];

    for (int i = 0; i < size; i++)
    {
        printf("ENTER THE ELEMENTS:");
        scanf("%d", &N[i]);
    }
    // FIND NEGATIVE NUMBER//

    printf("NEGATIVE NUMBER IS:");
    for (int i = 0; i < size; i++)
    {
        if (N[i] < 0)
            printf("%d ,", N[i]);
    }
}