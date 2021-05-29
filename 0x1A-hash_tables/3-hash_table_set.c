#include "hash_tables.h"

/**
 *hash_table_set - function that adds an element to the hash table
 *@ht: is the hash table
 *@key:  is the key. key can not be an empty string
 *@value:is the value associated with the key
 *
 *Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *new_node = NULL;

	if (strlen(key) == 0)
		return (0);
	if (ht == NULL)
		return (0);

	idx = key_index((unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = new_node;
	}
	else
	{
		if (strcmp(ht->array[idx]->key, key) == 0)
		{
			free(ht->array[idx]->value);
			ht->array[idx]->value = strdup(value);
			return (1);
		}
		else
		{
			new_node->next = ht->array[idx];
			ht->array[idx] = new_node;
			return (1);
		}
	}
	return (1);
}
