#include <stdio.h>

int main()
{
    // data type value transfer in pointer//

    int a = 45;

    int *ptr;
    ptr = &a;

    printf("a value is:%d\n", a);
    printf("ptr value is:%d\n", *ptr);

    a = 18;
    printf("a value is:%d\n", a);
    printf("ptr value is:%d\n", *ptr);

    *ptr = 4545;

    printf("a value is:%d\n", a);
    printf("ptr value is:%d\n", *ptr);
}