#include "holberton.h"

/**
 *_strcat - function that concatenates two strings.
 *@dest: value of dest
 *@src: value Bof src
 *Return: dest
 */
char *_strcat(char *dest, char *src)
{
	while (*dest)
	dest++;

	while (*src)
	{
	*dest = *src;
	src++;
	dest++;
	}
	return (dest);
}
