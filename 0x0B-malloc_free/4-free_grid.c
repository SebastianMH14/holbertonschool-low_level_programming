#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_grid - liberate memory
*@grid: value
*@height: value
*Return: array
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
