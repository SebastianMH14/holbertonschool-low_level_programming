#include "holberton.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: value of dest
 * @src: value of src
 * @n: value of n
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
