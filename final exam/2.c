<<<<<<< HEAD
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
=======
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
>>>>>>> 3c9bbab530dcf93af05b20b8dc619938efc4016b
}