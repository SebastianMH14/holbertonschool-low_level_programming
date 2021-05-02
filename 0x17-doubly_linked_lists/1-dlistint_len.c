#include "lists.h"

/**
*dlistint_len - returns the number of elements in a linked dlistint_t list.
*@h: list
*
*Return: returns the number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t j = 0;
	const dlistint_t *a = h;

	while (a)
	{
		a = a->next;
		j++;
	}
	return (j);
}
