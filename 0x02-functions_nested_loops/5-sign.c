#include "holberton.h"


/**
 * print_sign - check the code for Holberton School students.
 *@n: this is the check
 *
 * Return: 1 if the number is positive. 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}
