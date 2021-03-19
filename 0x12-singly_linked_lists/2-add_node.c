#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 *@head: head of list
 *@str: len dup
 *Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
		if (new_node == NULL)
		{
			return (NULL);
		}
	if (str)
	{
	new_node->str = strdup(str);
	new_node->len = _strlen(new_node->str);
	}
	new_node->next =  *head;
	*head = new_node;
	return (new_node);
}


/**
 * _strlen -  that returns the length of a string.
 * @s: value of char
 *
 *Return: Always 0.
 */
int _strlen(char *s)
{
	int largo = 0;

	while (s[largo] != '\0')
		largo++;
		s++;
	return (largo);
}
