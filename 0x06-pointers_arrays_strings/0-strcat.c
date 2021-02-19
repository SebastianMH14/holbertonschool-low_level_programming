#include "holberton.h"

/**
 *_strcat - function that concatenates two strings.
 *@dest: value of dest
 *@src: value Bof src
 *Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		++a;
	}
	for (b = 0; src[b] != '\0'; ++b, a++)
	{
		dest[a] = src[b];
	}
	dest[a] = '\0';

	return (dest);
}
