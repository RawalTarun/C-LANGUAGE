#include <stdio.h>

void main()
{
    int size;
    printf("enter size of elements:");
    scanf("%d", &size);

    int a[size], *ptr[size];
    for (int i = 0; i < size; i++)
    {
        printf("enter elements:a[%d]", i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < size; i++)
    {
        ptr[i] = &a[i];
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
    }
}