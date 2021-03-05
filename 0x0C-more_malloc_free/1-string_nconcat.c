#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen -  that returns the length of a string.
 * @s: value of char
 *
 *Return: Always 0.
 */
int _strlen(char *s)
{
	int largo = 0;

	while (s[largo] != '\0')
		largo++;
	return (largo);
}

/**
*string_nconcat - allocates memory using malloc
*@s1: string
*@s2: string
*@n: return
*Return: void
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2, i, j;
	char *str;

	l1 = _strlen(s1);
	l2 = _strlen(s2);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= l2)
	{
		str = malloc(sizeof(char) * l1 + l2  + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
		str[i + j] = s2[j];

	}
	if (n < l2)
	{
		str = malloc(sizeof(char) * l1 + n  + 1);

		if (str == NULL)
		return (NULL);


	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];

	for (j = 0; j < n ; j++)
		str[i + j] = s2[j];

	}
	str[i + j] = '\0';
	return (str);
}
