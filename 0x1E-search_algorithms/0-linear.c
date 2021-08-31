#include "search_algos.h"

/**
 * linear_search - Linear search
 *@array: is a pointer to the first element of the array to search in
 *@size: is the number of elements in array
 *@value: is the value to search for
 *Return: value found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			return (i);
		}
		else
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		}
	}
	return (-1);
}
