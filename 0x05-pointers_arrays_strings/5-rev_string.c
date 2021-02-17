#include "holberton.h"

/**
 * rev_string - function that reverses a string.
 *@s: value s
 * 
 * Return: void
 */
void rev_string(char *s)
{
    int i, l;
    char aux;
	
    l = 0;
	while (s[l] != '\0')
 	{
		l++;
	}
    for (l--, i = 0; i < l / 2; i++, l--)
    {
     aux = s[l];
     s[l] = s[i];
     s[i] = aux;
    }
}
