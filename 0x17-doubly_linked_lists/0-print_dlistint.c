#include "lists.h"

/**
*print_dlistint - function that prints all the elements of a dlistint_t list
*@h:list
*
*Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t j = 0;
	const dlistint_t *a = h;

	while (a)
	{
		printf("%d\n", a->n);
		a = a->next;
		j++;
	}
	return (j);
}
