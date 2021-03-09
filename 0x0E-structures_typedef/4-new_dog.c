#include "dog.h"
#include <stdio.h>

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
 * _strcpy -  copy string
 * @dest: pointer
 *@src: source
 *Return: pointer
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; *(src + a) != '\0'; a++)
	{
		*(dest + a) = *(src + a);
	}
	return (dest);
}

/**
 * new_dog - function that creates a new dog.
 *@name: name
 *@age: age
 *@owner: owner
 *Return: copy name, age, owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *dognew;
	int largoname;
	int largown;

	dognew = malloc(sizeof(struct dog));
	if (dognew == NULL)
		return (NULL);

	largoname = _strlen(name);
	dognew->name = malloc(sizeof(char) * (largoname + 1));
	if (dognew->name == NULL)
	{
		free(dognew);
		return (NULL);
	}

	dognew->name = _strcpy(dognew->name, name);

	largown = _strlen(owner);
	dognew->owner = malloc(sizeof(char) * (largown + 1));
	if (dognew->owner == NULL)
	{
		free(dognew->name);
		free(dognew);
		return (NULL);
	}
	dognew->owner = _strcpy(dognew->owner, owner);
	dognew->age = age;
	return (dognew);
}
