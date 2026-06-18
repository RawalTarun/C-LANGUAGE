#include <stdio.h>

void sum(int a, int b);
void main()
{

    sum(50, 76);
}
void sum(int a, int b)
{
    printf("%d+%d=%d\n", a, b, a + b);
}
