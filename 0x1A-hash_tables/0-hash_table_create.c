#include "hash_tables.h"

/**
 *hash_table_create - function that creates a hash table
 *@size: is the size of the array
 *
 *Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;
	unsigned long int x;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
	{
		return (NULL);
	}

	new_table->size;
	new_table->array = malloc(sizeof(hash_table_t *) * new_table->size);
	if (new_table->array == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < new_table->size; x++)
	{
		new_table->array[x] = NULL;
	}
	return (new_table);
}
