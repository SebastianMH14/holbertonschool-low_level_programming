#include "holberton.h"

/**
 * puts_half - function that prints half of a string
 * @str: value str
 *
 *Return: void B
 */
Bvoid puts_half(char *str)
{
	int c = 0;

	for (c = 5; str[c] != '\0'; c++)
	_putchar (str[c]);
	_putchar('\n');
}
