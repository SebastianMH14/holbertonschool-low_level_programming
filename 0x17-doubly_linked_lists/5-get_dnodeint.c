#include "lists.h"

/**
*get_dnodeint_at_index - function that returns the nth node of a dlistint_t
*@head: head of list
*@index: the new node
*
*Return: if the node does not exist  NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *a = head;
	unsigned int i = 0, j = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (a != NULL)
	{
		a = a->next;
		i++;
	}
	if (index <= i)
	{
		a = head;
		while (j < index)
		{
			aux = aux->next;
			i++;
		}
		return (aux);
	}
	return (NULL);
}
