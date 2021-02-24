#include "holberton.h"

/**
 * _puts_recursion - function that prints a string, followed by a new line.
 * @s: value of s
 * Return: void
 */
void _puts_recursion(char *s)
{
	int i;

i = 0;
if (s[i] != '\0')
{
_putchar(s[i]);
_puts_recursion(&s[i+1]);
}
else    
    _putchar(10);
}
