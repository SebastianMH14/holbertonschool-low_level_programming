#include "holberton.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: value of s
 * @accept: value of accept
 * Return: c.
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b, c;

	for (a = 0; s[a] != '\0'; a++)
	{
		c = 0;
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (accept[b] == s[a])
			{
				c = 1;
			}
		}
		if (c == 0)
		{
			return (a);
		}
	}
	return (a);
} 