#include "holberton.h"

/**
 * print_rev - that prints a string, in reverse.
 * @s: value s
 *
 * Return : 0
 */
void print_rev(char *s)
{
	int a, b;

	b = 0;
	while (*s != 0)
	{
		s++;
		b++;
	}
	for (a = b; a >= 0; --a)
	{
		_putchar(*s);
		--s;
	}
	_putchar ('\n');
}
