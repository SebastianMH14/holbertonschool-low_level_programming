#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line
 *@separator: string to be printed between numbers
 *@n: s the number of integers passed to the function
 *Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int i = 0;
	int numeros;

	va_start(a, n);

	for (i = 0; i < n; i++)
	{
		numeros = va_arg(a, int);

		if (i <= n - 1)
		{
			printf("%d", numeros);
		}
		if (i < n - 1)
		{
		if (separator != NULL)
		printf("%s", separator);
		}
	}
	printf("\n");

	va_end(a);
}
