#include "holberton.h"

/**
 * reverse_array -function that reverses the content of an array of integers.
 * @a: value of a
 * @n: value of n
 * Return: 0
 */
void reverse_array(int *a, int n)

{
	int c, t;

	for (c = 0; c < n / 2; c++)
	{
	 t = a[c];
	 a[c] = a[n - c - 1];
	 a[n - c - 1] = t;
	}
}
