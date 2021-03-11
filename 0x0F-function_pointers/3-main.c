#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - principal function
 *@argc: numbers of arguments
 *@argv: arguments
 *Return: result
 */
int main(int argc, char **argv)
{
	int resultado;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (*argv[2] == '%' || *argv[2] == '/')
{
 printf("Error/n");
 exit(100);
}
	resultado = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", resultado);
	return (0);
}
