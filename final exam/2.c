#include <stdio.h>

void main()
{
    int size;

    printf("enter size:");
    scanf("%d", &size);

    printf("\n\n");

    int a[size];

    for (int i = 0; i < size; i++)
    {
        printf("enter elements:a[%d]", i);
        scanf("%d", &a[i]);
    }
    printf("\n");

    int l = 0;

    for (int i = 0; i < size; i++)
    {
        if (l < a[i])
            l = a[i];
    }

    printf("largest number is:%d", l);
}