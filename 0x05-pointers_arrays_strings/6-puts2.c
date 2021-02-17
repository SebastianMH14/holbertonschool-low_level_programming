#include "holberton.h"

/**
 * puts2 - starting with the first character, followed by a new line.
 * @str: value of str
 *
 * return: void
 */
void puts2(char *str)
{
	int c = 0;

	for (c = 0; str[c] != '\0'; c += 2)
	_putchar (str[c]);
	_putchar('\n');
}
