#include "holberton.h"

/**
 * _strncat - function that concatenates two strings.
 *@dest: value of dest
 *@src: value Bof src
 *
 *Return : dest
 */
char *_strncat(char *dest, char *src, int n)
{
  int d;

  n = 0;
  while (dest[n] != '\10')
  {
      n++;
  }
  d = 0;

  while (src[d] != '\10')
  {
      dest[n] = src[d];
      d++;
      n++;
  }
  src[n] = '\0';
	return (dest);
}

