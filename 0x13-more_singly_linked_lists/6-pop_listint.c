#include "lists.h"

/**
 *pop_listint - deletes the head node of a listint_t linked list
 *@head: head of list
 *
 *Return: return 0, and returns head of node
 */
int pop_listint(listint_t **head)
{
	int i = 0;
	listint_t *new_node = NULL;

	if (*head == NULL)
	{
		return (0);
	}

	new_node = (*head)->next;
	i = (*head)->n;
	free(*head);
	*head = new_node;
	return (i);
}
