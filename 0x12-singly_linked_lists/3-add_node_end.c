#include "lists.h"

/**
 *add_node_end-  adds a new node at the end of a list_t
 *@head: stars of the list
 *@str: node string
 *Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *node;
	int j = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (*head != NULL)
	{
		node = *head;
		for (j = 0; node->next != NULL; j++)
		{
			node = node->next;
		}
		node->next = new_node;
	}
	else
		*head = new_node;

		new_node->next = NULL;
		new_node->str = strdup(str);
		for (j = 0; str[j] != '\0'; j++)
		{
			new_node->len = j;
		}
	return (new_node);
}
