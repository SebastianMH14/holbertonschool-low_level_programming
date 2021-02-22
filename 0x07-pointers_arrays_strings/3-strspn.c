#include "holberton.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: value of s
 * @accept: value of accept
 * Return: c.
 */
unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;
	int c;

	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
			{
				c++;
				break;
			}
			b++;
		}
		if (accept[b] == '\0')
			return (c);
		a++;
	}
	return (c);
}
