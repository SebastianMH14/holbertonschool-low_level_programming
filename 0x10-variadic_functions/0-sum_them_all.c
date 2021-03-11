#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - function that returns the sum of all its parameters
 *@n: parameters
 *Return: sum of all
 */
int sum_them_all(const unsigned int n, ...)
{
	int a = 0;
	va_list ap;
	 unsigned int i;

	if (n == 0)
	return (0);

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		a += va_arg(ap, int);
	}
	va_end(ap);
	return (a);
}
