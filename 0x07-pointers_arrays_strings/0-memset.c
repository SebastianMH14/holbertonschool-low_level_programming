#include "holberton.h"

/**
 *_memset - function that fills memory with a constant byte.
 * 
 * 
 * 
 */
char *_memset(char *s, char b, unsigned int n)
{
    

  

while (*s && n > 0)
*s = b;
s++;
n--;
return (s);
}
