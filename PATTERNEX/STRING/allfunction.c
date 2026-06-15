#include <stdio.h>
#include <string.h>

int main()
{
    char gender[10];

    printf("ENTER YOUR GENDER:");
    gets(gender);

    puts(gender);
    printf("\n\n");

    int length = strlen(gender);
    printf("LENGTH IS :%d\n", length);

    strupr(gender);
    printf("UPPER CASE:%s\n", gender);
}