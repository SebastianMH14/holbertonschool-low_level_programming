#include "holberton.h"

/**
 * _strncpy -  function that copies a string.
 * @dest: value of dest
 * @src: value of src
 * @n: value of n
 * Return : dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
