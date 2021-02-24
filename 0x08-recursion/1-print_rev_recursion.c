#include "holberton.h"

/**
 * _print_rev_recursion - function that prints a string in reverse.
 * @s: value of s
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int i;

	i = 0;

	if (s[i] != 0)
	{
		_print_rev_recursion(&s[i + 1]);
		_putchar(s[i]);

	}
}
