#include "lists.h"

/**
 *insert_nodeint_at_index - inserts a new node at a given position
 *@head: head of list
 *@idx: pointer index
 *@n: integer
 *Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *aux;
	unsigned int j = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
		return (new_node);
	}
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	aux = *head;
	while (j < (idx - 1) && aux->next)
	{
		aux = aux->next;
		j++;
	}
	if (j < idx - 1)
	{
		return (NULL);
	}
	new_node->next = aux->next;
	aux->next = new_node;
	return (new_node);
}
