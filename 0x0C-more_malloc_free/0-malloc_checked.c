#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
*malloc_checked - allocates memory using malloc
*@b: pointer
*Return: void
*/
void *malloc_checked(unsigned int b)
{
	int *a;

	a = (void *)malloc(b);

	if (a == NULL)
	{
	exit(98);
	}

	return (a);
}
