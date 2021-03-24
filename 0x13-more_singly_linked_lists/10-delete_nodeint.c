#include "lists.h"

/**
 *delete_nodeint_at_index - function that deletes the node at index
 *@head: head of list
 *@index: index of node
 *Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node;
	listint_t *aux;
	unsigned int j = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	aux = *head;

	if (index == 0)
	{
		*head = aux->next;
		free(aux);
		return (1);
	}
	while (j < index && aux->next)
	{
		node = aux;
		aux = aux->next;
		j++;
	}
	if (j < index)
	{
		return (-1);
	}
	node->next = aux->next;
	free(aux);

	return (1);
}
