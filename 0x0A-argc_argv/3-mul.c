#include <stdlib.h>
#include <stdio.h>
/**
 *main - Write a program that multiplies two numbers
 *@argc: counter
 *@argv: argument 
 *Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
