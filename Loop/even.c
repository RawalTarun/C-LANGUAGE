#include <stdio.h>

void main()
{
	int n, i = 2;

	printf("ENTER ANY NUMBER:");
	scanf("%d", &n);

	while (i <= n)
	{
		if (i % 2 == 0)
		{
			printf("%d\t", i);
		}
		i++;
	}
}
