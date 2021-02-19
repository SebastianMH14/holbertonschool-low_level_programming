#include "holberton.h"

/**
 *leet - function that encodes a string into 1337.
 * @cadena: value of string
 * Return: cadena
 */
char *leet(char *cadena)
{
	int a, b;
	char *c;
	char *d;

	c = "aAeEoOtTlL";
	d = "4433007711";
	for (a = 0; cadena[a] != '\0'; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (cadena[a] == c[b])
			{
				cadena[a] = d[b];
			}

}
	}
	return (cadena);
}
