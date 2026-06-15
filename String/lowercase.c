#include <stdio.h>

int main()
{
    char name[20];

    printf("ENTER YOUR NAME:");
    scanf("%s", name);

    printf("\n\n");

    for (int i = 0; name[i] != NULL; i++)
    {
        if (name[i] >= 65 && name[i] <= 90)
        {
            name[i] += 32;
        }
    }
    printf("%s", name);
}