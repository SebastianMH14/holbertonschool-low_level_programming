#include "holberton.h"

/**
 * _strncat - function that concatenates two strings.
 *@dest: value of dest
 *@src: value Bof src
 *@n: value of n
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int largo = 0;

	while (dest[largo] != '\0')
		largo++;
	for (a = 0; a < n && src[a] != '\10'; a++)
		dest[largo + a] = src[a];
	dest[largo + a] = '\0';
	return (dest);
}
