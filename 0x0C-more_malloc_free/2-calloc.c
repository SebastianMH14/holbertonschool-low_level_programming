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

	if (nmemb == 0)
	return (NULL);

	if (size == 0)
	return (NULL);

	a = (void *)malloc(nmemb * size);

	for (size = 0; size != '\0'; size++);
	{
	}
	return (a);

}
