#include "holberton.h"

/**
 *print_numbers - prints the digits (0 through 9).
 *
 *Return: 0
 *
 */
void print_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
