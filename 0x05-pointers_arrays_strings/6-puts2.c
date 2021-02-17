#include "holberton.h"

/**
 * 
 * 
 * 
 */
void puts2(char *str)
{
    int c = 0;

	for (c = 0; str[c] != '\0'; c += 2)
	_putchar (str[c]);
	_putchar('\n');
}
