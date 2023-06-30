#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: point to node.
 * @str: string.
 * Return: NULL if it failed.
 *         address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *p = malloc(sizeof(list_t));

	if (p == NULL)
	{
		return (NULL);
	}
	p->str = strdup(str);
	p->len = strlen(str);
	p->next = *head;
	*head  = p;
	return (p);
}
