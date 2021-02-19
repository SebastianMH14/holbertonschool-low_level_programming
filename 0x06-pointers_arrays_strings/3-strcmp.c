#include "holberton.h"

/**
 * _strcmp - function that compares two strings.
 *@s1: value of s1
 *@s2: value of s2
 *Return: idk
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
	s1++;
	s2++;
	}

	if (*s1 == *s2)
	{
	return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
