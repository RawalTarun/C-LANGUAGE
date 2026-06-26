#include <stdio.h>

void main()
{

    printf("int size is %lu\n", sizeof(int));
    printf("char size is %lu\n", sizeof(char));
    printf("float size is %lu\n", sizeof(float));
    printf("double size is %lu\n", sizeof(double));
    printf("long int size is %lu\n", sizeof(long int));
    printf("long long int size is %lu\n", sizeof(long long int));

    int a[20];
    char name[10];

    printf("int array size is %d\n", sizeof(a));
    printf("char string size is %zu\n", sizeof(name));
}