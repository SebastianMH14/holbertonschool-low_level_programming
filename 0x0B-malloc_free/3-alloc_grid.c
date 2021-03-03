#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* alloc_grid - unction that returns a pointer dimensional array of integers
*@width: value
*@height: value
*Return: array
*/
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	array = malloc(height * sizeof(int *));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
{
			for (j = 0; j <= i; j++)
				free(array[j]);
			free(array);
			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
	{
		for (i = 0; i < width; i++)
		{
			array[j][i] = 0;
		}
	}
	return (array);
}
