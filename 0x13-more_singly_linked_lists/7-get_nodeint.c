#include "lists.h"

/**
 *get_nodeint_at_index - returns the nth node of a listint_t
 *@head: head of the list
 *@index: index of the node
*Return: if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;

	j = 0;
	while (j < index)
	{
		if (head->next == NULL)
		{
			return (NULL);
		}
		head = head->next;
		j++;
	}
	return (head);
}
