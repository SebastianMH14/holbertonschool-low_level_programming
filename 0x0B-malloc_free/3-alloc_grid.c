#include "holberton.h"
#include <stdio.h>

/**
* alloc_grid - unction that returns a pointer to a 2 dimensional array of integers
*@width: value
*@height: value
*Return: array
*/
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	array = malloc(height * sizeof(int *));
	if (array == NULL)
	{
		return(NULL);
	}

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
			return (NULL);
			else
			{
				for (j = 0; j < width; j++)
					array[i][j] = 0;
			}
	}
	return (array);
}
