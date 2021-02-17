#include "holberton.h"

/**
 * print_rev - that prints a string, in reverse.
 * @s: value s
 *
 * Return : void 
 */
void print_rev(char *s)
{
	int a, b;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
    b = a - 1;
	while (b >= 0)
	{
		_putchar(s[b]);
		b--;
	}
	_putchar ('\n');
}
