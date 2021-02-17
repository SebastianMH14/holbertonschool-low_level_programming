#include "holberton.h"

/**
 * puts2 - starting with the first character, followed by a new line.
 * @str: value of str
 *
 * return: void
 */
void puts2(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		if (n % 2 == 0)
		{
			_putchar(str[n]);
		}
		n++;
	}
	_putchar('\n');
}