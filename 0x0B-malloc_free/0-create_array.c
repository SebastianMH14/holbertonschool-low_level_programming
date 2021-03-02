#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * @size: size of string
 * @c: string
 * Return: Return NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	return (NULL);
	 s = malloc(size  * sizeof(*s));
	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (size < i)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
