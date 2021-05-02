#include "lists.h"

/**
*sum_dlistint - function that returns the sum of all the data (n)
*@head: head of list
*
* Return: sum of all data
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *a = head;
	int i = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (a != NULL)
	{
		i += a->n;
		a = a->next;
	}
	return (i);
}
