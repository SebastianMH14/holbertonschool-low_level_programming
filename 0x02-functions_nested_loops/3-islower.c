#include "holberton.h"

/**
 * _islower - check the code for Holberton School students.
 *@c: this is the check
 *
 * Return: 1 if the number is positive. 0 otherwise
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
