#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	if (x >= 5)
	{
		printf("if the last digit of %d is %d than 5: the string and is greater than 5\n", n, x);
	}
	else if (x == 0)
	{
		printf("if the last digit of %d is %d: the string and is 0 \n", n, x);
	}
	else
	{
		printf("if the last digit of %d is %d than 6 and not 0: the string and is less than 6 and not 0\n", n, x);
	}
	return (0);
}
