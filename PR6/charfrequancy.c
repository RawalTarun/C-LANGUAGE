#include <stdio.h>
#include <string.h>

void main()
{
    // CREATE VARIABLE//
    char name[20];
    int frq[20] = {0};

    // INPUT BY USER//
    printf("ENTER NAME:");
    scanf("%[^\n]", name);

    // CHECK LENGTH & AND PRINT USER INPUT//

    for (int i = 0; name[i] != '\0'; i++)
    {
        if (frq[i] == 0)
        {
            frq[i] = 1;

            for (int j = i + 1; name[j] != '\0'; j++)
            {
                if (name[i] == name[j])
                {
                    frq[i]++;
                    frq[j] = -1;
                }
            }
        }
    }

    // ALL CHARACTER FREQUENCY OUTPUT//
    printf("\n<<CHARACTER FREQUENCY>>\n");

    for (int i = 0; name[i] != '\0'; i++)
    {
        if (frq[i] > 0)

            printf("%c => %d\n", name[i], frq[i]);
    }
}
