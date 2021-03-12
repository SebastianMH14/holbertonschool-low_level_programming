#include "variadic_functions.h"

/**
 *print_strings - function that prints strings, followed by a new line.
 *@separator: is the string to be printed between the strings
 *@n: is the number of strings passed to the function
 *Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int i = 0;
	char *stri;

	va_start(a, n);

	for (i = 0; i < n; i++)
	{
		stri = va_arg(a, char*);

		if (stri == NULL)
		{
			stri = "(nil)";
		}
		if (i <= n - 1)
		{
			printf("%s", stri);
		}
			if (i < n - 1)
		{
				if (separator != NULL)
				printf("%s", separator);
		}
	}
	printf("\n");
}
