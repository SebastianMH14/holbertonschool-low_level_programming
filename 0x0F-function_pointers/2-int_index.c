#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *int_index - function that searches for an integer
 *@array: input array
 *@size: size of array
 *@cmp: pointer to function
 *Return: -1 and 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size <= 0)
	{
		return (-1);
	}
	if (array == NULL)
	{
		return (0);
	}
	if (cmp == NULL)
	{
		return (0);
	}
	for (a = 0; a < size; a++)
	{
	if (cmp(array[a]) != 0)
	return (a);
	}
	return (-1);
}
