#include "holberton.h"

/**
 * string_toupper - all lowercase letters of a string to uppercase.
 * @s: value of s
 *
 * Return: 0
 */
char *string_toupper(char s[100])
{
	int i = 0;

	while (s[i] != '\0')
	{
	if (s[i] >= 97 && s[i] <= 122)
	{
	s[i] = s[i] - 32;
	}
	i++;
	}
	return (s);
}
