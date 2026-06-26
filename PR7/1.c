#include <stdio.h>
// USE UDF//
void add(int a, int b)
{
    printf("ADDITION = %d\n", a + b);
}

void sub(int a, int b)
{
    printf("SUBTRACTION = %d\n", a - b);
}

void mul(int a, int b)
{
    printf("MULTIPLICATION = %d\n", a * b);
}

void divide(int a, int b)
{
    printf("DIVISION = %.2f\n", (float)a / b);
}
void modulus(int a, int b)
{

    printf("MODULUS = %d\n", a % b);
}
int main()
{
    int choice, a, b;
    printf("ENTER FIRST NUMBERS:");
    scanf("%d", &a);
    printf("ENTER SECOND NUMBERS:");
    scanf("%d", &b);
    // USE WHILE LOOP//
    while (choice != 0)
    {
        printf("\npress 1 Addition");
        printf("\npress 2 Subtraction");
        printf("\npress 3 Multiplication");
        printf("\npress 4 Division");
        printf("\npress 5 Modulus");
        printf("\npress 0 Exit");

        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &choice);

        if (choice == 0)
            break;
        // USE SWITCH CASE//
        switch (choice)
        {
        case 1:
            add(a, b);
            break;

        case 2:
            sub(a, b);
            break;

        case 3:
            mul(a, b);
            break;

        case 4:
            divide(a, b);
            break;

        case 5:
            modulus(a, b);
            break;

        default:
            printf("INVALID CHOICE!\n");
        }
    }

    printf("\n<<<EXIT>>>.");
}
