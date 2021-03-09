#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog.
 *@name: name
 *@age: age
 *@owner: owner
 *Return: copy name, age, owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int a = 0;
	int	b = 0;
	int c;
	dog_t *dogger;

	while (name[a] != '\0')
	a++;

	while (owner[b] != '\0')
	b++;
	dogger = malloc(sizeof(dog_t));

	if (dogger == NULL)
	{
		free(dogger);
		return (NULL);
	}
	dogger->name = malloc(a * sizeof(dogger->name));
	if (dogger->name == NULL)
	{
		free(dogger->name);
		free(dogger);
		return (NULL);
	}
	for (c = 0; c <= a; c++)
	dogger->name[c] = name[c];
	dogger->age = age;

	dogger->owner = malloc(b * sizeof(dogger->owner));

	if (dogger->owner == NULL)
	{
		free(dogger->owner);
		free(dogger->name);
		free(dogger);
		return (NULL);
	}
	for (c = 0; c <= b; c++)
	dogger->owner[c] = owner[c];
	return (dogger);
}
