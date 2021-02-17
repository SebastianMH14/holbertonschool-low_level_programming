#include "holberton.h"

/**
 * rev_string - function that reverses a string.
 * 
 * 
 */
void rev_string(char *s)
{
    int a, b;
    char = l;
	
    a = 0;
	while (s[a] != '\0')
 	{
		a++;
	}
    for (b--; a = 0; a < b / 2; b++)
    {
     aux = s[b];
     s[b] = s[a];
     s[a] = aux;
    }
}
