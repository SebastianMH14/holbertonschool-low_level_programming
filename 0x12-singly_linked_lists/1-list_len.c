#include "lists.h"

/**
 *list_len - function that returns the number of elements in a linked
 *@h: list
 *
 *Return: list len
 */
size_t list_len(const list_t *h)
{
	int len = 0;

while (h)
{
	h = h->next;
	len++;
}
	return (len);
}
