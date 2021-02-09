#include "holberton.h"


/**
 * _abs - check the code for Holberton School students.
 *@x: this is the check
 *
 * Return: 1 if the number is positive. 0 otherwise
 */
int _abs(int x)
{

	if (x < 0)
	{
		x = -1 * x;
	}
	return (x);
}
