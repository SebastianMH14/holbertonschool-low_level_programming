#include "holberton.h"

/**
 * _strstr - function that locates a substring.
 * @haystack: value of haystack
 * @needle: value of needle
 * Return: a
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *a = haystack;
		char *b = needle;
		int i;

for (i = 0; b[i] == a[i] && b[i] != '\0' && a[i] != '\0'; i++);

		if (b[i] == '\0')
			return (a);

		haystack = a + 1;
	}
	return ('\0');
}
