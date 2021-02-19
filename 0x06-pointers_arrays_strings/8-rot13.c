#include "holberton.h"

/**
 *Root - function that encodes a string into 1337.
 * @cadena: value of string
 * Return: cadena
 */
char *rot13(char *cadena)
{
	int a, b;
	char *c;
	char *d;

	c = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	d = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
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
