#include <stdio.h>

int addition(int a, int b)
{

    return a + b;
}
int subtraction(int a, int b)
{
    return a - b;
}

int main()
{
    int first, second;

    printf("enter 1st number:");
    scanf("%d", &first);
    printf("enter 2nd number");
    scanf("%d", &second);

    printf("%d+%d=%d\n", first, second, addition(first, second));
    printf("%d-%d=%d", first, second, subtraction(first, second));
}