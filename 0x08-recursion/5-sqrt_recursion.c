#include "holberton.h"

/**
 * cmp - function that returns the natural square root of a number.
 * @n: value of n
 * @i: value of i
 * Return: cmp
 */
int cmp(int n, int i)
{
	if (n == i * i)
		return (i);

	else if (n < i * i)
		return (-1);

	return (cmp(n, i + 1));
}

/**
 * _sqrt_recursion -  returns the natural square root of a number.
 * @n: value of n
 * Return: square root of n or -1 if none
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (cmp(n, 0));
}
