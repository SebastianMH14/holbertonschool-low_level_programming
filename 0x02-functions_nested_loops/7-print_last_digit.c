#include "holberton.h"


/**
 * print_last_digit - check the code for Holberton School students.
 *@a: this is the check
 *
 * Return: 1 if the number is positive. 0 otherwise
 */
int print_last_digit(int a)
{

	a = a % 10;

	if (a < 0)
	{
		a = -a;
	}
	_putchar(a + '0');

	return (a);
}
