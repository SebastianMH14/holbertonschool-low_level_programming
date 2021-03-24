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

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
new_node->str strdup(str);
new_node->len = _strlen(str);
new_node->next = NULL;

if (*head == NULL)
{
	*head = new_node;
	return (new_node)
}
	node = *head;
	while (node->next)
	{
		node = node->next;
	}
	node->next = new_node;
	return (new_node);
}


/**
 *_strlen - returns length of a string
 *@s: s is a character
 *Return: len i
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
