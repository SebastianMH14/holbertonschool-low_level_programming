#include "holberton.h"

/**
 *print_square - prints a square
 *@size: the number of rows a columns of the square.
 *
 *Return: 
 */
void print_square(int size)
{
	int a = size;
	int b = size;
	
	if (size <= 0)
	{
		_putchar ('\n');
		return;
	}
	while (a--)
	{
		while (b--)
		{
			_putchar ('#');
		}
		_putchar('\n');
		b = size;
	}
}
