#include "holberton.h"

/**
 *_memset - function that fills memory with a constant byte.
 * @s: value of s
 * @b: value of b
 * @n: value of n
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
int i;
i = 0;
while (n > 0)
{
s[i] = b;
i++;
n--;
}
return (s);
}
