#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
*_calloc - function that allocates memory for an array
*@nmemb:elements
*@size: bytes
*Return: void
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *a;
	unsigned int i;

	if (nmemb == 0)
	return (NULL);

	if (size == 0)
	return (NULL);

	a = (void *)malloc(nmemb * size);

	if (a == NULL)
	return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		a[i] = 0;
	}
	return (a);

}
