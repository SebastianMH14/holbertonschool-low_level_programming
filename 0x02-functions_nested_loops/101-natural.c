#include <stdio.h>

/**
*main - the principal function
*Return: 0
*/
int main(void)
{
	int i, j = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 3 == 0)
			j = j + i;
	}

	printf("%d\n", j);
	return (0);
}
