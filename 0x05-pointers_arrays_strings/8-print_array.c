#include "holberton.h"
#include <stdio.h>

/**
 *print_array - Write a function that prints n elements of an array of integers
 *@a: value of a
 *@n: value of n
 *
 *return: void
 */
void print_array(int *a, int n)
{
	int b;

	b = 0;
	for (n--; n >= 0; n--, b++)
	{
	printf("%d", a[b]);
	if (n > 0)
	{
	printf(", ");
	}
	}
	printf("\n");
}
