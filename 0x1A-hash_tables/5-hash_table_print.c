#include "hash_tables.h"

/**
 *hash_table_print - function that prints a hash table.
 *@ht: is the hash table
 *
 *Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, j = 0;
	hash_node_t *n;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		n = ht->array[i];

		while (n)
		{
			if (j != 0)
			{
				printf(", ");
			}
			printf("'%s': '%s'", n->key, n->value);
			n = n->next;
			j = 1;
		}

	}
	printf("}");
	printf("\n");
}
