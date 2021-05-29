#include "hash_tables.h"

/**
 *hash_table_delete - function that deletes a hash table.
 *@ht: is the hash table
 *
 *Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *aux = NULL, *tmp;

	if (ht == NULL)
	{
		return;
	}
	for (i = 0; i < ht; i++)
	{
		aux = ht->array[i];
		while (aux != NULL)
		{
			tmp = aux->next;
			free(aux->key);
			free(aux->value);
			free(aux);
			aux = tmp;
		}
		free(aux);

	}
	free(ht->array);
	free(ht);
}
