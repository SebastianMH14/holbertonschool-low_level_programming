#include "holberton.h"

/**
 *_atoi - atoi
 *@str: string
 *return: i
 */
int _atoi(char* str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; ++i)
		i = i * 10 + str[i] - '0';

	return (i);
}
