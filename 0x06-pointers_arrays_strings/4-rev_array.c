#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: value of a
 * @n: value of n
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int z;
	int b;

	for (z = 0; z < n / 2; z++)
	{
		b = a[z];
		a[z] = a[n - z - 1];
	a[n - z - 1] = b;
	}
}
