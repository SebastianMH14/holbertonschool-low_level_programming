#include "search_algos.h"

/**
 * binary_search - Binary search algorithm
 *@array: is a pointer to the first element of the array to search in
 *@size: is the number of elements in array
 *@value:  is the value to search for
 *Return: the index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	int start_index = 0;
	int end_index = size - 1;
	int middle;
	int i;

	if (array == NULL)
	{
		return (-1);
	}
	while (start_index <= end_index)
	{
		i = start_index;
		printf("Searching in array: ");
		while (i <= end_index)
		{
			if (i == end_index)
			{
				printf("%d\n", array[i]);
			}
			else
				{
					printf("%d, ", array[i]);
				}
			i++;
		}
		middle = start_index + (end_index - start_index) / 2;
		if (array[middle] == value)
			return (middle);
		if (value > array[middle])
			start_index = middle + 1;
		else
			end_index = middle - 1;

	}
	return (-1);
}
