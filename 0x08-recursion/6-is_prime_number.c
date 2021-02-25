#include "holberton.h"

/**
 * prime - returns 1 if the input integer is a prime number, otherwise return 0
 * @a: value of a
 * @b: value of b
 * Return: 1 and 0
 */
int prime(int a, int b)
{
	if (a == 1 || a < 0)
		return (0);
	if (a == b)
		return (1);
	if (a % b == 0)
		return (0);
	else
		return (prime(a, b + 1));
}

/**
 * is_prime_number - returns 1 integer is a prime number, otherwise return 0
 * @n: value of n
 * Return: return 1, return 0
 */
int is_prime_number(int n)
{
	return (prime(n, 2));
}

