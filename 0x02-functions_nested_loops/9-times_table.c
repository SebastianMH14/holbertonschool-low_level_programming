#include "holberton.h"

/**
 * times_table - 9 times table
 *
 * Description: prints 9 times table
 * Return: 0
 */

void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;

			if (c < 10)
			{
				if (b > 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(c + 48);
			}

			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(c / 10 + 48);
				_putchar(c % 10 + 48);
			}
		}
		_putchar ('\n');
	}
}
