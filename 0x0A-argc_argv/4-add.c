#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program that adds positive numbers.
 * @argc: counter
 * @argv: argument
 * Return: 1 and 0
 */
int main(int argc, char *argv[])
{
	int x = 0, a, b;

	for (a = 1; a < argc; a++)
	{
		for (j = 0; argv[a][b]; b++)
		{
			if (isdigit(argv[a][b]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (a = 1; a < argc; a++)
	{
		x += atoi(argv[a]);
	}
	printf("%d\n", x);
	return (0);
}
