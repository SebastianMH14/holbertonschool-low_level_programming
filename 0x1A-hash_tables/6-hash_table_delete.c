#include "hash_tables.h"

/**
 *hash_table_delete - function that deletes a hash table.
 *@ht: is the hash table
 *
 *Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *aux = NULL;

	if (ht == NULL)
	{
		return;
	}

	while (i < ht->size)
	{
		while (ht->array[i])
		{
			aux = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = aux;
		}
		i++;
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
