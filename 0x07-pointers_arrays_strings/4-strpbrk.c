#include "holberton.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: value of s
 * @accept: value of accept
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
int i = 0;
	int b = 0;

	while (s[i] != '\0')
	{
		b = 0;

		while (accept[b] != '\0')
		{
			if (s[i] == accept[b])
				return (s + i);

			b++;
		}

		i++;

	}

	return (0);

}
