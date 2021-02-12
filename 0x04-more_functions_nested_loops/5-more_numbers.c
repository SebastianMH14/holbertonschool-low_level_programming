#include "holberton.h"

/**
 *more_numbers - prints the digits (0 through 9).
 *
 *Return: 0
 *
 */
void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
			{
				_putchar((b / 10) + '0');
			}
		_putchar((b % 10) + '0');
	}

	_putchar('\n');
	}
}
