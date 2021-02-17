#include "holberton.h"

/**
 * rev_string - function that reverses a string.
 * 
 * 
 */
void rev_string(char *s)
{
       int i;
    char b[10];

    for(i = 10; i>= 0; i--)
     s = &b[i];
   _putchar(*s);
}
