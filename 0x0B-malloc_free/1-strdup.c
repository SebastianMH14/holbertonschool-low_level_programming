#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - hat returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: Return NULL if str = 0
 */
char *_strdup(char *str)
{
	int largo;
	char *b;
	char *c;

	while (str[largo] != '\0')
	{
		largo++;
	}
	b = (char *)malloc(sizeof(char) * largo + 1);
	if (b == NULL)
	return ((char *)NULL);

	c = b;
	while (*str)
	{
		*c = *str;
		c++;
		str++;
	}
	*c = '\0';

	if (str == NULL)
	{
		return (NULL);
	}
	
	return (b);
	free (b);
}
