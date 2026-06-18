#include <stdio.h>

void main()
{
    char a[20];
    int l = 0;

    printf("ENTER YOUR NAME:");
    scanf("%[^\n]", a);

    printf("\n\n");
    printf("%s\n", a);

    while (a[l] != '\0')
    {
        l++;
    }
    printf("LENGTH IS:%d\n", l);

    int r = l - 1;
    l = 0;
    while (l < r && a[l] == a[r])
    {

        l++;
        r--;
    }
    if (l >= r)
        printf("this is pelindrome");
    else
        printf("this is not pelindrome\n");
}
