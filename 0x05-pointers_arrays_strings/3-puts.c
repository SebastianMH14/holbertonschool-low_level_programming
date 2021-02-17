#include "holberton.h"

/**
 * _puts -  function that prints a string.
 *@str: value str
 * Return : 0
 */
void _puts(char *str)
{
	int c = 0;

	for (c = 0; str[c] != '\0'; c++)
	_putchar (str[c]);
	_putchar('\n');
}
