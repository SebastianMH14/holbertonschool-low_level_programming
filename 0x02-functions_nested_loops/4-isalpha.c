#include "holberton.h"

/**
 * _isalpha - check the code for Holberton School students.
 *@c: this is the check
 *
 * Return: 1 if the number is positive. 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
