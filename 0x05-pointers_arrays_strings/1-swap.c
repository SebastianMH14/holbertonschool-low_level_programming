#include "holberton.h"

/**
 *swap_int - swaps the values of two integers.
 *@a: value a
 *@b: value b
 *Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
