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

	while (str[c] != '\0')
	{
	if (c % 2 == 0)
	{
	_putchar(str[c]));
	}
	c++
	}
_putchar('\n');
}
