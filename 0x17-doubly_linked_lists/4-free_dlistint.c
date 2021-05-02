#include "lists.h"

/**
*free_dlistint - function that frees a dlistint_t list
*@head: head of list
*
*Return: void
*/
void free_dlistint(dlistint_t *head)
{
    dlistint_t *aux;
    
    while (head != NULL)
    {
        aux = head->next;
        free (head);
        head = aux;
    }
}
