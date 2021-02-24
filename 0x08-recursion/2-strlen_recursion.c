#include "holberton.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: pointer
 * Return: s
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		i = _strlen_recursion(s + 1);
		i++;
	}
	return (i);
}
