#include "holberton.h"

/**
 * _strlen -  that returns the length of a string.
 * @s: value of char
 *
 *Return: Always 0.
 */
int _strlen(char *s)
{
	int largo = 0;
	while (s[largo]!='\0') largo++;
	return largo;
}
