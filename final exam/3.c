#include <stdio.h>

void main()
{

    char a[50], y;
    int len = 0;

        printf("enter your name:");
    scanf("%s", a);

    while (a[len] != '\0')
    {
        len++;
    }
    for (int i = 0; i <len / 2; i++)
    {
        y = a[i];
        a[i] = a[len - 1 - i];
        a[len - 1 - i] = y;
    }
    printf("revered string=%s", a);
}
