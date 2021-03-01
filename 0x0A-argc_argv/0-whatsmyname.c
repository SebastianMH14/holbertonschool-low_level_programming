#include <stdio.h>
/**
 * main -  program that prints its name
 * @argc: value of int
 * @argv: value of int
 * Return:int
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
