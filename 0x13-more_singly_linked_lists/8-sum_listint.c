#include "lists.h"

/**
 *sum_listint -  returns the sum of all the data (n) of a listint_t
 *@head: head of list
 *
 *Return: if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	unsigned int i = 0;
	listint_t *index_node = head;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		i += head->n;
		index_node = head->next;
		head = index_node;
	}
	return (i);
}
