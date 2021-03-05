#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
*array_range - function that creates an array of integers.
*@min:elements
*@max: bytes
*Return: void
*/
int *array_range(int min, int max)
{
	int *s;
	int  i;

	if (min > max)
	{
	return (NULL);
	}
	s = malloc((max - min + 1) * sizeof(*s));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++, min++)
	{
		s[i] = min;
	}
return (s);
}
