#include "dog.h"
#include <stdio.h>

/**
 *print_dog - function that prints a struct dog
 *@d: value of d
 *
 *Return: void
 */
void print_dog(struct dog *d)
{
	if(d)
	{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name);
	}
	else
	{
		printf("Name: (nill)\n");
	}

	printf("Age: %f\n", d->age);

	if (d->owner)
	{
		printf("Owner: %s\n", d->owner);
	}
	else
	{
	printf("Owner: (nill)\n");
	}
}
