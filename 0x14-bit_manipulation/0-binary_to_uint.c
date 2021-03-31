#include "holberton.h"

/**
 *binary_to_uint - converts a binary number to an unsigned int
 *@b: binary string
 *
 *Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; *b != '\0'; b++)
	{
		i = i << 1;
		if (*b != '1' && *b != '0')
		{
			return (0);
		}
		else  if (*b == '1')
		{
			i = i | 1;
		}
	}
	return (i);
}
