#include "lists.h"

/**
 *free_listint -  function that frees a listint_t list
 *@head: head of list
 *
 *Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *aux;

	while (head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux);
	}

}
