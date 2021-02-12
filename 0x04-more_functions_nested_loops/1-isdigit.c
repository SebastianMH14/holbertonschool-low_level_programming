#include "holberton.h"

/**
 * _isdigit - check for a digit 
 *@c: this is the check
 *
 * Return: 1 if the number is positive. 0 otherwise
 */
int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
