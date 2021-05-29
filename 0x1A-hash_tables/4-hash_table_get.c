#include "hash_tables.h"

/**
 *hash_table_get - function that retrieves a value associated with a key
 *@ht: is the hash table you want to look into
 *@key: is the key you are looking for
 *
 *Return: the value associated with the element
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *node;

	if (key == NULL || ht == NULL)
	{
		return (NULL);
	}

	idx = key_index((unsigned char *) key, ht->size);
	node = ht->array[idx];

	if (node == NULL)
	{
		return (NULL);
	}
	while (strcmp(key, node->key) != 0)
	{
		node = node->next;
	}
	return (node->value);
}
