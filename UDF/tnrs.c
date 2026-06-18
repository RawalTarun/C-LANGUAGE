#include <stdio.h>

int sum()
{
    int a, b;

    printf("enter first number:");
    scanf("%d", &a);
    printf("enter second number:");
    scanf("%d", &b);

    return a + b;
}
int inputint()
{
    int n;
    scanf("%d", &n);

    return n;
}
int main()
{
    printf("ANS IS:%d\n\n", sum());
    int age;

    printf("enter your age:");
    age = inputint();

    printf("\n\n");

    printf("age:%d", age);
}
