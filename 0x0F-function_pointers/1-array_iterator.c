#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *array_iterator - function given as a parameter on each element of an array
 *@array: array
 *@size: size of array
 *@action: pointer to funcion
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL)
	{
	return;
	}
	if (action == NULL)
	{
	return;
	}
	for (a = 0; a < size; a++)
	{
	action(array[a]);
	}
}
