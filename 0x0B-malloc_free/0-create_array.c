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

	 s = malloc((size + 1) * sizeof(char));
	if (size == '\0')
	{
		return (NULL);
	}
	i = 0;
	while (size > i)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	if(c)
	{
		return (s);
	}
	return (NULL);
}
