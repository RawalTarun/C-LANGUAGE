#include <stdio.h>

void main()
{
    int size1, size2, size3;
    printf("ENTER YOUR 1st ARRAY ELEMANTS :");
    scanf("%d", &size1);
    printf("ENTER YOUR 2nd ARRAY ELEMANTS :");
    scanf("%d", &size2);
    printf("ENTER YOUR 3rd ARRAY ELEMANTS :");
    scanf("%d", &size3);

    int a[size1], b[size2], c[size3], merge[size1 + size2 + size3];

    printf("\n\n FIRST ARRAY ELEMENTS\n\n");

    for (int i = 0; i < size1; i++)
    {
        printf("ENTER a[%d]:", i);
        scanf("%d", &a[i]);
    }
    printf("\n\n SECOND ARRAY\n\n");
    for (int i = 0; i < size2; i++)
    {
        printf("ENTER b[%d]:", i);
        scanf("%d", &b[i]);
    }
    printf("\n\n THIRD ARRAY\n\n");
    for (int i = 0; i < size3; i++)
    {
        printf("ENTER c[%d]:", i);
        scanf("%d", &c[i]);
    }
    printf("\n\n MERGE OF ALL 3 ARRAY\n\n");
    for (int i = 0; i < size1; i++)
        merge[i] = a[i];
    for (int i = 0; i < size2; i++)
        merge[i + size1] = b[i];
    for (int i = 0; i < size3; i++)
        merge[i + size1 + size2] = c[i];

    for (int i = 0; i < size1 + size2 + size3; i++)
        printf("%d\t", merge[i]);
    printf("\n\n SUM OF MERGING ARRAYS\n\n ");
    int sum = 0;
    for (int i = 0; i < size1 + size2 + size3; i++)
        sum = sum + merge[i];
    printf("SUM IS:%d\n", sum);
    printf("\n\n AVERAGE OF ALL ARRAYS\n\n");
    printf("AND AVG IS:%.2f", (float)sum / (size1 + size2 + size3));
}