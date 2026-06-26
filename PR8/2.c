#include <stdio.h>

void cube(int *ptr, int size)
{
    for (int i = 0; i < size * size; i++)
    {
        *(ptr + i) = (*(ptr + i)) * (*(ptr + i)) * (*(ptr + i));
    }
}

void main()
{
    int size;
    printf("Enter size: ");
    scanf("%d", &size);

    printf("\n\n");
    int a[size][size];

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("ENTER ELEMENTS:");
            scanf("%d", &a[i][j]);
        }
    }

    cube(&a[0][0], size);

    printf("\nCUBE ARRAY:\n");

    int *ptr = &a[0][0];

    for (int i = 0; i < size * size; i++)
    {
        printf("%d ", *(ptr + i));
    }
}