#include "lists.h"

/**
 *print_list -  function that prints all the elements of a list_t list.
 *
 *
 *
 */
size_t print_list(const list_t *h)
{
	int j;

	for (j = 0; h != NULL; j++)
	{
		printf("[%i] %s\n", h->len, h->str);
		h = h->next;
	}
return (j);
}