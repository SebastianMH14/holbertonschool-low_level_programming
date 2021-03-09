#include "dog.h"

/**
 *init_dog - function that initialize a variable of type struct dog
 *@d: dog
 *@name: name
 *@age: age
 *@owner: dueño
 *Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
