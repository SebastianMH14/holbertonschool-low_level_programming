#include "holberton.h"

/**
 * cap_string - function that capitalizes all words of a string.
 * @s: value of s
 * Return: idk
 */
char *cap_string(char *s)
{
	int i = 0;
	int c = 0;
	char a[] = {',', ';', '.', '!', '?', '"', '(',
')', '{', '}', ' ', '\t', '\n'};
	for (i = 0 ; s[i] != '\0'; i++)
	{
		for (c = 0; a[c] != '\0'; c++)
		{
			if (s[0] >= 'a' && s[0] <= 'z')
				s[0] = s[0] - 32;
			if (s[i] == a[c] && s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] = s[i + 1] - 32;
		}
		
	}
	return (s);
}
