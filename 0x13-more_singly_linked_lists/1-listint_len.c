#include "lists.h"

/**
 *listint_len - function that returns the number of elements in a linked
 *@h: list
 *
 *Return: number of elements in a linked
 */
size_t listint_len(const listint_t *h)
{
	int len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
