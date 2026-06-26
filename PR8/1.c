#include <stdio.h>
#include <string.h>

void main()
{
    char a[50];
    int length;

    printf("ENTER YOUR NAME: ");
    scanf("%[^\n]", a);

    length = strlen(a);
    int *ptr = &length;
    printf("Length is: %d", *ptr);
}