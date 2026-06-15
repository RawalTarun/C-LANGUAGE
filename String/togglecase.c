#include <stdio.h>

int main()
{
    char name[20];

    printf("ENTER YOUR NAME:");
    scanf("%[^\n]", name);

    printf("\n\n");

    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] >= 65 && name[i] <= 90)

            name[i] += 32;

        else if (name[i] >= 97 && name[i] <= 122)

            name[i] -= 32;
    }
    printf("%s", name);
}
